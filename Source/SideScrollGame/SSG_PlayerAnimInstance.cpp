// Fill out your copyright notice in the Description page of Project Settings.


#include "SSG_PlayerAnimInstance.h"
#include "SSG_Player.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine.h"


USSG_PlayerAnimInstance::USSG_PlayerAnimInstance()
{
	IsInAir = false;
	Speed = 0.0f;
	IsAttacking = false;
}

void USSG_PlayerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	ASSG_Player* Player = Cast<ASSG_Player>(TryGetPawnOwner());
	if (Player)
	{
		IsInAir = Player->GetMovementComponent()->IsFalling();
		Speed = Player->GetVelocity().Size();
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Cyan, FString("Speed : ")+FString::SanitizeFloat(Speed) );

	}
}

bool USSG_PlayerAnimInstance::GetAttacking()
{
	if (IsAttacking)
	{
		return true;
	}

	return false;
}