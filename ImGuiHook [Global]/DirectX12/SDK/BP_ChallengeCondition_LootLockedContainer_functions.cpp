#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_LootLockedContainer

#include "Basic.hpp"

#include "BP_ChallengeCondition_LootLockedContainer_classes.hpp"
#include "BP_ChallengeCondition_LootLockedContainer_parameters.hpp"


namespace SDK
{

// Function BP_ChallengeCondition_LootLockedContainer.BP_ChallengeCondition_LootLockedContainer_C.ExecuteUbergraph_BP_ChallengeCondition_LootLockedContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_LootLockedContainer_C::ExecuteUbergraph_BP_ChallengeCondition_LootLockedContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootLockedContainer_C", "ExecuteUbergraph_BP_ChallengeCondition_LootLockedContainer");

	Params::BP_ChallengeCondition_LootLockedContainer_C_ExecuteUbergraph_BP_ChallengeCondition_LootLockedContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_LootLockedContainer.BP_ChallengeCondition_LootLockedContainer_C.OnLockedContainerLooted
// (BlueprintCallable, BlueprintEvent)

void ABP_ChallengeCondition_LootLockedContainer_C::OnLockedContainerLooted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootLockedContainer_C", "OnLockedContainerLooted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_LootLockedContainer.BP_ChallengeCondition_LootLockedContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChallengeCondition_LootLockedContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootLockedContainer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_LootLockedContainer.BP_ChallengeCondition_LootLockedContainer_C.Get Maximum Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Maximum_Progress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_LootLockedContainer_C::Get_Maximum_Progress(int32* Maximum_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootLockedContainer_C", "Get Maximum Progress");

	Params::BP_ChallengeCondition_LootLockedContainer_C_Get_Maximum_Progress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Maximum_Progress != nullptr)
		*Maximum_Progress = Parms.Maximum_Progress;
}


// Function BP_ChallengeCondition_LootLockedContainer.BP_ChallengeCondition_LootLockedContainer_C.Get Condition Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Condition_Text                                         (Parm, OutParm)

void ABP_ChallengeCondition_LootLockedContainer_C::Get_Condition_Text(class FText* Condition_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootLockedContainer_C", "Get Condition Text");

	Params::BP_ChallengeCondition_LootLockedContainer_C_Get_Condition_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Condition_Text != nullptr)
		*Condition_Text = std::move(Parms.Condition_Text);
}

}
