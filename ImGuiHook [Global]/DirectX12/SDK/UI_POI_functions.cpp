#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_POI

#include "Basic.hpp"

#include "UI_POI_classes.hpp"
#include "UI_POI_parameters.hpp"


namespace SDK
{

// Function UI_POI.UI_POI_C.ExecuteUbergraph_UI_POI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_POI_C::ExecuteUbergraph_UI_POI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_POI_C", "ExecuteUbergraph_UI_POI");

	Params::UI_POI_C_ExecuteUbergraph_UI_POI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_POI.UI_POI_C.Destroy POI
// (BlueprintCallable, BlueprintEvent)

void UUI_POI_C::Destroy_POI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_POI_C", "Destroy POI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_POI.UI_POI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_POI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_POI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

