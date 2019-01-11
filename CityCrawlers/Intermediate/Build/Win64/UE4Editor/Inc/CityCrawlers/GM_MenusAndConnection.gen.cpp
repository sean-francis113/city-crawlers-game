// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityCrawlers/GM_MenusAndConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_MenusAndConnection() {}
// Cross Module References
	CITYCRAWLERS_API UClass* Z_Construct_UClass_AGM_MenusAndConnection_NoRegister();
	CITYCRAWLERS_API UClass* Z_Construct_UClass_AGM_MenusAndConnection();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CityCrawlers();
	CITYCRAWLERS_API UFunction* Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange();
// End Cross Module References
	static FName NAME_AGM_MenusAndConnection_OnControllerConnectionChange = FName(TEXT("OnControllerConnectionChange"));
	void AGM_MenusAndConnection::OnControllerConnectionChange(bool Connected, int32 UserID, int32 ControllerID)
	{
		GM_MenusAndConnection_eventOnControllerConnectionChange_Parms Parms;
		Parms.Connected=Connected ? true : false;
		Parms.UserID=UserID;
		Parms.ControllerID=ControllerID;
		ProcessEvent(FindFunctionChecked(NAME_AGM_MenusAndConnection_OnControllerConnectionChange),&Parms);
	}
	void AGM_MenusAndConnection::StaticRegisterNativesAGM_MenusAndConnection()
	{
	}
	struct Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserID;
		static void NewProp_Connected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Connected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::NewProp_ControllerID = { UE4CodeGen_Private::EPropertyClass::Int, "ControllerID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GM_MenusAndConnection_eventOnControllerConnectionChange_Parms, ControllerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::NewProp_UserID = { UE4CodeGen_Private::EPropertyClass::Int, "UserID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GM_MenusAndConnection_eventOnControllerConnectionChange_Parms, UserID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::NewProp_Connected_SetBit(void* Obj)
	{
		((GM_MenusAndConnection_eventOnControllerConnectionChange_Parms*)Obj)->Connected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::NewProp_Connected = { UE4CodeGen_Private::EPropertyClass::Bool, "Connected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GM_MenusAndConnection_eventOnControllerConnectionChange_Parms), &Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::NewProp_Connected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::NewProp_ControllerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::NewProp_UserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::NewProp_Connected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DisplayName", "On Controller Connection Change" },
		{ "ModuleRelativePath", "GM_MenusAndConnection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGM_MenusAndConnection, "OnControllerConnectionChange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(GM_MenusAndConnection_eventOnControllerConnectionChange_Parms), Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGM_MenusAndConnection_NoRegister()
	{
		return AGM_MenusAndConnection::StaticClass();
	}
	struct Z_Construct_UClass_AGM_MenusAndConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_MenusAndConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CityCrawlers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGM_MenusAndConnection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGM_MenusAndConnection_OnControllerConnectionChange, "OnControllerConnectionChange" }, // 4025317193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_MenusAndConnection_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GM_MenusAndConnection.h" },
		{ "ModuleRelativePath", "GM_MenusAndConnection.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_MenusAndConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_MenusAndConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGM_MenusAndConnection_Statics::ClassParams = {
		&AGM_MenusAndConnection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGM_MenusAndConnection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGM_MenusAndConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_MenusAndConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGM_MenusAndConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGM_MenusAndConnection, 3835179795);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_MenusAndConnection(Z_Construct_UClass_AGM_MenusAndConnection, &AGM_MenusAndConnection::StaticClass, TEXT("/Script/CityCrawlers"), TEXT("AGM_MenusAndConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_MenusAndConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
