// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PracticeProjectPawn.h"
#include "PracticeProjectSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class PRACTICEPROJECT_API APracticeProjectSportsCar : public APracticeProjectPawn
{
	GENERATED_BODY()
	
public:

	APracticeProjectSportsCar();
};
