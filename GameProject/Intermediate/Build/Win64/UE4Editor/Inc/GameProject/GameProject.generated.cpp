// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameProject.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1GameProject() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();

	GAMEPROJECT_API class UClass* Z_Construct_UClass_AGameProjectGameModeBase_NoRegister();
	GAMEPROJECT_API class UClass* Z_Construct_UClass_AGameProjectGameModeBase();
	GAMEPROJECT_API class UClass* Z_Construct_UClass_AHeroes_NoRegister();
	GAMEPROJECT_API class UClass* Z_Construct_UClass_AHeroes();
	GAMEPROJECT_API class UPackage* Z_Construct_UPackage__Script_GameProject();
	void AGameProjectGameModeBase::StaticRegisterNativesAGameProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGameProjectGameModeBase_NoRegister()
	{
		return AGameProjectGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameProjectGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_GameProject();
			OuterClass = AGameProjectGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AGameProjectGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameProjectGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GameProjectGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameProjectGameModeBase, 1759754415);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameProjectGameModeBase(Z_Construct_UClass_AGameProjectGameModeBase, &AGameProjectGameModeBase::StaticClass, TEXT("/Script/GameProject"), TEXT("AGameProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameProjectGameModeBase);
	void AHeroes::StaticRegisterNativesAHeroes()
	{
	}
	UClass* Z_Construct_UClass_AHeroes_NoRegister()
	{
		return AHeroes::StaticClass();
	}
	UClass* Z_Construct_UClass_AHeroes()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_GameProject();
			OuterClass = AHeroes::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AHeroes> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Heroes.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Heroes.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeroes, 3564095025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroes(Z_Construct_UClass_AHeroes, &AHeroes::StaticClass, TEXT("/Script/GameProject"), TEXT("AHeroes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroes);
	UPackage* Z_Construct_UPackage__Script_GameProject()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/GameProject")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xDC4A53D3;
			Guid.B = 0xB1ECBCC1;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
