#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	E_AssaultRifle	UMETA(DisplayName = "ASSAULT_RIFLE"),
	E_Pistol		UMETA(DisplayName = "PISTOL"),
	E_SniperRifle	UMETA(DisplayName = "SNIPER_RIFLE"),
	E_Shotgun		UMETA(DisplayName = "SHOTGUN")
};

UCLASS()
class FPSGAME_API ABaseWeapon : public AActor
{
	GENERATED_BODY()

	public: 
		ABaseWeapon(); 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			int maxTotalAmmo; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			int maxClipAmmo; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			int totalAmmo; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			int clipAmmo; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			int reloadTime; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			EWeaponType weaponType;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			FString name; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			bool isObtained; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			bool isDestroyed;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			int index; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			float fireRate; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			bool isAutomatic; 

	protected: 
		virtual void BeginPlay() override; 

	public: 
		virtual void Tick(float DeltaTime) override; 
};