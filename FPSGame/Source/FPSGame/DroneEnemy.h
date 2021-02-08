#pragma once

#include "CoreMinimal.h"
#include "DefaultEnemy.h"
#include "DroneEnemy.generated.h"

UCLASS()
class FPSGAME_API ADroneEnemy : public ADefaultEnemy
{
	GENERATED_BODY()
	
	public: 
		// Sets default values for this character's properties
		ADroneEnemy();

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

		// Called every frame 
		virtual void Tick(float DeltaTime) override;

		float diff; 

		FVector oldLoc; 

		FVector newLoc; 
};
