// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItsMagic/ItsMagicGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItsMagicGameMode() {}
// Cross Module References
	ITSMAGIC_API UClass* Z_Construct_UClass_AItsMagicGameMode_NoRegister();
	ITSMAGIC_API UClass* Z_Construct_UClass_AItsMagicGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ItsMagic();
// End Cross Module References
	void AItsMagicGameMode::StaticRegisterNativesAItsMagicGameMode()
	{
	}
	UClass* Z_Construct_UClass_AItsMagicGameMode_NoRegister()
	{
		return AItsMagicGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AItsMagicGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItsMagicGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ItsMagic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItsMagicGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ItsMagicGameMode.h" },
		{ "ModuleRelativePath", "ItsMagicGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItsMagicGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItsMagicGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItsMagicGameMode_Statics::ClassParams = {
		&AItsMagicGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AItsMagicGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItsMagicGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItsMagicGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItsMagicGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItsMagicGameMode, 3171677035);
	template<> ITSMAGIC_API UClass* StaticClass<AItsMagicGameMode>()
	{
		return AItsMagicGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItsMagicGameMode(Z_Construct_UClass_AItsMagicGameMode, &AItsMagicGameMode::StaticClass, TEXT("/Script/ItsMagic"), TEXT("AItsMagicGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItsMagicGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
