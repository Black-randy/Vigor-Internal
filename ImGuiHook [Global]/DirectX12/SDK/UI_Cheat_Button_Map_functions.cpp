#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Cheat_Button_Map

#include "Basic.hpp"

#include "UI_Cheat_Button_Map_classes.hpp"
#include "UI_Cheat_Button_Map_parameters.hpp"


namespace SDK
{

// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.ExecuteUbergraph_UI_Cheat_Button_Map
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Map_C::ExecuteUbergraph_UI_Cheat_Button_Map(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Map_C", "ExecuteUbergraph_UI_Cheat_Button_Map");

	Params::UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Map_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Map_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UI_Cheat_Button_Map_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Map_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Map_C", "Tick");

	Params::UI_Cheat_Button_Map_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Cheat_Button_Map_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Map_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.StartMatchmakingOnlevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MapNameString_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Map_C::StartMatchmakingOnlevel(const class FString& MapNameString_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Map_C", "StartMatchmakingOnlevel");

	Params::UI_Cheat_Button_Map_C_StartMatchmakingOnlevel Parms{};

	Parms.MapNameString_0 = std::move(MapNameString_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.OpenLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Map_C::OpenLevel(class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Map_C", "OpenLevel");

	Params::UI_Cheat_Button_Map_C_OpenLevel Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);
}

}

