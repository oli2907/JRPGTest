// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JustATest/BattleParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleParent() {}
// Cross Module References
	JUSTATEST_API UClass* Z_Construct_UClass_ABattleParent_NoRegister();
	JUSTATEST_API UClass* Z_Construct_UClass_ABattleParent();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_JustATest();
// End Cross Module References
	void ABattleParent::StaticRegisterNativesABattleParent()
	{
	}
	UClass* Z_Construct_UClass_ABattleParent_NoRegister()
	{
		return ABattleParent::StaticClass();
	}
	struct Z_Construct_UClass_ABattleParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_JustATest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleParent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BattleParent.h" },
		{ "ModuleRelativePath", "BattleParent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleParent_Statics::ClassParams = {
		&ABattleParent::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABattleParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleParent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleParent, 1761702130);
	template<> JUSTATEST_API UClass* StaticClass<ABattleParent>()
	{
		return ABattleParent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleParent(Z_Construct_UClass_ABattleParent, &ABattleParent::StaticClass, TEXT("/Script/JustATest"), TEXT("ABattleParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
