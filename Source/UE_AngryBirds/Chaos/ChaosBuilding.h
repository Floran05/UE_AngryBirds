// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChaosBuilding.generated.h"

UCLASS()
class UE_ANGRYBIRDS_API AChaosBuilding : public AActor
{
	GENERATED_BODY()
	
public:	
	AChaosBuilding();

protected:
	virtual void BeginPlay() override;

protected:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	class USceneComponent* SceneRoot;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UGeometryCollectionComponent* GeometryCollection;

};
