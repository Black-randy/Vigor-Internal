#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LeaderboardSystemMonitor

#include "Basic.hpp"

#include "BP_LeaderboardSystemMonitor_classes.hpp"
#include "BP_LeaderboardSystemMonitor_parameters.hpp"


namespace SDK
{

// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.ExecuteUbergraph_BP_LeaderboardSystemMonitor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystemMonitor_C::ExecuteUbergraph_BP_LeaderboardSystemMonitor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystemMonitor_C", "ExecuteUbergraph_BP_LeaderboardSystemMonitor");

	Params::BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.OnLeaderboardWriteCall
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             BoardName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystemMonitor_C::OnLeaderboardWriteCall(class FName BoardName, int32 PlayerValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystemMonitor_C", "OnLeaderboardWriteCall");

	Params::BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall Parms{};

	Parms.BoardName = BoardName;
	Parms.PlayerValue = PlayerValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.OnLeaderboardReadCall
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FLeaderboardReadContext          BoardContext                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_LeaderboardSystemMonitor_C::OnLeaderboardReadCall(const struct FLeaderboardReadContext& BoardContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystemMonitor_C", "OnLeaderboardReadCall");

	Params::BP_LeaderboardSystemMonitor_C_OnLeaderboardReadCall Parms{};

	Parms.BoardContext = std::move(BoardContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.CountReadUntilTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                        TimeWindow                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                                   CountedItems                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystemMonitor_C::CountReadUntilTime(struct FTimespan& TimeWindow, int32* CountedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystemMonitor_C", "CountReadUntilTime");

	Params::BP_LeaderboardSystemMonitor_C_CountReadUntilTime Parms{};

	Parms.TimeWindow = std::move(TimeWindow);

	UObject::ProcessEvent(Func, &Parms);

	TimeWindow = std::move(Parms.TimeWindow);

	if (CountedItems != nullptr)
		*CountedItems = Parms.CountedItems;
}


// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.CheckReadRules
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LeaderboardSystemMonitor_C::CheckReadRules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystemMonitor_C", "CheckReadRules");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.CountWriteUntilTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                        TimeWindow                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                                   CountedItems                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LeaderboardSystemMonitor_C::CountWriteUntilTime(struct FTimespan& TimeWindow, int32* CountedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystemMonitor_C", "CountWriteUntilTime");

	Params::BP_LeaderboardSystemMonitor_C_CountWriteUntilTime Parms{};

	Parms.TimeWindow = std::move(TimeWindow);

	UObject::ProcessEvent(Func, &Parms);

	TimeWindow = std::move(Parms.TimeWindow);

	if (CountedItems != nullptr)
		*CountedItems = Parms.CountedItems;
}


// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.CheckWriteRules
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LeaderboardSystemMonitor_C::CheckWriteRules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LeaderboardSystemMonitor_C", "CheckWriteRules");

	UObject::ProcessEvent(Func, nullptr);
}

}

