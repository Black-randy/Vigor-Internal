#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HUD_Shelter

#include "Basic.hpp"

#include "UI_HUD_Shelter_classes.hpp"
#include "UI_HUD_Shelter_parameters.hpp"


namespace SDK
{

// Function UI_HUD_Shelter.UI_HUD_Shelter_C.ExecuteUbergraph_UI_HUD_Shelter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HUD_Shelter_C::ExecuteUbergraph_UI_HUD_Shelter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "ExecuteUbergraph_UI_HUD_Shelter");

	Params::UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.ChallengeManagerValidityTimer
// (BlueprintCallable, BlueprintEvent)

void UUI_HUD_Shelter_C::ChallengeManagerValidityTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "ChallengeManagerValidityTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShowHUD                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_HUD_Shelter_C::Show(bool bShowHUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "Show");

	Params::UI_HUD_Shelter_C_Show Parms{};

	Parms.bShowHUD = bShowHUD;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.On Exit Shooting Range
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_HUD_Shelter_C::On_Exit_Shooting_Range()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "On Exit Shooting Range");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.On Entered Shooting Range
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_HUD_Shelter_C::On_Entered_Shooting_Range()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "On Entered Shooting Range");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.ShowConsumableNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ConsumableClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EffectTimer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectPersistent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_HUD_Shelter_C::ShowConsumableNotification(class UClass* ConsumableClass, float EffectTimer, bool IsEffectPersistent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "ShowConsumableNotification");

	Params::UI_HUD_Shelter_C_ShowConsumableNotification Parms{};

	Parms.ConsumableClass = ConsumableClass;
	Parms.EffectTimer = EffectTimer;
	Parms.IsEffectPersistent = IsEffectPersistent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.ShowChallengeNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ChallengeSlot_C*              ChallengeSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HUD_Shelter_C::ShowChallengeNotification(class ABP_ChallengeSlot_C* ChallengeSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "ShowChallengeNotification");

	Params::UI_HUD_Shelter_C_ShowChallengeNotification Parms{};

	Parms.ChallengeSlot = ChallengeSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.EventChallengeProgressUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ChallengeSlot_C*              Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   New_Progress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HUD_Shelter_C::EventChallengeProgressUpdated(class ABP_ChallengeSlot_C* Slot_0, int32 New_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "EventChallengeProgressUpdated");

	Params::UI_HUD_Shelter_C_EventChallengeProgressUpdated Parms{};

	Parms.Slot_0 = Slot_0;
	Parms.New_Progress = New_Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.EventChallengeManagerReady
// (BlueprintCallable, BlueprintEvent)

void UUI_HUD_Shelter_C::EventChallengeManagerReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "EventChallengeManagerReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_HUD_Shelter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "PreConstruct");

	Params::UI_HUD_Shelter_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUD_Shelter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.GetOwningCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Character_C*                  BP_Character                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HUD_Shelter_C::GetOwningCharacter(class ABP_Character_C** BP_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "GetOwningCharacter");

	Params::UI_HUD_Shelter_C_GetOwningCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BP_Character != nullptr)
		*BP_Character = Parms.BP_Character;
}


// Function UI_HUD_Shelter.UI_HUD_Shelter_C.SetMainHUDVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowHUD                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_HUD_Shelter_C::SetMainHUDVisibility(bool ShowHUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HUD_Shelter_C", "SetMainHUDVisibility");

	Params::UI_HUD_Shelter_C_SetMainHUDVisibility Parms{};

	Parms.ShowHUD = ShowHUD;

	UObject::ProcessEvent(Func, &Parms);
}

}

