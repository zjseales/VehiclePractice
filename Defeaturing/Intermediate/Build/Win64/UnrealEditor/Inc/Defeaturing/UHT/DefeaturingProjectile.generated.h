// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefeaturingProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DEFEATURING_DefeaturingProjectile_generated_h
#error "DefeaturingProjectile.generated.h already included, missing '#pragma once' in DefeaturingProjectile.h"
#endif
#define DEFEATURING_DefeaturingProjectile_generated_h

#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefeaturingProjectile(); \
	friend struct Z_Construct_UClass_ADefeaturingProjectile_Statics; \
public: \
	DECLARE_CLASS(ADefeaturingProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Defeaturing"), NO_API) \
	DECLARE_SERIALIZER(ADefeaturingProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADefeaturingProjectile(ADefeaturingProjectile&&); \
	ADefeaturingProjectile(const ADefeaturingProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefeaturingProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefeaturingProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefeaturingProjectile) \
	NO_API virtual ~ADefeaturingProjectile();


#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingProjectile_h_12_PROLOG
#define FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEFEATURING_API UClass* StaticClass<class ADefeaturingProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Zac_Documents_VehiclePractice_Defeaturing_Source_Defeaturing_DefeaturingProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
