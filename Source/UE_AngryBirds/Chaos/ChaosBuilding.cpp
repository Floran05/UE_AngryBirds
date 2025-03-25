// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaosBuilding.h"
#include "Components/SceneComponent.h"
#include "GeometryCollection/GeometryCollectionComponent.h"

AChaosBuilding::AChaosBuilding()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	SetRootComponent(SceneRoot);

	GeometryCollection = CreateDefaultSubobject<UGeometryCollectionComponent>(TEXT("GeometryCollection"));
	GeometryCollection->SetupAttachment(SceneRoot);
}

void AChaosBuilding::BeginPlay()
{
	Super::BeginPlay();
	
}
