#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_Leaderboards_C

#include "Basic.hpp"

#include "UI_Onboarding_Leaderboards_C_classes.hpp"
#include "UI_Onboarding_Leaderboards_C_parameters.hpp"


namespace SDK
{

// Function UI_Onboarding_Leaderboards_C.UI_Onboarding_Leaderboards_C_C.ExecuteUbergraph_UI_Onboarding_Leaderboards_C
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Onboarding_Leaderboards_C_C::ExecuteUbergraph_UI_Onboarding_Leaderboards_C(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Leaderboards_C_C", "ExecuteUbergraph_UI_Onboarding_Leaderboards_C");

	Params::UI_Onboarding_Leaderboards_C_C_ExecuteUbergraph_UI_Onboarding_Leaderboards_C Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Onboarding_Leaderboards_C.UI_Onboarding_Leaderboards_C_C.BndEvt__UI_GamepadActionWidget_Previous_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Onboarding_Leaderboards_C_C::BndEvt__UI_GamepadActionWidget_Previous_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Leaderboards_C_C", "BndEvt__UI_GamepadActionWidget_Previous_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_Leaderboards_C.UI_Onboarding_Leaderboards_C_C.BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Onboarding_Leaderboards_C_C::BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Leaderboards_C_C", "BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_Leaderboards_C.UI_Onboarding_Leaderboards_C_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Onboarding_Leaderboards_C_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Leaderboards_C_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
