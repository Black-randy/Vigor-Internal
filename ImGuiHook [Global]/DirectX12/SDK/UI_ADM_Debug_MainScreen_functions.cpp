#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ADM_Debug_MainScreen

#include "Basic.hpp"

#include "UI_ADM_Debug_MainScreen_classes.hpp"
#include "UI_ADM_Debug_MainScreen_parameters.hpp"


namespace SDK
{

// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.ExecuteUbergraph_UI_ADM_Debug_MainScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_Debug_MainScreen_C::ExecuteUbergraph_UI_ADM_Debug_MainScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "ExecuteUbergraph_UI_ADM_Debug_MainScreen");

	Params::UI_ADM_Debug_MainScreen_C_ExecuteUbergraph_UI_ADM_Debug_MainScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.BndEvt__PrintDistancesButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_Debug_MainScreen_C::BndEvt__PrintDistancesButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "BndEvt__PrintDistancesButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UI_ADM_Debug_MainScreen_C_BndEvt__PrintDistancesButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.BndEvt__HidePassiveUIButton_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_Debug_MainScreen_C::BndEvt__HidePassiveUIButton_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "BndEvt__HidePassiveUIButton_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature");

	Params::UI_ADM_Debug_MainScreen_C_BndEvt__HidePassiveUIButton_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.BndEvt__ShowPassiveUIButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_Debug_MainScreen_C::BndEvt__ShowPassiveUIButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "BndEvt__ShowPassiveUIButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature");

	Params::UI_ADM_Debug_MainScreen_C_BndEvt__ShowPassiveUIButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.BndEvt__DropAllAirDropsButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_Debug_MainScreen_C::BndEvt__DropAllAirDropsButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "BndEvt__DropAllAirDropsButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature");

	Params::UI_ADM_Debug_MainScreen_C_BndEvt__DropAllAirDropsButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.Focus Module List
// (BlueprintCallable, BlueprintEvent)

void UUI_ADM_Debug_MainScreen_C::Focus_Module_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "Focus Module List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.Remove Module
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_Debug_MainScreen_C::Remove_Module(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "Remove Module");

	Params::UI_ADM_Debug_MainScreen_C_Remove_Module Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.Add Module
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_Debug_MainScreen_C::Add_Module(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "Add Module");

	Params::UI_ADM_Debug_MainScreen_C_Add_Module Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ADM_Debug_MainScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_Debug_MainScreen_C::BndEvt__PauseButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "BndEvt__PauseButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");

	Params::UI_ADM_Debug_MainScreen_C_BndEvt__PauseButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.Get Game Mode State Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUI_ADM_Debug_MainScreen_C::Get_Game_Mode_State_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "Get Game Mode State Text");

	Params::UI_ADM_Debug_MainScreen_C_Get_Game_Mode_State_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.Get Toggle Button Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUI_ADM_Debug_MainScreen_C::Get_Toggle_Button_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "Get Toggle Button Text");

	Params::UI_ADM_Debug_MainScreen_C_Get_Toggle_Button_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_ADM_Debug_MainScreen.UI_ADM_Debug_MainScreen_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_ADM_Debug_MainScreen_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_Debug_MainScreen_C", "GetWidgetToFocus");

	Params::UI_ADM_Debug_MainScreen_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
