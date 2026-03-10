// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDIMediaSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDIMediaSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaSettings();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NDIMedia();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNDIMediaSettings ********************************************************
void UNDIMediaSettings::StaticRegisterNativesUNDIMediaSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNDIMediaSettings;
UClass* UNDIMediaSettings::GetPrivateStaticClass()
{
	using TClass = UNDIMediaSettings;
	if (!Z_Registration_Info_UClass_UNDIMediaSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NDIMediaSettings"),
			Z_Registration_Info_UClass_UNDIMediaSettings.InnerSingleton,
			StaticRegisterNativesUNDIMediaSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UNDIMediaSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UNDIMediaSettings_NoRegister()
{
	return UNDIMediaSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNDIMediaSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "NDI Media" },
		{ "IncludePath", "NDIMediaSettings.h" },
		{ "ModuleRelativePath", "Public/NDIMediaSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBundledLibrary_MetaData[] = {
		{ "Category", "Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specify whether to use the bundled NDI runtime library or try to use the one installed on the system.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify whether to use the bundled NDI runtime library or try to use the one installed on the system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LibraryDirectoryOverride_MetaData[] = {
		{ "Category", "Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Manually specify a directory for the NDI runtime library.\n\x09 * If left empty, the default path is queried from \"NDI_RUNTIME_DIR_V5\" environment variable.\n\x09 */" },
#endif
		{ "EditCondition", "!bUseBundledLibrary" },
		{ "ModuleRelativePath", "Public/NDIMediaSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manually specify a directory for the NDI runtime library.\nIf left empty, the default path is queried from \"NDI_RUNTIME_DIR_V5\" environment variable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LibraryFullPath_MetaData[] = {
		{ "Category", "Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Full path of the currently loaded runtime library.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full path of the currently loaded runtime library." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUseBundledLibrary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBundledLibrary;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LibraryDirectoryOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LibraryFullPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNDIMediaSettings_Statics::NewProp_bUseBundledLibrary_SetBit(void* Obj)
{
	((UNDIMediaSettings*)Obj)->bUseBundledLibrary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSettings_Statics::NewProp_bUseBundledLibrary = { "bUseBundledLibrary", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaSettings), &Z_Construct_UClass_UNDIMediaSettings_Statics::NewProp_bUseBundledLibrary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBundledLibrary_MetaData), NewProp_bUseBundledLibrary_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIMediaSettings_Statics::NewProp_LibraryDirectoryOverride = { "LibraryDirectoryOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaSettings, LibraryDirectoryOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LibraryDirectoryOverride_MetaData), NewProp_LibraryDirectoryOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIMediaSettings_Statics::NewProp_LibraryFullPath = { "LibraryFullPath", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaSettings, LibraryFullPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LibraryFullPath_MetaData), NewProp_LibraryFullPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIMediaSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSettings_Statics::NewProp_bUseBundledLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSettings_Statics::NewProp_LibraryDirectoryOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSettings_Statics::NewProp_LibraryFullPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIMediaSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSettings_Statics::ClassParams = {
	&UNDIMediaSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDIMediaSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaSettings()
{
	if (!Z_Registration_Info_UClass_UNDIMediaSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaSettings.OuterSingleton, Z_Construct_UClass_UNDIMediaSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSettings);
UNDIMediaSettings::~UNDIMediaSettings() {}
// ********** End Class UNDIMediaSettings **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaSettings_h__Script_NDIMedia_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaSettings, UNDIMediaSettings::StaticClass, TEXT("UNDIMediaSettings"), &Z_Registration_Info_UClass_UNDIMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaSettings), 2614869334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaSettings_h__Script_NDIMedia_3298163951(TEXT("/Script/NDIMedia"),
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaSettings_h__Script_NDIMedia_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaSettings_h__Script_NDIMedia_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
