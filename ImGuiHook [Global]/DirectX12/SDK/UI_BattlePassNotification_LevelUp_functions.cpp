#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePassNotification_LevelUp

#include "Basic.hpp"

#include "UI_BattlePassNotification_LevelUp_classes.hpp"
#include "UI_BattlePassNotification_LevelUp_parameters.hpp"


namespace SDK
{

// Function UI_BattlePassNotification_LevelUp.UI_BattlePassNotification_LevelUp_C.ExecuteUbergraph_UI_BattlePassNotification_LevelUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassNotification_LevelUp_C::ExecuteUbergraph_UI_BattlePassNotification_LevelUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassNotification_LevelUp_C", "ExecuteUbergraph_UI_BattlePassNotification_LevelUp");

	Params::UI_BattlePassNotification_LevelUp_C_ExecuteUbergraph_UI_BattlePassNotification_LevelUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassNotification_LevelUp.UI_BattlePassNotification_LevelUp_C.OnHide
// (Event, Public, BlueprintEvent)

void UUI_BattlePassNotification_LevelUp_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassNotification_LevelUp_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassNotification_LevelUp.UI_BattlePassNotification_LevelUp_C.OnShow
// (Event, Public, BlueprintEvent)

void UUI_BattlePassNotification_LevelUp_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassNotification_LevelUp_C", "OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassNotification_LevelUp.UI_BattlePassNotification_LevelUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BattlePassNotification_LevelUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassNotification_LevelUp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
