#include "TurretEnemy.h"

// Sets default values
ATurretEnemy::ATurretEnemy()
{
	health = 1.0f;
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