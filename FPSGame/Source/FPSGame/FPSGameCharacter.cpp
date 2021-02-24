#include "FPSGameCharacter.h"
#include "FPSGameProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" 
// This is so that I can access the GetCharacterMovement() functions required in the Sprint() and StopSprinting() functions. 
// In older versions of UE I didn't need to do this, but in this newer version I do. 
#include "GameFramework/CharacterMovementComponent.h"  
#include "Kismet/KismetSystemLibrary.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

AFPSGameCharacter::AFPSGameCharacter() // Constructor 
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.
	//bUsingMotionControllers = true;

	/* Setting Some Values */ 
	isSprinting = false; 
	isZoomedIn = false; 

	hasUsedAbility1 = false; 
	hasUsedAbility2 = false; 
	ability1Duration = 5.0f; 
	ability2Duration = 10.0f; 
	ability1CooldownTime = 3.0f; 
	ability2CooldownTime = 5.0f; 

	respawnLoc = FVector(-350.0f, -100.0f, 235.0f); 
	respawnRot = FRotator(0, 0, 0); 

	messageAppear = false; 

	hudMessage = FString(TEXT(" ")); 

	isSameLoc = false;
	justDied = false; 
	isFirstLife = true; 

	health = 1.0f;
	healDelay = 0.01f;
	healTime = 0.0f;
	healWait = 2.0f; // It will actually going to end up being double whatever this is 
	justDamaged = false; 
	healAmount = 0.003f; 
	healing = false; 
	stopLooping = false; 

	weapon = nullptr;
	assaultRifleAmmo = 0; 
	pistolAmmo = 0; 
	sniperRifleAmmo = 0; 
	shotgunAmmo = 0; 
	weaponIndex = 0; 

	assaultObtained = false; 
	pistolObtained = false;
	sniperObtained = false;
	shotgunObtained = false;
}

void AFPSGameCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint")); 
	AlterGunSize(); 

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
}

#pragma region TemplateCode

void AFPSGameCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSGameCharacter::OnFire);
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AFPSGameCharacter::OnResetVR);

	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSGameCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSGameCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFPSGameCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFPSGameCharacter::LookUpAtRate);

	// My Actions & Axises 
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AFPSGameCharacter::Sprint); 
	PlayerInputComponent->BindAction("StopSprinting", IE_Released, this, &AFPSGameCharacter::StopSprinting); 
	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AFPSGameCharacter::ZoomIn); 
	PlayerInputComponent->BindAction("ZoomIn", IE_Released, this, &AFPSGameCharacter::StopZoom);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AFPSGameCharacter::ManualReload);
	PlayerInputComponent->BindAction("ActivateAbility1", IE_Pressed, this, &AFPSGameCharacter::UseAbility1);
	PlayerInputComponent->BindAction("ActivateAbility2", IE_Pressed, this, &AFPSGameCharacter::UseAbility2);
	PlayerInputComponent->BindAction("SwitchWeapon", IE_Pressed, this, &AFPSGameCharacter::SwitchToNextPrimaryWeapon);
}

void AFPSGameCharacter::OnFire() 
{
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			if (weapons[weaponIndex])
			{
				if (weapons[weaponIndex]->clipAmmo > 0)
				{
					if (bUsingMotionControllers)
					{
						const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
						const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
						World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
					}
					else
					{
						const FRotator SpawnRotation = GetControlRotation();
						// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
						//const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);
						FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset); 

						//Set Spawn Collision Handling Override
						FActorSpawnParameters ActorSpawnParams;
						ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

						switch (weaponIndex)
						{
							case 0: // spawn projectile for the Default Weapon... 
								GunOffset = FVector(75.0f, 10.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
								SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
								World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
								break; 
							case 1: // spawn projectile for the AR... 
								GunOffset = FVector(75.0f, 8.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
								SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
								World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
								break;
							case 2: // spawn projectile for the Pistol... 
								GunOffset = FVector(75.0f, 8.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
								SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
								World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
								break;
							case 3: // spawn projectile for the Sniper... 
								GunOffset = FVector(100.0f, 8.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
								SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
								World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
								break;
							case 4: // spawn projectile for the Shotgun... 
								GunOffset = FVector(75.0f, 8.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
								SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
								World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
								break;
						}
					}

					weapons[weaponIndex]->clipAmmo -= 1; 
				}
				else 
				{
					ReloadWeapon(weapons[weaponIndex]->weaponType);
				}
			}
		}
	}

	// try and play the sound if specified
	if (FireSound != NULL)
	{
		//UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AFPSGameCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AFPSGameCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AFPSGameCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//void AFPSGameCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void AFPSGameCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFPSGameCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFPSGameCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AFPSGameCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AFPSGameCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AFPSGameCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AFPSGameCharacter::EndTouch);

//Commenting this out to be more consistent with FPS BP template.
//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AFPSGameCharacter::TouchUpdate);
return true;
	}

	return false;
}

#pragma endregion TemplateCode

#pragma region MyCode

void AFPSGameCharacter::Sprint()
{
	if (auto characterMovement = GetCharacterMovement())
	{
		UE_LOG(LogTemp, Warning, TEXT("We are now sprinting. "));
		GetCharacterMovement()->MaxWalkSpeed = 1500.0f;
		isSprinting = true;
		// Also find a way to speed up the running animation if sprinting 
	}
}

void AFPSGameCharacter::StopSprinting()
{
	if (auto characterMovement = GetCharacterMovement())
	{
		UE_LOG(LogTemp, Warning, TEXT("We have stopped sprinting. "));
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
		isSprinting = false;
		// Also if I figure out how to speed up the rrunning anim, slow it again here 
	}
}

void AFPSGameCharacter::ZoomIn()
{
	if (auto firstPersonCamera = GetFirstPersonCameraComponent())
	{
		UE_LOG(LogTemp, Warning, TEXT("We are now zooming in. "));
		firstPersonCamera->SetFieldOfView(65.0f);
		isZoomedIn = true;
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	}
}

void AFPSGameCharacter::StopZoom()
{
	if (auto firstPersonCamera = GetFirstPersonCameraComponent())
	{
		UE_LOG(LogTemp, Warning, TEXT("We have stopped zooming. "));
		firstPersonCamera->SetFieldOfView(90.0f);
		isZoomedIn = false;
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	}
}

void AFPSGameCharacter::ManualReload()
{
	if (weapons[weaponIndex])
	{
		ReloadWeapon(weapons[weaponIndex]->weaponType);
	}
}

void AFPSGameCharacter::ReloadWeapon(EWeaponType _weaponType)
{
	if (weapons[weaponIndex])
	{
		switch (_weaponType)
		{
			case EWeaponType::E_AssaultRifle:
				assaultRifleAmmo = CalculateAmmo(assaultRifleAmmo);
				break;
			case EWeaponType::E_Pistol:
				pistolAmmo = CalculateAmmo(pistolAmmo);
				break;
			case EWeaponType::E_SniperRifle:
				sniperRifleAmmo = CalculateAmmo(sniperRifleAmmo);
				break;
			case EWeaponType::E_Shotgun:
				shotgunAmmo = CalculateAmmo(shotgunAmmo);
				break; 
			default: 
				break; 
		}
	}
}

int AFPSGameCharacter::CalculateAmmo(int _ammoAmount)
{
	if (_ammoAmount > 0)
	{
		if (weapons[weaponIndex]->clipAmmo != weapons[weaponIndex]->maxClipAmmo)
		{
			if (_ammoAmount - (weapons[weaponIndex]->maxClipAmmo - weapons[weaponIndex]->clipAmmo) >= 0)
			{
				_ammoAmount -= (weapons[weaponIndex]->maxClipAmmo - weapons[weaponIndex]->clipAmmo);
				weapons[weaponIndex]->clipAmmo = weapons[weaponIndex]->maxClipAmmo;
			}
			else
			{
				weapons[weaponIndex]->clipAmmo += _ammoAmount;
				_ammoAmount = 0;
			}
		}
	}
	else
	{
		TriggerOutOfAmmoPopUp(); 
	}

	return _ammoAmount; 
}

void AFPSGameCharacter::AddAmmo(EAmmoType _ammoType, int _ammoAmount)
{
	switch (_ammoType)
	{
		case EAmmoType::E_AssaultRifle: 
			assaultRifleAmmo += _ammoAmount; 
			if (assaultRifleAmmo > maxAssaultAmmo)
			{
				assaultRifleAmmo = maxAssaultAmmo;
			}
			break; 
		case EAmmoType::E_Pistol:
			pistolAmmo += _ammoAmount;
			if (pistolAmmo > maxPistolAmmo)
			{
				pistolAmmo = maxPistolAmmo;
			}
			break; 
		case EAmmoType::E_SniperRifle:
			sniperRifleAmmo += _ammoAmount;
			if (sniperRifleAmmo > maxSniperAmmo)
			{
				sniperRifleAmmo = maxSniperAmmo;
			}
			break; 
		case EAmmoType::E_Shotgun:
			shotgunAmmo += _ammoAmount;
			if (shotgunAmmo > maxShotgunAmmo)
			{
				shotgunAmmo = maxShotgunAmmo;
			}
			break; 
		default: 
			break; 
	}
}

void AFPSGameCharacter::UseAbility1()
{
	UE_LOG(LogTemp, Warning, TEXT("The character has used Ability 1.")); 

	if (!hasUsedAbility1)
	{
		hasUsedAbility1 = true; 
		JumpMaxCount = 5;

		GetWorld()->GetTimerManager().SetTimer(ability1TimerHandle, this, &AFPSGameCharacter::ResetAbility1, ability1Duration, false); 
	}
}

void AFPSGameCharacter::UseAbility2()
{
	UE_LOG(LogTemp, Warning, TEXT("The character has used Ability 2."));

	if (!hasUsedAbility2)
	{
		hasUsedAbility2 = true; 
		if (auto characterMovement = GetCharacterMovement())
		{
			characterMovement->MaxWalkSpeed = 5000; 
		}

		GetWorld()->GetTimerManager().SetTimer(ability2TimerHandle, this, &AFPSGameCharacter::ResetAbility2, ability2Duration, false); 
	}
} 

void AFPSGameCharacter::ResetAbility1()
{
	JumpMaxCount = 1; 
	GetWorld()->GetTimerManager().SetTimer(ability1TimerHandle, this, &AFPSGameCharacter::Ability1CooldownComplete, ability1CooldownTime, false); 
}

void AFPSGameCharacter::ResetAbility2()
{
	if (auto characterMovement = GetCharacterMovement())
	{
		characterMovement->MaxWalkSpeed = 600.0f; 
	}

	GetWorld()->GetTimerManager().SetTimer(ability2TimerHandle, this, &AFPSGameCharacter::Ability2CooldownComplete, ability2CooldownTime, false); 
}

void AFPSGameCharacter::Ability1CooldownComplete()
{
	hasUsedAbility1 = false; 
}

void AFPSGameCharacter::Ability2CooldownComplete()
{
	hasUsedAbility2 = false; 
}

void AFPSGameCharacter::TakeDamage(float damageAmount) 
{
	health -= damageAmount; 
	UE_LOG(LogTemp, Warning, TEXT("Damage taken! "));
	
	if (health <= 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player is at 0 health! "));
		health = 0.0f; 
		Die(); 
	}

	UE_LOG(LogTemp, Warning, TEXT("justDamaged = true! "));
	justDamaged = true; 
	stopLooping = true; 
}

void AFPSGameCharacter::RegenHealth()
{
	UE_LOG(LogTemp, Warning, TEXT("Healing Player"));
	health += healAmount;

	if (health > 1.0f)
	{
		health = 1.0f; 
	}

	/*UE_LOG(LogTemp, Warning, TEXT("Healing Player "));
	justDamaged = false; 


	float curTime = GetWorld()->GetTimeSeconds(); 
	float regTime = curTime + 0.5f; 

	while (health < 1.0f && !justDamaged)
	{
		if (curTime >= regTime)
		{
			curTime = GetWorld()->GetTimeSeconds();
			regTime = curTime + 0.5f;
			health += healAmount;
			UE_LOG(LogTemp, Warning, TEXT("Healed a little ")); 
		}
	}*/
}

bool AFPSGameCharacter::isFullHealth()
{
	if (health >= 1.0f)
	{
		return true; 
	}
	else
	{
		return false; 
	}
}

void AFPSGameCharacter::Die()
{
	UE_LOG(LogTemp, Warning, TEXT("Player Dying! "));
	justDied = true;
	Respawn(); 
}

void AFPSGameCharacter::Respawn()
{
	UE_LOG(LogTemp, Warning, TEXT("Player Respawning... "));
	health = 1.0; 
	SetActorLocationAndRotation(respawnLoc, respawnRot); 
	GetWorld()->GetFirstPlayerController()->SetControlRotation(respawnRot); 
}

void AFPSGameCharacter::SetNewSpawnLoc(FVector newLoc, FRotator newRot)
{
	if (respawnLoc == newLoc)
	{
		UE_LOG(LogTemp, Warning, TEXT("This is already the current spawn location! "));
		isSameLoc = true; 
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Setting a new spawn location... "));
		respawnLoc = newLoc;
		respawnRot = newRot;
		isSameLoc = true; 
	}
}

void AFPSGameCharacter::SwitchToNextPrimaryWeapon()
{
	// Use this code if I want weapons to be obtained in any order 
	#pragma region Any Order System
	bool success = false; 

	for (int i = 0; i < weapons.Num(); i++)
	{
		if (i > weaponIndex)
		{
			if (weapons[i]->isObtained)
			{
				success = true; 
				weaponIndex = i; 
				SwitchWeaponMesh(weapons[i]->index); 
				break; 
			}
		}
	}

	if (!success)
	{
		weaponIndex = 0; 
		SwitchWeaponMesh(weaponIndex); 
	}
	#pragma endregion Any Order System

	// Use the following code if I want all weapons to be obtained in a certain order (Like Doom) 
	#pragma region Doom-Like System
	//switch (weaponIndex)
	//{
	//	case 0: // if we're weaponless, switch to AR 
	//		if (weapons.Num() > 1)
	//		{
	//			weaponIndex = 1; 
	//			SwitchWeaponMesh(weaponIndex); 
	//		}
	//		else
	//		{
	//			weaponIndex = 0; 
	//			SwitchWeaponMesh(weaponIndex); 
	//		}
	//		break; 

	//	case 1: // if we're holding the AR, switch to Pistol 
	//		if (weapons.Num() > 2)
	//		{
	//			weaponIndex = 2;
	//			SwitchWeaponMesh(weaponIndex);
	//		}
	//		else
	//		{
	//			weaponIndex = 0;
	//			SwitchWeaponMesh(weaponIndex);
	//		}
	//		break;

	//	case 2: // if we're holding the Pistol, switch to Sniper 
	//		if (weapons.Num() > 3)
	//		{
	//			weaponIndex = 3;
	//			SwitchWeaponMesh(weaponIndex);
	//		}
	//		else
	//		{
	//			weaponIndex = 0;
	//			SwitchWeaponMesh(weaponIndex);
	//		}
	//		break;

	//	case 3: // If we're holding the Sniper, switch to Shotgun 
	//		if (weapons.Num() > 4)
	//		{
	//			weaponIndex = 4;
	//			SwitchWeaponMesh(weaponIndex);
	//		}
	//		else
	//		{
	//			weaponIndex = 0;
	//			SwitchWeaponMesh(weaponIndex);
	//		}
	//		break;

	//	case 4: // If we're holding the Sniper, switch to Shotgun 
	//		if (weapons.Num() > 5)
	//		{
	//			weaponIndex = 0;
	//			SwitchWeaponMesh(weaponIndex);
	//		}
	//		else
	//		{
	//			weaponIndex = 0;
	//			SwitchWeaponMesh(weaponIndex);
	//		}
	//		break;
	//	
	//	default: break; 
	//}
	#pragma endregion Doom-Like System
}

FVector AFPSGameCharacter::TestWhereProjectileSpawnIs()
{
	FRotator SpawnRotation = GetControlRotation();
	GunOffset = FVector(55.0, 10.0f, 40.0f); // X = Forward , Y = Side , Z = Height 
	FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
	return SpawnLocation; 
}

#pragma endregion MyCode 