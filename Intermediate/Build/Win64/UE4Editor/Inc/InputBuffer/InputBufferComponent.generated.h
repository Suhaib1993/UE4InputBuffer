// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputCommand;
struct FInputHistoryRecord;
#ifdef INPUTBUFFER_InputBufferComponent_generated_h
#error "InputBufferComponent.generated.h already included, missing '#pragma once' in InputBufferComponent.h"
#endif
#define INPUTBUFFER_InputBufferComponent_generated_h

#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_61_GENERATED_BODY \
	friend INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping(); \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_23_GENERATED_BODY \
	friend INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventSetup(); \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMatchCommand) \
	{ \
		P_GET_OBJECT(UInputCommand,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->MatchCommand(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventsToMatch); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventsToIgnore); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bSkipEmptyTrail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->MatchEvents(Z_Param_Out_EventsToMatch,Z_Param_Out_EventsToIgnore,Z_Param_TimeLimit,Z_Param_bSkipEmptyTrail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHistoryRecords) \
	{ \
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_Records); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetHistoryRecords(Z_Param_Out_Records); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHistoryRecords) \
	{ \
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_Records); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bIncludeInvalidRecords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetHistoryRecords(Z_Param_Out_Records,Z_Param_TimeLimit,Z_Param_bIncludeInvalidRecords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_Events); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bSkipEmptyTrail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetLastEvents(Z_Param_Out_Events,Z_Param_TimeLimit,Z_Param_bSkipEmptyTrail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_Events); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCurrentEvents(Z_Param_Out_Events); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxRecords); \
		P_GET_UBOOL(Z_Param_bIncludeInvalidRecords); \
		P_GET_UBOOL(Z_Param_bReverseChronological); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->Print(Z_Param_MaxRecords,Z_Param_bIncludeInvalidRecords,Z_Param_bReverseChronological); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidateHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvalidateHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->Initialize(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMatchCommand) \
	{ \
		P_GET_OBJECT(UInputCommand,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->MatchCommand(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventsToMatch); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventsToIgnore); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bSkipEmptyTrail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->MatchEvents(Z_Param_Out_EventsToMatch,Z_Param_Out_EventsToIgnore,Z_Param_TimeLimit,Z_Param_bSkipEmptyTrail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHistoryRecords) \
	{ \
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_Records); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetHistoryRecords(Z_Param_Out_Records); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHistoryRecords) \
	{ \
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_Records); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bIncludeInvalidRecords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetHistoryRecords(Z_Param_Out_Records,Z_Param_TimeLimit,Z_Param_bIncludeInvalidRecords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_Events); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bSkipEmptyTrail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetLastEvents(Z_Param_Out_Events,Z_Param_TimeLimit,Z_Param_bSkipEmptyTrail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_Events); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCurrentEvents(Z_Param_Out_Events); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxRecords); \
		P_GET_UBOOL(Z_Param_bIncludeInvalidRecords); \
		P_GET_UBOOL(Z_Param_bReverseChronological); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->Print(Z_Param_MaxRecords,Z_Param_bIncludeInvalidRecords,Z_Param_bReverseChronological); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidateHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvalidateHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->Initialize(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputBufferComponent(); \
	friend INPUTBUFFER_API class UClass* Z_Construct_UClass_UInputBufferComponent(); \
public: \
	DECLARE_CLASS(UInputBufferComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(UInputBufferComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_INCLASS \
private: \
	static void StaticRegisterNativesUInputBufferComponent(); \
	friend INPUTBUFFER_API class UClass* Z_Construct_UClass_UInputBufferComponent(); \
public: \
	DECLARE_CLASS(UInputBufferComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(UInputBufferComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputBufferComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputBufferComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBufferComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBufferComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBufferComponent(UInputBufferComponent&&); \
	NO_API UInputBufferComponent(const UInputBufferComponent&); \
public:


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBufferComponent(UInputBufferComponent&&); \
	NO_API UInputBufferComponent(const UInputBufferComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBufferComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBufferComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputBufferComponent)


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_117_PROLOG
#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_RPC_WRAPPERS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_INCLASS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UE4InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h


#define FOREACH_ENUM_FBUFFEREDINPUTEVENTTYPE(op) \
	op(FBufferedInputEventType::Pressed) \
	op(FBufferedInputEventType::Released) \
	op(FBufferedInputEventType::Held) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
