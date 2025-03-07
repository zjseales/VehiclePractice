// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticeProject/PracticeProjectWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeProjectWheelFront() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectWheelFront();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectWheelFront_NoRegister();
UPackage* Z_Construct_UPackage__Script_PracticeProject();
// End Cross Module References

// Begin Class UPracticeProjectWheelFront
void UPracticeProjectWheelFront::StaticRegisterNativesUPracticeProjectWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPracticeProjectWheelFront);
UClass* Z_Construct_UClass_UPracticeProjectWheelFront_NoRegister()
{
	return UPracticeProjectWheelFront::StaticClass();
}
struct Z_Construct_UClass_UPracticeProjectWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "PracticeProjectWheelFront.h" },
		{ "ModuleRelativePath", "PracticeProjectWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPracticeProjectWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPracticeProjectWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPracticeProjectWheelFront_Statics::ClassParams = {
	&UPracticeProjectWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UPracticeProjectWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPracticeProjectWheelFront()
{
	if (!Z_Registration_Info_UClass_UPracticeProjectWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPracticeProjectWheelFront.OuterSingleton, Z_Construct_UClass_UPracticeProjectWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPracticeProjectWheelFront.OuterSingleton;
}
template<> PRACTICEPROJECT_API UClass* StaticClass<UPracticeProjectWheelFront>()
{
	return UPracticeProjectWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPracticeProjectWheelFront);
UPracticeProjectWheelFront::~UPracticeProjectWheelFront() {}
// End Class UPracticeProjectWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPracticeProjectWheelFront, UPracticeProjectWheelFront::StaticClass, TEXT("UPracticeProjectWheelFront"), &Z_Registration_Info_UClass_UPracticeProjectWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPracticeProjectWheelFront), 1957816858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectWheelFront_h_3422669342(TEXT("/Script/PracticeProject"),
	Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
