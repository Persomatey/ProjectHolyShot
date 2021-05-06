#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseAmmo.generated.h"

UENUM(BlueprintType)
enum class EAmmoType : uint8
{
	E_AssaultRifle	UMETA(DisplayName = "ASSAULT_RIFLE"),
	E_Pistol		UMETA(DisplayName = "PISTOL"),
	E_SniperRifle	UMETA(DisplayName = "SNIPER_RIFLE"),
	E_Shotgun		UMETA(DisplayName = "SHOTGUN")
};

UCLASS()
class FPSGAME_API ABaseAmmo : public AActor
{
	GENERATED_BODY() 
	
	public:	
		// Sets default values for this actor's properties
		ABaseAmmo();

		// Called every frame
		virtual void Tick(float DeltaTime) override;

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			int ammoAmount; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
			EAmmoType ammoType;
};
