#include "EliteEnemy.h"

// Sets default values
AEliteEnemy::AEliteEnemy()
{
	health = 1.0f;
}

void AEliteEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("Hello, World! I am a Elite! "));
}

void AEliteEnemy::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello, World! I am an Elite! "));
}