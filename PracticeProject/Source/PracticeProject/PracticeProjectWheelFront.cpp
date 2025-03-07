// Copyright Epic Games, Inc. All Rights Reserved.

#include "PracticeProjectWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UPracticeProjectWheelFront::UPracticeProjectWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}