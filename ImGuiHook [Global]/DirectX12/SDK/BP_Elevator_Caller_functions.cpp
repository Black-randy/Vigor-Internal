#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Elevator_Caller

#include "Basic.hpp"

#include "BP_Elevator_Caller_classes.hpp"
#include "BP_Elevator_Caller_parameters.hpp"


namespace SDK
{

// Function BP_Elevator_Caller.BP_Elevator_Caller_C.ExecuteUbergraph_BP_Elevator_Caller
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_Caller_C::ExecuteUbergraph_BP_Elevator_Caller(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_Caller_C", "ExecuteUbergraph_BP_Elevator_Caller");

	Params::BP_Elevator_Caller_C_ExecuteUbergraph_BP_Elevator_Caller Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Elevator_Caller.BP_Elevator_Caller_C.SetControllerActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Elevator_Caller_C::SetControllerActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_Caller_C", "SetControllerActive");

	Params::BP_Elevator_Caller_C_SetControllerActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Elevator_Caller.BP_Elevator_Caller_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction Start On Client__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_Caller_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_Caller_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction Start On Client__DelegateSignature");

	Params::BP_Elevator_Caller_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Elevator_Caller.BP_Elevator_Caller_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_Caller_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_Caller_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature");

	Params::BP_Elevator_Caller_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Elevator_Caller.BP_Elevator_Caller_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Elevator_Caller_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_Caller_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Elevator_Caller.BP_Elevator_Caller_C.Initialize Controller
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Elevator_C*                   Elevator_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Floor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_Caller_C::Initialize_Controller(class ABP_Elevator_C* Elevator_0, int32 Floor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_Caller_C", "Initialize Controller");

	Params::BP_Elevator_Caller_C_Initialize_Controller Parms{};

	Parms.Elevator_0 = Elevator_0;
	Parms.Floor = Floor;

	UObject::ProcessEvent(Func, &Parms);
}

}

