#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShelterBuilder

#include "Basic.hpp"

#include "BP_ShelterBuilder_classes.hpp"
#include "BP_ShelterBuilder_parameters.hpp"


namespace SDK
{

// Function BP_ShelterBuilder.BP_ShelterBuilder_C.ExecuteUbergraph_BP_ShelterBuilder
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterBuilder_C::ExecuteUbergraph_BP_ShelterBuilder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterBuilder_C", "ExecuteUbergraph_BP_ShelterBuilder");

	Params::BP_ShelterBuilder_C_ExecuteUbergraph_BP_ShelterBuilder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterBuilder.BP_ShelterBuilder_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start On Client__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterBuilder_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_On_Client__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterBuilder_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start On Client__DelegateSignature");

	Params::BP_ShelterBuilder_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_On_Client__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}

}

