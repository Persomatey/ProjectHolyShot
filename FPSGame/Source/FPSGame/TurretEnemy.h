#pragma once

#include "CoreMinimal.h"
#include "DefaultEnemy.h"
#include "TurretEnemy.generated.h"

UCLASS()
class FPSGAME_API ATurretEnemy : public ADefaultEnemy 
{
	GENERATED_BODY()
	
	public:
		// Sets default values for this character's properties
		ATurretEnemy();

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

		// Called every frame 
		virtual void Tick(float DeltaTime) override;

};
