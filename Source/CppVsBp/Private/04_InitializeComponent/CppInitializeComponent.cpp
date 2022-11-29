// Fill out your copyright notice in the Description page of Project Settings.


#include "04_InitializeComponent/CppInitializeComponent.h"

// Sets default values
ACppInitializeComponent::ACppInitializeComponent()
{
	this->StaticMeshCompnoent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
	SetRootComponent(this->StaticMeshCompnoent);

	// Load and set StaticMesh
	auto meshFinder = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Game/CppVsBp/Art/Geometry/Cubes/SM_1M_Cube_Chamfer.SM_1M_Cube_Chamfer"));
	if (meshFinder.Succeeded())
	{
		this->StaticMeshCompnoent->SetStaticMesh(meshFinder.Object);
	}

	// Load and set Material
	auto materialFinder = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("/Engine/VREditor/UI/ArrowMaterial.ArrowMaterial"));
	if (materialFinder.Succeeded())
	{
		this->StaticMeshCompnoent->SetMaterial(0, materialFinder.Object);
	}
}
