// Copyright Epic Games, Inc. All Rights Reserved.

#include "DefeaturingPickUpComponent.h"

UDefeaturingPickUpComponent::UDefeaturingPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UDefeaturingPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UDefeaturingPickUpComponent::OnSphereBeginOverlap);
}

void UDefeaturingPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ADefeaturingCharacter* Character = Cast<ADefeaturingCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
