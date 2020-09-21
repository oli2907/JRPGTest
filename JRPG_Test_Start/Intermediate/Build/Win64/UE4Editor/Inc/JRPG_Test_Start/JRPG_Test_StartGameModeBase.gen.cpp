// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JRPG_Test_Start/JRPG_Test_StartGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJRPG_Test_StartGameModeBase() {}
// Cross Module References
	JRPG_TEST_START_API UClass* Z_Construct_UClass_AJRPG_Test_StartGameModeBase_NoRegister();
	JRPG_TEST_START_API UClass* Z_Construct_UClass_AJRPG_Test_StartGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JRPG_Test_Start();
// End Cross Module References
	void AJRPG_Test_StartGameModeBase::StaticRegisterNativesAJRPG_Test_StartGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AJRPG_Test_StartGameModeBase_NoRegister()
	{
		return AJRPG_Test_StartGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AJRPG_Test_StartGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJRPG_Test_StartGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JRPG_Test_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJRPG_Test_StartGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JRPG_Test_StartGameModeBase.h" },
		{ "ModuleRelativePath", "JRPG_Test_StartGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJRPG_Test_StartGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJRPG_Test_StartGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJRPG_Test_StartGameModeBase_Statics::ClassParams = {
		&AJRPG_Test_StartGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJRPG_Test_StartGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJRPG_Test_StartGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJRPG_Test_StartGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJRPG_Test_StartGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJRPG_Test_StartGameModeBase, 2414893517);
	template<> JRPG_TEST_START_API UClass* StaticClass<AJRPG_Test_StartGameModeBase>()
	{
		return AJRPG_Test_StartGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJRPG_Test_StartGameModeBase(Z_Construct_UClass_AJRPG_Test_StartGameModeBase, &AJRPG_Test_StartGameModeBase::StaticClass, TEXT("/Script/JRPG_Test_Start"), TEXT("AJRPG_Test_StartGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJRPG_Test_StartGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
