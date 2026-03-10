// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDIMediaDefines.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDIMediaDefines() {}

// ********** Begin Cross Module References ********************************************************
NDIMEDIA_API UEnum* Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth();
UPackage* Z_Construct_UPackage__Script_NDIMedia();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ENDIReceiverBandwidth *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIReceiverBandwidth;
static UEnum* ENDIReceiverBandwidth_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDIReceiverBandwidth.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDIReceiverBandwidth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth, (UObject*)Z_Construct_UPackage__Script_NDIMedia(), TEXT("ENDIReceiverBandwidth"));
	}
	return Z_Registration_Info_UEnum_ENDIReceiverBandwidth.OuterSingleton;
}
template<> NDIMEDIA_API UEnum* StaticEnum<ENDIReceiverBandwidth>()
{
	return ENDIReceiverBandwidth_StaticEnum();
}
struct Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AudioOnly.Comment", "/** Receive metadata, audio */" },
		{ "AudioOnly.DisplayName", "Audio Only" },
		{ "AudioOnly.Name", "ENDIReceiverBandwidth::AudioOnly" },
		{ "AudioOnly.ToolTip", "Receive metadata, audio" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Receiver Bandwidth modes\n*/" },
#endif
		{ "Highest.Comment", "// Receive metadata, audio, video at full resolution.\n" },
		{ "Highest.DisplayName", "Highest" },
		{ "Highest.Name", "ENDIReceiverBandwidth::Highest" },
		{ "Highest.ToolTip", "Receive metadata, audio, video at full resolution." },
		{ "Lowest.Comment", "/** Receive metadata, audio, video at a lower bandwidth and resolution. */" },
		{ "Lowest.DisplayName", "Lowest" },
		{ "Lowest.Name", "ENDIReceiverBandwidth::Lowest" },
		{ "Lowest.ToolTip", "Receive metadata, audio, video at a lower bandwidth and resolution." },
		{ "MetadataOnly.Comment", "/** Receive metadata. */" },
		{ "MetadataOnly.DisplayName", "Metadata Only" },
		{ "MetadataOnly.Name", "ENDIReceiverBandwidth::MetadataOnly" },
		{ "MetadataOnly.ToolTip", "Receive metadata." },
		{ "ModuleRelativePath", "Public/NDIMediaDefines.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Receiver Bandwidth modes" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDIReceiverBandwidth::MetadataOnly", (int64)ENDIReceiverBandwidth::MetadataOnly },
		{ "ENDIReceiverBandwidth::AudioOnly", (int64)ENDIReceiverBandwidth::AudioOnly },
		{ "ENDIReceiverBandwidth::Lowest", (int64)ENDIReceiverBandwidth::Lowest },
		{ "ENDIReceiverBandwidth::Highest", (int64)ENDIReceiverBandwidth::Highest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NDIMedia,
	nullptr,
	"ENDIReceiverBandwidth",
	"ENDIReceiverBandwidth",
	Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth()
{
	if (!Z_Registration_Info_UEnum_ENDIReceiverBandwidth.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIReceiverBandwidth.InnerSingleton, Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDIReceiverBandwidth.InnerSingleton;
}
// ********** End Enum ENDIReceiverBandwidth *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaDefines_h__Script_NDIMedia_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDIReceiverBandwidth_StaticEnum, TEXT("ENDIReceiverBandwidth"), &Z_Registration_Info_UEnum_ENDIReceiverBandwidth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2107172978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaDefines_h__Script_NDIMedia_2279903944(TEXT("/Script/NDIMedia"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaDefines_h__Script_NDIMedia_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaDefines_h__Script_NDIMedia_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
