// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppVariableSettings.generated.h"

UCLASS()
class CPPVSBP_API ACppVariableSettings : public AActor
{
	GENERATED_BODY()

public:
	ACppVariableSettings();

public:
	UPROPERTY(EditAnywhere, Category = "Default|Grab")
	bool CanGrab;

	UPROPERTY(EditInstanceOnly, Category = "Default|Grab",
		meta = (EditCondition = "CanGrab"))
	FVector GrabOffset;

	UPROPERTY(EditDefaultsOnly, Category = "Default|Grab",
		meta = (ClampMin = "25", UIMin = "0", ClampMax = "100", UIMax = "150", EditCondition = "CanGrab"))
	float GrabRaduis;

	UPROPERTY(EditDefaultsOnly, Category = "Default|Grab",
		meta = (EditCondition = "CanGrab"))
	float ReleaseRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter = "SetCollisionSize", AdvancedDisplay, Category = "Default|Grab",
		meta = (ExposeOnSpawn = "true"))
	float CollisionSize;

	UPROPERTY(EditAnywhere, EditFixedSize, Category = "Default|Tags")
	TArray<FText> AvailableTags;

public:
	UFUNCTION(BlueprintSetter)
	void SetCollisionSize(float inCollisionSize);
};
