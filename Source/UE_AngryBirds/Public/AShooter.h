// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AShooter.generated.h"

class USceneComponent;
class USpringArmComponent;
class UCameraComponent;
class UStaticMeshComponent;

UCLASS()
class UE_ANGRYBIRDS_API AAShooter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAShooter();
	UStaticMeshComponent* GetProjectile() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Projectile;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
