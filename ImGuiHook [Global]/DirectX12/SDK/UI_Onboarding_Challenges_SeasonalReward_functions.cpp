#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_Challenges_SeasonalReward

#include "Basic.hpp"

#include "UI_Onboarding_Challenges_SeasonalReward_classes.hpp"
#include "UI_Onboarding_Challenges_SeasonalReward_parameters.hpp"


namespace SDK
{

// Function UI_Onboarding_Challenges_SeasonalReward.UI_Onboarding_Challenges_SeasonalReward_C.ExecuteUbergraph_UI_Onboarding_Challenges_SeasonalReward
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Onboarding_Challenges_SeasonalReward_C::ExecuteUbergraph_UI_Onboarding_Challenges_SeasonalReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Challenges_SeasonalReward_C", "ExecuteUbergraph_UI_Onboarding_Challenges_SeasonalReward");

	Params::UI_Onboarding_Challenges_SeasonalReward_C_ExecuteUbergraph_UI_Onboarding_Challenges_SeasonalReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Onboarding_Challenges_SeasonalReward.UI_Onboarding_Challenges_SeasonalReward_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Onboarding_Challenges_SeasonalReward_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Challenges_SeasonalReward_C", "Tick");

	Params::UI_Onboarding_Challenges_SeasonalReward_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Onboarding_Challenges_SeasonalReward.UI_Onboarding_Challenges_SeasonalReward_C.BndEvt__UI_GamepadActionWidget_Previous_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Onboarding_Challenges_SeasonalReward_C::BndEvt__UI_GamepadActionWidget_Previous_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Challenges_SeasonalReward_C", "BndEvt__UI_GamepadActionWidget_Previous_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_Challenges_SeasonalReward.UI_Onboarding_Challenges_SeasonalReward_C.BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_1_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Onboarding_Challenges_SeasonalReward_C::BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_1_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Challenges_SeasonalReward_C", "BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_1_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_Challenges_SeasonalReward.UI_Onboarding_Challenges_SeasonalReward_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Onboarding_Challenges_SeasonalReward_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Challenges_SeasonalReward_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_Challenges_SeasonalReward.UI_Onboarding_Challenges_SeasonalReward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Onboarding_Challenges_SeasonalReward_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Challenges_SeasonalReward_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

