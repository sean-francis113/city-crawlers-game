// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GM_MenusAndConnection.generated.h"

/**
 * 
 */
UCLASS()
class CITYCRAWLERS_API AGM_MenusAndConnection : public AGameModeBase
{
	GENERATED_BODY()

public:
	BeginPlay();
	EndPlay();

	UFUNCTION(BlueprintImplementableEvent, Category = "Input", Meta = (DisplayName = "On Controller Connection Change"))
	void OnControllerConnectionChange(bool Connected, int32 UserID, int32 ControllerID);
	
};
