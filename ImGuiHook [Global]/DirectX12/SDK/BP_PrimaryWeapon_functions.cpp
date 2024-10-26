#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PrimaryWeapon

#include "Basic.hpp"

#include "BP_PrimaryWeapon_classes.hpp"
#include "BP_PrimaryWeapon_parameters.hpp"


namespace SDK
{

// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.ExecuteUbergraph_BP_PrimaryWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PrimaryWeapon_C::ExecuteUbergraph_BP_PrimaryWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "ExecuteUbergraph_BP_PrimaryWeapon");

	Params::BP_PrimaryWeapon_C_ExecuteUbergraph_BP_PrimaryWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.ReceiveFireShot
// (Event, Public, BlueprintEvent)

void ABP_PrimaryWeapon_C::ReceiveFireShot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "ReceiveFireShot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.SetDefaultSocketsOffsetValues
// (BlueprintCallable, BlueprintEvent)

void ABP_PrimaryWeapon_C::SetDefaultSocketsOffsetValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "SetDefaultSocketsOffsetValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.UpdateSocketOffsets
// (BlueprintCallable, BlueprintEvent)

void ABP_PrimaryWeapon_C::UpdateSocketOffsets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "UpdateSocketOffsets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.InitCustomSocketLogic
// (BlueprintCallable, BlueprintEvent)

void ABP_PrimaryWeapon_C::InitCustomSocketLogic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "InitCustomSocketLogic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.UpdateSocketsOverridesAfterOwnerChange
// (Event, Public, BlueprintEvent)

void ABP_PrimaryWeapon_C::UpdateSocketsOverridesAfterOwnerChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "UpdateSocketsOverridesAfterOwnerChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.CheckIfWeaponLoadedIn
// (BlueprintCallable, BlueprintEvent)

void ABP_PrimaryWeapon_C::CheckIfWeaponLoadedIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "CheckIfWeaponLoadedIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PrimaryWeapon_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "ReceiveTick");

	Params::BP_PrimaryWeapon_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.PrintPosprocess
// (BlueprintCallable, BlueprintEvent)

void ABP_PrimaryWeapon_C::PrintPosprocess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "PrintPosprocess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.CasingSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EmitterTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PrimaryWeapon_C::CasingSpawn(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "CasingSpawn");

	Params::BP_PrimaryWeapon_C_CasingSpawn Parms{};

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = std::move(Location);
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.CasingCollide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EmitterTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ParticleTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*                PhysMat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PrimaryWeapon_C::CasingCollide(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "CasingCollide");

	Params::BP_PrimaryWeapon_C_CasingCollide Parms{};

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleTime = ParticleTime;
	Parms.Location = std::move(Location);
	Parms.Velocity = std::move(Velocity);
	Parms.Direction = std::move(Direction);
	Parms.Normal = std::move(Normal);
	Parms.BoneName = BoneName;
	Parms.PhysMat = PhysMat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PrimaryWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.ReceiveMeleeHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PrimaryWeapon_C::ReceiveMeleeHit(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "ReceiveMeleeHit");

	Params::BP_PrimaryWeapon_C_ReceiveMeleeHit Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.InpActEvt_Fire_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PrimaryWeapon_C::InpActEvt_Fire_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "InpActEvt_Fire_K2Node_InputActionEvent_0");

	Params::BP_PrimaryWeapon_C_InpActEvt_Fire_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PrimaryWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.PlayMeleeHitSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PrimaryWeapon_C::PlayMeleeHitSound(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "PlayMeleeHitSound");

	Params::BP_PrimaryWeapon_C_PlayMeleeHitSound Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.SaveSkinInstances
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Materials                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PrimaryWeapon_C::SaveSkinInstances(const class UMaterialInstanceDynamic*& Materials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "SaveSkinInstances");

	Params::BP_PrimaryWeapon_C_SaveSkinInstances Parms{};

	Parms.Materials = Materials;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.WeaponSkinDiagnostics
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PrimaryWeapon_C::WeaponSkinDiagnostics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "WeaponSkinDiagnostics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.FillSocketOffsetExceptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PrimaryWeapon_C::FillSocketOffsetExceptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "FillSocketOffsetExceptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PrimaryWeapon.BP_PrimaryWeapon_C.GetMaterialInfoImplementation
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FFlameSkinMaterialInfo           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FFlameSkinMaterialInfo ABP_PrimaryWeapon_C::GetMaterialInfoImplementation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PrimaryWeapon_C", "GetMaterialInfoImplementation");

	Params::BP_PrimaryWeapon_C_GetMaterialInfoImplementation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

