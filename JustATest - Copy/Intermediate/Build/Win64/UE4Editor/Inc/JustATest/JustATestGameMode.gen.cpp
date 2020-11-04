// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JustATest/JustATestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJustATestGameMode() {}
// Cross Module References
	JUSTATEST_API UClass* Z_Construct_UClass_AJustATestGameMode_NoRegister();
	JUSTATEST_API UClass* Z_Construct_UClass_AJustATestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JustATest();
// End Cross Module References
	void AJustATestGameMode::StaticRegisterNativesAJustATestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AJustATestGameMode_NoRegister()
	{
		return AJustATestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJustATestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJustATestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JustATest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJustATestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JustATestGameMode.h" },
		{ "ModuleRelativePath", "JustATestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJustATestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJustATestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJustATestGameMode_Statics::ClassParams = {
		&AJustATestGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJustATestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJustATestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJustATestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJustATestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJustATestGameMode, 4083539760);
	template<> JUSTATEST_API UClass* StaticClass<AJustATestGameMode>()
	{
		return AJustATestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJustATestGameMode(Z_Construct_UClass_AJustATestGameMode, &AJustATestGameMode::StaticClass, TEXT("/Script/JustATest"), TEXT("AJustATestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJustATestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
