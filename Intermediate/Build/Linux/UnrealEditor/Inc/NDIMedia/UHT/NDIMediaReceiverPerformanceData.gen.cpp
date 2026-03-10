// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/NDIMediaReceiverPerformanceData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDIMediaReceiverPerformanceData() {}

// ********** Begin Cross Module References ********************************************************
NDIMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData();
UPackage* Z_Construct_UPackage__Script_NDIMedia();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNDIMediaReceiverPerformanceData **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNDIMediaReceiverPerformanceData;
class UScriptStruct* FNDIMediaReceiverPerformanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNDIMediaReceiverPerformanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNDIMediaReceiverPerformanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData, (UObject*)Z_Construct_UPackage__Script_NDIMedia(), TEXT("NDIMediaReceiverPerformanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FNDIMediaReceiverPerformanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  NDI receiver's performance statistics on number of frames received and dropped.\n */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDIMediaReceiverPerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NDI receiver's performance statistics on number of frames received and dropped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoFrames_MetaData[] = {
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of video frames received */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDIMediaReceiverPerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of video frames received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroppedVideoFrames_MetaData[] = {
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of video frames dropped */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDIMediaReceiverPerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of video frames dropped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioFrames_MetaData[] = {
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of audio frames received */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDIMediaReceiverPerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of audio frames received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroppedAudioFrames_MetaData[] = {
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of audio frames dropped */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDIMediaReceiverPerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of audio frames dropped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetadataFrames_MetaData[] = {
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of metadata frames received */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDIMediaReceiverPerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of metadata frames received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroppedMetadataFrames_MetaData[] = {
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of metadata frames dropped */" },
#endif
		{ "ModuleRelativePath", "Private/Player/NDIMediaReceiverPerformanceData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of metadata frames dropped" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_VideoFrames;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_DroppedVideoFrames;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AudioFrames;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_DroppedAudioFrames;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MetadataFrames;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_DroppedMetadataFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIMediaReceiverPerformanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_VideoFrames = { "VideoFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMediaReceiverPerformanceData, VideoFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoFrames_MetaData), NewProp_VideoFrames_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames = { "DroppedVideoFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMediaReceiverPerformanceData, DroppedVideoFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroppedVideoFrames_MetaData), NewProp_DroppedVideoFrames_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_AudioFrames = { "AudioFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMediaReceiverPerformanceData, AudioFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioFrames_MetaData), NewProp_AudioFrames_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames = { "DroppedAudioFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMediaReceiverPerformanceData, DroppedAudioFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroppedAudioFrames_MetaData), NewProp_DroppedAudioFrames_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_MetadataFrames = { "MetadataFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMediaReceiverPerformanceData, MetadataFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetadataFrames_MetaData), NewProp_MetadataFrames_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames = { "DroppedMetadataFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMediaReceiverPerformanceData, DroppedMetadataFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroppedMetadataFrames_MetaData), NewProp_DroppedMetadataFrames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_VideoFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_DroppedVideoFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_AudioFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_DroppedAudioFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_MetadataFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewProp_DroppedMetadataFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMedia,
	nullptr,
	&NewStructOps,
	"NDIMediaReceiverPerformanceData",
	Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::PropPointers),
	sizeof(FNDIMediaReceiverPerformanceData),
	alignof(FNDIMediaReceiverPerformanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FNDIMediaReceiverPerformanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNDIMediaReceiverPerformanceData.InnerSingleton, Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNDIMediaReceiverPerformanceData.InnerSingleton;
}
// ********** End ScriptStruct FNDIMediaReceiverPerformanceData ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Private_Player_NDIMediaReceiverPerformanceData_h__Script_NDIMedia_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDIMediaReceiverPerformanceData::StaticStruct, Z_Construct_UScriptStruct_FNDIMediaReceiverPerformanceData_Statics::NewStructOps, TEXT("NDIMediaReceiverPerformanceData"), &Z_Registration_Info_UScriptStruct_FNDIMediaReceiverPerformanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIMediaReceiverPerformanceData), 722739082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Private_Player_NDIMediaReceiverPerformanceData_h__Script_NDIMedia_1277010656(TEXT("/Script/NDIMedia"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Private_Player_NDIMediaReceiverPerformanceData_h__Script_NDIMedia_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Private_Player_NDIMediaReceiverPerformanceData_h__Script_NDIMedia_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
