#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorToCarry

#include "Basic.hpp"

#include "BP_ActorToCarry_classes.hpp"
#include "BP_ActorToCarry_parameters.hpp"


namespace SDK
{

// Function BP_ActorToCarry.BP_ActorToCarry_C.ExecuteUbergraph_BP_ActorToCarry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorToCarry_C::ExecuteUbergraph_BP_ActorToCarry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "ExecuteUbergraph_BP_ActorToCarry");

	Params::BP_ActorToCarry_C_ExecuteUbergraph_BP_ActorToCarry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorToCarry.BP_ActorToCarry_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction Start On Client__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorToCarry_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction Start On Client__DelegateSignature");

	Params::BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_4_Interaction_Start_On_Client__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorToCarry.BP_ActorToCarry_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorToCarry_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction Start on Server__DelegateSignature");

	Params::BP_ActorToCarry_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorToCarry.BP_ActorToCarry_C.HalfTick
// (BlueprintCallable, BlueprintEvent)

void ABP_ActorToCarry_C::HalfTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "HalfTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorToCarry.BP_ActorToCarry_C.BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorToCarry_C::BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_ActorToCarry_C_BndEvt__CarriedMesh_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorToCarry.BP_ActorToCarry_C.MulticastedDrop
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ActorToCarry_C::MulticastedDrop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "MulticastedDrop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorToCarry.BP_ActorToCarry_C.MulticastedGrab
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ActorToCarry_C::MulticastedGrab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "MulticastedGrab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorToCarry.BP_ActorToCarry_C.OnCarrierDied
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  DyingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           InstigatingItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ActorToCarry_C::OnCarrierDied(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "OnCarrierDied");

	Params::BP_ActorToCarry_C_OnCarrierDied Parms{};

	Parms.DyingCharacter = DyingCharacter;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.InstigatingItem = InstigatingItem;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorToCarry.BP_ActorToCarry_C.GrabCargoServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorToCarry_C::GrabCargoServer(class ABP_Character_C* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "GrabCargoServer");

	Params::BP_ActorToCarry_C_GrabCargoServer Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorToCarry.BP_ActorToCarry_C.DropCargo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       HandleWorldTransform                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_ActorToCarry_C::DropCargo(const struct FTransform& HandleWorldTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorToCarry_C", "DropCargo");

	Params::BP_ActorToCarry_C_DropCargo Parms{};

	Parms.HandleWorldTransform = std::move(HandleWorldTransform);

	UObject::ProcessEvent(Func, &Parms);
}

}

