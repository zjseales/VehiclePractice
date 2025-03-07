// Copyright Epic Games, Inc. All Rights Reserved.

#include "PracticeProjectWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UPracticeProjectWheelRear::UPracticeProjectWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}