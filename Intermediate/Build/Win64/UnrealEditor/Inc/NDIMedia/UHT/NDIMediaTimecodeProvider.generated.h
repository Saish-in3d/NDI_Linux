// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NDIMediaTimecodeProvider.h"

#ifdef NDIMEDIA_NDIMediaTimecodeProvider_generated_h
#error "NDIMediaTimecodeProvider.generated.h already included, missing '#pragma once' in NDIMediaTimecodeProvider.h"
#endif
#define NDIMEDIA_NDIMediaTimecodeProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNDIMediaTimecodeProvider ************************************************
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaTimecodeProvider_NoRegister();

#define FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaTimecodeProvider(); \
	friend struct Z_Construct_UClass_UNDIMediaTimecodeProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaTimecodeProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UNDIMediaTimecodeProvider, UGenlockedTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIMedia"), Z_Construct_UClass_UNDIMediaTimecodeProvider_NoRegister) \
	DECLARE_SERIALIZER(UNDIMediaTimecodeProvider)


#define FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NDIMEDIA_API UNDIMediaTimecodeProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNDIMediaTimecodeProvider(UNDIMediaTimecodeProvider&&) = delete; \
	UNDIMediaTimecodeProvider(const UNDIMediaTimecodeProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NDIMEDIA_API, UNDIMediaTimecodeProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaTimecodeProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaTimecodeProvider) \
	NDIMEDIA_API virtual ~UNDIMediaTimecodeProvider();


#define FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h_16_PROLOG
#define FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h_19_INCLASS_NO_PURE_DECLS \
	FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNDIMediaTimecodeProvider;

// ********** End Class UNDIMediaTimecodeProvider **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FieldPlotLinux_Test_Plugins_NDI_Linux_Source_NDIMedia_Public_NDIMediaTimecodeProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
