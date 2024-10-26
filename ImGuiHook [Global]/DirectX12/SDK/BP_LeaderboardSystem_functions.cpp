#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LeaderboardSystem

#include "Basic.hpp"

#include "BP_LeaderboardSystem_classes.hpp"
#include "BP_LeaderboardSystem_parameters.hpp"


namespace SDK
{

// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.LeaderboardsDataAvailable__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLeaderboardsDataLoaded                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LeaderboardSystem_C::LeaderboardsDataAvailable__DelegateSignature(bool IsLeaderboardsDataLoaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "LeaderboardsDataAvailable__DelegateSignature");

	Params::BP_LeaderboardSystem_C_LeaderboardsDataAvailable__DelegateSignature Parms{};

	Parms.IsLeaderboardsDataLoaded = IsLeaderboardsDataLoaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.LeaderboardsWriteFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_LeaderboardSystem_C::LeaderboardsWriteFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "LeaderboardsWriteFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.ExecuteUbergraph_BP_LeaderboardSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::ExecuteUbergraph_BP_LeaderboardSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "ExecuteUbergraph_BP_LeaderboardSystem");

	Params::BP_LeaderboardSystem_C_ExecuteUbergraph_BP_LeaderboardSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.EventFetchTopTenLeaderboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::EventFetchTopTenLeaderboard(class AHumanPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "EventFetchTopTenLeaderboard");

	Params::BP_LeaderboardSystem_C_EventFetchTopTenLeaderboard Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.EventFetchFriendsLeaderboards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::EventFetchFriendsLeaderboards(class AHumanPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "EventFetchFriendsLeaderboards");

	Params::BP_LeaderboardSystem_C_EventFetchFriendsLeaderboards Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.InitLeaderboardSystem
// (Event, Public, BlueprintEvent)

void UBP_LeaderboardSystem_C::InitLeaderboardSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "InitLeaderboardSystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.EventLeaderboardWriteFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Succeeded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RequestId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::EventLeaderboardWriteFinished(bool Succeeded, int32 RequestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "EventLeaderboardWriteFinished");

	Params::BP_LeaderboardSystem_C_EventLeaderboardWriteFinished Parms{};

	Parms.Succeeded = Succeeded;
	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.EventFetchPlatformLeaderboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_LeaderboardsStatsTypes                LeaderBoardType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanPlayerController*           PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ELeaderboardType                        BoardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::EventFetchPlatformLeaderboard(E_LeaderboardsStatsTypes LeaderBoardType, class AHumanPlayerController* PlayerController, ELeaderboardType BoardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "EventFetchPlatformLeaderboard");

	Params::BP_LeaderboardSystem_C_EventFetchPlatformLeaderboard Parms{};

	Parms.LeaderBoardType = LeaderBoardType;
	Parms.PlayerController = PlayerController;
	Parms.BoardType = BoardType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.EventFetchAroundPlayerLeaderboards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::EventFetchAroundPlayerLeaderboards(class AHumanPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "EventFetchAroundPlayerLeaderboards");

	Params::BP_LeaderboardSystem_C_EventFetchAroundPlayerLeaderboards Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.DeInitLeaderboardSystem
// (Event, Public, BlueprintEvent)

void UBP_LeaderboardSystem_C::DeInitLeaderboardSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "DeInitLeaderboardSystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.EventReadBoardResponse
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Succeeded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RequestId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLeaderboardReadContext          BoardContext                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FLeaderboardData                 LeaderboardData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_LeaderboardSystem_C::EventReadBoardResponse(bool Succeeded, int32 RequestId, const struct FLeaderboardReadContext& BoardContext, const struct FLeaderboardData& LeaderboardData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "EventReadBoardResponse");

	Params::BP_LeaderboardSystem_C_EventReadBoardResponse Parms{};

	Parms.Succeeded = Succeeded;
	Parms.RequestId = RequestId;
	Parms.BoardContext = std::move(BoardContext);
	Parms.LeaderboardData = std::move(LeaderboardData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.WriteAllLeaderboards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   EncountersPlayed                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Kills                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AirDrops                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Loot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   KillsPerEncounter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LootPerEncounter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SurvivalRate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::WriteAllLeaderboards(class AHumanPlayerController* Controller, int32 EncountersPlayed, int32 Kills, int32 AirDrops, int32 Loot, float KillsPerEncounter, float LootPerEncounter, float SurvivalRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "WriteAllLeaderboards");

	Params::BP_LeaderboardSystem_C_WriteAllLeaderboards Parms{};

	Parms.Controller = Controller;
	Parms.EncountersPlayed = EncountersPlayed;
	Parms.Kills = Kills;
	Parms.AirDrops = AirDrops;
	Parms.Loot = Loot;
	Parms.KillsPerEncounter = KillsPerEncounter;
	Parms.LootPerEncounter = LootPerEncounter;
	Parms.SurvivalRate = SurvivalRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.WriteLeaderboardInt
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_LeaderboardsStatsTypes                LeaderBoardType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::WriteLeaderboardInt(class AHumanPlayerController* Controller, E_LeaderboardsStatsTypes LeaderBoardType, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "WriteLeaderboardInt");

	Params::BP_LeaderboardSystem_C_WriteLeaderboardInt Parms{};

	Parms.Controller = Controller;
	Parms.LeaderBoardType = LeaderBoardType;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.WriteLeaderboardFloat
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_LeaderboardsStatsTypes                LeaderBoardType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::WriteLeaderboardFloat(class AHumanPlayerController* Controller, E_LeaderboardsStatsTypes LeaderBoardType, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "WriteLeaderboardFloat");

	Params::BP_LeaderboardSystem_C_WriteLeaderboardFloat Parms{};

	Parms.Controller = Controller;
	Parms.LeaderBoardType = LeaderBoardType;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.StoreLeaderboard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELeaderboardType                        BoardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_LeaderboardsStatsTypes                LeaderBoardType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLeaderboardData                 LeaderboardData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LeaderboardSystem_C::StoreLeaderboard(ELeaderboardType BoardType, E_LeaderboardsStatsTypes LeaderBoardType, const struct FLeaderboardData& LeaderboardData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "StoreLeaderboard");

	Params::BP_LeaderboardSystem_C_StoreLeaderboard Parms{};

	Parms.BoardType = BoardType;
	Parms.LeaderBoardType = LeaderBoardType;
	Parms.LeaderboardData = std::move(LeaderboardData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.StoreRequestID
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELeaderboardType                        BoardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequestId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::StoreRequestID(ELeaderboardType BoardType, int32 RequestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "StoreRequestID");

	Params::BP_LeaderboardSystem_C_StoreRequestID Parms{};

	Parms.BoardType = BoardType;
	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.RemoveRequestID
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELeaderboardType                        BoardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequestId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    WasLastID                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LeaderboardSystem_C::RemoveRequestID(ELeaderboardType BoardType, int32 RequestId, bool* WasLastID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "RemoveRequestID");

	Params::BP_LeaderboardSystem_C_RemoveRequestID Parms{};

	Parms.BoardType = BoardType;
	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);

	if (WasLastID != nullptr)
		*WasLastID = Parms.WasLastID;
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.SetAvailabilityForCertainStat
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELeaderboardType                        LeaderBoardType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_LeaderboardsStatsTypes                StatType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Available                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LeaderboardSystem_C::SetAvailabilityForCertainStat(ELeaderboardType LeaderBoardType, const E_LeaderboardsStatsTypes& StatType, const bool Available)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "SetAvailabilityForCertainStat");

	Params::BP_LeaderboardSystem_C_SetAvailabilityForCertainStat Parms{};

	Parms.LeaderBoardType = LeaderBoardType;
	Parms.StatType = StatType;
	Parms.Available = Available;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.SetLoadedForCertainStat
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELeaderboardType                        LeaderBoardType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_LeaderboardsStatsTypes                StatType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Available                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LeaderboardSystem_C::SetLoadedForCertainStat(ELeaderboardType LeaderBoardType, const E_LeaderboardsStatsTypes& StatType, const bool Available)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "SetLoadedForCertainStat");

	Params::BP_LeaderboardSystem_C_SetLoadedForCertainStat Parms{};

	Parms.LeaderBoardType = LeaderBoardType;
	Parms.StatType = StatType;
	Parms.Available = Available;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.CheckIfMapAllLoaded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<E_LeaderboardsStatsTypes, bool>    InMap                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    AllLoaded                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LeaderboardSystem_C::CheckIfMapAllLoaded(const TMap<E_LeaderboardsStatsTypes, bool>& InMap, bool* AllLoaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "CheckIfMapAllLoaded");

	Params::BP_LeaderboardSystem_C_CheckIfMapAllLoaded Parms{};

	Parms.InMap = std::move(InMap);

	UObject::ProcessEvent(Func, &Parms);

	if (AllLoaded != nullptr)
		*AllLoaded = Parms.AllLoaded;
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.IsLeaderboardLoaded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_LeaderboardsStatsTypes                Stat                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ELeaderboardType                        Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Loaded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LeaderboardSystem_C::IsLeaderboardLoaded(E_LeaderboardsStatsTypes Stat, ELeaderboardType Type, bool* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "IsLeaderboardLoaded");

	Params::BP_LeaderboardSystem_C_IsLeaderboardLoaded Parms{};

	Parms.Stat = Stat;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Loaded != nullptr)
		*Loaded = Parms.Loaded;
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.Get Leaderboard Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ELeaderboardType                        BoardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_LeaderboardsStatsTypes                StatType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDataValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLeaderboardData                 LeaderboardData                                        (Parm, OutParm)

void UBP_LeaderboardSystem_C::Get_Leaderboard_Data(ELeaderboardType BoardType, E_LeaderboardsStatsTypes StatType, bool* IsDataValid, struct FLeaderboardData* LeaderboardData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "Get Leaderboard Data");

	Params::BP_LeaderboardSystem_C_Get_Leaderboard_Data Parms{};

	Parms.BoardType = BoardType;
	Parms.StatType = StatType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDataValid != nullptr)
		*IsDataValid = Parms.IsDataValid;

	if (LeaderboardData != nullptr)
		*LeaderboardData = std::move(Parms.LeaderboardData);
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.GetLeaderboardName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// E_LeaderboardsStatsTypes                LeaderBoardType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutputValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             LeaderboardName                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::GetLeaderboardName(E_LeaderboardsStatsTypes LeaderBoardType, bool* OutputValid, class FName* LeaderboardName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "GetLeaderboardName");

	Params::BP_LeaderboardSystem_C_GetLeaderboardName Parms{};

	Parms.LeaderBoardType = LeaderBoardType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputValid != nullptr)
		*OutputValid = Parms.OutputValid;

	if (LeaderboardName != nullptr)
		*LeaderboardName = Parms.LeaderboardName;
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.GetLeaderboardType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             LeaderboardName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutputValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// E_LeaderboardsStatsTypes                LeaderBoardType                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystem_C::GetLeaderboardType(class FName LeaderboardName, bool* OutputValid, E_LeaderboardsStatsTypes* LeaderBoardType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "GetLeaderboardType");

	Params::BP_LeaderboardSystem_C_GetLeaderboardType Parms{};

	Parms.LeaderboardName = LeaderboardName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputValid != nullptr)
		*OutputValid = Parms.OutputValid;

	if (LeaderBoardType != nullptr)
		*LeaderBoardType = Parms.LeaderBoardType;
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.IsRequestIDValid
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ELeaderboardType                        BoardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequestId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LeaderboardSystem_C::IsRequestIDValid(ELeaderboardType BoardType, int32 RequestId, bool* Valid) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "IsRequestIDValid");

	Params::BP_LeaderboardSystem_C_IsRequestIDValid Parms{};

	Parms.BoardType = BoardType;
	Parms.RequestId = RequestId;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function BP_LeaderboardSystem.BP_LeaderboardSystem_C.GetCacheDelay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTimespan                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FTimespan UBP_LeaderboardSystem_C::GetCacheDelay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystem_C", "GetCacheDelay");

	Params::BP_LeaderboardSystem_C_GetCacheDelay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

