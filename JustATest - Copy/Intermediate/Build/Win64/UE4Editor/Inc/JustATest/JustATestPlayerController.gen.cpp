// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JustATest/JustATestPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJustATestPlayerController() {}
// Cross Module References
	JUSTATEST_API UClass* Z_Construct_UClass_AJustATestPlayerController_NoRegister();
	JUSTATEST_API UClass* Z_Construct_UClass_AJustATestPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_JustATest();
// End Cross Module References
	void AJustATestPlayerController::StaticRegisterNativesAJustATestPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AJustATestPlayerController_NoRegister()
	{
		return AJustATestPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AJustATestPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJustATestPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_JustATest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJustATestPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JustATestPlayerController.h" },
		{ "ModuleRelativePath", "JustATestPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJustATestPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJustATestPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJustATestPlayerController_Statics::ClassParams = {
		&AJustATestPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJustATestPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJustATestPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJustATestPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJustATestPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJustATestPlayerController, 1322062169);
	template<> JUSTATEST_API UClass* StaticClass<AJustATestPlayerController>()
	{
		return AJustATestPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJustATestPlayerController(Z_Construct_UClass_AJustATestPlayerController, &AJustATestPlayerController::StaticClass, TEXT("/Script/JustATest"), TEXT("AJustATestPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJustATestPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
