#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_QRLinkModal

#include "Basic.hpp"

#include "UI_QRLinkModal_classes.hpp"
#include "UI_QRLinkModal_parameters.hpp"


namespace SDK
{

// Function UI_QRLinkModal.UI_QRLinkModal_C.ExecuteUbergraph_UI_QRLinkModal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_QRLinkModal_C::ExecuteUbergraph_UI_QRLinkModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_QRLinkModal_C", "ExecuteUbergraph_UI_QRLinkModal");

	Params::UI_QRLinkModal_C_ExecuteUbergraph_UI_QRLinkModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_QRLinkModal.UI_QRLinkModal_C.BndEvt__UI_QRLinkModal_ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_QRLinkModal_C::BndEvt__UI_QRLinkModal_ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_QRLinkModal_C", "BndEvt__UI_QRLinkModal_ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_QRLinkModal.UI_QRLinkModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_QRLinkModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_QRLinkModal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_QRLinkModal.UI_QRLinkModal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_QRLinkModal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_QRLinkModal_C", "PreConstruct");

	Params::UI_QRLinkModal_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
