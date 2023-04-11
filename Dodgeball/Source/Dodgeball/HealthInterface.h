﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HealthInterface.generated.h"

/**
 * 
 */
UINTERFACE()
class UHealthInterface : public UInterface
{
	GENERATED_BODY()
};

class DODGEBALL_API IHealthInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, Category = Health)
	void OnDeath();
	virtual void OnDeath_Implementation() = 0;

	UFUNCTION(BlueprintNativeEvent, Category = Health)
	void OnTakeDamage();
	virtual void OnTakeDamage_Implementation() = 0;
};

