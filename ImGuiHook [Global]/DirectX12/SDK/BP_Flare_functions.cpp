#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Flare

#include "Basic.hpp"

#include "BP_Flare_classes.hpp"
#include "BP_Flare_parameters.hpp"


namespace SDK
{

// Function BP_Flare.BP_Flare_C.ExecuteUbergraph_BP_Flare
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Flare_C::ExecuteUbergraph_BP_Flare(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Flare_C", "ExecuteUbergraph_BP_Flare");

	Params::BP_Flare_C_ExecuteUbergraph_BP_Flare Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Flare.BP_Flare_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Flare_C::CustomEvent_2(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Flare_C", "CustomEvent_2");

	Params::BP_Flare_C_CustomEvent_2 Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Flare.BP_Flare_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Flare_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Flare_C", "ReceiveTick");

	Params::BP_Flare_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Flare.BP_Flare_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Flare_C::CustomEvent_0(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Flare_C", "CustomEvent_0");

	Params::BP_Flare_C_CustomEvent_0 Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Flare.BP_Flare_C.Turn On Physics
// (BlueprintCallable, BlueprintEvent)

void ABP_Flare_C::Turn_On_Physics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Flare_C", "Turn On Physics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Flare.BP_Flare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Flare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Flare_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Flare.BP_Flare_C.ShouldEnableLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Flare_C::ShouldEnableLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Flare_C", "ShouldEnableLight");

	UObject::ProcessEvent(Func, nullptr);
}

}
