// Copyright 2017 Isaac Hsu. MIT License

#include "InputCommandFactory.h"
#include "InputBufferEditor.h"

#include "InputCommand.h"

UInputCommandFactory::UInputCommandFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UInputCommand::StaticClass();
}

UObject* UInputCommandFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UInputCommand* NewAsset = NewObject<UInputCommand>(InParent, Class, Name, Flags);
	NewAsset->Sequences.AddDefaulted();
	NewAsset->Sequences.Last().Entries.AddDefaulted();
	NewAsset->Sequences.Last().Entries.Last().EventsToMatch.AddDefaulted();
	// TODO: auto-expand and select first input event
	return NewAsset;
}

