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
#include <cassert>
#include <array>

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

AFPSGameCharacter::AFPSGameCharacter() // Constructor 
{
	#pragma region TemplateConstructorCode
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
	#pragma endregion TemplateConstructorCode

	/* Setting Some Values */ 

	// Core Gameplay Stuff 
	isSprinting = false; 
	isZoomedIn = false; 
	isCrouching = false; 

	// Ability Stuff 
	hasUsedAbility1 = false; 
	hasUsedAbility2 = false; 
	ability1Duration = 5.0f; 
	ability2Duration = 10.0f; 
	ability1CooldownTime = 3.0f; 
	ability2CooldownTime = 5.0f; 

	// Health Stuff 
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
	isDead = false; 

	// Weapon Stuff 
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
	isShooting = false; 
	readyToFire = true; 
	reloadTime = 1.96f; 
	isReloading = false; 
	ableToSwitchWeapon = true; 
	curZoom = 0; // 0 is unzoomed (90), 1 is zoomed (45), 2 is zoomed (22.5) 
	weaponsSize = 0; 
	ableToReload = true; 
	ableToFire = true; 
	ableToZoom = true; 
	isMeleeing = false; 
	isTossingGrenade = false; 
	ableToMelee = true; 
	ableToGrenade = true; 
	grenadeStash = 0; 
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
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSGameCharacter::StartFiring);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AFPSGameCharacter::StopFiring); 
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AFPSGameCharacter::OnResetVR);

	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSGameCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSGameCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFPSGameCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFPSGameCharacter::LookUpAtRate);

	// My Actions & Axises 
	//PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AFPSGameCharacter::Sprint); 
	//PlayerInputComponent->BindAction("StopSprinting", IE_Released, this, &AFPSGameCharacter::StopSprinting); 
	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AFPSGameCharacter::ZoomIn); 
	//PlayerInputComponent->BindAction("ZoomIn", IE_Released, this, &AFPSGameCharacter::StopZoom);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AFPSGameCharacter::ManualReload);
	//PlayerInputComponent->BindAction("ActivateAbility1", IE_Pressed, this, &AFPSGameCharacter::UseAbility1);
	//PlayerInputComponent->BindAction("ActivateAbility2", IE_Pressed, this, &AFPSGameCharacter::UseAbility2);
	PlayerInputComponent->BindAction("SwitchWeapon", IE_Pressed, this, &AFPSGameCharacter::SwitchToNextPrimaryWeapon);
	PlayerInputComponent->BindAction("Melee", IE_Pressed, this, &AFPSGameCharacter::MeleeAttack);
	PlayerInputComponent->BindAction("Grenade", IE_Pressed, this, &AFPSGameCharacter::GrenadeAttack);
	PlayerInputComponent->BindAction("ControlTheMouse", IE_Pressed, this, &AFPSGameCharacter::ControlTheMouse); 
	PlayerInputComponent->BindAction("AddAllWeapons", IE_Pressed, this, &AFPSGameCharacter::AddAllWeapons);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, & AFPSGameCharacter::StartCrouch); 
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, & AFPSGameCharacter::EndCrouch);
}

void AFPSGameCharacter::OnFire()
{
	weaponSwitched = false; 

	if (ableToFire)
	{
		if (ProjectileClass != NULL && weapons[weaponIndex]->index != 0 && !isReloading)
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
						else if (!bUsingMotionControllers && readyToFire)
						{
							const FRotator SpawnRotation = GetControlRotation();
							// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
							FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);

							//Set Spawn Collision Handling Override
							FActorSpawnParameters ActorSpawnParams;
							ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

							switch (weapons[weaponIndex]->index)
							{
								case 0: // spawn projectile for the Default Weapon... 
									if (isCrouching)
									{
										GunOffset = FVector(75.0f, 10.0f, -24.0f);
									}
									else
									{
										GunOffset = FVector(75.0f, 10.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
									}
									SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									MuzzleFlash();
									TraceAThreat();
									break;
								case 1: // spawn projectile for the AR... 
									if (isCrouching)
									{
										GunOffset = FVector(75.0f, 8.0f, -24.0f);
									}
									else
									{
										GunOffset = FVector(75.0f, 8.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
									}
									SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									MuzzleFlash();
									TraceAThreat();
									break;
								case 2: // spawn projectile for the Pistol... 
									if (isCrouching)
									{
										GunOffset = FVector(75.0f, 8.0f, -24.0f);
									}
									else
									{
										GunOffset = FVector(75.0f, 8.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
									}
									SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams); 
									MuzzleFlash();
									TraceAThreat();
									break;
								case 3: // spawn projectile for the Sniper... 
									if (isCrouching)
									{
										GunOffset = FVector(75.0f, 8.0f, -24.0f);
									}
									else
									{
										GunOffset = FVector(75.0f, 8.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
									}
									SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									MuzzleFlash();
									TraceAThreat();
									break;
								case 4: // spawn projectile for the Shotgun... 
									if (isCrouching)
									{
										GunOffset = FVector(75.0f, 8.0f, -24.0f);
									}
									else
									{
										GunOffset = FVector(75.0f, 8.0f, 40.0f); // X = Depth , Y = Side , Z = Height 
									}
									SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									World->SpawnActor<AFPSGameProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
									MuzzleFlash();
									TraceAThreat();
									break;
							}

							if (weapons[weaponIndex]->isAutomatic && isShooting)
							{
								GetWorld()->GetTimerManager().SetTimer(fireTimerHandle, this, &AFPSGameCharacter::OnFire, weapons[weaponIndex]->fireRate, false);
							}
							else if (weapons[weaponIndex]->isAutomatic == false)
							{
								readyToFire = false;
								GetWorld()->GetTimerManager().SetTimer(fireTimerHandle, this, &AFPSGameCharacter::ResetReadyToFire, weapons[weaponIndex]->fireRate, false);
							}

							switch (weapons[weaponIndex]->index)
							{
							case 1:
								UGameplayStatics::PlaySoundAtLocation(this, assaultSFX, GetActorLocation());
								break;
							case 2:
								UGameplayStatics::PlaySoundAtLocation(this, pistolSFX, GetActorLocation());
								break;
							case 3:
								UGameplayStatics::PlaySoundAtLocation(this, sniperSFX, GetActorLocation());
								break;
							case 4:
								UGameplayStatics::PlaySoundAtLocation(this, shotgunSFX, GetActorLocation());
								break;
							}

							// try and play a firing animation if specified
							if (FireAnimation != NULL)
							{
								// Get the animation object for the arms mesh
								UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
								if (AnimInstance != NULL)
								{
									switch (weapons[weaponIndex]->index)
									{
										//case 0: // Default Weapon animation 
										//	AnimInstance->Montage_Play(FireAnimation, 1.0f);
										//	break; 
									case 1: // AR animation 
										AnimInstance->Montage_Play(FireAnimation, 1.0f);
										break;
									case 2: // Pistol animation 
										AnimInstance->Montage_Play(FireAnimation, 1.2f);
										break;
									case 3: // Sniper animation 
										AnimInstance->Montage_Play(FireAnimation, 0.75f);
										break;
									case 4: // Shotgun animation 
										AnimInstance->Montage_Play(FireAnimation, 0.8f);
										break;
									}
								}
							}

							weapons[weaponIndex]->clipAmmo -= 1;

							if (weapons[weaponIndex]->clipAmmo <= 0)
							{
								ReloadWeapon(weapons[weaponIndex]->weaponType);
							}
						}
					}
					else
					{
						ReloadWeapon(weapons[weaponIndex]->weaponType);
					}
				}
			}
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
	if (ableToZoom)
	{
		if (weapons[weaponIndex]->index == 3)
		{
			if (auto firstPersonCamera = GetFirstPersonCameraComponent())
			{
				if (curZoom == 0)
				{
					UE_LOG(LogTemp, Warning, TEXT("We are now zooming in (x2) "));
					firstPersonCamera->SetFieldOfView(18.0f);
					isZoomedIn = true;
					GetCharacterMovement()->MaxWalkSpeed = 300.0f;
					curZoom = 1;
					UGameplayStatics::PlaySoundAtLocation(this, zoom5xSFX, GetActorLocation());
				}
				else if (curZoom == 1)
				{
					UE_LOG(LogTemp, Warning, TEXT("We are now zooming in (x4)"));
					firstPersonCamera->SetFieldOfView(9.0f);
					isZoomedIn = true;
					GetCharacterMovement()->MaxWalkSpeed = 300.0f;
					curZoom = 2;
					UGameplayStatics::PlaySoundAtLocation(this, zoom10xSFX, GetActorLocation());
				}
				else if (curZoom == 2)
				{
					StopZoom();
					curZoom = 0;
					UGameplayStatics::PlaySoundAtLocation(this, unZoomSFX, GetActorLocation());
				}
			}
		}
	}
}

void AFPSGameCharacter::StopZoom()
{
	if (weapons[weaponIndex]->index == 3)
	{
		if (auto firstPersonCamera = GetFirstPersonCameraComponent())
		{
			UE_LOG(LogTemp, Warning, TEXT("We have stopped zooming. "));
			firstPersonCamera->SetFieldOfView(90.0f);
			isZoomedIn = false;
			GetCharacterMovement()->MaxWalkSpeed = 600.0f;
			curZoom = 0;
		}
	}
}

void AFPSGameCharacter::ManualReload()
{
	if (weapons[weaponIndex]->clipAmmo < weapons[weaponIndex]->maxClipAmmo && !isReloading)
	{
		ReloadWeapon(weapons[weaponIndex]->weaponType);
	}
}

void AFPSGameCharacter::FinishReloading()
{
	isReloading = false; 
	ableToZoom = true; 
	ableToSwitchWeapon = true; 
	ableToMelee = true; 
}

void AFPSGameCharacter::ReloadWeapon(EWeaponType _weaponType)
{
	ableToZoom = false;
	ableToSwitchWeapon = false; 
	ableToMelee = false;

	if (ableToReload)
	{
		UE_LOG(LogTemp, Warning, TEXT("Attempting to reload... "));
		isReloading = true;
		ableToSwitchWeapon = false;
		StopZoom();

		switch (weapons[weaponIndex]->index)
		{
			case 1: // Assault Rifle 
				if (assaultRifleAmmo > 0)
				{
					UE_LOG(LogTemp, Warning, TEXT("Reloading (AR)"));
					ReloadAnim();
					GetWorld()->GetTimerManager().SetTimer(fireTimerHandle, this, &AFPSGameCharacter::FinishReloading, reloadTime, false);
					UGameplayStatics::PlaySoundAtLocation(this, reloadSFX, GetActorLocation());
					readyToFire = true; 
				}
				else if (assaultRifleAmmo <= 0)
				{
					isReloading = false;
					UE_LOG(LogTemp, Warning, TEXT("Can't reload, no more ammo (AR)"));
					AmmoCounterFlashRed();
					UGameplayStatics::PlaySoundAtLocation(this, outOfAmmoSFX, GetActorLocation());
					ableToSwitchWeapon = true;
				}
				break;
			case 2: // Pistol 
				if (pistolAmmo > 0)
				{
					UE_LOG(LogTemp, Warning, TEXT("Reloading (Pistol)"));
					ReloadAnim();
					GetWorld()->GetTimerManager().SetTimer(fireTimerHandle, this, &AFPSGameCharacter::FinishReloading, reloadTime, false);
					UGameplayStatics::PlaySoundAtLocation(this, reloadSFX, GetActorLocation());
					readyToFire = true;
				}
				else if (pistolAmmo <= 0)
				{
					isReloading = false;
					UE_LOG(LogTemp, Warning, TEXT("Can't reload, no more ammo (Pistol)"));
					AmmoCounterFlashRed();
					UGameplayStatics::PlaySoundAtLocation(this, outOfAmmoSFX, GetActorLocation());
					ableToSwitchWeapon = true;
				}
				break;
			case 3: // Sniper 
				if (sniperRifleAmmo > 0)
				{
					UE_LOG(LogTemp, Warning, TEXT("Reloading (Sniper)"));
					ReloadAnim();
					GetWorld()->GetTimerManager().SetTimer(fireTimerHandle, this, &AFPSGameCharacter::FinishReloading, reloadTime, false);
					UGameplayStatics::PlaySoundAtLocation(this, reloadSFX, GetActorLocation());
					readyToFire = true;
				}
				else if (sniperRifleAmmo <= 0)
				{
					isReloading = false;
					UE_LOG(LogTemp, Warning, TEXT("Can't reload, no more ammo (Sniper)"));
					AmmoCounterFlashRed();
					UGameplayStatics::PlaySoundAtLocation(this, outOfAmmoSFX, GetActorLocation());
					ableToSwitchWeapon = true;
				}
				break;
			case 4: // Shotgun 
				if (shotgunAmmo > 0)
				{
					UE_LOG(LogTemp, Warning, TEXT("Reloading (Shotgun)"));
					ReloadAnim();
					GetWorld()->GetTimerManager().SetTimer(fireTimerHandle, this, &AFPSGameCharacter::FinishReloading, reloadTime, false);
					UGameplayStatics::PlaySoundAtLocation(this, reloadSFX, GetActorLocation());
					readyToFire = true;
				}
				else if (shotgunAmmo <= 0)
				{
					isReloading = false;
					UE_LOG(LogTemp, Warning, TEXT("Can't reload, no more ammo (Shotgun)"));
					AmmoCounterFlashRed();
					UGameplayStatics::PlaySoundAtLocation(this, outOfAmmoSFX, GetActorLocation());
					ableToSwitchWeapon = true;
				}
				break;
		}
	}
}

void AFPSGameCharacter::ReloadWeaponAmmoAdded(EWeaponType _weaponType)
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

int AFPSGameCharacter::CalculateAmmo(int _ammoAmount)
{
	ableToSwitchWeapon = true;

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
	DamageShake(); 
	StopHealingSFX();

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

	StartHealingSFX(); 

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
		StopHealingSFX();
		return true; 
	}
	else
	{
		return false; 
	}
}

void AFPSGameCharacter::Die()
{
	//UE_LOG(LogTemp, Warning, TEXT("Player Dying! "));
	justDied = true;
	//Respawn(); 
	PlayerDeath(); 
}

void AFPSGameCharacter::Respawn()
{
	//UE_LOG(LogTemp, Warning, TEXT("Player Respawning... "));
	health = 1.0; 
	SetActorLocationAndRotation(respawnLoc, respawnRot); 
	GetWorld()->GetFirstPlayerController()->SetControlRotation(respawnRot); 
}

void AFPSGameCharacter::SetNewSpawnLoc(FVector newLoc, FRotator newRot)
{
	if (respawnLoc == newLoc)
	{
		//UE_LOG(LogTemp, Warning, TEXT("This is already the current spawn location! "));
		isSameLoc = true; 
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("Setting a new spawn location... "));
		respawnLoc = newLoc;
		respawnRot = newRot;
		isSameLoc = true; 
	}
}

void AFPSGameCharacter::SwitchToNextPrimaryWeapon()
{
	if (weaponsSize == 4)
	{
		if (ableToSwitchWeapon)
		{
			fireTimerHandle.Invalidate();
			weaponSwitched = true;

			// Use this code if I want weapons to be obtained in any order 
			#pragma region Any Order System
			bool success = false;
			readyToFire = true;
			StopZoom();

			for (int i = 0; i < weapons.Num(); i++)
			{
				if (i > weaponIndex)
				{
					if (weapons[i]->isObtained)
					{
						success = true;
						weaponIndex = i;
						SwitchWeaponMesh(weapons[i]->index);
						UGameplayStatics::PlaySoundAtLocation(this, switchWeaponSFX, GetActorLocation());
						break;
					}
				}
			}

			if (!success)
			{
				weaponIndex = 0;
				SwitchWeaponMesh(weaponIndex);
				UGameplayStatics::PlaySoundAtLocation(this, switchWeaponSFX, GetActorLocation());
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
	}
	else
	{
		UGameplayStatics::PlaySoundAtLocation(this, outOfAmmoSFX, GetActorLocation());
	}
}

void AFPSGameCharacter::SwitchToNewPrimaryWeapon()
{
	//if (ableToSwitchWeapon)
	//{
		fireTimerHandle.Invalidate();
		weaponSwitched = true;

		// Use this code if I want weapons to be obtained in any order 
		bool success = false;
		readyToFire = true;
		StopZoom();

		weaponIndex = weaponsSize - 1; 

		UE_LOG(LogTemp, Warning, TEXT("weaponsSize = %d and weaponIndex = %f"), weaponsSize, weaponIndex);

		SwitchWeaponMesh(weaponIndex); 
		UGameplayStatics::PlaySoundAtLocation(this, switchWeaponSFX, GetActorLocation());
	//}
}

void AFPSGameCharacter::SwitchToSpecificWeapon(int passedIndex)
{
	if (ableToSwitchWeapon)
	{
		fireTimerHandle.Invalidate(); 
		weaponSwitched = true; 
		bool success = false;
		readyToFire = true;
		StopZoom(); 

		UE_LOG(LogTemp, Warning, TEXT("Switching weapon to = %d"), passedIndex);

		weaponIndex = passedIndex; 

		SwitchWeaponMesh(weaponIndex);
		UGameplayStatics::PlaySoundAtLocation(this, switchWeaponSFX, GetActorLocation());
	}
}

void AFPSGameCharacter::DoAddAllWeapons()
{
	AddAllWeapons(); 
}

void AFPSGameCharacter::DoUnControlTheMouse()
{
	UnControlTheMouse();
}

void AFPSGameCharacter::StartFiring()
{
	isShooting = true;
	OnFire();
}

void AFPSGameCharacter::StopFiring()
{
	isShooting = false; 
	fireTimerHandle.Invalidate(); 
}

void AFPSGameCharacter::ResetReadyToFire()
{
	readyToFire = true; 
	fireTimerHandle.Invalidate();
}

void AFPSGameCharacter::MeleeSpawn(TSubclassOf<class AFPSGameProjectile> meleeProj)
{
	UE_LOG(LogTemp, Warning, TEXT("Hitting a fool!"));
	UWorld* const World = GetWorld(); 

	if (World != NULL)
	{
		const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
		GunOffset = FVector(100.0f, 0, 50.0f); // X = Depth , Y = Side , Z = Height 
		FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
		World->SpawnActor<AFPSGameProjectile>(meleeProj, SpawnLocation, SpawnRotation);
		UGameplayStatics::PlaySoundAtLocation(this, meleeSound, GetActorLocation());
	}
}

void AFPSGameCharacter::GrenadeSpawn(TSubclassOf<AActor> nade)
{
	if (grenadeStash > 0)
	{
		grenadeStash--; 

		UE_LOG(LogTemp, Warning, TEXT("Throwing a nade!"));
		UWorld* const World = GetWorld();

		if (World != NULL)
		{
			const FRotator SpawnRotation = GetControlRotation();
			GunOffset = FVector(100.0f, 0, 50.0f); // X = Depth , Y = Side , Z = Height 
			FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);

			World->SpawnActor<AActor>(nade, SpawnLocation, SpawnRotation);
		}
	}
}

void AFPSGameCharacter::AddGrenades()
{
	if (grenadeStash < maxGrenades)
	{
		grenadeStash++; 
	}
}

void AFPSGameCharacter::StartCrouch()
{
	UE_LOG(LogTemp, Warning, TEXT("Start Crouching..."));
	isCrouching = true; 
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	UE_LOG(LogTemp, Warning, TEXT("...Crouching has commenced "));
}

void AFPSGameCharacter::EndCrouch()
{
	UE_LOG(LogTemp, Warning, TEXT("Ending Crouching..."));
	isCrouching = false; 
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	UE_LOG(LogTemp, Warning, TEXT("...Crouching has ended "));
}

#pragma endregion MyCode 