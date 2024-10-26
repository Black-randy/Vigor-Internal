#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny

#include "Basic.hpp"

#include "BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_classes.hpp"
#include "BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_parameters.hpp"


namespace SDK
{

// Function BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny.BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C.ExecuteUbergraph_BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::ExecuteUbergraph_BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C", "ExecuteUbergraph_BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny");

	Params::BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C_ExecuteUbergraph_BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny.BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C.UnbindEverything
// (BlueprintCallable, BlueprintEvent)

void ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::UnbindEverything()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C", "UnbindEverything");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny.BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C.PlayerReceivedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Userid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::PlayerReceivedDamage(int32 Userid, float Damage, EDamageType DamageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C", "PlayerReceivedDamage");

	Params::BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C_PlayerReceivedDamage Parms{};

	Parms.Userid = Userid;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny.BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C.PlayerDealtDamageEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           DamagingItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::PlayerDealtDamageEvent(int32 PlayerId, float Damage, EDamageType DamageType, class UClass* DamagingItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C", "PlayerDealtDamageEvent");

	Params::BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C_PlayerDealtDamageEvent Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamagingItem = DamagingItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny.BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C.RoundEndedEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::RoundEndedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C", "RoundEndedEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny.BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny.BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C.Get Maximum Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Maximum_Progress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::Get_Maximum_Progress(int32* Maximum_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C", "Get Maximum Progress");

	Params::BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C_Get_Maximum_Progress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Maximum_Progress != nullptr)
		*Maximum_Progress = Parms.Maximum_Progress;
}


// Function BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny.BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C.Get Condition Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Condition_Text                                         (Parm, OutParm)

void ABP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C::Get_Condition_Text(class FText* Condition_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C", "Get Condition Text");

	Params::BP_ChallengeCondition_GunfightDealDamageWithoutReceivingAny_C_Get_Condition_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Condition_Text != nullptr)
		*Condition_Text = std::move(Parms.Condition_Text);
}

}

