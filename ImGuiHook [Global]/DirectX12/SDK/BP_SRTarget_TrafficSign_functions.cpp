#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SRTarget_TrafficSign

#include "Basic.hpp"

#include "BP_SRTarget_TrafficSign_classes.hpp"
#include "BP_SRTarget_TrafficSign_parameters.hpp"


namespace SDK
{

// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.ExecuteUbergraph_BP_SRTarget_TrafficSign
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_TrafficSign_C::ExecuteUbergraph_BP_SRTarget_TrafficSign(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "ExecuteUbergraph_BP_SRTarget_TrafficSign");

	Params::BP_SRTarget_TrafficSign_C_ExecuteUbergraph_BP_SRTarget_TrafficSign Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.Reset Hit
// (BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_TrafficSign_C::Reset_Hit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "Reset Hit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.Wait For Next Hits
// (BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_TrafficSign_C::Wait_For_Next_Hits()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "Wait For Next Hits");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.BndEvt__Sign_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SRTarget_TrafficSign_C::BndEvt__Sign_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "BndEvt__Sign_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_SRTarget_TrafficSign_C_BndEvt__Sign_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.SetTargetActivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SRTarget_TrafficSign_C::SetTargetActivity(bool IsActive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "SetTargetActivity");

	Params::BP_SRTarget_TrafficSign_C_SetTargetActivity Parms{};

	Parms.IsActive_0 = IsActive_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.MulticastedPlayGongSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_TrafficSign_C::MulticastedPlayGongSound(class UPrimitiveComponent* HitComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "MulticastedPlayGongSound");

	Params::BP_SRTarget_TrafficSign_C_MulticastedPlayGongSound Parms{};

	Parms.HitComponent = HitComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.MulticastedSetSimulatePhysics
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSimulate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SRTarget_TrafficSign_C::MulticastedSetSimulatePhysics(bool bSimulate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "MulticastedSetSimulatePhysics");

	Params::BP_SRTarget_TrafficSign_C_MulticastedSetSimulatePhysics Parms{};

	Parms.bSimulate = bSimulate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.ResetTargetServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_TrafficSign_C::ResetTargetServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "ResetTargetServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.ReceivePointDamage
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

void ABP_SRTarget_TrafficSign_C::ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "ReceivePointDamage");

	Params::BP_SRTarget_TrafficSign_C_ReceivePointDamage Parms{};

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


// Function BP_SRTarget_TrafficSign.BP_SRTarget_TrafficSign_C.SignHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ShotFromDirection                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                      DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_TrafficSign_C::SignHit(class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation, const struct FVector& ShotFromDirection, const class UDamageType* DamageType, float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_TrafficSign_C", "SignHit");

	Params::BP_SRTarget_TrafficSign_C_SignHit Parms{};

	Parms.HitComponent = HitComponent;
	Parms.HitLocation = std::move(HitLocation);
	Parms.ShotFromDirection = std::move(ShotFromDirection);
	Parms.DamageType = DamageType;
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}

}
