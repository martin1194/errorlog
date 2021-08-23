// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StructureSystemDataTable.generated.h"


USTRUCT(BlueprintType)
struct FStructureSystemData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Table)
		FString name;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Table)
		FText description;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Table)
		int32 skill_required;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Table)
		int32 skill_required2;
};

/**
 * 
 */
UCLASS()
class VILLAGESIMULATOR_API UStructureSystemDataTable : public UDataTable
{
	GENERATED_BODY()


public:
	void addtolist();

	UPROPERTY()
		class UDataTable* StrutureList;
};
