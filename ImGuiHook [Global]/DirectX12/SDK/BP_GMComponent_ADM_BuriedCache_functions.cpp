#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GMComponent_ADM_BuriedCache

#include "Basic.hpp"

#include "BP_GMComponent_ADM_BuriedCache_classes.hpp"
#include "BP_GMComponent_ADM_BuriedCache_parameters.hpp"


namespace SDK
{

// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.ExecuteUbergraph_BP_GMComponent_ADM_BuriedCache
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_BuriedCache_C::ExecuteUbergraph_BP_GMComponent_ADM_BuriedCache(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "ExecuteUbergraph_BP_GMComponent_ADM_BuriedCache");

	Params::BP_GMComponent_ADM_BuriedCache_C_ExecuteUbergraph_BP_GMComponent_ADM_BuriedCache Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Find caches
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Script_C*    Player_Controller                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_BuriedCache_C::Find_caches(class ABP_PlayerController_Script_C* Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Find caches");

	Params::BP_GMComponent_ADM_BuriedCache_C_Find_caches Parms{};

	Parms.Player_Controller = Player_Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Cache Interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  Interacting_Character                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ADM_BuriedCache_C*            Interacted_Cache                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_BuriedCache_C::Cache_Interaction(class ABP_Character_C* Interacting_Character, class ABP_ADM_BuriedCache_C* Interacted_Cache)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Cache Interaction");

	Params::BP_GMComponent_ADM_BuriedCache_C_Cache_Interaction Parms{};

	Parms.Interacting_Character = Interacting_Character;
	Parms.Interacted_Cache = Interacted_Cache;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Match Has Started
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_ADM_BuriedCache_C::Match_Has_Started()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Match Has Started");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_BuriedCache_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "ReceiveEndPlay");

	Params::BP_GMComponent_ADM_BuriedCache_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Destroy Cache Loot Manager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GMComponent_ADM_BuriedCache_C::Destroy_Cache_Loot_Manager(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Destroy Cache Loot Manager");

	Params::BP_GMComponent_ADM_BuriedCache_C_Destroy_Cache_Loot_Manager Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Destroy Polaroid Manager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GMComponent_ADM_BuriedCache_C::Destroy_Polaroid_Manager(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Destroy Polaroid Manager");

	Params::BP_GMComponent_ADM_BuriedCache_C_Destroy_Polaroid_Manager Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Initialize Component
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_ADM_BuriedCache_C::Initialize_Component()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Initialize Component");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Mark Buried Cache Key Locations
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PCComponent_ADM_BuriedCache_C*Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_BuriedCache_C::Mark_Buried_Cache_Key_Locations(class UBP_PCComponent_ADM_BuriedCache_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Mark Buried Cache Key Locations");

	Params::BP_GMComponent_ADM_BuriedCache_C_Mark_Buried_Cache_Key_Locations Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Mark Dummy Cache Locations
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PCComponent_ADM_BuriedCache_C*Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_BuriedCache_C::Mark_Dummy_Cache_Locations(class UBP_PCComponent_ADM_BuriedCache_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Mark Dummy Cache Locations");

	Params::BP_GMComponent_ADM_BuriedCache_C_Mark_Dummy_Cache_Locations Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Mark Chosen Cache Locations
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PCComponent_ADM_BuriedCache_C*Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_BuriedCache_C::Mark_Chosen_Cache_Locations(class UBP_PCComponent_ADM_BuriedCache_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Mark Chosen Cache Locations");

	Params::BP_GMComponent_ADM_BuriedCache_C_Mark_Chosen_Cache_Locations Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Get Buried Cache Key
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PCComponent_ADM_BuriedCache_C*Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_BuriedCache_C::Get_Buried_Cache_Key(class UBP_PCComponent_ADM_BuriedCache_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Get Buried Cache Key");

	Params::BP_GMComponent_ADM_BuriedCache_C_Get_Buried_Cache_Key Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Spawn All Caches
// (BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_ADM_BuriedCache_C::Spawn_All_Caches()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Spawn All Caches");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.Spawn Caches
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GMComponent_ADM_BuriedCache_C::Spawn_Caches(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "Spawn Caches");

	Params::BP_GMComponent_ADM_BuriedCache_C_Spawn_Caches Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_GMComponent_ADM_BuriedCache.BP_GMComponent_ADM_BuriedCache_C.GetAllKeyContainers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABP_Lootable_Base_C*>      Buried_Cache_Key_Containers                            (Parm, OutParm)

void UBP_GMComponent_ADM_BuriedCache_C::GetAllKeyContainers(TArray<class ABP_Lootable_Base_C*>* Buried_Cache_Key_Containers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_BuriedCache_C", "GetAllKeyContainers");

	Params::BP_GMComponent_ADM_BuriedCache_C_GetAllKeyContainers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Buried_Cache_Key_Containers != nullptr)
		*Buried_Cache_Key_Containers = std::move(Parms.Buried_Cache_Key_Containers);
}

}

