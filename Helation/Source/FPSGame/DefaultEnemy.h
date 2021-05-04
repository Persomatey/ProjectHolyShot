#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DefaultEnemy.generated.h"

UCLASS()
class FPSGAME_API ADefaultEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADefaultEnemy();

	// Called every frame 
	//virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		void TakeDamage(float damageTaken);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
		float health;

	UFUNCTION(BlueprintCallable)
		void BeginDeath(); 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
		bool isDead;
};
