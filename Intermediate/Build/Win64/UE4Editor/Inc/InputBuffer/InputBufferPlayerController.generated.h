// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTBUFFER_InputBufferPlayerController_generated_h
#error "InputBufferPlayerController.generated.h already included, missing '#pragma once' in InputBufferPlayerController.h"
#endif
#define INPUTBUFFER_InputBufferPlayerController_generated_h

#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_RPC_WRAPPERS \
	virtual FName TranslateInputEvent_Implementation(FName Event); \
	virtual void PostBufferInput_Implementation(); \
 \
	DECLARE_FUNCTION(execTranslateInputEvent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->TranslateInputEvent_Implementation(Z_Param_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostBufferInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostBufferInput_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FName TranslateInputEvent_Implementation(FName Event); \
	virtual void PostBufferInput_Implementation(); \
 \
	DECLARE_FUNCTION(execTranslateInputEvent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->TranslateInputEvent_Implementation(Z_Param_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostBufferInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostBufferInput_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_EVENT_PARMS \
	struct InputBufferPlayerController_eventTranslateInputEvent_Parms \
	{ \
		FName Event; \
		FName ReturnValue; \
	};


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_CALLBACK_WRAPPERS
#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInputBufferPlayerController(); \
	friend INPUTBUFFER_API class UClass* Z_Construct_UClass_AInputBufferPlayerController(); \
public: \
	DECLARE_CLASS(AInputBufferPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(AInputBufferPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAInputBufferPlayerController(); \
	friend INPUTBUFFER_API class UClass* Z_Construct_UClass_AInputBufferPlayerController(); \
public: \
	DECLARE_CLASS(AInputBufferPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(AInputBufferPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInputBufferPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInputBufferPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInputBufferPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInputBufferPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInputBufferPlayerController(AInputBufferPlayerController&&); \
	NO_API AInputBufferPlayerController(const AInputBufferPlayerController&); \
public:


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInputBufferPlayerController(AInputBufferPlayerController&&); \
	NO_API AInputBufferPlayerController(const AInputBufferPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInputBufferPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInputBufferPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInputBufferPlayerController)


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_16_PROLOG \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_EVENT_PARMS


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_RPC_WRAPPERS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_INCLASS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
