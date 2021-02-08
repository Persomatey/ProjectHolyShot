#pragma once

#include "CoreMinimal.h"
#include "DefaultEnemy.h"
#include "EliteEnemy.generated.h"

UCLASS()
class FPSGAME_API AEliteEnemy : public ADefaultEnemy
{
	GENERATED_BODY()
	
	public:
		// Sets default values for this character's properties
		AEliteEnemy();

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

		// Called every frame 
		virtual void Tick(float DeltaTime) override;

};
