// Fill out your copyright notice in the Description page of Project Settings.


#include "../StructureSystem/StructureSystemDataTable.h"


static ConstructorHelpers::FObjectFinder<UDataTable> StrutureList(TEXT("DataTable'/Game/StarterContent/NewDataTable.NewDataTable'"));

void UStructureSystemDataTable::addtolist()
{
	FStructureSystemData addtolist;
	addtolist.name = "HI";
	StrutureList->AddRow(FName(TEXT("Texting")), addtolist);

	UE_LOG(LogTemp, Warning, TEXT("StructureSystem/UStructureSystemDataTable::BeginPlay()"));
}