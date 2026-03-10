// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NDIMediaCapture.h"

#ifdef NDIMEDIA_NDIMediaCapture_generated_h
#error "NDIMediaCapture.generated.h already included, missing '#pragma once' in NDIMediaCapture.h"
#endif
#define NDIMEDIA_NDIMediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNDIMediaCapture *********************************************************
NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaCapture_NoRegister();

#define FID_Engine_Plugins_Media_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaCapture(); \
	friend struct Z_Construct_UClass_UNDIMediaCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NDIMEDIA_API UClass* Z_Construct_UClass_UNDIMediaCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UNDIMediaCapture, UMediaCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIMedia"), Z_Construct_UClass_UNDIMediaCapture_NoRegister) \
	DECLARE_SERIALIZER(UNDIMediaCapture)


#define FID_Engine_Plugins_Media_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaCapture(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNDIMediaCapture(UNDIMediaCapture&&) = delete; \
	UNDIMediaCapture(const UNDIMediaCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNDIMediaCapture)


#define FID_Engine_Plugins_Media_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h_13_PROLOG
#define FID_Engine_Plugins_Media_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNDIMediaCapture;

// ********** End Class UNDIMediaCapture ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_NDIMedia_Source_NDIMedia_Public_NDIMediaCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
