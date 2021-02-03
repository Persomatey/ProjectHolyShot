#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class FPSGAME_API ABaseWeapon : public AActor
{
	GENERATED_BODY()

public: 
	ABaseWeapon(); 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int maxTotalAmmo; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int maxClipAmmo; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int totalAmmo; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int clipAmmo; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int reloadTime; 

protected: 
	virtual void BeginPlay() override; 

public: 
	virtual void Tick(float DeltaTime) override; 
};