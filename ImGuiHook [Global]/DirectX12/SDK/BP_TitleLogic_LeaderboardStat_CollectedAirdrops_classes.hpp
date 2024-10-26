#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_LeaderboardStat_CollectedAirdrops

#include "Basic.hpp"

#include "BP_TitleLogic_LeaderboardStat_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TitleLogic_LeaderboardStat_CollectedAirdrops.BP_TitleLogic_LeaderboardStat_CollectedAirdrops_C
// 0x0000 (0x0610 - 0x0610)
class ABP_TitleLogic_LeaderboardStat_CollectedAirdrops_C final : public ABP_TitleLogic_LeaderboardStat_Base_C
{
public:
	void Get_Stat_Value_from_Leaderboards(int32* Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TitleLogic_LeaderboardStat_CollectedAirdrops_C">();
	}
	static class ABP_TitleLogic_LeaderboardStat_CollectedAirdrops_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TitleLogic_LeaderboardStat_CollectedAirdrops_C>();
	}
};
static_assert(alignof(ABP_TitleLogic_LeaderboardStat_CollectedAirdrops_C) == 0x000008, "Wrong alignment on ABP_TitleLogic_LeaderboardStat_CollectedAirdrops_C");
static_assert(sizeof(ABP_TitleLogic_LeaderboardStat_CollectedAirdrops_C) == 0x000610, "Wrong size on ABP_TitleLogic_LeaderboardStat_CollectedAirdrops_C");

}

