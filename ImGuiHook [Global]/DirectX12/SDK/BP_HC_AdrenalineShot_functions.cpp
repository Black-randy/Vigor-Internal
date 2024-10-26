#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HC_AdrenalineShot

#include "Basic.hpp"

#include "BP_HC_AdrenalineShot_classes.hpp"
#include "BP_HC_AdrenalineShot_parameters.hpp"


namespace SDK
{

// Function BP_HC_AdrenalineShot.BP_HC_AdrenalineShot_C.ExecuteUbergraph_BP_HC_AdrenalineShot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HC_AdrenalineShot_C::ExecuteUbergraph_BP_HC_AdrenalineShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HC_AdrenalineShot_C", "ExecuteUbergraph_BP_HC_AdrenalineShot");

	Params::BP_HC_AdrenalineShot_C_ExecuteUbergraph_BP_HC_AdrenalineShot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HC_AdrenalineShot.BP_HC_AdrenalineShot_C.Multicast Play Usage Sound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_HC_AdrenalineShot_C::Multicast_Play_Usage_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HC_AdrenalineShot_C", "Multicast Play Usage Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HC_AdrenalineShot.BP_HC_AdrenalineShot_C.PlayUsageAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HC_AdrenalineShot_C::PlayUsageAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HC_AdrenalineShot_C", "PlayUsageAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HC_AdrenalineShot.BP_HC_AdrenalineShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HC_AdrenalineShot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HC_AdrenalineShot_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HC_AdrenalineShot.BP_HC_AdrenalineShot_C.OnUsedImplementable
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  ParentCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HC_AdrenalineShot_C::OnUsedImplementable(class AHumanCharacter* ParentCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HC_AdrenalineShot_C", "OnUsedImplementable");

	Params::BP_HC_AdrenalineShot_C_OnUsedImplementable Parms{};

	Parms.ParentCharacter = ParentCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HC_AdrenalineShot.BP_HC_AdrenalineShot_C.OnLoaded_303A9E7341428F48F05BE78AD1C88183
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HC_AdrenalineShot_C::OnLoaded_303A9E7341428F48F05BE78AD1C88183(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HC_AdrenalineShot_C", "OnLoaded_303A9E7341428F48F05BE78AD1C88183");

	Params::BP_HC_AdrenalineShot_C_OnLoaded_303A9E7341428F48F05BE78AD1C88183 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HC_AdrenalineShot.BP_HC_AdrenalineShot_C.ShowStaminaEffectTImer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Character_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HC_AdrenalineShot_C::ShowStaminaEffectTImer(class AHumanCharacter* Character_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HC_AdrenalineShot_C", "ShowStaminaEffectTImer");

	Params::BP_HC_AdrenalineShot_C_ShowStaminaEffectTImer Parms{};

	Parms.Character_0 = Character_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HC_AdrenalineShot.BP_HC_AdrenalineShot_C.CanBeUsedImpl
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_HC_AdrenalineShot_C::CanBeUsedImpl() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HC_AdrenalineShot_C", "CanBeUsedImpl");

	Params::BP_HC_AdrenalineShot_C_CanBeUsedImpl Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

