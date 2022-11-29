// Fill out your copyright notice in the Description page of Project Settings.


#include "03_VariableSettings/CppVariableSettings.h"


ACppVariableSettings::ACppVariableSettings() {}

void ACppVariableSettings::SetCollisionSize(float inCollisionSize)
{
	UE_LOG(LogTemp, Warning, TEXT("Someone Tried To Set Variable CollisionSize"));
	this->CollisionSize = inCollisionSize;
}
