#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SRTarget_DestructibleBase

#include "Basic.hpp"

#include "BP_SRTarget_DestructibleBase_classes.hpp"
#include "BP_SRTarget_DestructibleBase_parameters.hpp"


namespace SDK
{

// Function BP_SRTarget_DestructibleBase.BP_SRTarget_DestructibleBase_C.ExecuteUbergraph_BP_SRTarget_DestructibleBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_DestructibleBase_C::ExecuteUbergraph_BP_SRTarget_DestructibleBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_DestructibleBase_C", "ExecuteUbergraph_BP_SRTarget_DestructibleBase");

	Params::BP_SRTarget_DestructibleBase_C_ExecuteUbergraph_BP_SRTarget_DestructibleBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_DestructibleBase.BP_SRTarget_DestructibleBase_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                      DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ShotFromDirection                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SRTarget_DestructibleBase_C::ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_DestructibleBase_C", "ReceivePointDamage");

	Params::BP_SRTarget_DestructibleBase_C_ReceivePointDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.ShotFromDirection = std::move(ShotFromDirection);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitInfo = std::move(HitInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_DestructibleBase.BP_SRTarget_DestructibleBase_C.RemakeBottle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_DestructibleBase_C::RemakeBottle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_DestructibleBase_C", "RemakeBottle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_DestructibleBase.BP_SRTarget_DestructibleBase_C.DestroyBottle
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpulseDir                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ImpulseStrength                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_DestructibleBase_C::DestroyBottle(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_DestructibleBase_C", "DestroyBottle");

	Params::BP_SRTarget_DestructibleBase_C_DestroyBottle Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.HitLocation = std::move(HitLocation);
	Parms.ImpulseDir = std::move(ImpulseDir);
	Parms.ImpulseStrength = ImpulseStrength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_DestructibleBase.BP_SRTarget_DestructibleBase_C.ResetTargetServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_DestructibleBase_C::ResetTargetServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_DestructibleBase_C", "ResetTargetServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_DestructibleBase.BP_SRTarget_DestructibleBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_DestructibleBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_DestructibleBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

