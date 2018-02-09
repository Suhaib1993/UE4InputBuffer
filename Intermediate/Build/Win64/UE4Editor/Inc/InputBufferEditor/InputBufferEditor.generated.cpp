// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InputBufferEditor.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1InputBufferEditor() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	UNREALED_API class UClass* Z_Construct_UClass_UFactory();
	UNREALED_API class UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();

	INPUTBUFFEREDITOR_API class UClass* Z_Construct_UClass_UInputCommandFactory_NoRegister();
	INPUTBUFFEREDITOR_API class UClass* Z_Construct_UClass_UInputCommandFactory();
	INPUTBUFFEREDITOR_API class UClass* Z_Construct_UClass_UInputCommandThumbnailRenderer_NoRegister();
	INPUTBUFFEREDITOR_API class UClass* Z_Construct_UClass_UInputCommandThumbnailRenderer();
	INPUTBUFFEREDITOR_API class UPackage* Z_Construct_UPackage__Script_InputBufferEditor();
	void UInputCommandFactory::StaticRegisterNativesUInputCommandFactory()
	{
	}
	UClass* Z_Construct_UClass_UInputCommandFactory_NoRegister()
	{
		return UInputCommandFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputCommandFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UFactory();
			Z_Construct_UPackage__Script_InputBufferEditor();
			OuterClass = UInputCommandFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UInputCommandFactory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InputCommandFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommandFactory.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCommandFactory, 1019595704);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCommandFactory(Z_Construct_UClass_UInputCommandFactory, &UInputCommandFactory::StaticClass, TEXT("/Script/InputBufferEditor"), TEXT("UInputCommandFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCommandFactory);
	void UInputCommandThumbnailRenderer::StaticRegisterNativesUInputCommandThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UInputCommandThumbnailRenderer_NoRegister()
	{
		return UInputCommandThumbnailRenderer::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputCommandThumbnailRenderer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
			Z_Construct_UPackage__Script_InputBufferEditor();
			OuterClass = UInputCommandThumbnailRenderer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UInputCommandThumbnailRenderer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InputCommandThumbnailRenderer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InputCommandThumbnailRenderer.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCommandThumbnailRenderer, 3599152653);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCommandThumbnailRenderer(Z_Construct_UClass_UInputCommandThumbnailRenderer, &UInputCommandThumbnailRenderer::StaticClass, TEXT("/Script/InputBufferEditor"), TEXT("UInputCommandThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCommandThumbnailRenderer);
	UPackage* Z_Construct_UPackage__Script_InputBufferEditor()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/InputBufferEditor")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000040);
			FGuid Guid;
			Guid.A = 0x3E6DD7F4;
			Guid.B = 0xA07557BF;
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
