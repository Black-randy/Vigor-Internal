#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerState_GunFight

#include "Basic.hpp"

#include "BP_PlayerState_GunFight_classes.hpp"
#include "BP_PlayerState_GunFight_parameters.hpp"


namespace SDK
{

// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.ExecuteUbergraph_BP_PlayerState_GunFight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::ExecuteUbergraph_BP_PlayerState_GunFight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "ExecuteUbergraph_BP_PlayerState_GunFight");

	Params::BP_PlayerState_GunFight_C_ExecuteUbergraph_BP_PlayerState_GunFight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.SetRoundLoadoutInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Gunfight_LoadoutAnalyticsInfoCurrentLoadoutInfo_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::SetRoundLoadoutInfo(const struct FStruct_Gunfight_LoadoutAnalyticsInfo& CurrentLoadoutInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "SetRoundLoadoutInfo");

	Params::BP_PlayerState_GunFight_C_SetRoundLoadoutInfo Parms{};

	Parms.CurrentLoadoutInfo_0 = std::move(CurrentLoadoutInfo_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.StoreRoundStatistics
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_GunFight_C::StoreRoundStatistics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "StoreRoundStatistics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.StoreRoundLoadoutInfo
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_GunFight_C::StoreRoundLoadoutInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "StoreRoundLoadoutInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.IncrementInstantLockBreaksUsed
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_GunFight_C::IncrementInstantLockBreaksUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "IncrementInstantLockBreaksUsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.ShowScoreEventFeedRow
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ScoreEventString                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   PointsAwarded                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::ShowScoreEventFeedRow(const class FString& ScoreEventString, int32 PointsAwarded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "ShowScoreEventFeedRow");

	Params::BP_PlayerState_GunFight_C_ShowScoreEventFeedRow Parms{};

	Parms.ScoreEventString = std::move(ScoreEventString);
	Parms.PointsAwarded = PointsAwarded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.SetMatchRelevantBoosterCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tickets                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::SetMatchRelevantBoosterCount(int32 Tickets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "SetMatchRelevantBoosterCount");

	Params::BP_PlayerState_GunFight_C_SetMatchRelevantBoosterCount Parms{};

	Parms.Tickets = Tickets;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.ReplicateRemainingTickets
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RemainingTickets_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::ReplicateRemainingTickets(int32 RemainingTickets_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "ReplicateRemainingTickets");

	Params::BP_PlayerState_GunFight_C_ReplicateRemainingTickets Parms{};

	Parms.RemainingTickets_0 = RemainingTickets_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.RemoveTicketUponLockBreak
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_GunFight_C::RemoveTicketUponLockBreak()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "RemoveTicketUponLockBreak");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.SetPreviousLoadoutIndex_Locally
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::SetPreviousLoadoutIndex_Locally(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "SetPreviousLoadoutIndex_Locally");

	Params::BP_PlayerState_GunFight_C_SetPreviousLoadoutIndex_Locally Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.SetPreviousLoadoutIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::SetPreviousLoadoutIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "SetPreviousLoadoutIndex");

	Params::BP_PlayerState_GunFight_C_SetPreviousLoadoutIndex Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerState_GunFight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.SetCharacterRoleInGunFight
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGunFightRole                           Role_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::SetCharacterRoleInGunFight(EGunFightRole Role_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "SetCharacterRoleInGunFight");

	Params::BP_PlayerState_GunFight_C_SetCharacterRoleInGunFight Parms{};

	Parms.Role_0 = Role_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.Set StatisticGunFight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_GunFightStatistics       Statistic                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::Set_StatisticGunFight(const struct FStruct_GunFightStatistics& Statistic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "Set StatisticGunFight");

	Params::BP_PlayerState_GunFight_C_Set_StatisticGunFight Parms{};

	Parms.Statistic = std::move(Statistic);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.GetStatisticGunFight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_GunFightStatistics       Statistic                                              (Parm, OutParm, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::GetStatisticGunFight(struct FStruct_GunFightStatistics* Statistic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "GetStatisticGunFight");

	Params::BP_PlayerState_GunFight_C_GetStatisticGunFight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Statistic != nullptr)
		*Statistic = std::move(Parms.Statistic);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.OnRep_StatisticGunFight
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerState_GunFight_C::OnRep_StatisticGunFight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "OnRep_StatisticGunFight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerState_GunFight.BP_PlayerState_GunFight_C.PlayerResult_Analytics_AttachRelevantData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJsonObject*                      JsonObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJsonObject*                      JsonObjectOut                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_GunFight_C::PlayerResult_Analytics_AttachRelevantData(class UJsonObject* JsonObject, class UJsonObject** JsonObjectOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_GunFight_C", "PlayerResult_Analytics_AttachRelevantData");

	Params::BP_PlayerState_GunFight_C_PlayerResult_Analytics_AttachRelevantData Parms{};

	Parms.JsonObject = JsonObject;

	UObject::ProcessEvent(Func, &Parms);

	if (JsonObjectOut != nullptr)
		*JsonObjectOut = Parms.JsonObjectOut;
}

}
