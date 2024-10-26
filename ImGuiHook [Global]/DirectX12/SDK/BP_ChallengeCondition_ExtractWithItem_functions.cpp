#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_ExtractWithItem

#include "Basic.hpp"

#include "BP_ChallengeCondition_ExtractWithItem_classes.hpp"
#include "BP_ChallengeCondition_ExtractWithItem_parameters.hpp"


namespace SDK
{

// Function BP_ChallengeCondition_ExtractWithItem.BP_ChallengeCondition_ExtractWithItem_C.ExecuteUbergraph_BP_ChallengeCondition_ExtractWithItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_ExtractWithItem_C::ExecuteUbergraph_BP_ChallengeCondition_ExtractWithItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_ExtractWithItem_C", "ExecuteUbergraph_BP_ChallengeCondition_ExtractWithItem");

	Params::BP_ChallengeCondition_ExtractWithItem_C_ExecuteUbergraph_BP_ChallengeCondition_ExtractWithItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_ExtractWithItem.BP_ChallengeCondition_ExtractWithItem_C.Encounter Result Screen Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUserMatchResult                 Match_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ChallengeCondition_ExtractWithItem_C::Encounter_Result_Screen_Entered(const struct FUserMatchResult& Match_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_ExtractWithItem_C", "Encounter Result Screen Entered");

	Params::BP_ChallengeCondition_ExtractWithItem_C_Encounter_Result_Screen_Entered Parms{};

	Parms.Match_Result = std::move(Match_Result);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_ExtractWithItem.BP_ChallengeCondition_ExtractWithItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChallengeCondition_ExtractWithItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_ExtractWithItem_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_ExtractWithItem.BP_ChallengeCondition_ExtractWithItem_C.Get Maximum Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Maximum_Progress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_ExtractWithItem_C::Get_Maximum_Progress(int32* Maximum_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_ExtractWithItem_C", "Get Maximum Progress");

	Params::BP_ChallengeCondition_ExtractWithItem_C_Get_Maximum_Progress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Maximum_Progress != nullptr)
		*Maximum_Progress = Parms.Maximum_Progress;
}


// Function BP_ChallengeCondition_ExtractWithItem.BP_ChallengeCondition_ExtractWithItem_C.Get Condition Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Condition_Text                                         (Parm, OutParm)

void ABP_ChallengeCondition_ExtractWithItem_C::Get_Condition_Text(class FText* Condition_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_ExtractWithItem_C", "Get Condition Text");

	Params::BP_ChallengeCondition_ExtractWithItem_C_Get_Condition_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Condition_Text != nullptr)
		*Condition_Text = std::move(Parms.Condition_Text);
}


// Function BP_ChallengeCondition_ExtractWithItem.BP_ChallengeCondition_ExtractWithItem_C.GetAllItemsNames
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABP_ChallengeCondition_ExtractWithItem_C::GetAllItemsNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_ExtractWithItem_C", "GetAllItemsNames");

	Params::BP_ChallengeCondition_ExtractWithItem_C_GetAllItemsNames Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ChallengeCondition_ExtractWithItem.BP_ChallengeCondition_ExtractWithItem_C.IsConditionMet?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemSlot>                Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   ItemsCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_ExtractWithItem_C::IsConditionMet_(TArray<struct FItemSlot>& Array, int32* ItemsCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_ExtractWithItem_C", "IsConditionMet?");

	Params::BP_ChallengeCondition_ExtractWithItem_C_IsConditionMet_ Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (ItemsCount != nullptr)
		*ItemsCount = Parms.ItemsCount;
}

}

