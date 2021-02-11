#include "TurretEnemy.h"

// Sets default values
ATurretEnemy::ATurretEnemy()
{
	health = 1.0f;
	isIdling = true; 
	isLookingLeft = false; 
	startNewLoop = false; 
}

void ATurretEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("Hello, World! I am a Turret! "));
}

void ATurretEnemy::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello, World! I am a Turret! "));
}

void ATurretEnemy::TakeDamage(float damageTaken)
{
	if (health <= 0)
	{
		health = 0;
		UE_LOG(LogTemp, Warning, TEXT("I'm dead. I'm a Turret! "));
	}
	else
	{
		health -= damageTaken;
		UE_LOG(LogTemp, Warning, TEXT("Oww, that hurt. I'm a turret! "));
	}
}
