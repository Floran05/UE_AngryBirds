// Fill out your copyright notice in the Description page of Project Settings.


#include "AShooter.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SplineComponent.h"
#include "NiagaraComponent.h"


// Sets default values
AAShooter::AAShooter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(Root);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	Projectile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	Projectile->SetupAttachment(Root);

	ProjectilePath = CreateDefaultSubobject<USplineComponent>(TEXT("ProjectilePath"));
	ProjectilePath->SetupAttachment(Projectile);

	PathVisual = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PathVisual"));
	PathVisual->SetupAttachment(Root);
}

UStaticMeshComponent* AAShooter::GetProjectile() const
{
	return Projectile;
}

// Called when the game starts or when spawned
void AAShooter::BeginPlay()
{
	Super::BeginPlay();

}

void AAShooter::ShowProjectilePath()
{

}

void AAShooter::SetProjectileVelocity()
{

}

// Called every frame
void AAShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAShooter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

