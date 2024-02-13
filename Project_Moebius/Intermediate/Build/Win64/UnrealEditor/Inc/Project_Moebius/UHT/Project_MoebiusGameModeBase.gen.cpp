// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Moebius/Project_MoebiusGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_MoebiusGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJECT_MOEBIUS_API UClass* Z_Construct_UClass_AProject_MoebiusGameModeBase();
	PROJECT_MOEBIUS_API UClass* Z_Construct_UClass_AProject_MoebiusGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Project_Moebius();
// End Cross Module References
	void AProject_MoebiusGameModeBase::StaticRegisterNativesAProject_MoebiusGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject_MoebiusGameModeBase);
	UClass* Z_Construct_UClass_AProject_MoebiusGameModeBase_NoRegister()
	{
		return AProject_MoebiusGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProject_MoebiusGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_MoebiusGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Moebius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_MoebiusGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project_MoebiusGameModeBase.h" },
		{ "ModuleRelativePath", "Project_MoebiusGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_MoebiusGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_MoebiusGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_MoebiusGameModeBase_Statics::ClassParams = {
		&AProject_MoebiusGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProject_MoebiusGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_MoebiusGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject_MoebiusGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AProject_MoebiusGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_MoebiusGameModeBase.OuterSingleton, Z_Construct_UClass_AProject_MoebiusGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProject_MoebiusGameModeBase.OuterSingleton;
	}
	template<> PROJECT_MOEBIUS_API UClass* StaticClass<AProject_MoebiusGameModeBase>()
	{
		return AProject_MoebiusGameModeBase::StaticClass();
	}
	AProject_MoebiusGameModeBase::AProject_MoebiusGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_MoebiusGameModeBase);
	AProject_MoebiusGameModeBase::~AProject_MoebiusGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_mKirkpatrick_Documents_Projects_Project_Moebius_Project_Moebius_Source_Project_Moebius_Project_MoebiusGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mKirkpatrick_Documents_Projects_Project_Moebius_Project_Moebius_Source_Project_Moebius_Project_MoebiusGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProject_MoebiusGameModeBase, AProject_MoebiusGameModeBase::StaticClass, TEXT("AProject_MoebiusGameModeBase"), &Z_Registration_Info_UClass_AProject_MoebiusGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_MoebiusGameModeBase), 3219752634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mKirkpatrick_Documents_Projects_Project_Moebius_Project_Moebius_Source_Project_Moebius_Project_MoebiusGameModeBase_h_2910513748(TEXT("/Script/Project_Moebius"),
		Z_CompiledInDeferFile_FID_Users_mKirkpatrick_Documents_Projects_Project_Moebius_Project_Moebius_Source_Project_Moebius_Project_MoebiusGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mKirkpatrick_Documents_Projects_Project_Moebius_Project_Moebius_Source_Project_Moebius_Project_MoebiusGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
