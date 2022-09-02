// Fill out your copyright notice in the Description page of Project Settings.


#include "MotionPhysixVehicle.h"

// Sets default values
AMotionPhysixVehicle::AMotionPhysixVehicle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMotionPhysixVehicle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMotionPhysixVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMotionPhysixVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

