#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_LeaderboardStat_CollectedAirdrops

#include "Basic.hpp"

#include "BP_TitleLogic_LeaderboardStat_CollectedAirdrops_classes.hpp"
#include "BP_TitleLogic_LeaderboardStat_CollectedAirdrops_parameters.hpp"


namespace SDK
{

// Function BP_TitleLogic_LeaderboardStat_CollectedAirdrops.BP_TitleLogic_LeaderboardStat_CollectedAirdrops_C.Get Stat Value from Leaderboards
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleLogic_LeaderboardStat_CollectedAirdrops_C::Get_Stat_Value_from_Leaderboards(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleLogic_LeaderboardStat_CollectedAirdrops_C", "Get Stat Value from Leaderboards");

	Params::BP_TitleLogic_LeaderboardStat_CollectedAirdrops_C_Get_Stat_Value_from_Leaderboards Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}

}

