#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_Decoy_Thrown

#include "Basic.hpp"

#include "BP_TC_Decoy_Thrown_classes.hpp"
#include "BP_TC_Decoy_Thrown_parameters.hpp"


namespace SDK
{

// Function BP_TC_Decoy_Thrown.BP_TC_Decoy_Thrown_C.ExecuteUbergraph_BP_TC_Decoy_Thrown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_Decoy_Thrown_C::ExecuteUbergraph_BP_TC_Decoy_Thrown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Decoy_Thrown_C", "ExecuteUbergraph_BP_TC_Decoy_Thrown");

	Params::BP_TC_Decoy_Thrown_C_ExecuteUbergraph_BP_TC_Decoy_Thrown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_Decoy_Thrown.BP_TC_Decoy_Thrown_C.OnGrenadeExplode
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FExplosionEffect>         ExplosionEffects                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_TC_Decoy_Thrown_C::OnGrenadeExplode(const TArray<struct FExplosionEffect>& ExplosionEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Decoy_Thrown_C", "OnGrenadeExplode");

	Params::BP_TC_Decoy_Thrown_C_OnGrenadeExplode Parms{};

	Parms.ExplosionEffects = std::move(ExplosionEffects);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_Decoy_Thrown.BP_TC_Decoy_Thrown_C.OnComponentBeginOverlap_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_TC_Decoy_Thrown_C::OnComponentBeginOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Decoy_Thrown_C", "OnComponentBeginOverlap_Event_0");

	Params::BP_TC_Decoy_Thrown_C_OnComponentBeginOverlap_Event_0 Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_Decoy_Thrown.BP_TC_Decoy_Thrown_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_TC_Decoy_Thrown_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Decoy_Thrown_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Decoy_Thrown.BP_TC_Decoy_Thrown_C.DestroyAfterRoundFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_TC_Decoy_Thrown_C::DestroyAfterRoundFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Decoy_Thrown_C", "DestroyAfterRoundFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Decoy_Thrown.BP_TC_Decoy_Thrown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TC_Decoy_Thrown_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Decoy_Thrown_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Decoy_Thrown.BP_TC_Decoy_Thrown_C.OnThrow
// (Event, Public, BlueprintEvent)

void ABP_TC_Decoy_Thrown_C::OnThrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Decoy_Thrown_C", "OnThrow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TC_Decoy_Thrown.BP_TC_Decoy_Thrown_C.OnImpact
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_Decoy_Thrown_C::OnImpact(const struct FVector& HitLocation, const struct FVector& NormalImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Decoy_Thrown_C", "OnImpact");

	Params::BP_TC_Decoy_Thrown_C_OnImpact Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.NormalImpulse = std::move(NormalImpulse);

	UObject::ProcessEvent(Func, &Parms);
}

}

