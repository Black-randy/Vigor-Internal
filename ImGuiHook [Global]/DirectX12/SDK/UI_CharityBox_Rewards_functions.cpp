#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CharityBox_Rewards

#include "Basic.hpp"

#include "UI_CharityBox_Rewards_classes.hpp"
#include "UI_CharityBox_Rewards_parameters.hpp"


namespace SDK
{

// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CharityBox_Rewards_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CharityBox_Rewards_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.ExecuteUbergraph_UI_CharityBox_Rewards
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CharityBox_Rewards_C::ExecuteUbergraph_UI_CharityBox_Rewards(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "ExecuteUbergraph_UI_CharityBox_Rewards");

	Params::UI_CharityBox_Rewards_C_ExecuteUbergraph_UI_CharityBox_Rewards Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CharityBox_Rewards_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.OnChildFocusReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                          InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CharityBox_Rewards_C::OnChildFocusReceived(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "OnChildFocusReceived");

	Params::UI_CharityBox_Rewards_C_OnChildFocusReceived Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CharityBox_Rewards_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "OnFocusReceived");

	Params::UI_CharityBox_Rewards_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.FillData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCloudCharityBoxSeasonMilestoneInfo>MilestoneInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   DonatedFood                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FoodToNextMilestone                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CharityBox_Rewards_C::FillData(TArray<struct FCloudCharityBoxSeasonMilestoneInfo>& MilestoneInfo, int32 DonatedFood, int32* FoodToNextMilestone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "FillData");

	Params::UI_CharityBox_Rewards_C_FillData Parms{};

	Parms.MilestoneInfo = std::move(MilestoneInfo);
	Parms.DonatedFood = DonatedFood;

	UObject::ProcessEvent(Func, &Parms);

	MilestoneInfo = std::move(Parms.MilestoneInfo);

	if (FoodToNextMilestone != nullptr)
		*FoodToNextMilestone = Parms.FoodToNextMilestone;
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.CallOnClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CharityBox_Rewards_C::CallOnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "CallOnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.CallOnPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CharityBox_Rewards_C::CallOnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "CallOnPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.ClearData
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CharityBox_Rewards_C::ClearData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "ClearData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CharityBox_Rewards.UI_CharityBox_Rewards_C.InsertSort
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCloudCharityBoxSeasonMilestoneInfo>Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CharityBox_Rewards_C::InsertSort(TArray<struct FCloudCharityBoxSeasonMilestoneInfo>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CharityBox_Rewards_C", "InsertSort");

	Params::UI_CharityBox_Rewards_C_InsertSort Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}

}

