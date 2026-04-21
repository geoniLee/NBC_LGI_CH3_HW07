// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef NBC_LGI_CH03_HW07_Drone_generated_h
#error "Drone.generated.h already included, missing '#pragma once' in Drone.h"
#endif
#define NBC_LGI_CH03_HW07_Drone_generated_h

#define FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_Drone_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execZoom); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMoveHeight); \
	DECLARE_FUNCTION(execMove);


#define FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_Drone_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrone(); \
	friend struct Z_Construct_UClass_ADrone_Statics; \
public: \
	DECLARE_CLASS(ADrone, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_LGI_CH03_HW07"), NO_API) \
	DECLARE_SERIALIZER(ADrone)


#define FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_Drone_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADrone(ADrone&&); \
	ADrone(const ADrone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrone) \
	NO_API virtual ~ADrone();


#define FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_Drone_h_15_PROLOG
#define FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_Drone_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_Drone_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_Drone_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_Drone_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_LGI_CH03_HW07_API UClass* StaticClass<class ADrone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_Drone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
