#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_MatchResult

#include "Basic.hpp"

#include "UI_Raid_MatchResult_classes.hpp"
#include "UI_Raid_MatchResult_parameters.hpp"


namespace SDK
{

// Function UI_Raid_MatchResult.UI_Raid_MatchResult_C.ExecuteUbergraph_UI_Raid_MatchResult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_MatchResult_C::ExecuteUbergraph_UI_Raid_MatchResult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchResult_C", "ExecuteUbergraph_UI_Raid_MatchResult");

	Params::UI_Raid_MatchResult_C_ExecuteUbergraph_UI_Raid_MatchResult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Raid_MatchResult.UI_Raid_MatchResult_C.Countdown Event
// (BlueprintCallable, BlueprintEvent)

void UUI_Raid_MatchResult_C::Countdown_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchResult_C", "Countdown Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Raid_MatchResult.UI_Raid_MatchResult_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Raid_MatchResult_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchResult_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Raid_MatchResult.UI_Raid_MatchResult_C.BndEvt__Leave_Button_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Raid_MatchResult_C::BndEvt__Leave_Button_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchResult_C", "BndEvt__Leave_Button_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Raid_MatchResult.UI_Raid_MatchResult_C.Fill In Teams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GSC_Team_Raid_C*              Winner_Team                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GSC_Team_Raid_C*              Loser_Team                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Winner_Friendly                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Raid_MatchResult_C::Fill_In_Teams(class UBP_GSC_Team_Raid_C* Winner_Team, class UBP_GSC_Team_Raid_C* Loser_Team, bool Is_Winner_Friendly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchResult_C", "Fill In Teams");

	Params::UI_Raid_MatchResult_C_Fill_In_Teams Parms{};

	Parms.Winner_Team = Winner_Team;
	Parms.Loser_Team = Loser_Team;
	Parms.Is_Winner_Friendly = Is_Winner_Friendly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Raid_MatchResult.UI_Raid_MatchResult_C.Leave Match
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Raid_MatchResult_C::Leave_Match()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchResult_C", "Leave Match");

	UObject::ProcessEvent(Func, nullptr);
}

}
