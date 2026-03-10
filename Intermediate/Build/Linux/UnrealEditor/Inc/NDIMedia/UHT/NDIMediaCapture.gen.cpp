// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDIMediaCapture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDIMediaCapture() {}

// ********** Begin Cross Module References ********************************************************
MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaCapture();
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaCapture_NoRegister();
UPackage* Z_Construct_UPackage__Script_NDIMedia();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNDIMediaCapture *********************************************************
void UNDIMediaCapture::StaticRegisterNativesUNDIMediaCapture()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNDIMediaCapture;
UClass* UNDIMediaCapture::GetPrivateStaticClass()
{
	using TClass = UNDIMediaCapture;
	if (!Z_Registration_Info_UClass_UNDIMediaCapture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NDIMediaCapture"),
			Z_Registration_Info_UClass_UNDIMediaCapture.InnerSingleton,
			StaticRegisterNativesUNDIMediaCapture,
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
	return Z_Registration_Info_UClass_UNDIMediaCapture.InnerSingleton;
}
UClass* Z_Construct_UClass_UNDIMediaCapture_NoRegister()
{
	return UNDIMediaCapture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNDIMediaCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "NDIMediaCapture.h" },
		{ "ModuleRelativePath", "Public/NDIMediaCapture.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNDIMediaCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMediaCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaCapture_Statics::ClassParams = {
	&UNDIMediaCapture::StaticClass,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaCapture()
{
	if (!Z_Registration_Info_UClass_UNDIMediaCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaCapture.OuterSingleton, Z_Construct_UClass_UNDIMediaCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaCapture.OuterSingleton;
}
UNDIMediaCapture::UNDIMediaCapture() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaCapture);
// ********** End Class UNDIMediaCapture ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h__Script_NDIMedia_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaCapture, UNDIMediaCapture::StaticClass, TEXT("UNDIMediaCapture"), &Z_Registration_Info_UClass_UNDIMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaCapture), 2889017544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h__Script_NDIMedia_371302408(TEXT("/Script/NDIMedia"),
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h__Script_NDIMedia_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h__Script_NDIMedia_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
