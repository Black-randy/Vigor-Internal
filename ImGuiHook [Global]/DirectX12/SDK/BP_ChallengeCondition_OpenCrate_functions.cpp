#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_OpenCrate

#include "Basic.hpp"

#include "BP_ChallengeCondition_OpenCrate_classes.hpp"
#include "BP_ChallengeCondition_OpenCrate_parameters.hpp"


namespace SDK
{

// Function BP_ChallengeCondition_OpenCrate.BP_ChallengeCondition_OpenCrate_C.ExecuteUbergraph_BP_ChallengeCondition_OpenCrate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_OpenCrate_C::ExecuteUbergraph_BP_ChallengeCondition_OpenCrate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_OpenCrate_C", "ExecuteUbergraph_BP_ChallengeCondition_OpenCrate");

	Params::BP_ChallengeCondition_OpenCrate_C_ExecuteUbergraph_BP_ChallengeCondition_OpenCrate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_OpenCrate.BP_ChallengeCondition_OpenCrate_C.Crate Opened
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Loot_Box_Class                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLootBoxPoolItem>         Items                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ChallengeCondition_OpenCrate_C::Crate_Opened(class UClass* Loot_Box_Class, TArray<struct FLootBoxPoolItem>& Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_OpenCrate_C", "Crate Opened");

	Params::BP_ChallengeCondition_OpenCrate_C_Crate_Opened Parms{};

	Parms.Loot_Box_Class = Loot_Box_Class;
	Parms.Items = std::move(Items);

	UObject::ProcessEvent(Func, &Parms);

	Items = std::move(Parms.Items);
}


// Function BP_ChallengeCondition_OpenCrate.BP_ChallengeCondition_OpenCrate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChallengeCondition_OpenCrate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_OpenCrate_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_OpenCrate.BP_ChallengeCondition_OpenCrate_C.Get Condition Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Condition_Text                                         (Parm, OutParm)

void ABP_ChallengeCondition_OpenCrate_C::Get_Condition_Text(class FText* Condition_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_OpenCrate_C", "Get Condition Text");

	Params::BP_ChallengeCondition_OpenCrate_C_Get_Condition_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Condition_Text != nullptr)
		*Condition_Text = std::move(Parms.Condition_Text);
}


// Function BP_ChallengeCondition_OpenCrate.BP_ChallengeCondition_OpenCrate_C.Get Maximum Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Maximum_Progress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_OpenCrate_C::Get_Maximum_Progress(int32* Maximum_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_OpenCrate_C", "Get Maximum Progress");

	Params::BP_ChallengeCondition_OpenCrate_C_Get_Maximum_Progress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Maximum_Progress != nullptr)
		*Maximum_Progress = Parms.Maximum_Progress;
}

}
