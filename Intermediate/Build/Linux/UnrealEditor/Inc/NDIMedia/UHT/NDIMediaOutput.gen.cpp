// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDIMediaOutput.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDIMediaOutput() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaOutput();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaOutput_NoRegister();
NDIMEDIA_API UEnum* Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate();
NDIMEDIA_API UEnum* Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat();
UPackage* Z_Construct_UPackage__Script_NDIMedia();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ENDIMediaOutputPixelFormat ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIMediaOutputPixelFormat;
static UEnum* ENDIMediaOutputPixelFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDIMediaOutputPixelFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDIMediaOutputPixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat, (UObject*)Z_Construct_UPackage__Script_NDIMedia(), TEXT("ENDIMediaOutputPixelFormat"));
	}
	return Z_Registration_Info_UEnum_ENDIMediaOutputPixelFormat.OuterSingleton;
}
template<> NDIMEDIA_API UEnum* StaticEnum<ENDIMediaOutputPixelFormat>()
{
	return ENDIMediaOutputPixelFormat_StaticEnum();
}
struct Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "B8G8R8A8.DisplayName", "8bit RGBA" },
		{ "B8G8R8A8.Name", "ENDIMediaOutputPixelFormat::B8G8R8A8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Texture format supported by UNDIMediaOutput. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture format supported by UNDIMediaOutput." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDIMediaOutputPixelFormat::B8G8R8A8", (int64)ENDIMediaOutputPixelFormat::B8G8R8A8 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NDIMedia,
	nullptr,
	"ENDIMediaOutputPixelFormat",
	"ENDIMediaOutputPixelFormat",
	Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat()
{
	if (!Z_Registration_Info_UEnum_ENDIMediaOutputPixelFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIMediaOutputPixelFormat.InnerSingleton, Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDIMediaOutputPixelFormat.InnerSingleton;
}
// ********** End Enum ENDIMediaOutputPixelFormat **************************************************

// ********** Begin Enum ENDIMediaOutputAudioSampleRate ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIMediaOutputAudioSampleRate;
static UEnum* ENDIMediaOutputAudioSampleRate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDIMediaOutputAudioSampleRate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDIMediaOutputAudioSampleRate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate, (UObject*)Z_Construct_UPackage__Script_NDIMedia(), TEXT("ENDIMediaOutputAudioSampleRate"));
	}
	return Z_Registration_Info_UEnum_ENDIMediaOutputAudioSampleRate.OuterSingleton;
}
template<> NDIMEDIA_API UEnum* StaticEnum<ENDIMediaOutputAudioSampleRate>()
{
	return ENDIMediaOutputAudioSampleRate_StaticEnum();
}
struct Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * NDI Audio supports any sample rate.\n * The standard for live production is 48 kHz.\n */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
		{ "SR_176_4k.DisplayName", "176.4 kHz" },
		{ "SR_176_4k.Name", "ENDIMediaOutputAudioSampleRate::SR_176_4k" },
		{ "SR_192k.DisplayName", "192 kHz" },
		{ "SR_192k.Name", "ENDIMediaOutputAudioSampleRate::SR_192k" },
		{ "SR_44_1k.DisplayName", "44.1 kHz" },
		{ "SR_44_1k.Name", "ENDIMediaOutputAudioSampleRate::SR_44_1k" },
		{ "SR_48k.DisplayName", "48 kHz" },
		{ "SR_48k.Name", "ENDIMediaOutputAudioSampleRate::SR_48k" },
		{ "SR_88_2k.DisplayName", "88.2 kHz" },
		{ "SR_88_2k.Name", "ENDIMediaOutputAudioSampleRate::SR_88_2k" },
		{ "SR_96k.DisplayName", "96 kHz" },
		{ "SR_96k.Name", "ENDIMediaOutputAudioSampleRate::SR_96k" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NDI Audio supports any sample rate.\nThe standard for live production is 48 kHz." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDIMediaOutputAudioSampleRate::SR_44_1k", (int64)ENDIMediaOutputAudioSampleRate::SR_44_1k },
		{ "ENDIMediaOutputAudioSampleRate::SR_48k", (int64)ENDIMediaOutputAudioSampleRate::SR_48k },
		{ "ENDIMediaOutputAudioSampleRate::SR_88_2k", (int64)ENDIMediaOutputAudioSampleRate::SR_88_2k },
		{ "ENDIMediaOutputAudioSampleRate::SR_96k", (int64)ENDIMediaOutputAudioSampleRate::SR_96k },
		{ "ENDIMediaOutputAudioSampleRate::SR_176_4k", (int64)ENDIMediaOutputAudioSampleRate::SR_176_4k },
		{ "ENDIMediaOutputAudioSampleRate::SR_192k", (int64)ENDIMediaOutputAudioSampleRate::SR_192k },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NDIMedia,
	nullptr,
	"ENDIMediaOutputAudioSampleRate",
	"ENDIMediaOutputAudioSampleRate",
	Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate()
{
	if (!Z_Registration_Info_UEnum_ENDIMediaOutputAudioSampleRate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIMediaOutputAudioSampleRate.InnerSingleton, Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDIMediaOutputAudioSampleRate.InnerSingleton;
}
// ********** End Enum ENDIMediaOutputAudioSampleRate **********************************************

// ********** Begin Class UNDIMediaOutput **********************************************************
void UNDIMediaOutput::StaticRegisterNativesUNDIMediaOutput()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNDIMediaOutput;
UClass* UNDIMediaOutput::GetPrivateStaticClass()
{
	using TClass = UNDIMediaOutput;
	if (!Z_Registration_Info_UClass_UNDIMediaOutput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NDIMediaOutput"),
			Z_Registration_Info_UClass_UNDIMediaOutput.InnerSingleton,
			StaticRegisterNativesUNDIMediaOutput,
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
	return Z_Registration_Info_UClass_UNDIMediaOutput.InnerSingleton;
}
UClass* Z_Construct_UClass_UNDIMediaOutput_NoRegister()
{
	return UNDIMediaOutput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNDIMediaOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Output information for a NDI media capture.\n * @note\x09'Frame Buffer Pixel Format' must be set to RGBA8\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "NDIMediaOutput.h" },
		{ "MediaIOCustomLayout", "NDI" },
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Output information for a NDI media capture.\n@note       'Frame Buffer Pixel Format' must be set to RGBA8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
		{ "Category", "Media" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Describes a user-friendly name of the output stream to differentiate from other output streams on the current\n\x09 * machine */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes a user-friendly name of the output stream to differentiate from other output streams on the current\nmachine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Media" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Defines the group this source is part of. If left empty, the source is \"ungrouped\" and will\n\x09 * fall in the \"Public\" group by default in NDI Access Manager or NDI Bridge.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the group this source is part of. If left empty, the source is \"ungrouped\" and will\nfall in the \"Public\" group by default in NDI Access Manager or NDI Bridge." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "Media" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to output the fill or the fill and key. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to output the fill or the fill and key." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertKeyOutput_MetaData[] = {
		{ "Category", "Media" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Options on how to save the images. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Options on how to save the images." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDesiredSize_MetaData[] = {
		{ "Category", "Media" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use the default back buffer size or specify a specific size to capture. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the default back buffer size or specify a specific size to capture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSize_MetaData[] = {
		{ "Category", "Media" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use the default back buffer size or specify a specific size to capture. */" },
#endif
		{ "EditCondition", "bOverrideDesiredSize" },
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the default back buffer size or specify a specific size to capture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePixelFormat_MetaData[] = {
		{ "Category", "Media" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use the default back buffer pixel format or specify a specific the pixel format to capture. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the default back buffer pixel format or specify a specific the pixel format to capture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredPixelFormat_MetaData[] = {
		{ "Category", "Media" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use the default back buffer pixel format or specify a specific the pixel format to capture. */" },
#endif
		{ "EditCondition", "bOverridePixelFormat" },
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the default back buffer pixel format or specify a specific the pixel format to capture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Media" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Represents the desired number of frames (per second) for video to be sent over NDI */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the desired number of frames (per second) for video to be sent over NDI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputAudio_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to capture and output audio from the engine. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to capture and output audio from the engine." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBufferSize_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Size of the buffer that holds rendered audio samples, a bigger buffer will produce a more stable output signal but will introduce more delay. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the buffer that holds rendered audio samples, a bigger buffer will produce a more stable output signal but will introduce more delay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOutputAudioChannels_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * An individual NDI stream can transport multiple audio channels.\n\x09 * The number of channels supported depends on the codec used.\n\x09 * PCM allows unlimited channels; in NDI, AAC can support 2 channels,\n\x09 * while Opus can support up to 255 channels.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An individual NDI stream can transport multiple audio channels.\nThe number of channels supported depends on the codec used.\nPCM allows unlimited channels; in NDI, AAC can support 2 channels,\nwhile Opus can support up to 255 channels." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSampleRate_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * NDI Audio supports any sample rate.\n\x09 * The standard for live production is 48 kHz.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NDI Audio supports any sample rate.\nThe standard for live production is 48 kHz." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendAudioOnlyIfReceiversConnected_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * As an optimization, the audio will not be converted and sent if there are no connected receivers.\n\x09 * Setting this to false will result in audio being converted and sent regardless of receivers.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "As an optimization, the audio will not be converted and sent if there are no connected receivers.\nSetting this to false will result in audio being converted and sent regardless of receivers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForSyncEvent_MetaData[] = {
		{ "Category", "Synchronization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Wait for the NDI source sync event.\n\x09 * Caution: this will be blocking in the rendering thread and may cause performance issues in the engine.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaOutput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait for the NDI source sync event.\nCaution: this will be blocking in the rendering thread and may cause performance issues in the engine." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static void NewProp_bInvertKeyOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertKeyOutput;
	static void NewProp_bOverrideDesiredSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDesiredSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSize;
	static void NewProp_bOverridePixelFormat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePixelFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredPixelFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredPixelFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static void NewProp_bOutputAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputAudio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioBufferSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOutputAudioChannels;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioSampleRate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSampleRate;
	static void NewProp_bSendAudioOnlyIfReceiversConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendAudioOnlyIfReceiversConnected;
	static void NewProp_bWaitForSyncEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForSyncEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaOutput, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceName_MetaData), NewProp_SourceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaOutput, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaOutput, OutputType), Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 2884655362
void Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bInvertKeyOutput_SetBit(void* Obj)
{
	((UNDIMediaOutput*)Obj)->bInvertKeyOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bInvertKeyOutput = { "bInvertKeyOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaOutput), &Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bInvertKeyOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertKeyOutput_MetaData), NewProp_bInvertKeyOutput_MetaData) };
void Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOverrideDesiredSize_SetBit(void* Obj)
{
	((UNDIMediaOutput*)Obj)->bOverrideDesiredSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOverrideDesiredSize = { "bOverrideDesiredSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaOutput), &Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOverrideDesiredSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDesiredSize_MetaData), NewProp_bOverrideDesiredSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_DesiredSize = { "DesiredSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaOutput, DesiredSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredSize_MetaData), NewProp_DesiredSize_MetaData) };
void Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOverridePixelFormat_SetBit(void* Obj)
{
	((UNDIMediaOutput*)Obj)->bOverridePixelFormat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOverridePixelFormat = { "bOverridePixelFormat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaOutput), &Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOverridePixelFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePixelFormat_MetaData), NewProp_bOverridePixelFormat_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_DesiredPixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_DesiredPixelFormat = { "DesiredPixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaOutput, DesiredPixelFormat), Z_Construct_UEnum_NDIMedia_ENDIMediaOutputPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredPixelFormat_MetaData), NewProp_DesiredPixelFormat_MetaData) }; // 364284848
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaOutput, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
void Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOutputAudio_SetBit(void* Obj)
{
	((UNDIMediaOutput*)Obj)->bOutputAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOutputAudio = { "bOutputAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaOutput), &Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOutputAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputAudio_MetaData), NewProp_bOutputAudio_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_AudioBufferSize = { "AudioBufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaOutput, AudioBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBufferSize_MetaData), NewProp_AudioBufferSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_NumOutputAudioChannels = { "NumOutputAudioChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaOutput, NumOutputAudioChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOutputAudioChannels_MetaData), NewProp_NumOutputAudioChannels_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_AudioSampleRate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaOutput, AudioSampleRate), Z_Construct_UEnum_NDIMedia_ENDIMediaOutputAudioSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSampleRate_MetaData), NewProp_AudioSampleRate_MetaData) }; // 130211568
void Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bSendAudioOnlyIfReceiversConnected_SetBit(void* Obj)
{
	((UNDIMediaOutput*)Obj)->bSendAudioOnlyIfReceiversConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bSendAudioOnlyIfReceiversConnected = { "bSendAudioOnlyIfReceiversConnected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaOutput), &Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bSendAudioOnlyIfReceiversConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendAudioOnlyIfReceiversConnected_MetaData), NewProp_bSendAudioOnlyIfReceiversConnected_MetaData) };
void Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bWaitForSyncEvent_SetBit(void* Obj)
{
	((UNDIMediaOutput*)Obj)->bWaitForSyncEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bWaitForSyncEvent = { "bWaitForSyncEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaOutput), &Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bWaitForSyncEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForSyncEvent_MetaData), NewProp_bWaitForSyncEvent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIMediaOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bInvertKeyOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOverrideDesiredSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_DesiredSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOverridePixelFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_DesiredPixelFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_DesiredPixelFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bOutputAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_AudioBufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_NumOutputAudioChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_AudioSampleRate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_AudioSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bSendAudioOnlyIfReceiversConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaOutput_Statics::NewProp_bWaitForSyncEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIMediaOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMediaOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaOutput_Statics::ClassParams = {
	&UNDIMediaOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDIMediaOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaOutput_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaOutput()
{
	if (!Z_Registration_Info_UClass_UNDIMediaOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaOutput.OuterSingleton, Z_Construct_UClass_UNDIMediaOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaOutput.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaOutput);
UNDIMediaOutput::~UNDIMediaOutput() {}
// ********** End Class UNDIMediaOutput ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h__Script_NDIMedia_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDIMediaOutputPixelFormat_StaticEnum, TEXT("ENDIMediaOutputPixelFormat"), &Z_Registration_Info_UEnum_ENDIMediaOutputPixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 364284848U) },
		{ ENDIMediaOutputAudioSampleRate_StaticEnum, TEXT("ENDIMediaOutputAudioSampleRate"), &Z_Registration_Info_UEnum_ENDIMediaOutputAudioSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 130211568U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaOutput, UNDIMediaOutput::StaticClass, TEXT("UNDIMediaOutput"), &Z_Registration_Info_UClass_UNDIMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaOutput), 135639330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h__Script_NDIMedia_1091347815(TEXT("/Script/NDIMedia"),
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h__Script_NDIMedia_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h__Script_NDIMedia_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h__Script_NDIMedia_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaOutput_h__Script_NDIMedia_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
