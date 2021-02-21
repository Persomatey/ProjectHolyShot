#include "BaseWeapon.h"

ABaseWeapon::ABaseWeapon()
{
	PrimaryActorTick.bCanEverTick = true; 

	maxTotalAmmo = 100; 
	maxClipAmmo = 12; 
	totalAmmo = 64; 
	clipAmmo = 12; 
	reloadTime = 1.0f; 

	isObtained = false; 
	index = 0; 
	name = "Weapon"; 

	weaponType = EWeaponType::E_AssaultRifle; 
}

void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay(); 
}

void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
}
