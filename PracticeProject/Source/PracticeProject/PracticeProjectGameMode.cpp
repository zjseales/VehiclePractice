// Copyright Epic Games, Inc. All Rights Reserved.

#include "PracticeProjectGameMode.h"
#include "PracticeProjectPlayerController.h"

APracticeProjectGameMode::APracticeProjectGameMode()
{
	PlayerControllerClass = APracticeProjectPlayerController::StaticClass();
}
