// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppInitializeComponent.generated.h"

UCLASS()
class CPPVSBP_API ACppInitializeComponent : public AActor
{
	GENERATED_BODY()

public:
	ACppInitializeComponent();

public:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshCompnoent;
};
