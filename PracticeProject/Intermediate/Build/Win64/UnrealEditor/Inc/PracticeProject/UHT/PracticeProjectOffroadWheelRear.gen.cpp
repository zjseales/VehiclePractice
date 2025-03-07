// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticeProject/PracticeProjectOffroadWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeProjectOffroadWheelRear() {}

// Begin Cross Module References
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectOffroadWheelRear();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectOffroadWheelRear_NoRegister();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectWheelRear();
UPackage* Z_Construct_UPackage__Script_PracticeProject();
// End Cross Module References

// Begin Class UPracticeProjectOffroadWheelRear
void UPracticeProjectOffroadWheelRear::StaticRegisterNativesUPracticeProjectOffroadWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPracticeProjectOffroadWheelRear);
UClass* Z_Construct_UClass_UPracticeProjectOffroadWheelRear_NoRegister()
{
	return UPracticeProjectOffroadWheelRear::StaticClass();
}
struct Z_Construct_UClass_UPracticeProjectOffroadWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "PracticeProjectOffroadWheelRear.h" },
		{ "ModuleRelativePath", "PracticeProjectOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPracticeProjectOffroadWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPracticeProjectOffroadWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPracticeProjectWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectOffroadWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPracticeProjectOffroadWheelRear_Statics::ClassParams = {
	&UPracticeProjectOffroadWheelRear::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UPracticeProjectOffroadWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPracticeProjectOffroadWheelRear()
{
	if (!Z_Registration_Info_UClass_UPracticeProjectOffroadWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPracticeProjectOffroadWheelRear.OuterSingleton, Z_Construct_UClass_UPracticeProjectOffroadWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPracticeProjectOffroadWheelRear.OuterSingleton;
}
template<> PRACTICEPROJECT_API UClass* StaticClass<UPracticeProjectOffroadWheelRear>()
{
	return UPracticeProjectOffroadWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPracticeProjectOffroadWheelRear);
UPracticeProjectOffroadWheelRear::~UPracticeProjectOffroadWheelRear() {}
// End Class UPracticeProjectOffroadWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectOffroadWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPracticeProjectOffroadWheelRear, UPracticeProjectOffroadWheelRear::StaticClass, TEXT("UPracticeProjectOffroadWheelRear"), &Z_Registration_Info_UClass_UPracticeProjectOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPracticeProjectOffroadWheelRear), 720237636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectOffroadWheelRear_h_2424022595(TEXT("/Script/PracticeProject"),
	Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectOffroadWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectOffroadWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
