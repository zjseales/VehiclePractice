// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticeProject/PracticeProjectWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeProjectWheelRear() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectWheelRear();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectWheelRear_NoRegister();
UPackage* Z_Construct_UPackage__Script_PracticeProject();
// End Cross Module References

// Begin Class UPracticeProjectWheelRear
void UPracticeProjectWheelRear::StaticRegisterNativesUPracticeProjectWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPracticeProjectWheelRear);
UClass* Z_Construct_UClass_UPracticeProjectWheelRear_NoRegister()
{
	return UPracticeProjectWheelRear::StaticClass();
}
struct Z_Construct_UClass_UPracticeProjectWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "PracticeProjectWheelRear.h" },
		{ "ModuleRelativePath", "PracticeProjectWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPracticeProjectWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPracticeProjectWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPracticeProjectWheelRear_Statics::ClassParams = {
	&UPracticeProjectWheelRear::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UPracticeProjectWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPracticeProjectWheelRear()
{
	if (!Z_Registration_Info_UClass_UPracticeProjectWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPracticeProjectWheelRear.OuterSingleton, Z_Construct_UClass_UPracticeProjectWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPracticeProjectWheelRear.OuterSingleton;
}
template<> PRACTICEPROJECT_API UClass* StaticClass<UPracticeProjectWheelRear>()
{
	return UPracticeProjectWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPracticeProjectWheelRear);
UPracticeProjectWheelRear::~UPracticeProjectWheelRear() {}
// End Class UPracticeProjectWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPracticeProjectWheelRear, UPracticeProjectWheelRear::StaticClass, TEXT("UPracticeProjectWheelRear"), &Z_Registration_Info_UClass_UPracticeProjectWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPracticeProjectWheelRear), 1500226375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectWheelRear_h_4078826511(TEXT("/Script/PracticeProject"),
	Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
