#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Options_Controls

#include "Basic.hpp"

#include "UI_Options_Controls_classes.hpp"
#include "UI_Options_Controls_parameters.hpp"


namespace SDK
{

// Function UI_Options_Controls.UI_Options_Controls_C.ExecuteUbergraph_UI_Options_Controls
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::ExecuteUbergraph_UI_Options_Controls(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "ExecuteUbergraph_UI_Options_Controls");

	Params::UI_Options_Controls_C_ExecuteUbergraph_UI_Options_Controls Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.ShowDesktopSpecificControls
// (BlueprintCallable, BlueprintEvent)

void UUI_Options_Controls_C::ShowDesktopSpecificControls()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "ShowDesktopSpecificControls");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_Controls.UI_Options_Controls_C.OnInputModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputMode                              InputMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::OnInputModeChanged(int32 PlayerIndex, EInputMode InputMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnInputModeChanged");

	Params::UI_Options_Controls_C_OnInputModeChanged Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.InputMode = InputMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.BndEvt__UI_Options_Controls_ActionDefault_K2Node_ComponentBoundEvent_3_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Options_Controls_C::BndEvt__UI_Options_Controls_ActionDefault_K2Node_ComponentBoundEvent_3_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "BndEvt__UI_Options_Controls_ActionDefault_K2Node_ComponentBoundEvent_3_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_Controls.UI_Options_Controls_C.ShowControlScheme
// (BlueprintCallable, BlueprintEvent)

void UUI_Options_Controls_C::ShowControlScheme()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "ShowControlScheme");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_Controls.UI_Options_Controls_C.BndEvt__MotionControlsButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::BndEvt__MotionControlsButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "BndEvt__MotionControlsButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature");

	Params::UI_Options_Controls_C_BndEvt__MotionControlsButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.BndEvt__MotionControlsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::BndEvt__MotionControlsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "BndEvt__MotionControlsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UI_Options_Controls_C_BndEvt__MotionControlsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.BndEvt__ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Options_Controls_C::BndEvt__ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "BndEvt__ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_Controls.UI_Options_Controls_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_Controls_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "PreConstruct");

	Params::UI_Options_Controls_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Options_Controls_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_Controls.UI_Options_Controls_C.BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_30_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_30_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_30_OnButtonFocusEvent__DelegateSignature");

	Params::UI_Options_Controls_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_30_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");

	Params::UI_Options_Controls_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Options_Controls_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_Controls.UI_Options_Controls_C.OnLoaded_B08996E843B69641864BC48BA497F9C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UUI_Options_Controls_C::OnLoaded_B08996E843B69641864BC48BA497F9C3(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "OnLoaded_B08996E843B69641864BC48BA497F9C3");

	Params::UI_Options_Controls_C_OnLoaded_B08996E843B69641864BC48BA497F9C3 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.SwitchSubMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubMenuIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::SwitchSubMenu(int32 SubMenuIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "SwitchSubMenu");

	Params::UI_Options_Controls_C_SwitchSubMenu Parms{};

	Parms.SubMenuIndex = SubMenuIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.UpdateSubmenuTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_Controls_C::UpdateSubmenuTitle(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "UpdateSubmenuTitle");

	Params::UI_Options_Controls_C_UpdateSubmenuTitle Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_Controls.UI_Options_Controls_C.GetAllPanelWidgets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UPanelWidget*>             ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UPanelWidget*> UUI_Options_Controls_C::GetAllPanelWidgets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_Controls_C", "GetAllPanelWidgets");

	Params::UI_Options_Controls_C_GetAllPanelWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

