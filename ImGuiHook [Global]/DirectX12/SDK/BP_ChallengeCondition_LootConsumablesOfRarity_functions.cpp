#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_LootConsumablesOfRarity

#include "Basic.hpp"

#include "BP_ChallengeCondition_LootConsumablesOfRarity_classes.hpp"
#include "BP_ChallengeCondition_LootConsumablesOfRarity_parameters.hpp"


namespace SDK
{

// Function BP_ChallengeCondition_LootConsumablesOfRarity.BP_ChallengeCondition_LootConsumablesOfRarity_C.ExecuteUbergraph_BP_ChallengeCondition_LootConsumablesOfRarity
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_LootConsumablesOfRarity_C::ExecuteUbergraph_BP_ChallengeCondition_LootConsumablesOfRarity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootConsumablesOfRarity_C", "ExecuteUbergraph_BP_ChallengeCondition_LootConsumablesOfRarity");

	Params::BP_ChallengeCondition_LootConsumablesOfRarity_C_ExecuteUbergraph_BP_ChallengeCondition_LootConsumablesOfRarity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_LootConsumablesOfRarity.BP_ChallengeCondition_LootConsumablesOfRarity_C.OnItemLooted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_LootConsumablesOfRarity_C::OnItemLooted(int32 Amount, class UClass* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootConsumablesOfRarity_C", "OnItemLooted");

	Params::BP_ChallengeCondition_LootConsumablesOfRarity_C_OnItemLooted Parms{};

	Parms.Amount = Amount;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_LootConsumablesOfRarity.BP_ChallengeCondition_LootConsumablesOfRarity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChallengeCondition_LootConsumablesOfRarity_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootConsumablesOfRarity_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_LootConsumablesOfRarity.BP_ChallengeCondition_LootConsumablesOfRarity_C.Get Maximum Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Maximum_Progress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_LootConsumablesOfRarity_C::Get_Maximum_Progress(int32* Maximum_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootConsumablesOfRarity_C", "Get Maximum Progress");

	Params::BP_ChallengeCondition_LootConsumablesOfRarity_C_Get_Maximum_Progress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Maximum_Progress != nullptr)
		*Maximum_Progress = Parms.Maximum_Progress;
}


// Function BP_ChallengeCondition_LootConsumablesOfRarity.BP_ChallengeCondition_LootConsumablesOfRarity_C.Get Condition Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Condition_Text                                         (Parm, OutParm)

void ABP_ChallengeCondition_LootConsumablesOfRarity_C::Get_Condition_Text(class FText* Condition_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_LootConsumablesOfRarity_C", "Get Condition Text");

	Params::BP_ChallengeCondition_LootConsumablesOfRarity_C_Get_Condition_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Condition_Text != nullptr)
		*Condition_Text = std::move(Parms.Condition_Text);
}

}
