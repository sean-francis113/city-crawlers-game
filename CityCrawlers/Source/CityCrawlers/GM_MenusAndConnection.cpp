// Fill out your copyright notice in the Description page of Project Settings.

#include "GM_MenusAndConnection.h"

void AGM_MenusAndConnection::BeginPlay()
{

	OnControllerConnectionHandle = FCoreDelegates::OnControllerConnectionChange.AddUFunction(this, FName("OnControllerConnectionChange"));

}

void AGM_MenusAndConnection::EndPlay()
{

	FCoreDelegates::OnControllerConnectionChange.Remove(OnControllerConnectionHandle);

}