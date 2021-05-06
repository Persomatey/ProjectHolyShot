#include "HighScoreTracker.h"
#include <Runtime\Core\Public\Misc\Paths.h>
#include <Runtime\Core\Public\HAL\PlatformFilemanager.h>

FString UHighScoreTracker::LoadFileToString(FString Filename)
{
	FString directory = FPaths::ProjectContentDir(); 
	FString result; 
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile(); 

	if (file.CreateDirectory(*directory))
	{
		FString myFile = directory + "/" + Filename; 
		FFileHelper::LoadFileToString(result, *myFile); 
	}

	return result; 
}

FString UHighScoreTracker::SaveStringToFile(FString Filename)
{
	FString directory = FPaths::ProjectContentDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory))
	{
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToString(result, *myFile);
	}

	return result;
}

bool UHighScoreTracker::LoadText(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool UHighScoreTracker::SaveText(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB)); 
}