#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RaidObjective

#include "Basic.hpp"

#include "BP_RaidObjective_classes.hpp"
#include "BP_RaidObjective_parameters.hpp"


namespace SDK
{

// Function BP_RaidObjective.BP_RaidObjective_C.ExecuteUbergraph_BP_RaidObjective
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidObjective_C::ExecuteUbergraph_BP_RaidObjective(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "ExecuteUbergraph_BP_RaidObjective");

	Params::BP_RaidObjective_C_ExecuteUbergraph_BP_RaidObjective Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RaidObjective.BP_RaidObjective_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RaidObjective_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RaidObjective.BP_RaidObjective_C.Reset States
// (BlueprintCallable, BlueprintEvent)

void ABP_RaidObjective_C::Reset_States()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "Reset States");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RaidObjective.BP_RaidObjective_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidObjective_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "ReceiveTick");

	Params::BP_RaidObjective_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RaidObjective.BP_RaidObjective_C.BndEvt__ActiveZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidObjective_C::BndEvt__ActiveZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "BndEvt__ActiveZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_RaidObjective_C_BndEvt__ActiveZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RaidObjective.BP_RaidObjective_C.BndEvt__ActiveZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_RaidObjective_C::BndEvt__ActiveZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "BndEvt__ActiveZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_RaidObjective_C_BndEvt__ActiveZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RaidObjective.BP_RaidObjective_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RaidObjective_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RaidObjective.BP_RaidObjective_C.Progress Update
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta_seconds                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidObjective_C::Progress_Update(float Delta_seconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "Progress Update");

	Params::BP_RaidObjective_C_Progress_Update Parms{};

	Parms.Delta_seconds = Delta_seconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RaidObjective.BP_RaidObjective_C.Check State
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RaidObjective_C::Check_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "Check State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RaidObjective.BP_RaidObjective_C.Check Progress
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RaidObjective_C::Check_Progress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "Check Progress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RaidObjective.BP_RaidObjective_C.Change State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERaidObjectiveState                     New_State                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidObjective_C::Change_State(ERaidObjectiveState New_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "Change State");

	Params::BP_RaidObjective_C_Change_State Parms{};

	Parms.New_State = New_State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RaidObjective.BP_RaidObjective_C.Current Frame Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Progress                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RaidObjective_C::Current_Frame_Progress(float DeltaSeconds, float* Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "Current Frame Progress");

	Params::BP_RaidObjective_C_Current_Frame_Progress Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;
}


// Function BP_RaidObjective.BP_RaidObjective_C.Is Player Attacker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*                     Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Attacker                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RaidObjective_C::Is_Player_Attacker(class APlayerState* Player_State, bool* Is_Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RaidObjective_C", "Is Player Attacker");

	Params::BP_RaidObjective_C_Is_Player_Attacker Parms{};

	Parms.Player_State = Player_State;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Attacker != nullptr)
		*Is_Attacker = Parms.Is_Attacker;
}

}

