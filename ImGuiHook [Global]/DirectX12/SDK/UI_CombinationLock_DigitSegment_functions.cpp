#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CombinationLock_DigitSegment

#include "Basic.hpp"

#include "UI_CombinationLock_DigitSegment_classes.hpp"
#include "UI_CombinationLock_DigitSegment_parameters.hpp"


namespace SDK
{

// Function UI_CombinationLock_DigitSegment.UI_CombinationLock_DigitSegment_C.ExecuteUbergraph_UI_CombinationLock_DigitSegment
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CombinationLock_DigitSegment_C::ExecuteUbergraph_UI_CombinationLock_DigitSegment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CombinationLock_DigitSegment_C", "ExecuteUbergraph_UI_CombinationLock_DigitSegment");

	Params::UI_CombinationLock_DigitSegment_C_ExecuteUbergraph_UI_CombinationLock_DigitSegment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CombinationLock_DigitSegment.UI_CombinationLock_DigitSegment_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CombinationLock_DigitSegment_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CombinationLock_DigitSegment_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature");

	Params::UI_CombinationLock_DigitSegment_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CombinationLock_DigitSegment.UI_CombinationLock_DigitSegment_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CombinationLock_DigitSegment_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CombinationLock_DigitSegment_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature");

	Params::UI_CombinationLock_DigitSegment_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CombinationLock_DigitSegment.UI_CombinationLock_DigitSegment_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CombinationLock_DigitSegment_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CombinationLock_DigitSegment_C", "OnFocusReceived");

	Params::UI_CombinationLock_DigitSegment_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_CombinationLock_DigitSegment.UI_CombinationLock_DigitSegment_C.Handle vertical input
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CombinationLock_DigitSegment_C::Handle_vertical_input(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CombinationLock_DigitSegment_C", "Handle vertical input");

	Params::UI_CombinationLock_DigitSegment_C_Handle_vertical_input Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CombinationLock_DigitSegment.UI_CombinationLock_DigitSegment_C.Change digit on segment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Current_digit_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CombinationLock_DigitSegment_C::Change_digit_on_segment(int32 Current_digit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CombinationLock_DigitSegment_C", "Change digit on segment");

	Params::UI_CombinationLock_DigitSegment_C_Change_digit_on_segment Parms{};

	Parms.Current_digit_0 = Current_digit_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CombinationLock_DigitSegment.UI_CombinationLock_DigitSegment_C.Compare current digit to required
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Digit_is_correct                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CombinationLock_DigitSegment_C::Compare_current_digit_to_required(bool* Digit_is_correct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CombinationLock_DigitSegment_C", "Compare current digit to required");

	Params::UI_CombinationLock_DigitSegment_C_Compare_current_digit_to_required Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Digit_is_correct != nullptr)
		*Digit_is_correct = Parms.Digit_is_correct;
}


// Function UI_CombinationLock_DigitSegment.UI_CombinationLock_DigitSegment_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_CombinationLock_DigitSegment_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CombinationLock_DigitSegment_C", "GetWidgetToFocus");

	Params::UI_CombinationLock_DigitSegment_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

