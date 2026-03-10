// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition_NDIMediaOutput.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetDefinition_NDIMediaOutput() {}

// ********** Begin Cross Module References ********************************************************
NDIMEDIAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NDIMediaOutput();
NDIMEDIAEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_NDIMediaOutput_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
UPackage* Z_Construct_UPackage__Script_NDIMediaEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetDefinition_NDIMediaOutput ******************************************
void UAssetDefinition_NDIMediaOutput::StaticRegisterNativesUAssetDefinition_NDIMediaOutput()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetDefinition_NDIMediaOutput;
UClass* UAssetDefinition_NDIMediaOutput::GetPrivateStaticClass()
{
	using TClass = UAssetDefinition_NDIMediaOutput;
	if (!Z_Registration_Info_UClass_UAssetDefinition_NDIMediaOutput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetDefinition_NDIMediaOutput"),
			Z_Registration_Info_UClass_UAssetDefinition_NDIMediaOutput.InnerSingleton,
			StaticRegisterNativesUAssetDefinition_NDIMediaOutput,
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
	return Z_Registration_Info_UClass_UAssetDefinition_NDIMediaOutput.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetDefinition_NDIMediaOutput_NoRegister()
{
	return UAssetDefinition_NDIMediaOutput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetDefinition_NDIMediaOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_NDIMediaOutput.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_NDIMediaOutput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_NDIMediaOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetDefinition_NDIMediaOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMediaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_NDIMediaOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_NDIMediaOutput_Statics::ClassParams = {
	&UAssetDefinition_NDIMediaOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_NDIMediaOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_NDIMediaOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetDefinition_NDIMediaOutput()
{
	if (!Z_Registration_Info_UClass_UAssetDefinition_NDIMediaOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_NDIMediaOutput.OuterSingleton, Z_Construct_UClass_UAssetDefinition_NDIMediaOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetDefinition_NDIMediaOutput.OuterSingleton;
}
UAssetDefinition_NDIMediaOutput::UAssetDefinition_NDIMediaOutput() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_NDIMediaOutput);
UAssetDefinition_NDIMediaOutput::~UAssetDefinition_NDIMediaOutput() {}
// ********** End Class UAssetDefinition_NDIMediaOutput ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_AssetDefinition_NDIMediaOutput_h__Script_NDIMediaEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_NDIMediaOutput, UAssetDefinition_NDIMediaOutput::StaticClass, TEXT("UAssetDefinition_NDIMediaOutput"), &Z_Registration_Info_UClass_UAssetDefinition_NDIMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_NDIMediaOutput), 1043896742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_AssetDefinition_NDIMediaOutput_h__Script_NDIMediaEditor_3169250743(TEXT("/Script/NDIMediaEditor"),
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_AssetDefinition_NDIMediaOutput_h__Script_NDIMediaEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_AssetDefinition_NDIMediaOutput_h__Script_NDIMediaEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
