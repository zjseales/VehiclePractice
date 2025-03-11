// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefeaturingPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADefeaturingCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DEFEATURING_DefeaturingPickUpComponent_generated_h
#error "DefeaturingPickUpComponent.generated.h already included, missing '#pragma once' in DefeaturingPickUpComponent.h"
#endif
#define DEFEATURING_DefeaturingPickUpComponent_generated_h

#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h_12_DELEGATE \
DEFEATURING_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ADefeaturingCharacter* PickUpCharacter);


#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefeaturingPickUpComponent(); \
	friend struct Z_Construct_UClass_UDefeaturingPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UDefeaturingPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Defeaturing"), NO_API) \
	DECLARE_SERIALIZER(UDefeaturingPickUpComponent)


#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDefeaturingPickUpComponent(UDefeaturingPickUpComponent&&); \
	UDefeaturingPickUpComponent(const UDefeaturingPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefeaturingPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefeaturingPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDefeaturingPickUpComponent) \
	NO_API virtual ~UDefeaturingPickUpComponent();


#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h_14_PROLOG
#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEFEATURING_API UClass* StaticClass<class UDefeaturingPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
