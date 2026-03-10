// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDIMediaSource.h"
#include "MediaIOCoreDefinitions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDIMediaSource() {}

// ********** Begin Cross Module References ********************************************************
MEDIAIOCORE_API UClass* Z_Construct_UClass_UCaptureCardMediaSource();
MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConfiguration();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaSource();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaSource_NoRegister();
NDIMEDIA_API UEnum* Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth();
UPackage* Z_Construct_UPackage__Script_NDIMedia();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNDIMediaSource **********************************************************
void UNDIMediaSource::StaticRegisterNativesUNDIMediaSource()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNDIMediaSource;
UClass* UNDIMediaSource::GetPrivateStaticClass()
{
	using TClass = UNDIMediaSource;
	if (!Z_Registration_Info_UClass_UNDIMediaSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NDIMediaSource"),
			Z_Registration_Info_UClass_UNDIMediaSource.InnerSingleton,
			StaticRegisterNativesUNDIMediaSource,
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
	return Z_Registration_Info_UClass_UNDIMediaSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UNDIMediaSource_NoRegister()
{
	return UNDIMediaSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNDIMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Media source for NDI streams.\n */" },
#endif
		{ "HideCategories", "Platforms Object Object Object" },
		{ "IncludePath", "NDIMediaSource.h" },
		{ "MediaIOCustomLayout", "NDI" },
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Media source for NDI streams." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaConfiguration_MetaData[] = {
		{ "Category", "NDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The device, port and video settings that correspond to the input. */" },
#endif
		{ "DisplayName", "Configuration" },
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The device, port and video settings that correspond to the input." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[] = {
		{ "Category", "NDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates the current bandwidth mode used for the connection to this source */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the current bandwidth mode used for the connection to this source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncTimecodeToSource_MetaData[] = {
		{ "Category", "NDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Indicates whether the timecode should be synced to the Source Timecode value or engine's.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the timecode should be synced to the Source Timecode value or engine's." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAncillary_MetaData[] = {
		{ "Category", "Ancillary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Capture Ancillary from the NDI source.\n\x09 * It will decrease performance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capture Ancillary from the NDI source.\nIt will decrease performance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumAncillaryFrameBuffer_MetaData[] = {
		{ "Category", "Ancillary" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of ancillary data frames to buffer. */" },
#endif
		{ "EditCondition", "bCaptureAncillary" },
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of ancillary data frames to buffer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAudio_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Capture Audio from the NDI source. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capture Audio from the NDI source." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumAudioFrameBuffer_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of audio frames to buffer. */" },
#endif
		{ "EditCondition", "bCaptureAudio" },
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of audio frames to buffer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureVideo_MetaData[] = {
		{ "Category", "Video" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Capture Video from the NDI source. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capture Video from the NDI source." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumVideoFrameBuffer_MetaData[] = {
		{ "Category", "Video" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of video frames to buffer. */" },
#endif
		{ "EditCondition", "bCaptureVideo" },
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of video frames to buffer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogDropFrame_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Log a warning when there's a drop frame. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Log a warning when there's a drop frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEncodeTimecodeInTexel_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Burn Frame Timecode in the input texture without any frame number clipping.\n\x09 * @Note Only supported with progressive format.\n\x09 */" },
#endif
		{ "DisplayName", "Burn Frame Timecode" },
		{ "ModuleRelativePath", "Public/NDIMediaSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Burn Frame Timecode in the input texture without any frame number clipping.\n@Note Only supported with progressive format." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConfiguration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bandwidth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bandwidth;
	static void NewProp_bSyncTimecodeToSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncTimecodeToSource;
	static void NewProp_bCaptureAncillary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAncillary;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumAncillaryFrameBuffer;
	static void NewProp_bCaptureAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAudio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumAudioFrameBuffer;
	static void NewProp_bCaptureVideo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureVideo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumVideoFrameBuffer;
	static void NewProp_bLogDropFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogDropFrame;
	static void NewProp_bEncodeTimecodeInTexel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncodeTimecodeInTexel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaSource, MediaConfiguration), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaConfiguration_MetaData), NewProp_MediaConfiguration_MetaData) }; // 1213108740
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_Bandwidth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaSource, Bandwidth), Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth_MetaData), NewProp_Bandwidth_MetaData) }; // 2107172978
void Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bSyncTimecodeToSource_SetBit(void* Obj)
{
	((UNDIMediaSource*)Obj)->bSyncTimecodeToSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bSyncTimecodeToSource = { "bSyncTimecodeToSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaSource), &Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bSyncTimecodeToSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncTimecodeToSource_MetaData), NewProp_bSyncTimecodeToSource_MetaData) };
void Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureAncillary_SetBit(void* Obj)
{
	((UNDIMediaSource*)Obj)->bCaptureAncillary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureAncillary = { "bCaptureAncillary", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaSource), &Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureAncillary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureAncillary_MetaData), NewProp_bCaptureAncillary_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_MaxNumAncillaryFrameBuffer = { "MaxNumAncillaryFrameBuffer", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaSource, MaxNumAncillaryFrameBuffer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumAncillaryFrameBuffer_MetaData), NewProp_MaxNumAncillaryFrameBuffer_MetaData) };
void Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureAudio_SetBit(void* Obj)
{
	((UNDIMediaSource*)Obj)->bCaptureAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureAudio = { "bCaptureAudio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaSource), &Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureAudio_MetaData), NewProp_bCaptureAudio_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer = { "MaxNumAudioFrameBuffer", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaSource, MaxNumAudioFrameBuffer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumAudioFrameBuffer_MetaData), NewProp_MaxNumAudioFrameBuffer_MetaData) };
void Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureVideo_SetBit(void* Obj)
{
	((UNDIMediaSource*)Obj)->bCaptureVideo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureVideo = { "bCaptureVideo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaSource), &Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureVideo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureVideo_MetaData), NewProp_bCaptureVideo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer = { "MaxNumVideoFrameBuffer", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaSource, MaxNumVideoFrameBuffer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumVideoFrameBuffer_MetaData), NewProp_MaxNumVideoFrameBuffer_MetaData) };
void Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bLogDropFrame_SetBit(void* Obj)
{
	((UNDIMediaSource*)Obj)->bLogDropFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bLogDropFrame = { "bLogDropFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaSource), &Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bLogDropFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogDropFrame_MetaData), NewProp_bLogDropFrame_MetaData) };
void Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_SetBit(void* Obj)
{
	((UNDIMediaSource*)Obj)->bEncodeTimecodeInTexel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bEncodeTimecodeInTexel = { "bEncodeTimecodeInTexel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaSource), &Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEncodeTimecodeInTexel_MetaData), NewProp_bEncodeTimecodeInTexel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_MediaConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_Bandwidth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_Bandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bSyncTimecodeToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureAncillary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_MaxNumAncillaryFrameBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bCaptureVideo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bLogDropFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaSource_Statics::NewProp_bEncodeTimecodeInTexel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIMediaSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCaptureCardMediaSource,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSource_Statics::ClassParams = {
	&UNDIMediaSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDIMediaSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSource_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaSource()
{
	if (!Z_Registration_Info_UClass_UNDIMediaSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaSource.OuterSingleton, Z_Construct_UClass_UNDIMediaSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSource);
UNDIMediaSource::~UNDIMediaSource() {}
// ********** End Class UNDIMediaSource ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaSource_h__Script_NDIMedia_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaSource, UNDIMediaSource::StaticClass, TEXT("UNDIMediaSource"), &Z_Registration_Info_UClass_UNDIMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaSource), 3745893024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaSource_h__Script_NDIMedia_16768954(TEXT("/Script/NDIMedia"),
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaSource_h__Script_NDIMedia_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaSource_h__Script_NDIMedia_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
