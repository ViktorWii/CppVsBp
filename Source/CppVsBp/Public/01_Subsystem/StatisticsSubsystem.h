// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StatisticsSubsystem.generated.h"

/**
 *
 */
UCLASS()
class CPPVSBP_API UStatisticsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void WriteStatistics(FName StatName, float Value);
};
