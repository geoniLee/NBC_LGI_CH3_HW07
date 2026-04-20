// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_LGI_CH03_HW07/Public/LGIPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGIPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NBC_LGI_CH03_HW07_API UClass* Z_Construct_UClass_ALGIPlayerController();
NBC_LGI_CH03_HW07_API UClass* Z_Construct_UClass_ALGIPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_LGI_CH03_HW07();
// End Cross Module References

// Begin Class ALGIPlayerController
void ALGIPlayerController::StaticRegisterNativesALGIPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALGIPlayerController);
UClass* Z_Construct_UClass_ALGIPlayerController_NoRegister()
{
	return ALGIPlayerController::StaticClass();
}
struct Z_Construct_UClass_ALGIPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "LGIPlayerController.h" },
		{ "ModuleRelativePath", "Public/LGIPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/LGIPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/LGIPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/LGIPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALGIPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALGIPlayerController_Statics::NewProp_IMContext = { "IMContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALGIPlayerController, IMContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMContext_MetaData), NewProp_IMContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALGIPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALGIPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALGIPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALGIPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALGIPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALGIPlayerController_Statics::NewProp_IMContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALGIPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALGIPlayerController_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALGIPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALGIPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_LGI_CH03_HW07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALGIPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALGIPlayerController_Statics::ClassParams = {
	&ALGIPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALGIPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALGIPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALGIPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALGIPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALGIPlayerController()
{
	if (!Z_Registration_Info_UClass_ALGIPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALGIPlayerController.OuterSingleton, Z_Construct_UClass_ALGIPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALGIPlayerController.OuterSingleton;
}
template<> NBC_LGI_CH03_HW07_API UClass* StaticClass<ALGIPlayerController>()
{
	return ALGIPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALGIPlayerController);
ALGIPlayerController::~ALGIPlayerController() {}
// End Class ALGIPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_LGIPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALGIPlayerController, ALGIPlayerController::StaticClass, TEXT("ALGIPlayerController"), &Z_Registration_Info_UClass_ALGIPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALGIPlayerController), 2573798900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_LGIPlayerController_h_4008165081(TEXT("/Script/NBC_LGI_CH03_HW07"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_LGIPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_LGIPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
