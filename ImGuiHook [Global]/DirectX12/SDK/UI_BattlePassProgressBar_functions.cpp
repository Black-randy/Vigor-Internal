#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePassProgressBar

#include "Basic.hpp"

#include "UI_BattlePassProgressBar_classes.hpp"
#include "UI_BattlePassProgressBar_parameters.hpp"


namespace SDK
{

// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.ExecuteUbergraph_UI_BattlePassProgressBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassProgressBar_C::ExecuteUbergraph_UI_BattlePassProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "ExecuteUbergraph_UI_BattlePassProgressBar");

	Params::UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.Finish Up Progress
// (BlueprintCallable, BlueprintEvent)

void UUI_BattlePassProgressBar_C::Finish_Up_Progress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "Finish Up Progress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.Reset XP Progress
// (BlueprintCallable, BlueprintEvent)

void UUI_BattlePassProgressBar_C::Reset_XP_Progress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "Reset XP Progress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.XP Progress finished
// (BlueprintCallable, BlueprintEvent)

void UUI_BattlePassProgressBar_C::XP_Progress_finished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "XP Progress finished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.Animation Timer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassProgressBar_C::Animation_Timer(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "Animation Timer");

	Params::UI_BattlePassProgressBar_C_Animation_Timer Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.EventAwardedXPFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_BattlePassProgressBar_C::EventAwardedXPFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "EventAwardedXPFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.EventBaseXPFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_BattlePassProgressBar_C::EventBaseXPFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "EventBaseXPFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.EventPlayBarAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BaseXP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AwardedXP                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BoostXP                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_RewardScreen_BattlePass_C*    RewardScreen                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLevelUp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassProgressBar_C::EventPlayBarAnimation(float BaseXP, float AwardedXP, float BoostXP, class UUI_RewardScreen_BattlePass_C* RewardScreen, bool IsLevelUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "EventPlayBarAnimation");

	Params::UI_BattlePassProgressBar_C_EventPlayBarAnimation Parms{};

	Parms.BaseXP = BaseXP;
	Parms.AwardedXP = AwardedXP;
	Parms.BoostXP = BoostXP;
	Parms.RewardScreen = RewardScreen;
	Parms.IsLevelUp = IsLevelUp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.Set Progress Parameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattlePassProgressBarParameter        Parameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassProgressBar_C::Set_Progress_Parameter(E_BattlePassProgressBarParameter Parameter, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "Set Progress Parameter");

	Params::UI_BattlePassProgressBar_C_Set_Progress_Parameter Parms{};

	Parms.Parameter = Parameter;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.Get Dynamic Material
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BattlePassProgressBar_C::Get_Dynamic_Material()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassProgressBar_C", "Get Dynamic Material");

	UObject::ProcessEvent(Func, nullptr);
}

}
