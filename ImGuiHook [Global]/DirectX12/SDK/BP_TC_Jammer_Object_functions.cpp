#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_Jammer_Object

#include "Basic.hpp"

#include "BP_TC_Jammer_Object_classes.hpp"
#include "BP_TC_Jammer_Object_parameters.hpp"


namespace SDK
{

// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.ExecuteUbergraph_BP_TC_Jammer_Object
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_Jammer_Object_C::ExecuteUbergraph_BP_TC_Jammer_Object(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "ExecuteUbergraph_BP_TC_Jammer_Object");

	Params::BP_TC_Jammer_Object_C_ExecuteUbergraph_BP_TC_Jammer_Object Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.Trap_Activate
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_Jammer_Object_C::Trap_Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "Trap_Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TC_Jammer_Object_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_Jammer_Object_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction Start on Server__DelegateSignature");

	Params::BP_TC_Jammer_Object_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.BndEvt__Jamming Range Collision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_Jammer_Object_C::BndEvt__Jamming_Range_Collision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "BndEvt__Jamming Range Collision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_TC_Jammer_Object_C_BndEvt__Jamming_Range_Collision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.BndEvt__Jamming Range Collision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_TC_Jammer_Object_C::BndEvt__Jamming_Range_Collision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "BndEvt__Jamming Range Collision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_TC_Jammer_Object_C_BndEvt__Jamming_Range_Collision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.Update Map
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_TC_Jammer_Object_C::Update_Map()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "Update Map");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.Trap_AutoBreak
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_TC_Jammer_Object_C::Trap_AutoBreak()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "Trap_AutoBreak");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.Trap_Break
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Player_that_destroyed_the_trap                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_Jammer_Object_C::Trap_Break(class UObject* Player_that_destroyed_the_trap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "Trap_Break");

	Params::BP_TC_Jammer_Object_C_Trap_Break Parms{};

	Parms.Player_that_destroyed_the_trap = Player_that_destroyed_the_trap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.Trap_Phase_Activated
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TC_Jammer_Object_C::Trap_Phase_Activated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "Trap_Phase_Activated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.Add Jammer Marker
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_Jammer_Object_C::Add_Jammer_Marker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "Add Jammer Marker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.Remove Jammer Marker
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_Jammer_Object_C::Remove_Jammer_Marker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "Remove Jammer Marker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Jammer_Object.BP_TC_Jammer_Object_C.Update Open Map and Compass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TC_Jammer_Object_C::Update_Open_Map_and_Compass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Jammer_Object_C", "Update Open Map and Compass");

	UObject::ProcessEvent(Func, nullptr);
}

}
