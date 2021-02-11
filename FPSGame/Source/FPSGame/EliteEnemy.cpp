#include "EliteEnemy.h"

// Sets default values
AEliteEnemy::AEliteEnemy()
{
	health = 1.0f;
	hasTakenDamage = false; 
	isDead = false; 
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

void AEliteEnemy::TakeDamage(float damageTaken)
{
	health -= damageTaken;

	if (health <= 0.0f)
	{
		health = 0.0f;
		UE_LOG(LogTemp, Warning, TEXT("I'm dead. I'm an Elite! "));
		isDead = true; 
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Oww, that hurt. I'm an Elite! "));
		hasTakenDamage = true; 
	}
}

void AEliteEnemy::BeginDeath()
{
	UE_LOG(LogTemp, Warning, TEXT("Death Starting"));
}
