#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_MementoCollection_Vinyls

#include "Basic.hpp"

#include "BP_TitleLogic_MementoCollection_Vinyls_classes.hpp"
#include "BP_TitleLogic_MementoCollection_Vinyls_parameters.hpp"


namespace SDK
{

// Function BP_TitleLogic_MementoCollection_Vinyls.BP_TitleLogic_MementoCollection_Vinyls_C.ExecuteUbergraph_BP_TitleLogic_MementoCollection_Vinyls
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleLogic_MementoCollection_Vinyls_C::ExecuteUbergraph_BP_TitleLogic_MementoCollection_Vinyls(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_MementoCollection_Vinyls_C", "ExecuteUbergraph_BP_TitleLogic_MementoCollection_Vinyls");

	Params::BP_TitleLogic_MementoCollection_Vinyls_C_ExecuteUbergraph_BP_TitleLogic_MementoCollection_Vinyls Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleLogic_MementoCollection_Vinyls.BP_TitleLogic_MementoCollection_Vinyls_C.Stash Ready
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStash*                           Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStashComponent*                  Inventory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleLogic_MementoCollection_Vinyls_C::Stash_Ready(class AStash* Sender, class UStashComponent* Inventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_MementoCollection_Vinyls_C", "Stash Ready");

	Params::BP_TitleLogic_MementoCollection_Vinyls_C_Stash_Ready Parms{};

	Parms.Sender = Sender;
	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleLogic_MementoCollection_Vinyls.BP_TitleLogic_MementoCollection_Vinyls_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TitleLogic_MementoCollection_Vinyls_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_MementoCollection_Vinyls_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleLogic_MementoCollection_Vinyls.BP_TitleLogic_MementoCollection_Vinyls_C.Is Initialized
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Initialized                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TitleLogic_MementoCollection_Vinyls_C::Is_Initialized(bool* Initialized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_MementoCollection_Vinyls_C", "Is Initialized");

	Params::BP_TitleLogic_MementoCollection_Vinyls_C_Is_Initialized Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Initialized != nullptr)
		*Initialized = Parms.Initialized;
}


// Function BP_TitleLogic_MementoCollection_Vinyls.BP_TitleLogic_MementoCollection_Vinyls_C.Is Rank Owned
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FF_TitleRank                     Rank_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Owned                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TitleLogic_MementoCollection_Vinyls_C::Is_Rank_Owned(const struct FF_TitleRank& Rank_Info, bool* Owned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_MementoCollection_Vinyls_C", "Is Rank Owned");

	Params::BP_TitleLogic_MementoCollection_Vinyls_C_Is_Rank_Owned Parms{};

	Parms.Rank_Info = std::move(Rank_Info);

	UObject::ProcessEvent(Func, &Parms);

	if (Owned != nullptr)
		*Owned = Parms.Owned;
}

}

