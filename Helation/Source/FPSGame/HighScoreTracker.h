#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Runtime\Core\Public\Misc\FileHelper.h>
#include "HighScoreTracker.generated.h"

UCLASS()
class FPSGAME_API UHighScoreTracker : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString LoadFileToString(FString Filename); 

	UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString SaveStringToFile(FString Filename);

	UFUNCTION(BlueprintCallable, Category = "File I/O")
		static bool LoadText(FString FileNameA, FString& SaveTextA); 

	UFUNCTION(BlueprintCallable, Category = "File I/O", meta = (Keywords = "Save Text File"))
		static bool SaveText(FString SaveTextB, FString FileNameB); 
};
