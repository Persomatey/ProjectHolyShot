#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseWeapon.h"
#include "BaseAmmo.h" 
#include "FPSGameCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class AFPSGameCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category=Mesh) 
		class USkeletalMeshComponent* Mesh1P;	// Pawn mesh: 1st person view (arms; seen only by self)

	// UPROPERTY(BlueprintReadWrite, Category = Mesh) 
	// UPROPERTY(VisibleDefaultsOnly, Category = Mesh) 
	// UPROPERTY(EditAnywhere, Category = Mesh) 
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* FP_Gun;	// Gun mesh: 1st person view (seen only by self)

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)	
		class USceneComponent* FP_MuzzleLocation;	// Location on gun mesh where projectiles should spawn.

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)	
		class USkeletalMeshComponent* VR_Gun;	// Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)	
		class USceneComponent* VR_MuzzleLocation;	// Location on VR gun mesh where projectiles should spawn.

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))	
		class UCameraComponent* FirstPersonCameraComponent;	// First person camera

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))	
		class UMotionControllerComponent* R_MotionController;	// Motion controller (right hand)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))	
		class UMotionControllerComponent* L_MotionController;	// Motion controller (left hand)

	public:
		AFPSGameCharacter();

	protected:
		virtual void BeginPlay();

	public:

	#pragma region TemplateHeaderCode

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
			float BaseTurnRate;	// Base turn rate, in deg/sec. Other scaling may affect final turn rate. 

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
			float BaseLookUpRate;	// Base look up/down rate, in deg/sec. Other scaling may affect final rate. 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
			FVector GunOffset;	// Gun muzzle's offset from the characters location 

		UPROPERTY(BlueprintReadWrite, Category=Projectile)
			TSubclassOf<class AFPSGameProjectile> ProjectileClass;	// Projectile class to spawn 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
			class USoundBase* FireSound;	// Sound to play each time we fire 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			class UAnimMontage* FireAnimation;	// AnimMontage to play each time we fire 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			uint32 bUsingMotionControllers : 1; 	// Whether to use motion controller location for aiming. 

	#pragma endregion TemplateHeaderCode

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			bool isSprinting; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			bool isZoomedIn; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
			ABaseWeapon* weapon; 

		// Ability Stuff 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
			bool hasUsedAbility1; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
			bool hasUsedAbility2; 

		float ability1Duration; 

		float ability2Duration; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
			float ability1CooldownTime; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
			float ability2CooldownTime; 

		FTimerHandle ability1TimerHandle; 

		FTimerHandle ability2TimerHandle; 

		// Health / Respawn Stuff 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
			float health; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Respawn)
			FVector respawnLoc;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Respawn)
			FRotator respawnRot;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Respawn)
			bool messageAppear; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Respawn)
			FString hudMessage; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Respawn)
			bool isSameLoc; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Respawn)
			bool justDied;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
			bool justDamaged;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
			bool isFirstLife; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
			float healDelay;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
			float healTime; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
			float healWait;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
			float healAmount;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
			bool healing;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
			bool stopLooping;

		// Weapon / Ammo Stuff 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
			int assaultRifleAmmo;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
			int pistolAmmo;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
			int sniperRifleAmmo;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
			int shotgunAmmo; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
			TArray<ABaseWeapon*> weapons;  

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
			int weaponIndex; // 0 = Default, 1 = AR, 2 = Pistol, 3 = Sniper, 4 = Shotgun 

	protected:
		void OnFire();					// Fires a projectile. 

		void OnResetVR(); 				// Resets HMD orientation and position in VR. 

		void MoveForward(float Val);	// Handles moving forward/backward 

		void MoveRight(float Val);		// Handles stafing movement, left and right 

		void TurnAtRate(float Rate);	// Called via input to turn at a given rate. Rate is a normalized rate, i.e. 1.0 means 100% of desired turn rate

		void LookUpAtRate(float Rate);	// Called via input to turn look up/down at a given rate. Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate

		void Sprint(); 

		void StopSprinting(); 

		void ZoomIn(); 

		void StopZoom(); 

		void ManualReload();

		void ReloadWeapon(EWeaponType _weaponType); 

		int CalculateAmmo(int _ammoAmount); 

		void UseAbility1(); 
	
		void UseAbility2(); 

		void ResetAbility1(); 

		void ResetAbility2(); 

		void Ability1CooldownComplete(); 

		void Ability2CooldownComplete(); 

		void SwitchToNextPrimaryWeapon(); 

		UFUNCTION(BlueprintImplementableEvent, Category = "HUD")
			void SwitchWeaponMesh(int _index); 

		UFUNCTION(BlueprintCallable)
			void RegenHealth();

		UFUNCTION(BlueprintImplementableEvent, Category = "HUD")
			void TriggerOutOfAmmoPopUp(); // Not using this at the moment 

		UFUNCTION(BlueprintCallable)
			void TakeDamage(float damageAmount); 

		UFUNCTION(BlueprintCallable)
			void Die(); 

		UFUNCTION(BlueprintCallable)
			void Respawn(); 

		UFUNCTION(BlueprintCallable)
			void SetNewSpawnLoc(FVector newLoc, FRotator newRot);

		UFUNCTION(BlueprintCallable)
			bool isFullHealth();

		UFUNCTION(BlueprintCallable)
			void AddAmmo(EAmmoType _ammoType, int _ammoAmount); 

		UFUNCTION(BlueprintCallable)
			FVector TestWhereProjectileSpawnIs();

		struct TouchData
		{
			TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
			bool bIsPressed;
			ETouchIndex::Type FingerIndex;
			FVector Location;
			bool bMoved;
		};

		void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
		void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
		void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
		TouchData	TouchItem;
	
	protected:
		virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
		bool EnableTouchscreenMovement(UInputComponent* InputComponent);

	public:
		FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; } // Returns Mesh1P subobject
		FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; } // Returns FirstPersonCameraComponent subobject
};

