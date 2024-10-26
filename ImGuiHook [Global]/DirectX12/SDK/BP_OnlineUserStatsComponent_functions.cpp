#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OnlineUserStatsComponent

#include "Basic.hpp"

#include "BP_OnlineUserStatsComponent_classes.hpp"
#include "BP_OnlineUserStatsComponent_parameters.hpp"


namespace SDK
{

// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.LeaderboardsCloudRequestProcessed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLeaderboardsDataLoaded_0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCloudUserProfileStatistics      LeaderboardsData_0                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_OnlineUserStatsComponent_C::LeaderboardsCloudRequestProcessed__DelegateSignature(bool IsLeaderboardsDataLoaded_0, const struct FCloudUserProfileStatistics& LeaderboardsData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "LeaderboardsCloudRequestProcessed__DelegateSignature");

	Params::BP_OnlineUserStatsComponent_C_LeaderboardsCloudRequestProcessed__DelegateSignature Parms{};

	Parms.IsLeaderboardsDataLoaded_0 = IsLeaderboardsDataLoaded_0;
	Parms.LeaderboardsData_0 = std::move(LeaderboardsData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.ExecuteUbergraph_BP_OnlineUserStatsComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OnlineUserStatsComponent_C::ExecuteUbergraph_BP_OnlineUserStatsComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "ExecuteUbergraph_BP_OnlineUserStatsComponent");

	Params::BP_OnlineUserStatsComponent_C_ExecuteUbergraph_BP_OnlineUserStatsComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.EventGetUserStatsResponse
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudRequestResult              RequestResult                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCloudUserProfileStatistics      Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_OnlineUserStatsComponent_C::EventGetUserStatsResponse(const struct FCloudRequestResult& RequestResult, const struct FCloudUserProfileStatistics& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "EventGetUserStatsResponse");

	Params::BP_OnlineUserStatsComponent_C_EventGetUserStatsResponse Parms{};

	Parms.RequestResult = std::move(RequestResult);
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.EventFetchLeaderboardsDataFromCloud
// (BlueprintCallable, BlueprintEvent)

void UBP_OnlineUserStatsComponent_C::EventFetchLeaderboardsDataFromCloud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "EventFetchLeaderboardsDataFromCloud");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_OnlineUserStatsComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.Event_CloudUserIdSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Userid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_OnlineUserStatsComponent_C::Event_CloudUserIdSet(const class FString& Userid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "Event_CloudUserIdSet");

	Params::BP_OnlineUserStatsComponent_C_Event_CloudUserIdSet Parms{};

	Parms.Userid = std::move(Userid);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.GetNumberOfEncountersPlayed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TotalMatchesPlayed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OnlineUserStatsComponent_C::GetNumberOfEncountersPlayed(int32* TotalMatchesPlayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "GetNumberOfEncountersPlayed");

	Params::BP_OnlineUserStatsComponent_C_GetNumberOfEncountersPlayed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TotalMatchesPlayed != nullptr)
		*TotalMatchesPlayed = Parms.TotalMatchesPlayed;
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.GetEncounterStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCloudUserStatistics             EncounterStats                                         (Parm, OutParm)

void UBP_OnlineUserStatsComponent_C::GetEncounterStats(struct FCloudUserStatistics* EncounterStats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "GetEncounterStats");

	Params::BP_OnlineUserStatsComponent_C_GetEncounterStats Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EncounterStats != nullptr)
		*EncounterStats = std::move(Parms.EncounterStats);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.GetEliminationStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCloudUserStatistics             EliminationStats                                       (Parm, OutParm)

void UBP_OnlineUserStatsComponent_C::GetEliminationStats(struct FCloudUserStatistics* EliminationStats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "GetEliminationStats");

	Params::BP_OnlineUserStatsComponent_C_GetEliminationStats Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EliminationStats != nullptr)
		*EliminationStats = std::move(Parms.EliminationStats);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.GetShootoutStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCloudUserStatistics             ShootoutStats                                          (Parm, OutParm)

void UBP_OnlineUserStatsComponent_C::GetShootoutStats(struct FCloudUserStatistics* ShootoutStats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "GetShootoutStats");

	Params::BP_OnlineUserStatsComponent_C_GetShootoutStats Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShootoutStats != nullptr)
		*ShootoutStats = std::move(Parms.ShootoutStats);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.GetAllGamemodesData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCloudUserProfileStatistics      LeaderboardsData_0                                     (Parm, OutParm)

void UBP_OnlineUserStatsComponent_C::GetAllGamemodesData(struct FCloudUserProfileStatistics* LeaderboardsData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "GetAllGamemodesData");

	Params::BP_OnlineUserStatsComponent_C_GetAllGamemodesData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderboardsData_0 != nullptr)
		*LeaderboardsData_0 = std::move(Parms.LeaderboardsData_0);
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.GetNumberOfAllMatchesPlayed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TotalMatchesPlayed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OnlineUserStatsComponent_C::GetNumberOfAllMatchesPlayed(int32* TotalMatchesPlayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "GetNumberOfAllMatchesPlayed");

	Params::BP_OnlineUserStatsComponent_C_GetNumberOfAllMatchesPlayed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TotalMatchesPlayed != nullptr)
		*TotalMatchesPlayed = Parms.TotalMatchesPlayed;
}


// Function BP_OnlineUserStatsComponent.BP_OnlineUserStatsComponent_C.GetAllStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FCloudUserProfileStatistics      LeaderboardsData_0                                     (Parm, OutParm)

void UBP_OnlineUserStatsComponent_C::GetAllStats(struct FCloudUserProfileStatistics* LeaderboardsData_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OnlineUserStatsComponent_C", "GetAllStats");

	Params::BP_OnlineUserStatsComponent_C_GetAllStats Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderboardsData_0 != nullptr)
		*LeaderboardsData_0 = std::move(Parms.LeaderboardsData_0);
}

}

