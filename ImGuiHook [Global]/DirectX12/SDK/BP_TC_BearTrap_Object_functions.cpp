#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_BearTrap_Object

#include "Basic.hpp"

#include "BP_TC_BearTrap_Object_classes.hpp"
#include "BP_TC_BearTrap_Object_parameters.hpp"


namespace SDK
{

// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.ExecuteUbergraph_BP_TC_BearTrap_Object
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_BearTrap_Object_C::ExecuteUbergraph_BP_TC_BearTrap_Object(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "ExecuteUbergraph_BP_TC_BearTrap_Object");

	Params::BP_TC_BearTrap_Object_C_ExecuteUbergraph_BP_TC_BearTrap_Object Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_BearTrap_Object_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "ReceiveEndPlay");

	Params::BP_TC_BearTrap_Object_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.BreakBearTrap
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_BearTrap_Object_C::BreakBearTrap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "BreakBearTrap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.ActivatePermanentStaminaEffects
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_BearTrap_Object_C::ActivatePermanentStaminaEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "ActivatePermanentStaminaEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.DisableMovementForShortTime
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_BearTrap_Object_C::DisableMovementForShortTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "DisableMovementForShortTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.BndEvt__CollisionRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_TC_BearTrap_Object_C::BndEvt__CollisionRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "BndEvt__CollisionRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_TC_BearTrap_Object_C_BndEvt__CollisionRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.BearTrap_SetUpVariablesFromTool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BearTrap_Damage_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BearTrap_StunDuration                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_BearTrap_Object_C::BearTrap_SetUpVariablesFromTool(float BearTrap_Damage_0, float BearTrap_StunDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "BearTrap_SetUpVariablesFromTool");

	Params::BP_TC_BearTrap_Object_C_BearTrap_SetUpVariablesFromTool Parms{};

	Parms.BearTrap_Damage_0 = BearTrap_Damage_0;
	Parms.BearTrap_StunDuration = BearTrap_StunDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.AddBearTrapUIToHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TC_BearTrap_Object_C::AddBearTrapUIToHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "AddBearTrapUIToHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.OnRep_CharacterThatTriggeredTrap
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_BearTrap_Object_C::OnRep_CharacterThatTriggeredTrap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "OnRep_CharacterThatTriggeredTrap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.DealDamage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TC_BearTrap_Object_C::DealDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "DealDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.Trap_Break
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Player_that_destroyed_the_trap                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_BearTrap_Object_C::Trap_Break(class UObject* Player_that_destroyed_the_trap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "Trap_Break");

	Params::BP_TC_BearTrap_Object_C_Trap_Break Parms{};

	Parms.Player_that_destroyed_the_trap = Player_that_destroyed_the_trap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_BearTrap_Object.BP_TC_BearTrap_Object_C.Trap_Triggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ObjectThatTriggeredTrap                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_BearTrap_Object_C::Trap_Triggered(class UObject* ObjectThatTriggeredTrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_BearTrap_Object_C", "Trap_Triggered");

	Params::BP_TC_BearTrap_Object_C_Trap_Triggered Parms{};

	Parms.ObjectThatTriggeredTrap = ObjectThatTriggeredTrap;

	UObject::ProcessEvent(Func, &Parms);
}

}
