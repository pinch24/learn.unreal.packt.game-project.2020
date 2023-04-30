// Copyright Epic Games, Inc. All Rights Reserved.

#include "SuperSideScrollerGameMode.h"
#include "SuperSideScrollerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASuperSideScrollerGameMode::ASuperSideScrollerGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MainCharacter/Blueprints/BP_SuperSideScroller_MainCharacter.BP_SuperSideScroller_MainCharacter_C"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
