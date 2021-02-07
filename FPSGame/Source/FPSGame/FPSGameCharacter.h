#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseWeapon.h"
#include "FPSGameCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class AFPSGameCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

	/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* VR_Gun;

	/** Location on VR gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* VR_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* R_MotionController;

	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* L_MotionController;

public:
	AFPSGameCharacter();

protected:
	virtual void BeginPlay();

public:

#pragma region TemplateHeaderCode

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AFPSGameProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	uint32 bUsingMotionControllers : 1; 

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

	int temp; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
		bool stopLooping;

protected:
	
	/** Fires a projectile. */
	void OnFire();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	void Sprint(); 

	void StopSprinting(); 

	void ZoomIn(); 

	void StopZoom(); 

	void ReloadWeapon(); 

	void UseAbility1(); 
	
	void UseAbility2(); 

	void ResetAbility1(); 

	void ResetAbility2(); 

	void Ability1CooldownComplete(); 

	void Ability2CooldownComplete(); 

	UFUNCTION(BlueprintCallable)
		void RegenHealth();

	UFUNCTION(BlueprintImplementableEvent, Category = "HUD")
		void TriggerOutOfAmmoPopUp(); 

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
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
};

