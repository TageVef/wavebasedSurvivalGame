// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPROJECT_Heroes_generated_h
#error "Heroes.generated.h already included, missing '#pragma once' in Heroes.h"
#endif
#define GAMEPROJECT_Heroes_generated_h

#define GameProject_Source_GameProject_Heroes_h_12_RPC_WRAPPERS
#define GameProject_Source_GameProject_Heroes_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GameProject_Source_GameProject_Heroes_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroes(); \
	friend GAMEPROJECT_API class UClass* Z_Construct_UClass_AHeroes(); \
public: \
	DECLARE_CLASS(AHeroes, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameProject"), NO_API) \
	DECLARE_SERIALIZER(AHeroes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameProject_Source_GameProject_Heroes_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHeroes(); \
	friend GAMEPROJECT_API class UClass* Z_Construct_UClass_AHeroes(); \
public: \
	DECLARE_CLASS(AHeroes, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameProject"), NO_API) \
	DECLARE_SERIALIZER(AHeroes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameProject_Source_GameProject_Heroes_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroes(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroes(AHeroes&&); \
	NO_API AHeroes(const AHeroes&); \
public:


#define GameProject_Source_GameProject_Heroes_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroes(AHeroes&&); \
	NO_API AHeroes(const AHeroes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroes); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroes)


#define GameProject_Source_GameProject_Heroes_h_12_PRIVATE_PROPERTY_OFFSET
#define GameProject_Source_GameProject_Heroes_h_9_PROLOG
#define GameProject_Source_GameProject_Heroes_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameProject_Source_GameProject_Heroes_h_12_PRIVATE_PROPERTY_OFFSET \
	GameProject_Source_GameProject_Heroes_h_12_RPC_WRAPPERS \
	GameProject_Source_GameProject_Heroes_h_12_INCLASS \
	GameProject_Source_GameProject_Heroes_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameProject_Source_GameProject_Heroes_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameProject_Source_GameProject_Heroes_h_12_PRIVATE_PROPERTY_OFFSET \
	GameProject_Source_GameProject_Heroes_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameProject_Source_GameProject_Heroes_h_12_INCLASS_NO_PURE_DECLS \
	GameProject_Source_GameProject_Heroes_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameProject_Source_GameProject_Heroes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
