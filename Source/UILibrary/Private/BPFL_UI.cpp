// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFL_UI.h"

#include "Internationalization/StringTable.h"
#include "Internationalization/StringTableCore.h"
#include "Internationalization/StringTableRegistry.h"

void UBPFL_UI::AddTextToStringTable(const FName TableId, const FString Key, const FString String)
{
	FStringTablePtr StringTable = FStringTableRegistry::Get().FindMutableStringTable(TableId);
	if (StringTable.IsValid())
	{
		StringTable->SetSourceString(Key, String);
		StringTable->GetOwnerAsset()->MarkPackageDirty();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Could not find string table for id : %s"),*TableId.ToString());
	}
}
