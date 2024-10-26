#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Clocks_01

#include "Basic.hpp"

#include "BP_Clocks_01_classes.hpp"
#include "BP_Clocks_01_parameters.hpp"


namespace SDK
{

// Function BP_Clocks_01.BP_Clocks_01_C.ExecuteUbergraph_BP_Clocks_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Clocks_01_C::ExecuteUbergraph_BP_Clocks_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Clocks_01_C", "ExecuteUbergraph_BP_Clocks_01");

	Params::BP_Clocks_01_C_ExecuteUbergraph_BP_Clocks_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Clocks_01.BP_Clocks_01_C.UpdateClock
// (BlueprintCallable, BlueprintEvent)

void ABP_Clocks_01_C::UpdateClock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Clocks_01_C", "UpdateClock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Clocks_01.BP_Clocks_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Clocks_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Clocks_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

