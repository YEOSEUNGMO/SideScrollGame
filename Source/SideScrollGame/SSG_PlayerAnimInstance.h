// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SSG_PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLGAME_API USSG_PlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	USSG_PlayerAnimInstance();

	bool GetAttacking();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "PlayerAnim", meta = (AllowPrivateAccess = "true"))
		bool IsAttacking;
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PlayerAnim", meta = (AllowPrivateAccess = "true"))
		float Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PlayerAnim", meta = (AllowPrivateAccess = "true"))
		bool IsInAir;

	virtual void NativeUpdateAnimation(float DeltaTime) override;
};
