#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MementoShelterObject

#include "Basic.hpp"

#include "BP_MementoShelterObject_classes.hpp"
#include "BP_MementoShelterObject_parameters.hpp"


namespace SDK
{

// Function BP_MementoShelterObject.BP_MementoShelterObject_C.ExecuteUbergraph_BP_MementoShelterObject
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MementoShelterObject_C::ExecuteUbergraph_BP_MementoShelterObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MementoShelterObject_C", "ExecuteUbergraph_BP_MementoShelterObject");

	Params::BP_MementoShelterObject_C_ExecuteUbergraph_BP_MementoShelterObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MementoShelterObject.BP_MementoShelterObject_C.Stash Loaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStash*                           Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStashComponent*                  Inventory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MementoShelterObject_C::Stash_Loaded(class AStash* Sender, class UStashComponent* Inventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MementoShelterObject_C", "Stash Loaded");

	Params::BP_MementoShelterObject_C_Stash_Loaded Parms{};

	Parms.Sender = Sender;
	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MementoShelterObject.BP_MementoShelterObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MementoShelterObject_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MementoShelterObject_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MementoShelterObject.BP_MementoShelterObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MementoShelterObject_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MementoShelterObject_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MementoShelterObject.BP_MementoShelterObject_C.Set Visuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       Data_Table                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MementoShelterObject_C::Set_Visuals(class UDataTable* Data_Table)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MementoShelterObject_C", "Set Visuals");

	Params::BP_MementoShelterObject_C_Set_Visuals Parms{};

	Parms.Data_Table = Data_Table;

	UObject::ProcessEvent(Func, &Parms);
}

}
