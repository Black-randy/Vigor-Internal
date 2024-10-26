#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerJoinedGroupNotification

#include "Basic.hpp"

#include "UI_PlayerJoinedGroupNotification_classes.hpp"
#include "UI_PlayerJoinedGroupNotification_parameters.hpp"


namespace SDK
{

// Function UI_PlayerJoinedGroupNotification.UI_PlayerJoinedGroupNotification_C.ExecuteUbergraph_UI_PlayerJoinedGroupNotification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerJoinedGroupNotification_C::ExecuteUbergraph_UI_PlayerJoinedGroupNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerJoinedGroupNotification_C", "ExecuteUbergraph_UI_PlayerJoinedGroupNotification");

	Params::UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerJoinedGroupNotification.UI_PlayerJoinedGroupNotification_C.OnPlayerChanged
// (Event, Protected, BlueprintEvent)

void UUI_PlayerJoinedGroupNotification_C::OnPlayerChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerJoinedGroupNotification_C", "OnPlayerChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_PlayerJoinedGroupNotification.UI_PlayerJoinedGroupNotification_C.OnShow
// (Event, Public, BlueprintEvent)

void UUI_PlayerJoinedGroupNotification_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerJoinedGroupNotification_C", "OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_PlayerJoinedGroupNotification.UI_PlayerJoinedGroupNotification_C.OnHide
// (Event, Public, BlueprintEvent)

void UUI_PlayerJoinedGroupNotification_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerJoinedGroupNotification_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_PlayerJoinedGroupNotification.UI_PlayerJoinedGroupNotification_C.ToString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_PlayerJoinedGroupNotification_C::ToString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerJoinedGroupNotification_C", "ToString");

	Params::UI_PlayerJoinedGroupNotification_C_ToString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

