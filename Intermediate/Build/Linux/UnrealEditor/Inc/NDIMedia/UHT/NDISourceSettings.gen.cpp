// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/NDISourceSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDISourceSettings() {}

// ********** Begin Cross Module References ********************************************************
NDIMEDIA_API UEnum* Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth();
NDIMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FNDISourceSettings();
UPackage* Z_Construct_UPackage__Script_NDIMedia();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNDISourceSettings ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNDISourceSettings;
class UScriptStruct* FNDISourceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNDISourceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNDISourceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDISourceSettings, (UObject*)Z_Construct_UPackage__Script_NDIMedia(), TEXT("NDISourceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FNDISourceSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNDISourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Carries the NDI source and capture settings to the media receiver\n * from either media source/player or timecode provider. \n */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDISourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Carries the NDI source and capture settings to the media receiver\nfrom either media source/player or timecode provider." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NDI Source name */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDISourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NDI Source name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates the current bandwidth mode used for the connection to this source */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDISourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the current bandwidth mode used for the connection to this source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAudio_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Capture Audio from the NDI source. */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDISourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capture Audio from the NDI source." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureVideo_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Capture Video from the NDI source. */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDISourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capture Video from the NDI source." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bandwidth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bandwidth;
	static void NewProp_bCaptureAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAudio;
	static void NewProp_bCaptureVideo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureVideo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDISourceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDISourceSettings, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceName_MetaData), NewProp_SourceName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_Bandwidth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDISourceSettings, Bandwidth), Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth_MetaData), NewProp_Bandwidth_MetaData) }; // 2107172978
void Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_bCaptureAudio_SetBit(void* Obj)
{
	((FNDISourceSettings*)Obj)->bCaptureAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_bCaptureAudio = { "bCaptureAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDISourceSettings), &Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_bCaptureAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureAudio_MetaData), NewProp_bCaptureAudio_MetaData) };
void Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_bCaptureVideo_SetBit(void* Obj)
{
	((FNDISourceSettings*)Obj)->bCaptureVideo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_bCaptureVideo = { "bCaptureVideo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDISourceSettings), &Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_bCaptureVideo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureVideo_MetaData), NewProp_bCaptureVideo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDISourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_Bandwidth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_Bandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_bCaptureAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewProp_bCaptureVideo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISourceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDISourceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMedia,
	nullptr,
	&NewStructOps,
	"NDISourceSettings",
	Z_Construct_UScriptStruct_FNDISourceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISourceSettings_Statics::PropPointers),
	sizeof(FNDISourceSettings),
	alignof(FNDISourceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISourceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDISourceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDISourceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FNDISourceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNDISourceSettings.InnerSingleton, Z_Construct_UScriptStruct_FNDISourceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNDISourceSettings.InnerSingleton;
}
// ********** End ScriptStruct FNDISourceSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Private_Player_NDISourceSettings_h__Script_NDIMedia_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDISourceSettings::StaticStruct, Z_Construct_UScriptStruct_FNDISourceSettings_Statics::NewStructOps, TEXT("NDISourceSettings"), &Z_Registration_Info_UScriptStruct_FNDISourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDISourceSettings), 420521667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Private_Player_NDISourceSettings_h__Script_NDIMedia_2620292502(TEXT("/Script/NDIMedia"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Private_Player_NDISourceSettings_h__Script_NDIMedia_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Private_Player_NDISourceSettings_h__Script_NDIMedia_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
