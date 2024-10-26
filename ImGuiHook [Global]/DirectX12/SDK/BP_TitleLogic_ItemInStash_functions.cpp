#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_ItemInStash

#include "Basic.hpp"

#include "BP_TitleLogic_ItemInStash_classes.hpp"
#include "BP_TitleLogic_ItemInStash_parameters.hpp"


namespace SDK
{

// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.ExecuteUbergraph_BP_TitleLogic_ItemInStash
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleLogic_ItemInStash_C::ExecuteUbergraph_BP_TitleLogic_ItemInStash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_ItemInStash_C", "ExecuteUbergraph_BP_TitleLogic_ItemInStash");

	Params::BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.Stash Ready
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStash*                           Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStashComponent*                  Inventory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleLogic_ItemInStash_C::Stash_Ready(class AStash* Sender, class UStashComponent* Inventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_ItemInStash_C", "Stash Ready");

	Params::BP_TitleLogic_ItemInStash_C_Stash_Ready Parms{};

	Parms.Sender = Sender;
	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TitleLogic_ItemInStash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_ItemInStash_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.Is Initialized
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Initialized                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TitleLogic_ItemInStash_C::Is_Initialized(bool* Initialized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_ItemInStash_C", "Is Initialized");

	Params::BP_TitleLogic_ItemInStash_C_Is_Initialized Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Initialized != nullptr)
		*Initialized = Parms.Initialized;
}


// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.Is Rank Owned
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FF_TitleRank                     Rank_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Owned                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TitleLogic_ItemInStash_C::Is_Rank_Owned(const struct FF_TitleRank& Rank_Info, bool* Owned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_ItemInStash_C", "Is Rank Owned");

	Params::BP_TitleLogic_ItemInStash_C_Is_Rank_Owned Parms{};

	Parms.Rank_Info = std::move(Rank_Info);

	UObject::ProcessEvent(Func, &Parms);

	if (Owned != nullptr)
		*Owned = Parms.Owned;
}


// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.Get Title Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_TitleRank                     Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UClass*                           Item                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TitleLogic_ItemInStash_C::Get_Title_Item(const struct FF_TitleRank& Rank, class UClass** Item, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_ItemInStash_C", "Get Title Item");

	Params::BP_TitleLogic_ItemInStash_C_Get_Title_Item Parms{};

	Parms.Rank = std::move(Rank);

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}

}

