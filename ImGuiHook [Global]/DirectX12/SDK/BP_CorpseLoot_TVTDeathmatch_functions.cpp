#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CorpseLoot_TVTDeathmatch

#include "Basic.hpp"

#include "BP_CorpseLoot_TVTDeathmatch_classes.hpp"
#include "BP_CorpseLoot_TVTDeathmatch_parameters.hpp"


namespace SDK
{

// Function BP_CorpseLoot_TVTDeathmatch.BP_CorpseLoot_TVTDeathmatch_C.ExecuteUbergraph_BP_CorpseLoot_TVTDeathmatch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CorpseLoot_TVTDeathmatch_C::ExecuteUbergraph_BP_CorpseLoot_TVTDeathmatch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CorpseLoot_TVTDeathmatch_C", "ExecuteUbergraph_BP_CorpseLoot_TVTDeathmatch");

	Params::BP_CorpseLoot_TVTDeathmatch_C_ExecuteUbergraph_BP_CorpseLoot_TVTDeathmatch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CorpseLoot_TVTDeathmatch.BP_CorpseLoot_TVTDeathmatch_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction End on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CorpseLoot_TVTDeathmatch_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_End_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CorpseLoot_TVTDeathmatch_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction End on Server__DelegateSignature");

	Params::BP_CorpseLoot_TVTDeathmatch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_End_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CorpseLoot_TVTDeathmatch.BP_CorpseLoot_TVTDeathmatch_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CorpseLoot_TVTDeathmatch_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CorpseLoot_TVTDeathmatch_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction Start on Server__DelegateSignature");

	Params::BP_CorpseLoot_TVTDeathmatch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CorpseLoot_TVTDeathmatch.BP_CorpseLoot_TVTDeathmatch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CorpseLoot_TVTDeathmatch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CorpseLoot_TVTDeathmatch_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CorpseLoot_TVTDeathmatch.BP_CorpseLoot_TVTDeathmatch_C.Is Used
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Is_Used_0                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CorpseLoot_TVTDeathmatch_C::Is_Used(bool* Is_Used_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CorpseLoot_TVTDeathmatch_C", "Is Used");

	Params::BP_CorpseLoot_TVTDeathmatch_C_Is_Used Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Used_0 != nullptr)
		*Is_Used_0 = Parms.Is_Used_0;
}


// Function BP_CorpseLoot_TVTDeathmatch.BP_CorpseLoot_TVTDeathmatch_C.Destroy Container
// (BlueprintCallable, BlueprintEvent)

void ABP_CorpseLoot_TVTDeathmatch_C::Destroy_Container()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CorpseLoot_TVTDeathmatch_C", "Destroy Container");

	UObject::ProcessEvent(Func, nullptr);
}

}

