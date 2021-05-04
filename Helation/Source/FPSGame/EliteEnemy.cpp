#include "EliteEnemy.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEliteEnemy::AEliteEnemy()
{
	health = 1.0f;
	hasTakenDamage = false; 
	isDead = false; 
	canSeePlayer = false; 
	isAlerted = false; 
}

void AEliteEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("Hello, World! I am a Elite! ")); 
}

void AEliteEnemy::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG(LogTemp, Warning, TEXT("Hello, World! I am an Elite! "));
}

void AEliteEnemy::TakeDamage(float damageTaken)
{
	health -= damageTaken;

	if (health <= 0.0f)
	{
		health = 0.0f;
		//UE_LOG(LogTemp, Warning, TEXT("I'm dead. I'm an Elite! "));
		isDead = true; 
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("Oww, that hurt. I'm an Elite! "));
		hasTakenDamage = true; 
	}
}

void AEliteEnemy::BeginDeath()
{
	//UE_LOG(LogTemp, Warning, TEXT("Elite Death Starting"));
	//UGameplayStatics::PlaySoundAtLocation(this, enemySparksSound, GetActorLocation());
}

void AEliteEnemy::ShootBullets(TSubclassOf<class AFPSGameProjectile> passedProj)
{
	const FRotator SpawnRotation = GetControlRotation();
	FVector GunOffset = FVector(105.0f, 20.0f, 72.0f);	// X = Depth , Y = Side , Z = Height 
	FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
	UWorld* const World = GetWorld();
	World->SpawnActor<AFPSGameProjectile>(passedProj, SpawnLocation, SpawnRotation);
	UGameplayStatics::PlaySoundAtLocation(this, enemyShootSound, GetActorLocation());
}

int AEliteEnemy::GenerateDropIndex()
{
	srand((unsigned)time(0));
	int randRes = 1 + (rand() % 10);
	int dropRes;	// 1 = grenades, 2 = Shotgun, 3 = Sniper, 4 = AR, 5 = Pistol 

	if (randRes == 1)
	{ dropRes = 1; }
	else if (randRes == 2)
	{ dropRes = 2; }
	else if (randRes == 3)
	{ dropRes = 3; }
	else if (randRes >= 4 && randRes <= 6)
	{ dropRes = 4; }
	else if (randRes >= 7 && randRes <= 10)
	{dropRes = 5;}

	return dropRes; 
}