#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSGameProjectile.h"
#include "EliteEnemy.generated.h"

UCLASS()
class FPSGAME_API AEliteEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEliteEnemy();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool canSeePlayer; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isAlerted; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		class USoundBase* enemyShootSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		class USoundBase* enemySparksSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		class USoundBase* enemyExplosionSound;

protected:
	// Called when the game starts or when spawned
	void BeginPlay();

	// Called every frame 
	void Tick(float DeltaTime);

	bool deathBegan; 

	UFUNCTION(BlueprintCallable)
		void TakeDamage(float damageTaken);

	UFUNCTION(BlueprintCallable)
		void BeginDeath();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool hasTakenDamage; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isDead;

	UFUNCTION(BlueprintCallable)
		void ShootBullets(TSubclassOf<class AFPSGameProjectile> passedProj);

	UFUNCTION(BlueprintCallable)
		int GenerateDropIndex(); 
};
