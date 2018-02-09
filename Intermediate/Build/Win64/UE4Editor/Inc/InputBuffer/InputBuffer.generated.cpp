// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InputBuffer.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1InputBuffer() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	INPUTCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API class UClass* Z_Construct_UClass_UTexture2D_NoRegister();

	INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FInputHistoryRecord();
	INPUTBUFFER_API class UClass* Z_Construct_UClass_UInputHistoryRecordArray_NoRegister();
	INPUTBUFFER_API class UClass* Z_Construct_UClass_UInputHistoryRecordArray();
	INPUTBUFFER_API class UEnum* Z_Construct_UEnum_InputBuffer_FBufferedInputEventType();
	INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping();
	INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventSetup();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_ClearHistory();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_GetLastEvents();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_Initialize();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_MatchCommand();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_MatchEvents();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_Print();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords();
	INPUTBUFFER_API class UClass* Z_Construct_UClass_UInputBufferComponent_NoRegister();
	INPUTBUFFER_API class UClass* Z_Construct_UClass_UInputBufferComponent();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput();
	INPUTBUFFER_API class UFunction* Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent();
	INPUTBUFFER_API class UClass* Z_Construct_UClass_AInputBufferPlayerController_NoRegister();
	INPUTBUFFER_API class UClass* Z_Construct_UClass_AInputBufferPlayerController();
	INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FInputCommandSequence();
	INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FInputCommandEntry();
	INPUTBUFFER_API class UClass* Z_Construct_UClass_UInputCommand_NoRegister();
	INPUTBUFFER_API class UClass* Z_Construct_UClass_UInputCommand();
	INPUTBUFFER_API class UPackage* Z_Construct_UPackage__Script_InputBuffer();
class UScriptStruct* FInputHistoryRecord::StaticStruct()
{
	extern INPUTBUFFER_API class UPackage* Z_Construct_UPackage__Script_InputBuffer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FInputHistoryRecord();
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputHistoryRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputHistoryRecord, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputHistoryRecord"), sizeof(FInputHistoryRecord), Get_Z_Construct_UScriptStruct_FInputHistoryRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputHistoryRecord(FInputHistoryRecord::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputHistoryRecord"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputHistoryRecord
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputHistoryRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputHistoryRecord")),new UScriptStruct::TCppStructOps<FInputHistoryRecord>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputHistoryRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FInputHistoryRecord()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		extern uint32 Get_Z_Construct_UScriptStruct_FInputHistoryRecord_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputHistoryRecord"), sizeof(FInputHistoryRecord), Get_Z_Construct_UScriptStruct_FInputHistoryRecord_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InputHistoryRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FInputHistoryRecord>, EStructFlags(0x00000001));
			UProperty* NewProp_TranslatedEvents = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TranslatedEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TranslatedEvents, FInputHistoryRecord), 0x0010000000000005);
			UProperty* NewProp_TranslatedEvents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TranslatedEvents, TEXT("TranslatedEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Events = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Events, FInputHistoryRecord), 0x0010000000000005);
			UProperty* NewProp_Events_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Events, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_EndTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EndTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EndTime, FInputHistoryRecord), 0x0010000000000005);
			UProperty* NewProp_StartTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StartTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartTime, FInputHistoryRecord), 0x0010000000000005);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bValid, FInputHistoryRecord, uint8);
			UProperty* NewProp_bValid = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bValid"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bValid, FInputHistoryRecord), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bValid, FInputHistoryRecord), sizeof(uint8), false);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/InputHistoryRecordArray.h"));
			MetaData->SetValue(NewProp_TranslatedEvents, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_TranslatedEvents, TEXT("ModuleRelativePath"), TEXT("Classes/InputHistoryRecordArray.h"));
			MetaData->SetValue(NewProp_TranslatedEvents, TEXT("ToolTip"), TEXT("Input events that are translated from."));
			MetaData->SetValue(NewProp_Events, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_Events, TEXT("ModuleRelativePath"), TEXT("Classes/InputHistoryRecordArray.h"));
			MetaData->SetValue(NewProp_Events, TEXT("ToolTip"), TEXT("Input events list."));
			MetaData->SetValue(NewProp_EndTime, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_EndTime, TEXT("ModuleRelativePath"), TEXT("Classes/InputHistoryRecordArray.h"));
			MetaData->SetValue(NewProp_EndTime, TEXT("ToolTip"), TEXT("Time when we stop recording it."));
			MetaData->SetValue(NewProp_StartTime, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_StartTime, TEXT("ModuleRelativePath"), TEXT("Classes/InputHistoryRecordArray.h"));
			MetaData->SetValue(NewProp_StartTime, TEXT("ToolTip"), TEXT("Time when we start to record it."));
			MetaData->SetValue(NewProp_bValid, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_bValid, TEXT("ModuleRelativePath"), TEXT("Classes/InputHistoryRecordArray.h"));
			MetaData->SetValue(NewProp_bValid, TEXT("ToolTip"), TEXT("Whether this record is valid."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputHistoryRecord_CRC() { return 3423326269U; }
	void UInputHistoryRecordArray::StaticRegisterNativesUInputHistoryRecordArray()
	{
	}
	UClass* Z_Construct_UClass_UInputHistoryRecordArray_NoRegister()
	{
		return UInputHistoryRecordArray::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputHistoryRecordArray()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_InputBuffer();
			OuterClass = UInputHistoryRecordArray::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Records = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Records"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Records, UInputHistoryRecordArray), 0x0010000000000005);
				UProperty* NewProp_Records_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Records, TEXT("Records"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FInputHistoryRecord());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UInputHistoryRecordArray> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Input"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InputHistoryRecordArray.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InputHistoryRecordArray.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("An object containing an array of FInputHistoryRecord."));
				MetaData->SetValue(NewProp_Records, TEXT("Category"), TEXT("Input Buffer"));
				MetaData->SetValue(NewProp_Records, TEXT("ModuleRelativePath"), TEXT("Classes/InputHistoryRecordArray.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputHistoryRecordArray, 440987279);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputHistoryRecordArray(Z_Construct_UClass_UInputHistoryRecordArray, &UInputHistoryRecordArray::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UInputHistoryRecordArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHistoryRecordArray);
static UEnum* FBufferedInputEventType_StaticEnum()
{
	extern INPUTBUFFER_API class UPackage* Z_Construct_UPackage__Script_InputBuffer();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern INPUTBUFFER_API class UEnum* Z_Construct_UEnum_InputBuffer_FBufferedInputEventType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_InputBuffer_FBufferedInputEventType, Z_Construct_UPackage__Script_InputBuffer(), TEXT("FBufferedInputEventType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FBufferedInputEventType(FBufferedInputEventType_StaticEnum, TEXT("/Script/InputBuffer"), TEXT("FBufferedInputEventType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_InputBuffer_FBufferedInputEventType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_InputBuffer();
		extern uint32 Get_Z_Construct_UEnum_InputBuffer_FBufferedInputEventType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FBufferedInputEventType"), 0, Get_Z_Construct_UEnum_InputBuffer_FBufferedInputEventType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FBufferedInputEventType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("FBufferedInputEventType::Pressed"), 0);
			EnumNames.Emplace(TEXT("FBufferedInputEventType::Released"), 1);
			EnumNames.Emplace(TEXT("FBufferedInputEventType::Held"), 2);
			EnumNames.Emplace(TEXT("FBufferedInputEventType::FBufferedInputEventType_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("FBufferedInputEventType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_InputBuffer_FBufferedInputEventType_CRC() { return 2477350654U; }
class UScriptStruct* FBufferedInputEventKeyMapping::StaticStruct()
{
	extern INPUTBUFFER_API class UPackage* Z_Construct_UPackage__Script_InputBuffer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping();
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping, Z_Construct_UPackage__Script_InputBuffer(), TEXT("BufferedInputEventKeyMapping"), sizeof(FBufferedInputEventKeyMapping), Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBufferedInputEventKeyMapping(FBufferedInputEventKeyMapping::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("BufferedInputEventKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventKeyMapping
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventKeyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BufferedInputEventKeyMapping")),new UScriptStruct::TCppStructOps<FBufferedInputEventKeyMapping>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventKeyMapping;
	UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		extern uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BufferedInputEventKeyMapping"), sizeof(FBufferedInputEventKeyMapping), Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BufferedInputEventKeyMapping"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBufferedInputEventKeyMapping>, EStructFlags(0x00000001));
			UProperty* NewProp_Keys = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Keys"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Keys, FBufferedInputEventKeyMapping), 0x0010000000000001);
			UProperty* NewProp_Keys_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Keys, TEXT("Keys"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FKey());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, FBufferedInputEventKeyMapping), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_Keys, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_Keys, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_Keys, TEXT("ToolTip"), TEXT("Keys to bind it to."));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ToolTip"), TEXT("Name of this mapping."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_CRC() { return 2218510611U; }
class UScriptStruct* FBufferedInputEventSetup::StaticStruct()
{
	extern INPUTBUFFER_API class UPackage* Z_Construct_UPackage__Script_InputBuffer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventSetup();
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBufferedInputEventSetup, Z_Construct_UPackage__Script_InputBuffer(), TEXT("BufferedInputEventSetup"), sizeof(FBufferedInputEventSetup), Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBufferedInputEventSetup(FBufferedInputEventSetup::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("BufferedInputEventSetup"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventSetup
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BufferedInputEventSetup")),new UScriptStruct::TCppStructOps<FBufferedInputEventSetup>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventSetup;
	UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventSetup()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		extern uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BufferedInputEventSetup"), sizeof(FBufferedInputEventSetup), Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BufferedInputEventSetup"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBufferedInputEventSetup>, EStructFlags(0x00000001));
			UProperty* NewProp_Keys = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Keys"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Keys, FBufferedInputEventSetup), 0x0010000000000001);
			UProperty* NewProp_Keys_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Keys, TEXT("Keys"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FKey());
			UProperty* NewProp_KeyMappingName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("KeyMappingName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(KeyMappingName, FBufferedInputEventSetup), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bExecuteWhenPaused, FBufferedInputEventSetup, bool);
			UProperty* NewProp_bExecuteWhenPaused = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bExecuteWhenPaused"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bExecuteWhenPaused, FBufferedInputEventSetup), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bExecuteWhenPaused, FBufferedInputEventSetup), sizeof(bool), true);
			UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Type, FBufferedInputEventSetup), 0x0010000000000001, Z_Construct_UEnum_InputBuffer_FBufferedInputEventType());
			UProperty* NewProp_Type_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Type, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, FBufferedInputEventSetup), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnabled, FBufferedInputEventSetup, bool);
			UProperty* NewProp_bEnabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnabled, FBufferedInputEventSetup), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnabled, FBufferedInputEventSetup), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_Keys, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_Keys, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_Keys, TEXT("ToolTip"), TEXT("Keys to bind it to."));
			MetaData->SetValue(NewProp_KeyMappingName, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_KeyMappingName, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_KeyMappingName, TEXT("ToolTip"), TEXT("Name of key mapping to use for this event."));
			MetaData->SetValue(NewProp_bExecuteWhenPaused, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(NewProp_bExecuteWhenPaused, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_bExecuteWhenPaused, TEXT("ToolTip"), TEXT("Should the event get triggered even when the game is paused?"));
			MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_Type, TEXT("ToolTip"), TEXT("Type of the input event."));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_Name, TEXT("ToolTip"), TEXT("Name of input event, e.g \"Jump\""));
			MetaData->SetValue(NewProp_bEnabled, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("ToolTip"), TEXT("Whether this event is enabled."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_CRC() { return 3007578341U; }
	void UInputBufferComponent::StaticRegisterNativesUInputBufferComponent()
	{
		UClass* Class = UInputBufferComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ClearHistory", (Native)&UInputBufferComponent::execClearHistory },
			{ "GetCurrentEvents", (Native)&UInputBufferComponent::execGetCurrentEvents },
			{ "GetHistoryRecords", (Native)&UInputBufferComponent::execGetHistoryRecords },
			{ "GetLastEvents", (Native)&UInputBufferComponent::execGetLastEvents },
			{ "Initialize", (Native)&UInputBufferComponent::execInitialize },
			{ "InvalidateHistory", (Native)&UInputBufferComponent::execInvalidateHistory },
			{ "MatchCommand", (Native)&UInputBufferComponent::execMatchCommand },
			{ "MatchEvents", (Native)&UInputBufferComponent::execMatchEvents },
			{ "Print", (Native)&UInputBufferComponent::execPrint },
			{ "SetHistoryRecords", (Native)&UInputBufferComponent::execSetHistoryRecords },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 10);
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_ClearHistory()
	{
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearHistory"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clears the input buffer."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents()
	{
		struct InputBufferComponent_eventGetCurrentEvents_Parms
		{
			TArray<FName> Events;
		};
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54420401, 65535, sizeof(InputBufferComponent_eventGetCurrentEvents_Parms));
			UProperty* NewProp_Events = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Events, InputBufferComponent_eventGetCurrentEvents_Parms), 0x0010000000000180);
			UProperty* NewProp_Events_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Events, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Retrieves the current input events.\n\nCaution: Output input events are only valid after player input is processed in this frame.\n\n@param Events An output array of the input events in this frame."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords()
	{
		struct InputBufferComponent_eventGetHistoryRecords_Parms
		{
			TArray<FInputHistoryRecord> Records;
			float TimeLimit;
			bool bIncludeInvalidRecords;
		};
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHistoryRecords"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54420401, 65535, sizeof(InputBufferComponent_eventGetHistoryRecords_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIncludeInvalidRecords, InputBufferComponent_eventGetHistoryRecords_Parms, bool);
			UProperty* NewProp_bIncludeInvalidRecords = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIncludeInvalidRecords"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIncludeInvalidRecords, InputBufferComponent_eventGetHistoryRecords_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIncludeInvalidRecords, InputBufferComponent_eventGetHistoryRecords_Parms), sizeof(bool), true);
			UProperty* NewProp_TimeLimit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeLimit"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeLimit, InputBufferComponent_eventGetHistoryRecords_Parms), 0x0010000000000080);
			UProperty* NewProp_Records = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Records"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Records, InputBufferComponent_eventGetHistoryRecords_Parms), 0x0010000000000180);
			UProperty* NewProp_Records_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Records, TEXT("Records"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FInputHistoryRecord());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bIncludeInvalidRecords"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_TimeLimit"), TEXT("0.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Retrieves input records in the input buffer in chronological order.\n\n@param Records An output array of input records.\n@param TimeLimit A time limit used to exclude outdated input records. Zero means no time limit.\n@param bIncludeInvalidRecords Whether invalidated records are included."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_GetLastEvents()
	{
		struct InputBufferComponent_eventGetLastEvents_Parms
		{
			TArray<FName> Events;
			float TimeLimit;
			bool bSkipEmptyTrail;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLastEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54420401, 65535, sizeof(InputBufferComponent_eventGetLastEvents_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, InputBufferComponent_eventGetLastEvents_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSkipEmptyTrail, InputBufferComponent_eventGetLastEvents_Parms, bool);
			UProperty* NewProp_bSkipEmptyTrail = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSkipEmptyTrail"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSkipEmptyTrail, InputBufferComponent_eventGetLastEvents_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bSkipEmptyTrail, InputBufferComponent_eventGetLastEvents_Parms), sizeof(bool), true);
			UProperty* NewProp_TimeLimit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeLimit"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeLimit, InputBufferComponent_eventGetLastEvents_Parms), 0x0010000000000080);
			UProperty* NewProp_Events = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Events, InputBufferComponent_eventGetLastEvents_Parms), 0x0010000000000180);
			UProperty* NewProp_Events_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Events, TEXT("Events"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bSkipEmptyTrail"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_TimeLimit"), TEXT("0.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Retrieves the last input events in the input buffer.\n\n@param Events An output array of the last input events.\n@param TimeLimit If the time of the last events exceeds the time limit, nothing will be retrieved. Zero means no time limit.\n@param bSkipEmptyTrail Whether a trailing empty record should be skipped.\n@return The time when the last events were buffered."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_Initialize()
	{
		struct InputBufferComponent_eventInitialize_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Initialize"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InputBufferComponent_eventInitialize_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, InputBufferComponent_eventInitialize_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Resets internal data structures according to EventSetups. Should be called after changes to EventSetups are made.\n\nCaution: Calling this function will clear the input buffer.\n\n@return The number of registered input events."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory()
	{
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InvalidateHistory"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Invalidates the input buffer. The records in the buffer are still there but they will be no longer valid for command recognition."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_MatchCommand()
	{
		struct InputBufferComponent_eventMatchCommand_Parms
		{
			UInputCommand* Command;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MatchCommand"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(InputBufferComponent_eventMatchCommand_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, InputBufferComponent_eventMatchCommand_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, InputBufferComponent_eventMatchCommand_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, InputBufferComponent_eventMatchCommand_Parms), sizeof(bool), true);
			UProperty* NewProp_Command = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Command"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Command, InputBufferComponent_eventMatchCommand_Parms), 0x0010000000000080, Z_Construct_UClass_UInputCommand_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether the latest input history matches a given input command."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_MatchEvents()
	{
		struct InputBufferComponent_eventMatchEvents_Parms
		{
			TArray<FName> EventsToMatch;
			TArray<FName> EventsToIgnore;
			float TimeLimit;
			bool bSkipEmptyTrail;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MatchEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54420401, 65535, sizeof(InputBufferComponent_eventMatchEvents_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, InputBufferComponent_eventMatchEvents_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, InputBufferComponent_eventMatchEvents_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, InputBufferComponent_eventMatchEvents_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSkipEmptyTrail, InputBufferComponent_eventMatchEvents_Parms, bool);
			UProperty* NewProp_bSkipEmptyTrail = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSkipEmptyTrail"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSkipEmptyTrail, InputBufferComponent_eventMatchEvents_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bSkipEmptyTrail, InputBufferComponent_eventMatchEvents_Parms), sizeof(bool), true);
			UProperty* NewProp_TimeLimit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TimeLimit"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeLimit, InputBufferComponent_eventMatchEvents_Parms), 0x0010000000000080);
			UProperty* NewProp_EventsToIgnore = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventsToIgnore"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventsToIgnore, InputBufferComponent_eventMatchEvents_Parms), 0x0010000008000182);
			UProperty* NewProp_EventsToIgnore_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventsToIgnore, TEXT("EventsToIgnore"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_EventsToMatch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventsToMatch"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventsToMatch, InputBufferComponent_eventMatchEvents_Parms), 0x0010000008000182);
			UProperty* NewProp_EventsToMatch_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventsToMatch, TEXT("EventsToMatch"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("EventsToIgnore"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bSkipEmptyTrail"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_TimeLimit"), TEXT("0.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether the last input record matches given input events.\n      *\n      * @param EventsToMatch Input events to match.\n      * @param EventsToIgnore Input events to ignore.\n      * @param TimeLimit If the time of the last record exceeds the time limit, always return false. Zero means no time limit.\n      * @param bSkipEmptyTrail Whether a trailing empty record should be skipped.\n      * @return Whether the last input record matches given input events."));
			MetaData->SetValue(NewProp_EventsToIgnore, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_EventsToMatch, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_Print()
	{
		struct InputBufferComponent_eventPrint_Parms
		{
			int32 MaxRecords;
			bool bIncludeInvalidRecords;
			bool bReverseChronological;
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Print"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(InputBufferComponent_eventPrint_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, InputBufferComponent_eventPrint_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bReverseChronological, InputBufferComponent_eventPrint_Parms, bool);
			UProperty* NewProp_bReverseChronological = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bReverseChronological"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bReverseChronological, InputBufferComponent_eventPrint_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bReverseChronological, InputBufferComponent_eventPrint_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIncludeInvalidRecords, InputBufferComponent_eventPrint_Parms, bool);
			UProperty* NewProp_bIncludeInvalidRecords = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIncludeInvalidRecords"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIncludeInvalidRecords, InputBufferComponent_eventPrint_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIncludeInvalidRecords, InputBufferComponent_eventPrint_Parms), sizeof(bool), true);
			UProperty* NewProp_MaxRecords = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxRecords"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxRecords, InputBufferComponent_eventPrint_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bIncludeInvalidRecords"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_bReverseChronological"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_MaxRecords"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Prints the content of the input buffer to a string.\n\n@param MaxRecords Maximal number of latest records to print.\n@param bIncludeInvalidRecords Whether invalidated records are included.\n@param bReverseChronological Whether records are printed in chronological order or reverse chronological order.\n@return An output string."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords()
	{
		struct InputBufferComponent_eventSetHistoryRecords_Parms
		{
			TArray<FInputHistoryRecord> Records;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UInputBufferComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetHistoryRecords"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(InputBufferComponent_eventSetHistoryRecords_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, InputBufferComponent_eventSetHistoryRecords_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, InputBufferComponent_eventSetHistoryRecords_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, InputBufferComponent_eventSetHistoryRecords_Parms), sizeof(bool), true);
			UProperty* NewProp_Records = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Records"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Records, InputBufferComponent_eventSetHistoryRecords_Parms), 0x0010000008000182);
			UProperty* NewProp_Records_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Records, TEXT("Records"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FInputHistoryRecord());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets input history to given records.\nThe given records must be in chronological order, and their timespan cannot overlap.\n\nCaution: The given records MUST be valid. If incorrect data is inputted, the input buffer may malfunction until those records are flushed out.\n\n@param Records An array of given input records.\n@return Whether there is an error during the process."));
			MetaData->SetValue(NewProp_Records, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputBufferComponent_NoRegister()
	{
		return UInputBufferComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputBufferComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_InputBuffer();
			OuterClass = UInputBufferComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_ClearHistory());
				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents());
				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords());
				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_GetLastEvents());
				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_Initialize());
				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory());
				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_MatchCommand());
				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_MatchEvents());
				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_Print());
				OuterClass->LinkChild(Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MaxInputHistory = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxInputHistory"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxInputHistory, UInputBufferComponent), 0x0010000000000015);
				UProperty* NewProp_KeyMappings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("KeyMappings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(KeyMappings, UInputBufferComponent), 0x0010000000000015);
				UProperty* NewProp_KeyMappings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_KeyMappings, TEXT("KeyMappings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping());
				UProperty* NewProp_TranslatedEvents = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TranslatedEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(TranslatedEvents, UInputBufferComponent), 0x0010000000000015);
				UProperty* NewProp_TranslatedEvents_Inner = new(EC_InternalUseOnlyConstructor, NewProp_TranslatedEvents, TEXT("TranslatedEvents"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_EventSetups = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventSetups"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventSetups, UInputBufferComponent), 0x0010000000000015);
				UProperty* NewProp_EventSetups_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventSetups, TEXT("EventSetups"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FBufferedInputEventSetup());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_ClearHistory(), "ClearHistory"); // 3484980382
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents(), "GetCurrentEvents"); // 687904931
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords(), "GetHistoryRecords"); // 2036272868
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_GetLastEvents(), "GetLastEvents"); // 2991221257
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_Initialize(), "Initialize"); // 1590608203
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory(), "InvalidateHistory"); // 3745623720
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_MatchCommand(), "MatchCommand"); // 291348869
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_MatchEvents(), "MatchEvents"); // 3824026417
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_Print(), "Print"); // 1272506455
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords(), "SetHistoryRecords"); // 590503948
				static TCppClassTypeInfo<TCppClassTypeTraits<UInputBufferComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Input"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InputBufferComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A component used to store input data for input buffering.\n\nCaution: Should be used with AInputBufferPlayerController."));
				MetaData->SetValue(NewProp_MaxInputHistory, TEXT("Category"), TEXT("Input Buffer"));
				MetaData->SetValue(NewProp_MaxInputHistory, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_MaxInputHistory, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
				MetaData->SetValue(NewProp_MaxInputHistory, TEXT("ToolTip"), TEXT("The maximal capacity of the input buffer."));
				MetaData->SetValue(NewProp_MaxInputHistory, TEXT("UIMin"), TEXT("0"));
				MetaData->SetValue(NewProp_KeyMappings, TEXT("Category"), TEXT("Input Buffer"));
				MetaData->SetValue(NewProp_KeyMappings, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
				MetaData->SetValue(NewProp_KeyMappings, TEXT("ToolTip"), TEXT("Optional key mappings that can be referenced in input event set-up."));
				MetaData->SetValue(NewProp_TranslatedEvents, TEXT("Category"), TEXT("Input Buffer"));
				MetaData->SetValue(NewProp_TranslatedEvents, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
				MetaData->SetValue(NewProp_TranslatedEvents, TEXT("ToolTip"), TEXT("A list of input events into which others could be translated."));
				MetaData->SetValue(NewProp_EventSetups, TEXT("Category"), TEXT("Input Buffer"));
				MetaData->SetValue(NewProp_EventSetups, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferComponent.h"));
				MetaData->SetValue(NewProp_EventSetups, TEXT("ToolTip"), TEXT("Input events set-up information."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputBufferComponent, 608690731);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputBufferComponent(Z_Construct_UClass_UInputBufferComponent, &UInputBufferComponent::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UInputBufferComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBufferComponent);
	static FName NAME_AInputBufferPlayerController_PostBufferInput = FName(TEXT("PostBufferInput"));
	void AInputBufferPlayerController::PostBufferInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInputBufferPlayerController_PostBufferInput),NULL);
	}
	static FName NAME_AInputBufferPlayerController_TranslateInputEvent = FName(TEXT("TranslateInputEvent"));
	FName AInputBufferPlayerController::TranslateInputEvent(FName Event)
	{
		InputBufferPlayerController_eventTranslateInputEvent_Parms Parms;
		Parms.Event=Event;
		ProcessEvent(FindFunctionChecked(NAME_AInputBufferPlayerController_TranslateInputEvent),&Parms);
		return Parms.ReturnValue;
	}
	void AInputBufferPlayerController::StaticRegisterNativesAInputBufferPlayerController()
	{
		UClass* Class = AInputBufferPlayerController::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "PostBufferInput", (Native)&AInputBufferPlayerController::execPostBufferInput },
			{ "TranslateInputEvent", (Native)&AInputBufferPlayerController::execTranslateInputEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput()
	{
		UObject* Outer=Z_Construct_UClass_AInputBufferPlayerController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostBufferInput"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferPlayerController.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when a new input is just buffered."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent()
	{
		UObject* Outer=Z_Construct_UClass_AInputBufferPlayerController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TranslateInputEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535, sizeof(InputBufferPlayerController_eventTranslateInputEvent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ReturnValue, InputBufferPlayerController_eventTranslateInputEvent_Parms), 0x0010000000000580);
			UProperty* NewProp_Event = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Event"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Event, InputBufferPlayerController_eventTranslateInputEvent_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferPlayerController.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Developers can override this function to translate a received input event."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInputBufferPlayerController_NoRegister()
	{
		return AInputBufferPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AInputBufferPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_InputBuffer();
			OuterClass = AInputBufferPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;

				OuterClass->LinkChild(Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput());
				OuterClass->LinkChild(Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_InputBuffer = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InputBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InputBuffer, AInputBufferPlayerController), 0x00100000000a001d, Z_Construct_UClass_UInputBufferComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput(), "PostBufferInput"); // 2583422808
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent(), "TranslateInputEvent"); // 2665022389
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AInputBufferPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InputBufferPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("A player controller with an input buffer.\n\nCaution: Developers should reparent their player controllers to this class if they need input buffering."));
				MetaData->SetValue(NewProp_InputBuffer, TEXT("Category"), TEXT("Input Buffer"));
				MetaData->SetValue(NewProp_InputBuffer, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InputBuffer, TEXT("ModuleRelativePath"), TEXT("Classes/InputBufferPlayerController.h"));
				MetaData->SetValue(NewProp_InputBuffer, TEXT("ToolTip"), TEXT("Component of input buffer"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInputBufferPlayerController, 893933451);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInputBufferPlayerController(Z_Construct_UClass_AInputBufferPlayerController, &AInputBufferPlayerController::StaticClass, TEXT("/Script/InputBuffer"), TEXT("AInputBufferPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInputBufferPlayerController);
class UScriptStruct* FInputCommandSequence::StaticStruct()
{
	extern INPUTBUFFER_API class UPackage* Z_Construct_UPackage__Script_InputBuffer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FInputCommandSequence();
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputCommandSequence_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputCommandSequence, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputCommandSequence"), sizeof(FInputCommandSequence), Get_Z_Construct_UScriptStruct_FInputCommandSequence_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputCommandSequence(FInputCommandSequence::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputCommandSequence"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandSequence
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandSequence()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputCommandSequence")),new UScriptStruct::TCppStructOps<FInputCommandSequence>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandSequence;
	UScriptStruct* Z_Construct_UScriptStruct_FInputCommandSequence()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		extern uint32 Get_Z_Construct_UScriptStruct_FInputCommandSequence_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputCommandSequence"), sizeof(FInputCommandSequence), Get_Z_Construct_UScriptStruct_FInputCommandSequence_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InputCommandSequence"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FInputCommandSequence>, EStructFlags(0x00000001));
			UProperty* NewProp_Entries = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Entries"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Entries, FInputCommandSequence), 0x0010000000000005);
			UProperty* NewProp_Entries_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Entries, TEXT("Entries"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FInputCommandEntry());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnabled, FInputCommandSequence, bool);
			UProperty* NewProp_bEnabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnabled, FInputCommandSequence), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnabled, FInputCommandSequence), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_Entries, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_Entries, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_Entries, TEXT("ToolTip"), TEXT("A list of input snapshots to match."));
			MetaData->SetValue(NewProp_bEnabled, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("ToolTip"), TEXT("Whether this sequence is enabled."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputCommandSequence_CRC() { return 3021815311U; }
class UScriptStruct* FInputCommandEntry::StaticStruct()
{
	extern INPUTBUFFER_API class UPackage* Z_Construct_UPackage__Script_InputBuffer();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API class UScriptStruct* Z_Construct_UScriptStruct_FInputCommandEntry();
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputCommandEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputCommandEntry, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputCommandEntry"), sizeof(FInputCommandEntry), Get_Z_Construct_UScriptStruct_FInputCommandEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputCommandEntry(FInputCommandEntry::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputCommandEntry"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandEntry
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputCommandEntry")),new UScriptStruct::TCppStructOps<FInputCommandEntry>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FInputCommandEntry()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		extern uint32 Get_Z_Construct_UScriptStruct_FInputCommandEntry_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputCommandEntry"), sizeof(FInputCommandEntry), Get_Z_Construct_UScriptStruct_FInputCommandEntry_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InputCommandEntry"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FInputCommandEntry>, EStructFlags(0x00000001));
			UProperty* NewProp_MaxInterval = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxInterval, FInputCommandEntry), 0x0010000000000005);
			UProperty* NewProp_MinInterval = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinInterval"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinInterval, FInputCommandEntry), 0x0010000000000005);
			UProperty* NewProp_MaxDuration = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxDuration, FInputCommandEntry), 0x0010000000000005);
			UProperty* NewProp_MinDuration = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MinDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinDuration, FInputCommandEntry), 0x0010000000000005);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreOthers, FInputCommandEntry, bool);
			UProperty* NewProp_bIgnoreOthers = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIgnoreOthers"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreOthers, FInputCommandEntry), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIgnoreOthers, FInputCommandEntry), sizeof(bool), true);
			UProperty* NewProp_EventsToIgnore = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EventsToIgnore"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventsToIgnore, FInputCommandEntry), 0x0010000000000005);
			UProperty* NewProp_EventsToIgnore_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventsToIgnore, TEXT("EventsToIgnore"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_EventsToMatch = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EventsToMatch"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventsToMatch, FInputCommandEntry), 0x0010000000000005);
			UProperty* NewProp_EventsToMatch_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventsToMatch, TEXT("EventsToMatch"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_MaxInterval, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_MaxInterval, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_MaxInterval, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_MaxInterval, TEXT("ToolTip"), TEXT("Maximal time limit between input for this entry and the next one to be considered as valid. Unused if zero."));
			MetaData->SetValue(NewProp_MaxInterval, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_MinInterval, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_MinInterval, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_MinInterval, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_MinInterval, TEXT("ToolTip"), TEXT("Minimal time limit between input for this entry and the next one to be considered as valid. Unused if zero."));
			MetaData->SetValue(NewProp_MinInterval, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_MaxDuration, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_MaxDuration, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_MaxDuration, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_MaxDuration, TEXT("ToolTip"), TEXT("Maximal duration for input to be considered as valid. Should be used for input events of held type. Unused if zero."));
			MetaData->SetValue(NewProp_MaxDuration, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_MinDuration, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_MinDuration, TEXT("ClampMin"), TEXT("0"));
			MetaData->SetValue(NewProp_MinDuration, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_MinDuration, TEXT("ToolTip"), TEXT("Minimal duration for input to be considered as valid. Should be used for input events of held type. Unused if zero."));
			MetaData->SetValue(NewProp_MinDuration, TEXT("UIMin"), TEXT("0"));
			MetaData->SetValue(NewProp_bIgnoreOthers, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_bIgnoreOthers, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_bIgnoreOthers, TEXT("ToolTip"), TEXT("If true, ignore the presence of the other input events except EventsToMatch."));
			MetaData->SetValue(NewProp_EventsToIgnore, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_EventsToIgnore, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_EventsToIgnore, TEXT("ToolTip"), TEXT("Input events to ignore. Unused if bIgnoreOthers is true."));
			MetaData->SetValue(NewProp_EventsToMatch, TEXT("Category"), TEXT("Input Buffer"));
			MetaData->SetValue(NewProp_EventsToMatch, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
			MetaData->SetValue(NewProp_EventsToMatch, TEXT("ToolTip"), TEXT("Input events to match."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputCommandEntry_CRC() { return 4247854378U; }
	void UInputCommand::StaticRegisterNativesUInputCommand()
	{
	}
	UClass* Z_Construct_UClass_UInputCommand_NoRegister()
	{
		return UInputCommand::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputCommand()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_InputBuffer();
			OuterClass = UInputCommand::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
#if WITH_EDITORONLY_DATA
				UProperty* NewProp_Thumbnail = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Thumbnail"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Thumbnail, UInputCommand), 0x0010000800000001, Z_Construct_UClass_UTexture2D_NoRegister());
#endif // WITH_EDITORONLY_DATA
				UProperty* NewProp_Sequences = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sequences"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Sequences, UInputCommand), 0x0010000000000005);
				UProperty* NewProp_Sequences_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Sequences, TEXT("Sequences"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FInputCommandSequence());
				UProperty* NewProp_EventsToIgnore = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventsToIgnore"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventsToIgnore, UInputCommand), 0x0010000000000005);
				UProperty* NewProp_EventsToIgnore_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventsToIgnore, TEXT("EventsToIgnore"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_TimeLimit = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimeLimit"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeLimit, UInputCommand), 0x0010010000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UInputCommand> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Input"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InputCommand.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Represents an input command commonly found in fighting games, such as Quarter-Circle-Forward Punch.\nCan be used with UInputBufferComponent to detect combinations of buttons."));
				MetaData->SetValue(NewProp_Thumbnail, TEXT("Category"), TEXT("Thumbnail"));
				MetaData->SetValue(NewProp_Thumbnail, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
				MetaData->SetValue(NewProp_Sequences, TEXT("Category"), TEXT("Input Buffer"));
				MetaData->SetValue(NewProp_Sequences, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
				MetaData->SetValue(NewProp_Sequences, TEXT("ToolTip"), TEXT("Each sequence contains a series of input snapshots to match. A command is considered matched if any of its sequences matches."));
				MetaData->SetValue(NewProp_EventsToIgnore, TEXT("Category"), TEXT("Input Buffer"));
				MetaData->SetValue(NewProp_EventsToIgnore, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
				MetaData->SetValue(NewProp_EventsToIgnore, TEXT("ToolTip"), TEXT("Input events to ignore."));
				MetaData->SetValue(NewProp_TimeLimit, TEXT("Category"), TEXT("Input Buffer"));
				MetaData->SetValue(NewProp_TimeLimit, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_TimeLimit, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommand.h"));
				MetaData->SetValue(NewProp_TimeLimit, TEXT("ToolTip"), TEXT("Time limit of valid input. Unused if zero."));
				MetaData->SetValue(NewProp_TimeLimit, TEXT("UIMin"), TEXT("0"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCommand, 1384141741);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCommand(Z_Construct_UClass_UInputCommand, &UInputCommand::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UInputCommand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCommand);
	UPackage* Z_Construct_UPackage__Script_InputBuffer()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/InputBuffer")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x113E06A2;
			Guid.B = 0xD63FDD33;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
