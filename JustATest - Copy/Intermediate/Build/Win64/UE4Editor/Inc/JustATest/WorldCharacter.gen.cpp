// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JustATest/WorldCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldCharacter() {}
// Cross Module References
	JUSTATEST_API UClass* Z_Construct_UClass_AWorldCharacter_NoRegister();
	JUSTATEST_API UClass* Z_Construct_UClass_AWorldCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_JustATest();
// End Cross Module References
	void AWorldCharacter::StaticRegisterNativesAWorldCharacter()
	{
	}
	UClass* Z_Construct_UClass_AWorldCharacter_NoRegister()
	{
		return AWorldCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AWorldCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_JustATest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WorldCharacter.h" },
		{ "ModuleRelativePath", "WorldCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorldCharacter_Statics::ClassParams = {
		&AWorldCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWorldCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorldCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldCharacter, 2744134047);
	template<> JUSTATEST_API UClass* StaticClass<AWorldCharacter>()
	{
		return AWorldCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldCharacter(Z_Construct_UClass_AWorldCharacter, &AWorldCharacter::StaticClass, TEXT("/Script/JustATest"), TEXT("AWorldCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
