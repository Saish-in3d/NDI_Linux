// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDIMediaSourceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDIMediaSourceFactory() {}

// ********** Begin Cross Module References ********************************************************
NDIMEDIAEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSourceFactory();
NDIMEDIAEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSourceFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NDIMediaEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNDIMediaSourceFactory ***************************************************
void UNDIMediaSourceFactory::StaticRegisterNativesUNDIMediaSourceFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNDIMediaSourceFactory;
UClass* UNDIMediaSourceFactory::GetPrivateStaticClass()
{
	using TClass = UNDIMediaSourceFactory;
	if (!Z_Registration_Info_UClass_UNDIMediaSourceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NDIMediaSourceFactory"),
			Z_Registration_Info_UClass_UNDIMediaSourceFactory.InnerSingleton,
			StaticRegisterNativesUNDIMediaSourceFactory,
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
	return Z_Registration_Info_UClass_UNDIMediaSourceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UNDIMediaSourceFactory_NoRegister()
{
	return UNDIMediaSourceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNDIMediaSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements a factory for UNDIMediaSource objects.\n */" },
#endif
		{ "IncludePath", "NDIMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/NDIMediaSourceFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements a factory for UNDIMediaSource objects." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNDIMediaSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMediaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSourceFactory_Statics::ClassParams = {
	&UNDIMediaSourceFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaSourceFactory()
{
	if (!Z_Registration_Info_UClass_UNDIMediaSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UNDIMediaSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaSourceFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSourceFactory);
UNDIMediaSourceFactory::~UNDIMediaSourceFactory() {}
// ********** End Class UNDIMediaSourceFactory *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h__Script_NDIMediaEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaSourceFactory, UNDIMediaSourceFactory::StaticClass, TEXT("UNDIMediaSourceFactory"), &Z_Registration_Info_UClass_UNDIMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaSourceFactory), 1254153848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h__Script_NDIMediaEditor_105133057(TEXT("/Script/NDIMediaEditor"),
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h__Script_NDIMediaEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h__Script_NDIMediaEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
