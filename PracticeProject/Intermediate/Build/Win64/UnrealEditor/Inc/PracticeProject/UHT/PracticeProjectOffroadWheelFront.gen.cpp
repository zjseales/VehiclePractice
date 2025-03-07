// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticeProject/PracticeProjectOffroadWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeProjectOffroadWheelFront() {}

// Begin Cross Module References
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectOffroadWheelFront();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectOffroadWheelFront_NoRegister();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectWheelFront();
UPackage* Z_Construct_UPackage__Script_PracticeProject();
// End Cross Module References

// Begin Class UPracticeProjectOffroadWheelFront
void UPracticeProjectOffroadWheelFront::StaticRegisterNativesUPracticeProjectOffroadWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPracticeProjectOffroadWheelFront);
UClass* Z_Construct_UClass_UPracticeProjectOffroadWheelFront_NoRegister()
{
	return UPracticeProjectOffroadWheelFront::StaticClass();
}
struct Z_Construct_UClass_UPracticeProjectOffroadWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "PracticeProjectOffroadWheelFront.h" },
		{ "ModuleRelativePath", "PracticeProjectOffroadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPracticeProjectOffroadWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPracticeProjectOffroadWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPracticeProjectWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectOffroadWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPracticeProjectOffroadWheelFront_Statics::ClassParams = {
	&UPracticeProjectOffroadWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectOffroadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UPracticeProjectOffroadWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPracticeProjectOffroadWheelFront()
{
	if (!Z_Registration_Info_UClass_UPracticeProjectOffroadWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPracticeProjectOffroadWheelFront.OuterSingleton, Z_Construct_UClass_UPracticeProjectOffroadWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPracticeProjectOffroadWheelFront.OuterSingleton;
}
template<> PRACTICEPROJECT_API UClass* StaticClass<UPracticeProjectOffroadWheelFront>()
{
	return UPracticeProjectOffroadWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPracticeProjectOffroadWheelFront);
UPracticeProjectOffroadWheelFront::~UPracticeProjectOffroadWheelFront() {}
// End Class UPracticeProjectOffroadWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectOffroadWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPracticeProjectOffroadWheelFront, UPracticeProjectOffroadWheelFront::StaticClass, TEXT("UPracticeProjectOffroadWheelFront"), &Z_Registration_Info_UClass_UPracticeProjectOffroadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPracticeProjectOffroadWheelFront), 1968773567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectOffroadWheelFront_h_1115016820(TEXT("/Script/PracticeProject"),
	Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectOffroadWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectOffroadWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
