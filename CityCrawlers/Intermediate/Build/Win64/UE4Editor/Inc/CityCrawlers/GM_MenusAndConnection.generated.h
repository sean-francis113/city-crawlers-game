// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYCRAWLERS_GM_MenusAndConnection_generated_h
#error "GM_MenusAndConnection.generated.h already included, missing '#pragma once' in GM_MenusAndConnection.h"
#endif
#define CITYCRAWLERS_GM_MenusAndConnection_generated_h

#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_RPC_WRAPPERS
#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_EVENT_PARMS \
	struct GM_MenusAndConnection_eventOnControllerConnectionChange_Parms \
	{ \
		bool Connected; \
		int32 UserID; \
		int32 ControllerID; \
	};


#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_CALLBACK_WRAPPERS
#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_MenusAndConnection(); \
	friend struct Z_Construct_UClass_AGM_MenusAndConnection_Statics; \
public: \
	DECLARE_CLASS(AGM_MenusAndConnection, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CityCrawlers"), NO_API) \
	DECLARE_SERIALIZER(AGM_MenusAndConnection)


#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGM_MenusAndConnection(); \
	friend struct Z_Construct_UClass_AGM_MenusAndConnection_Statics; \
public: \
	DECLARE_CLASS(AGM_MenusAndConnection, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CityCrawlers"), NO_API) \
	DECLARE_SERIALIZER(AGM_MenusAndConnection)


#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_MenusAndConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_MenusAndConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_MenusAndConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_MenusAndConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_MenusAndConnection(AGM_MenusAndConnection&&); \
	NO_API AGM_MenusAndConnection(const AGM_MenusAndConnection&); \
public:


#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_MenusAndConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_MenusAndConnection(AGM_MenusAndConnection&&); \
	NO_API AGM_MenusAndConnection(const AGM_MenusAndConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_MenusAndConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_MenusAndConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_MenusAndConnection)


#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_PRIVATE_PROPERTY_OFFSET
#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_12_PROLOG \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_EVENT_PARMS


#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_PRIVATE_PROPERTY_OFFSET \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_RPC_WRAPPERS \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_CALLBACK_WRAPPERS \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_INCLASS \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_PRIVATE_PROPERTY_OFFSET \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_CALLBACK_WRAPPERS \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_INCLASS_NO_PURE_DECLS \
	CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CityCrawlers_Source_CityCrawlers_GM_MenusAndConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
