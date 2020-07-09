// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KLabsUnrealAudio/KLabsUnrealAudioGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLabsUnrealAudioGameModeBase() {}
// Cross Module References
	KLABSUNREALAUDIO_API UClass* Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_NoRegister();
	KLABSUNREALAUDIO_API UClass* Z_Construct_UClass_AKLabsUnrealAudioGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KLabsUnrealAudio();
// End Cross Module References
	void AKLabsUnrealAudioGameModeBase::StaticRegisterNativesAKLabsUnrealAudioGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_NoRegister()
	{
		return AKLabsUnrealAudioGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KLabsUnrealAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KLabsUnrealAudioGameModeBase.h" },
		{ "ModuleRelativePath", "KLabsUnrealAudioGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKLabsUnrealAudioGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_Statics::ClassParams = {
		&AKLabsUnrealAudioGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKLabsUnrealAudioGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKLabsUnrealAudioGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKLabsUnrealAudioGameModeBase, 2808438612);
	template<> KLABSUNREALAUDIO_API UClass* StaticClass<AKLabsUnrealAudioGameModeBase>()
	{
		return AKLabsUnrealAudioGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKLabsUnrealAudioGameModeBase(Z_Construct_UClass_AKLabsUnrealAudioGameModeBase, &AKLabsUnrealAudioGameModeBase::StaticClass, TEXT("/Script/KLabsUnrealAudio"), TEXT("AKLabsUnrealAudioGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKLabsUnrealAudioGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
