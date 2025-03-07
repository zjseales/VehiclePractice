// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticeProject/PracticeProjectSportsWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeProjectSportsWheelFront() {}

// Begin Cross Module References
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectSportsWheelFront();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectSportsWheelFront_NoRegister();
PRACTICEPROJECT_API UClass* Z_Construct_UClass_UPracticeProjectWheelFront();
UPackage* Z_Construct_UPackage__Script_PracticeProject();
// End Cross Module References

// Begin Class UPracticeProjectSportsWheelFront
void UPracticeProjectSportsWheelFront::StaticRegisterNativesUPracticeProjectSportsWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPracticeProjectSportsWheelFront);
UClass* Z_Construct_UClass_UPracticeProjectSportsWheelFront_NoRegister()
{
	return UPracticeProjectSportsWheelFront::StaticClass();
}
struct Z_Construct_UClass_UPracticeProjectSportsWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "PracticeProjectSportsWheelFront.h" },
		{ "ModuleRelativePath", "PracticeProjectSportsWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPracticeProjectSportsWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPracticeProjectSportsWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPracticeProjectWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_PracticeProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectSportsWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPracticeProjectSportsWheelFront_Statics::ClassParams = {
	&UPracticeProjectSportsWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeProjectSportsWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UPracticeProjectSportsWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPracticeProjectSportsWheelFront()
{
	if (!Z_Registration_Info_UClass_UPracticeProjectSportsWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPracticeProjectSportsWheelFront.OuterSingleton, Z_Construct_UClass_UPracticeProjectSportsWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPracticeProjectSportsWheelFront.OuterSingleton;
}
template<> PRACTICEPROJECT_API UClass* StaticClass<UPracticeProjectSportsWheelFront>()
{
	return UPracticeProjectSportsWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPracticeProjectSportsWheelFront);
UPracticeProjectSportsWheelFront::~UPracticeProjectSportsWheelFront() {}
// End Class UPracticeProjectSportsWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPracticeProjectSportsWheelFront, UPracticeProjectSportsWheelFront::StaticClass, TEXT("UPracticeProjectSportsWheelFront"), &Z_Registration_Info_UClass_UPracticeProjectSportsWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPracticeProjectSportsWheelFront), 3842276532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsWheelFront_h_3967648931(TEXT("/Script/PracticeProject"),
	Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Zac_Documents_VehiclePractice_PracticeProject_Source_PracticeProject_PracticeProjectSportsWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
