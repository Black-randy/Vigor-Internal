#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HoldToCloseSeasonalReward

#include "Basic.hpp"

#include "UI_HoldToCloseSeasonalReward_classes.hpp"
#include "UI_HoldToCloseSeasonalReward_parameters.hpp"


namespace SDK
{

// Function UI_HoldToCloseSeasonalReward.UI_HoldToCloseSeasonalReward_C.ExecuteUbergraph_UI_HoldToCloseSeasonalReward
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HoldToCloseSeasonalReward_C::ExecuteUbergraph_UI_HoldToCloseSeasonalReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HoldToCloseSeasonalReward_C", "ExecuteUbergraph_UI_HoldToCloseSeasonalReward");

	Params::UI_HoldToCloseSeasonalReward_C_ExecuteUbergraph_UI_HoldToCloseSeasonalReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HoldToCloseSeasonalReward.UI_HoldToCloseSeasonalReward_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HoldToCloseSeasonalReward_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HoldToCloseSeasonalReward_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_HoldToCloseSeasonalReward.UI_HoldToCloseSeasonalReward_C.BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_HoldToCloseSeasonalReward_C::BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HoldToCloseSeasonalReward_C", "BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

