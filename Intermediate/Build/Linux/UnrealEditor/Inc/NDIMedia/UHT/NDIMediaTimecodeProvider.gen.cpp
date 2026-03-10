// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDIMediaTimecodeProvider.h"
#include "MediaIOCoreDefinitions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDIMediaTimecodeProvider() {}

// ********** Begin Cross Module References ********************************************************
MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaTimecodeProvider();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaTimecodeProvider_NoRegister();
NDIMEDIA_API UEnum* Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider();
UPackage* Z_Construct_UPackage__Script_NDIMedia();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNDIMediaTimecodeProvider ************************************************
void UNDIMediaTimecodeProvider::StaticRegisterNativesUNDIMediaTimecodeProvider()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNDIMediaTimecodeProvider;
UClass* UNDIMediaTimecodeProvider::GetPrivateStaticClass()
{
	using TClass = UNDIMediaTimecodeProvider;
	if (!Z_Registration_Info_UClass_UNDIMediaTimecodeProvider.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NDIMediaTimecodeProvider"),
			Z_Registration_Info_UClass_UNDIMediaTimecodeProvider.InnerSingleton,
			StaticRegisterNativesUNDIMediaTimecodeProvider,
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
	return Z_Registration_Info_UClass_UNDIMediaTimecodeProvider.InnerSingleton;
}
UClass* Z_Construct_UClass_UNDIMediaTimecodeProvider_NoRegister()
{
	return UNDIMediaTimecodeProvider::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Timecode provider from an NDI source \n */" },
#endif
		{ "DisplayName", "NDI Timecode Provider" },
		{ "IncludePath", "NDIMediaTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "MediaIOCustomLayout", "NDI" },
		{ "ModuleRelativePath", "Public/NDIMediaTimecodeProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timecode provider from an NDI source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeConfiguration_MetaData[] = {
		{ "Category", "Timecode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Use the time code embedded in the video input stream. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaTimecodeProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the time code embedded in the video input stream." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[] = {
		{ "Category", "NDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates the current bandwidth mode used for the connection to this source */" },
#endif
		{ "ModuleRelativePath", "Public/NDIMediaTimecodeProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the current bandwidth mode used for the connection to this source" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeConfiguration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bandwidth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bandwidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaTimecodeProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::NewProp_TimecodeConfiguration = { "TimecodeConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaTimecodeProvider, TimecodeConfiguration), Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimecodeConfiguration_MetaData), NewProp_TimecodeConfiguration_MetaData) }; // 2783018393
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::NewProp_Bandwidth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaTimecodeProvider, Bandwidth), Z_Construct_UEnum_NDIMedia_ENDIReceiverBandwidth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth_MetaData), NewProp_Bandwidth_MetaData) }; // 2107172978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::NewProp_TimecodeConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::NewProp_Bandwidth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::NewProp_Bandwidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGenlockedTimecodeProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::ClassParams = {
	&UNDIMediaTimecodeProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaTimecodeProvider()
{
	if (!Z_Registration_Info_UClass_UNDIMediaTimecodeProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaTimecodeProvider.OuterSingleton, Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaTimecodeProvider.OuterSingleton;
}
UNDIMediaTimecodeProvider::UNDIMediaTimecodeProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaTimecodeProvider);
UNDIMediaTimecodeProvider::~UNDIMediaTimecodeProvider() {}
// ********** End Class UNDIMediaTimecodeProvider **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h__Script_NDIMedia_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaTimecodeProvider, UNDIMediaTimecodeProvider::StaticClass, TEXT("UNDIMediaTimecodeProvider"), &Z_Registration_Info_UClass_UNDIMediaTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaTimecodeProvider), 3648714126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h__Script_NDIMedia_460831918(TEXT("/Script/NDIMedia"),
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h__Script_NDIMedia_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h__Script_NDIMedia_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
