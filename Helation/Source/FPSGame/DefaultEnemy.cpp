#include "DefaultEnemy.h"

// Sets default values
ADefaultEnemy::ADefaultEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	health = 1.0f;

	isDead = false; 
}

// Called when the game starts or when spawned
//void ADefaultEnemy::BeginPlay()
//{
//	Super::BeginPlay();
//}

// Called every frame
//void ADefaultEnemy::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//}

void ADefaultEnemy::TakeDamage(float damageTaken)
{
	health -= damageTaken;

	if (health <= 0)
	{
		health = 0;
		//UE_LOG(LogTemp, Warning, TEXT("I'm dead. I'm a Target! "));
		isDead = true;
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("Oww, that hurt. I'm a Target! "));
	}
}

void ADefaultEnemy::BeginDeath()
{
	//UE_LOG(LogTemp, Warning, TEXT("Target Death Starting"));
}
