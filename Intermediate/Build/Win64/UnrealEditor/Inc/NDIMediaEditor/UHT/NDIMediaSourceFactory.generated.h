// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NDIMediaSourceFactory.h"

#ifdef NDIMEDIAEDITOR_NDIMediaSourceFactory_generated_h
#error "NDIMediaSourceFactory.generated.h already included, missing '#pragma once' in NDIMediaSourceFactory.h"
#endif
#define NDIMEDIAEDITOR_NDIMediaSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNDIMediaSourceFactory ***************************************************
NDIMEDIAEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSourceFactory_NoRegister();

#define FID_Engine_Plugins_Media_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaSourceFactory(); \
	friend struct Z_Construct_UClass_UNDIMediaSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NDIMEDIAEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UNDIMediaSourceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIMediaEditor"), Z_Construct_UClass_UNDIMediaSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(UNDIMediaSourceFactory)


#define FID_Engine_Plugins_Media_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNDIMediaSourceFactory(UNDIMediaSourceFactory&&) = delete; \
	UNDIMediaSourceFactory(const UNDIMediaSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaSourceFactory) \
	NO_API virtual ~UNDIMediaSourceFactory();


#define FID_Engine_Plugins_Media_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h_11_PROLOG
#define FID_Engine_Plugins_Media_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNDIMediaSourceFactory;

// ********** End Class UNDIMediaSourceFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_NDIMedia_Source_NDIMediaEditor_Private_NDIMediaSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
