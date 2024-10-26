#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Scoreboard_Row

#include "Basic.hpp"

#include "UI_Scoreboard_Row_classes.hpp"
#include "UI_Scoreboard_Row_parameters.hpp"


namespace SDK
{

// Function UI_Scoreboard_Row.UI_Scoreboard_Row_C.ExecuteUbergraph_UI_Scoreboard_Row
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Row_C::ExecuteUbergraph_UI_Scoreboard_Row(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Row_C", "ExecuteUbergraph_UI_Scoreboard_Row");

	Params::UI_Scoreboard_Row_C_ExecuteUbergraph_UI_Scoreboard_Row Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Row.UI_Scoreboard_Row_C.OnBlocklistUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Reason_For_Update                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Scoreboard_Row_C::OnBlocklistUpdated(const class FString& Reason_For_Update)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Row_C", "OnBlocklistUpdated");

	Params::UI_Scoreboard_Row_C_OnBlocklistUpdated Parms{};

	Parms.Reason_For_Update = std::move(Reason_For_Update);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Row.UI_Scoreboard_Row_C.BndEvt__UI_Scoreboard_Row_FlameButton_62_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Row_C::BndEvt__UI_Scoreboard_Row_FlameButton_62_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Row_C", "BndEvt__UI_Scoreboard_Row_FlameButton_62_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UI_Scoreboard_Row_C_BndEvt__UI_Scoreboard_Row_FlameButton_62_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Row.UI_Scoreboard_Row_C.BndEvt__UI_Scoreboard_Row_FlameButton_62_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Row_C::BndEvt__UI_Scoreboard_Row_FlameButton_62_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Row_C", "BndEvt__UI_Scoreboard_Row_FlameButton_62_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UI_Scoreboard_Row_C_BndEvt__UI_Scoreboard_Row_FlameButton_62_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Row.UI_Scoreboard_Row_C.Initialize Row
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ScoreboardRow            RowData_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Scoreboard_Row_C::Initialize_Row(int32 Index_0, const struct FStruct_ScoreboardRow& RowData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Row_C", "Initialize Row");

	Params::UI_Scoreboard_Row_C_Initialize_Row Parms{};

	Parms.Index_0 = Index_0;
	Parms.RowData_0 = std::move(RowData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Row.UI_Scoreboard_Row_C.Set Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Scoreboard_Row_C::Set_Selected(bool IsSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Row_C", "Set Selected");

	Params::UI_Scoreboard_Row_C_Set_Selected Parms{};

	Parms.IsSelected_0 = IsSelected_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Row.UI_Scoreboard_Row_C.HighlightSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Scoreboard_Row_C::HighlightSelected(bool IsSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Row_C", "HighlightSelected");

	Params::UI_Scoreboard_Row_C_HighlightSelected Parms{};

	Parms.IsSelected_0 = IsSelected_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Scoreboard_Row.UI_Scoreboard_Row_C.FindPlayerStateByPlayerID
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Player_ID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     PlayerState                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Row_C::FindPlayerStateByPlayerID(int32 Player_ID, class APlayerState** PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Scoreboard_Row_C", "FindPlayerStateByPlayerID");

	Params::UI_Scoreboard_Row_C_FindPlayerStateByPlayerID Parms{};

	Parms.Player_ID = Player_ID;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerState != nullptr)
		*PlayerState = Parms.PlayerState;
}

}

