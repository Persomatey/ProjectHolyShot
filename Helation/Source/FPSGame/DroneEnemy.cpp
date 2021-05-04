#include "DroneEnemy.h"

// Sets default values
ADroneEnemy::ADroneEnemy()
{
	health = 1.0f;
	diff = 0.00000000000001f;

	isDead = false;
}

void ADroneEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("Hello, World! I am a Drone! "));
}

void ADroneEnemy::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello, World! I am a Drone! "));
}

void ADroneEnemy::TakeDamage(float damageTaken)
{
	health -= damageTaken;

	if (health <= 0)
	{
		health = 0;
		UE_LOG(LogTemp, Warning, TEXT("I'm dead. I'm a Drone! "));
		isDead = true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Oww, that hurt. I'm a Drone! "));
	}
}

void ADroneEnemy::BeginDeath()
{
	UE_LOG(LogTemp, Warning, TEXT("Drone Death Starting")); 

	// Blueprint_Effect_Explosion
}