// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticeProject/PracticeProjectSportsWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeProjectSportsWheelRear() {}

// Begin Cross Module References
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectSportsWheelRear();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectSportsWheelRear_NoRegister();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectWheelRear();
UPackage* Z_Construct_UPackage__Script_PracticeProject();
// End Cross Module References

// Begin Class UPracticeProjectSportsWheelRear
void UPracticeProjectSportsWheelRear::StaticRegisterNativesUPracticeProjectSportsWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPracticeProjectSportsWheelRear);
UClass* Z_Construct_UClass_UPracticeProjectSportsWheelRear_NoRegister()
{
	return UPracticeProjectSportsWheelRear::StaticClass();
}
struct Z_Construct_UClass_UPracticeProjectSportsWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "PracticeProjectSportsWheelRear.h" },
		{ "ModuleRelativePath", "PracticeProjectSportsWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPracticeProjectSportsWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPracticeProjectSportsWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPracticeProjectWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectSportsWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPracticeProjectSportsWheelRear_Statics::ClassParams = {
	&UPracticeProjectSportsWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectSportsWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UPracticeProjectSportsWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPracticeProjectSportsWheelRear()
{
	if (!Z_Registration_Info_UClass_UPracticeProjectSportsWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPracticeProjectSportsWheelRear.OuterSingleton, Z_Construct_UClass_UPracticeProjectSportsWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPracticeProjectSportsWheelRear.OuterSingleton;
}
template<> PRACTICEPROJECT_API UClass* StaticClass<UPracticeProjectSportsWheelRear>()
{
	return UPracticeProjectSportsWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPracticeProjectSportsWheelRear);
UPracticeProjectSportsWheelRear::~UPracticeProjectSportsWheelRear() {}
// End Class UPracticeProjectSportsWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPracticeProjectSportsWheelRear, UPracticeProjectSportsWheelRear::StaticClass, TEXT("UPracticeProjectSportsWheelRear"), &Z_Registration_Info_UClass_UPracticeProjectSportsWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPracticeProjectSportsWheelRear), 1237648142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsWheelRear_h_3262597145(TEXT("/Script/PracticeProject"),
	Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
