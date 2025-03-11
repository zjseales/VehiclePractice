// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Defeaturing/DefeaturingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefeaturingGameMode() {}

// Begin Cross Module References
DEFEATURING_API UClass* Z_Construct_UClass_ADefeaturingGameMode();
DEFEATURING_API UClass* Z_Construct_UClass_ADefeaturingGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Defeaturing();
// End Cross Module References

// Begin Class ADefeaturingGameMode
void ADefeaturingGameMode::StaticRegisterNativesADefeaturingGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefeaturingGameMode);
UClass* Z_Construct_UClass_ADefeaturingGameMode_NoRegister()
{
	return ADefeaturingGameMode::StaticClass();
}
struct Z_Construct_UClass_ADefeaturingGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DefeaturingGameMode.h" },
		{ "ModuleRelativePath", "DefeaturingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefeaturingGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADefeaturingGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Defeaturing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefeaturingGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefeaturingGameMode_Statics::ClassParams = {
	&ADefeaturingGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefeaturingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefeaturingGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefeaturingGameMode()
{
	if (!Z_Registration_Info_UClass_ADefeaturingGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefeaturingGameMode.OuterSingleton, Z_Construct_UClass_ADefeaturingGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefeaturingGameMode.OuterSingleton;
}
template<> DEFEATURING_API UClass* StaticClass<ADefeaturingGameMode>()
{
	return ADefeaturingGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefeaturingGameMode);
ADefeaturingGameMode::~ADefeaturingGameMode() {}
// End Class ADefeaturingGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefeaturingGameMode, ADefeaturingGameMode::StaticClass, TEXT("ADefeaturingGameMode"), &Z_Registration_Info_UClass_ADefeaturingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefeaturingGameMode), 2377729844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingGameMode_h_1122110686(TEXT("/Script/Defeaturing"),
	Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
