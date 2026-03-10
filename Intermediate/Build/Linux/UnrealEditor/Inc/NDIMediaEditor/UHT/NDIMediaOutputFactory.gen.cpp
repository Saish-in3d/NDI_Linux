// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDIMediaOutputFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNDIMediaOutputFactory() {}

// ********** Begin Cross Module References ********************************************************
NDIMEDIAEDITOR_API UClass* Z_Construct_UClass_UNDIMediaOutputFactory();
NDIMEDIAEDITOR_API UClass* Z_Construct_UClass_UNDIMediaOutputFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NDIMediaEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNDIMediaOutputFactory ***************************************************
void UNDIMediaOutputFactory::StaticRegisterNativesUNDIMediaOutputFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNDIMediaOutputFactory;
UClass* UNDIMediaOutputFactory::GetPrivateStaticClass()
{
	using TClass = UNDIMediaOutputFactory;
	if (!Z_Registration_Info_UClass_UNDIMediaOutputFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NDIMediaOutputFactory"),
			Z_Registration_Info_UClass_UNDIMediaOutputFactory.InnerSingleton,
			StaticRegisterNativesUNDIMediaOutputFactory,
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
	return Z_Registration_Info_UClass_UNDIMediaOutputFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UNDIMediaOutputFactory_NoRegister()
{
	return UNDIMediaOutputFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNDIMediaOutputFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements a factory for UNDIMediaOutputFactory objects.\n */" },
#endif
		{ "IncludePath", "NDIMediaOutputFactory.h" },
		{ "ModuleRelativePath", "Private/NDIMediaOutputFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements a factory for UNDIMediaOutputFactory objects." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaOutputFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNDIMediaOutputFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIMediaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaOutputFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaOutputFactory_Statics::ClassParams = {
	&UNDIMediaOutputFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaOutputFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaOutputFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaOutputFactory()
{
	if (!Z_Registration_Info_UClass_UNDIMediaOutputFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaOutputFactory.OuterSingleton, Z_Construct_UClass_UNDIMediaOutputFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaOutputFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaOutputFactory);
UNDIMediaOutputFactory::~UNDIMediaOutputFactory() {}
// ********** End Class UNDIMediaOutputFactory *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaOutputFactory_h__Script_NDIMediaEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaOutputFactory, UNDIMediaOutputFactory::StaticClass, TEXT("UNDIMediaOutputFactory"), &Z_Registration_Info_UClass_UNDIMediaOutputFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaOutputFactory), 3833370569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaOutputFactory_h__Script_NDIMediaEditor_3711144229(TEXT("/Script/NDIMediaEditor"),
	Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaOutputFactory_h__Script_NDIMediaEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_unreal_projects_FieldPlotLinux_Test_FieldPlotLinux_Test_Plugins_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaOutputFactory_h__Script_NDIMediaEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
