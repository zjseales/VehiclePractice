// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticeProject/PracticeProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_APracticeProjectGameMode();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_APracticeProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PracticeProject();
// End Cross Module References

// Begin Class APracticeProjectGameMode
void APracticeProjectGameMode::StaticRegisterNativesAPracticeProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APracticeProjectGameMode);
UClass* Z_Construct_UClass_APracticeProjectGameMode_NoRegister()
{
	return APracticeProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_APracticeProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PracticeProjectGameMode.h" },
		{ "ModuleRelativePath", "PracticeProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APracticeProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APracticeProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APracticeProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APracticeProjectGameMode_Statics::ClassParams = {
	&APracticeProjectGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APracticeProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APracticeProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APracticeProjectGameMode()
{
	if (!Z_Registration_Info_UClass_APracticeProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APracticeProjectGameMode.OuterSingleton, Z_Construct_UClass_APracticeProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APracticeProjectGameMode.OuterSingleton;
}
template<> PRACTICEPROJECT_API UClass* StaticClass<APracticeProjectGameMode>()
{
	return APracticeProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APracticeProjectGameMode);
APracticeProjectGameMode::~APracticeProjectGameMode() {}
// End Class APracticeProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APracticeProjectGameMode, APracticeProjectGameMode::StaticClass, TEXT("APracticeProjectGameMode"), &Z_Registration_Info_UClass_APracticeProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APracticeProjectGameMode), 40468047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectGameMode_h_2158690306(TEXT("/Script/PracticeProject"),
	Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
