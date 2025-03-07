// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticeProject/PracticeProjectSportsCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeProjectSportsCar() {}

// Begin Cross Module References
PRACTICEPROJECT_API UClass* Z_Construct_UClass_APracticeProjectPawn();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_APracticeProjectSportsCar();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_APracticeProjectSportsCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_PracticeProject();
// End Cross Module References

// Begin Class APracticeProjectSportsCar
void APracticeProjectSportsCar::StaticRegisterNativesAPracticeProjectSportsCar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APracticeProjectSportsCar);
UClass* Z_Construct_UClass_APracticeProjectSportsCar_NoRegister()
{
	return APracticeProjectSportsCar::StaticClass();
}
struct Z_Construct_UClass_APracticeProjectSportsCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PracticeProjectSportsCar.h" },
		{ "ModuleRelativePath", "PracticeProjectSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APracticeProjectSportsCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APracticeProjectSportsCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APracticeProjectPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APracticeProjectSportsCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APracticeProjectSportsCar_Statics::ClassParams = {
	&APracticeProjectSportsCar::StaticClass,
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
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APracticeProjectSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_APracticeProjectSportsCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APracticeProjectSportsCar()
{
	if (!Z_Registration_Info_UClass_APracticeProjectSportsCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APracticeProjectSportsCar.OuterSingleton, Z_Construct_UClass_APracticeProjectSportsCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APracticeProjectSportsCar.OuterSingleton;
}
template<> PRACTICEPROJECT_API UClass* StaticClass<APracticeProjectSportsCar>()
{
	return APracticeProjectSportsCar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APracticeProjectSportsCar);
APracticeProjectSportsCar::~APracticeProjectSportsCar() {}
// End Class APracticeProjectSportsCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APracticeProjectSportsCar, APracticeProjectSportsCar::StaticClass, TEXT("APracticeProjectSportsCar"), &Z_Registration_Info_UClass_APracticeProjectSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APracticeProjectSportsCar), 44430643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsCar_h_97948561(TEXT("/Script/PracticeProject"),
	Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
