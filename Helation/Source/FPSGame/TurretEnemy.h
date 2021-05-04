#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TurretEnemy.generated.h"

UCLASS()
class FPSGAME_API ATurretEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATurretEnemy();

protected:
	// Called when the game starts or when spawned
	void BeginPlay();

	// Called every frame 
	void Tick(float DeltaTime);

	UFUNCTION(BlueprintCallable)
		void TakeDamage(float damageTaken);

	UFUNCTION(BlueprintCallable)
		void BeginDeath();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
		float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
		bool isIdling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
		bool isLookingLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
		bool startNewLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
		bool isDead;
};
