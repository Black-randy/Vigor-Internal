#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ElectricSparks

#include "Basic.hpp"

#include "BP_ElectricSparks_classes.hpp"
#include "BP_ElectricSparks_parameters.hpp"


namespace SDK
{

// Function BP_ElectricSparks.BP_ElectricSparks_C.ExecuteUbergraph_BP_ElectricSparks
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ElectricSparks_C::ExecuteUbergraph_BP_ElectricSparks(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElectricSparks_C", "ExecuteUbergraph_BP_ElectricSparks");

	Params::BP_ElectricSparks_C_ExecuteUbergraph_BP_ElectricSparks Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ElectricSparks.BP_ElectricSparks_C.OnSpark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EmitterTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ElectricSparks_C::OnSpark(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElectricSparks_C", "OnSpark");

	Params::BP_ElectricSparks_C_OnSpark Parms{};

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = std::move(Location);
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ElectricSparks.BP_ElectricSparks_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void ABP_ElectricSparks_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElectricSparks_C", "Deactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElectricSparks.BP_ElectricSparks_C.Activate
// (BlueprintCallable, BlueprintEvent)

void ABP_ElectricSparks_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElectricSparks_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElectricSparks.BP_ElectricSparks_C.PlaySparks
// (BlueprintCallable, BlueprintEvent)

void ABP_ElectricSparks_C::PlaySparks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElectricSparks_C", "PlaySparks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ElectricSparks.BP_ElectricSparks_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ElectricSparks_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ElectricSparks_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
