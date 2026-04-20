// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_LGI_CH03_HW07/Public/LGIGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGIGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
NBC_LGI_CH03_HW07_API UClass* Z_Construct_UClass_ALGIGameMode();
NBC_LGI_CH03_HW07_API UClass* Z_Construct_UClass_ALGIGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_LGI_CH03_HW07();
// End Cross Module References

// Begin Class ALGIGameMode
void ALGIGameMode::StaticRegisterNativesALGIGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALGIGameMode);
UClass* Z_Construct_UClass_ALGIGameMode_NoRegister()
{
	return ALGIGameMode::StaticClass();
}
struct Z_Construct_UClass_ALGIGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LGIGameMode.h" },
		{ "ModuleRelativePath", "Public/LGIGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALGIGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALGIGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_LGI_CH03_HW07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALGIGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALGIGameMode_Statics::ClassParams = {
	&ALGIGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALGIGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALGIGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALGIGameMode()
{
	if (!Z_Registration_Info_UClass_ALGIGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALGIGameMode.OuterSingleton, Z_Construct_UClass_ALGIGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALGIGameMode.OuterSingleton;
}
template<> NBC_LGI_CH03_HW07_API UClass* StaticClass<ALGIGameMode>()
{
	return ALGIGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALGIGameMode);
ALGIGameMode::~ALGIGameMode() {}
// End Class ALGIGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_LGIGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALGIGameMode, ALGIGameMode::StaticClass, TEXT("ALGIGameMode"), &Z_Registration_Info_UClass_ALGIGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALGIGameMode), 710117056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_LGIGameMode_h_3434273125(TEXT("/Script/NBC_LGI_CH03_HW07"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_LGIGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_NBC_LGI_CH03_HW07_NBC_LGI_CH03_HW07_Source_NBC_LGI_CH03_HW07_Public_LGIGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
