#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LinkToStash

#include "Basic.hpp"

#include "BP_LinkToStash_classes.hpp"
#include "BP_LinkToStash_parameters.hpp"


namespace SDK
{

// Function BP_LinkToStash.BP_LinkToStash_C.ExecuteUbergraph_BP_LinkToStash
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LinkToStash_C::ExecuteUbergraph_BP_LinkToStash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LinkToStash_C", "ExecuteUbergraph_BP_LinkToStash");

	Params::BP_LinkToStash_C_ExecuteUbergraph_BP_LinkToStash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LinkToStash.BP_LinkToStash_C.Event_OnboardingSequenceFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_LinkToStash_C::Event_OnboardingSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LinkToStash_C", "Event_OnboardingSequenceFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LinkToStash.BP_LinkToStash_C.Event_OnboardingSequenceStarted
// (BlueprintCallable, BlueprintEvent)

void ABP_LinkToStash_C::Event_OnboardingSequenceStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LinkToStash_C", "Event_OnboardingSequenceStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LinkToStash.BP_LinkToStash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LinkToStash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LinkToStash_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

