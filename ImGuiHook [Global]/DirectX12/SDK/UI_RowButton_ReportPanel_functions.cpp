#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RowButton_ReportPanel

#include "Basic.hpp"

#include "UI_RowButton_ReportPanel_classes.hpp"
#include "UI_RowButton_ReportPanel_parameters.hpp"


namespace SDK
{

// Function UI_RowButton_ReportPanel.UI_RowButton_ReportPanel_C.ExecuteUbergraph_UI_RowButton_ReportPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RowButton_ReportPanel_C::ExecuteUbergraph_UI_RowButton_ReportPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RowButton_ReportPanel_C", "ExecuteUbergraph_UI_RowButton_ReportPanel");

	Params::UI_RowButton_ReportPanel_C_ExecuteUbergraph_UI_RowButton_ReportPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RowButton_ReportPanel.UI_RowButton_ReportPanel_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RowButton_ReportPanel_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RowButton_ReportPanel_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UI_RowButton_ReportPanel_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RowButton_ReportPanel.UI_RowButton_ReportPanel_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RowButton_ReportPanel_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RowButton_ReportPanel_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");

	Params::UI_RowButton_ReportPanel_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RowButton_ReportPanel.UI_RowButton_ReportPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RowButton_ReportPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RowButton_ReportPanel_C", "Tick");

	Params::UI_RowButton_ReportPanel_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RowButton_ReportPanel.UI_RowButton_ReportPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_RowButton_ReportPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RowButton_ReportPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RowButton_ReportPanel.UI_RowButton_ReportPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RowButton_ReportPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RowButton_ReportPanel_C", "PreConstruct");

	Params::UI_RowButton_ReportPanel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RowButton_ReportPanel.UI_RowButton_ReportPanel_C.Set Blocked Icon Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Enabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RowButton_ReportPanel_C::Set_Blocked_Icon_Enabled(bool Is_Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RowButton_ReportPanel_C", "Set Blocked Icon Enabled");

	Params::UI_RowButton_ReportPanel_C_Set_Blocked_Icon_Enabled Parms{};

	Parms.Is_Enabled = Is_Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RowButton_ReportPanel.UI_RowButton_ReportPanel_C.Set Reported Icon Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Enabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RowButton_ReportPanel_C::Set_Reported_Icon_Enabled(bool Is_Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RowButton_ReportPanel_C", "Set Reported Icon Enabled");

	Params::UI_RowButton_ReportPanel_C_Set_Reported_Icon_Enabled Parms{};

	Parms.Is_Enabled = Is_Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

}
