// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_UI.generated.h"

/**
 * 
 */
UCLASS()
class UILIBRARY_API UBPFL_UI : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void AddTextToStringTable(const FName TableId, const FString Key,const FString String);
};
