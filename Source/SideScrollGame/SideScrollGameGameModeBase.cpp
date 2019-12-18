// Fill out your copyright notice in the Description page of Project Settings.


#include "SideScrollGameGameModeBase.h"
#include "SSG_Player.h"

ASideScrollGameGameModeBase::ASideScrollGameGameModeBase()
{
	DefaultPawnClass = ASSG_Player::StaticClass();
}