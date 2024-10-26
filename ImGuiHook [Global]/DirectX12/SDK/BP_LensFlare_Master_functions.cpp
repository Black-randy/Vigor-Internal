#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LensFlare_Master

#include "Basic.hpp"

#include "BP_LensFlare_Master_classes.hpp"
#include "BP_LensFlare_Master_parameters.hpp"


namespace SDK
{

// Function BP_LensFlare_Master.BP_LensFlare_Master_C.ExecuteUbergraph_BP_LensFlare_Master
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LensFlare_Master_C::ExecuteUbergraph_BP_LensFlare_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensFlare_Master_C", "ExecuteUbergraph_BP_LensFlare_Master");

	Params::BP_LensFlare_Master_C_ExecuteUbergraph_BP_LensFlare_Master Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LensFlare_Master.BP_LensFlare_Master_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LensFlare_Master_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensFlare_Master_C", "ReceiveTick");

	Params::BP_LensFlare_Master_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LensFlare_Master.BP_LensFlare_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LensFlare_Master_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensFlare_Master_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensFlare_Master.BP_LensFlare_Master_C.SetupLightSource
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LensFlare_Master_C::SetupLightSource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensFlare_Master_C", "SetupLightSource");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensFlare_Master.BP_LensFlare_Master_C.SetupFlare
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LensFlare_Master_C::SetupFlare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensFlare_Master_C", "SetupFlare");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensFlare_Master.BP_LensFlare_Master_C.SetupFlareCone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LensFlare_Master_C::SetupFlareCone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensFlare_Master_C", "SetupFlareCone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LensFlare_Master.BP_LensFlare_Master_C.SetupMaxDrawDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LensFlare_Master_C::SetupMaxDrawDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LensFlare_Master_C", "SetupMaxDrawDistance");

	UObject::ProcessEvent(Func, nullptr);
}

}

