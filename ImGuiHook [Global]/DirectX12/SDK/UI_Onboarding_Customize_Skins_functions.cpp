#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_Customize_Skins

#include "Basic.hpp"

#include "UI_Onboarding_Customize_Skins_classes.hpp"
#include "UI_Onboarding_Customize_Skins_parameters.hpp"


namespace SDK
{

// Function UI_Onboarding_Customize_Skins.UI_Onboarding_Customize_Skins_C.ExecuteUbergraph_UI_Onboarding_Customize_Skins
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Onboarding_Customize_Skins_C::ExecuteUbergraph_UI_Onboarding_Customize_Skins(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Customize_Skins_C", "ExecuteUbergraph_UI_Onboarding_Customize_Skins");

	Params::UI_Onboarding_Customize_Skins_C_ExecuteUbergraph_UI_Onboarding_Customize_Skins Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Onboarding_Customize_Skins.UI_Onboarding_Customize_Skins_C.BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_0_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Onboarding_Customize_Skins_C::BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_0_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Customize_Skins_C", "BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_0_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_Customize_Skins.UI_Onboarding_Customize_Skins_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Onboarding_Customize_Skins_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Customize_Skins_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_Customize_Skins.UI_Onboarding_Customize_Skins_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Onboarding_Customize_Skins_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_Customize_Skins_C", "Tick");

	Params::UI_Onboarding_Customize_Skins_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
