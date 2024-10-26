#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_LeaderboardStat_Base

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "F_TitleRank_structs.hpp"


namespace SDK::Params
{

// Function BP_TitleLogic_LeaderboardStat_Base.BP_TitleLogic_LeaderboardStat_Base_C.ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base
// 0x07B8 (0x07B8 - 0x0000)
struct BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsLeaderboardsDataLoaded;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCloudUserProfileStatistics            K2Node_CustomEvent_LeaderboardsData;               // 0x0008(0x03C0)()
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CC[0x4];                                      // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue; // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_Shelter_C*         K2Node_DynamicCast_AsBP_Player_Controller_Shelter; // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E2[0x6];                                      // 0x03E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCloudUserProfileStatistics            CallFunc_GetAllStats_LeaderboardsData;             // 0x03E8(0x03C0)()
	TDelegate<void(bool IsLeaderboardsDataLoaded, const struct FCloudUserProfileStatistics& LeaderboardsData)> K2Node_CreateDelegate_OutputDelegate;              // 0x07A8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base) == 0x000008, "Wrong alignment on BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base");
static_assert(sizeof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base) == 0x0007B8, "Wrong size on BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, EntryPoint) == 0x000000, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, K2Node_CustomEvent_IsLeaderboardsDataLoaded) == 0x000004, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::K2Node_CustomEvent_IsLeaderboardsDataLoaded' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, K2Node_CustomEvent_LeaderboardsData) == 0x000008, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::K2Node_CustomEvent_LeaderboardsData' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, CallFunc_GetUserControllerId_ReturnValue) == 0x0003C8, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue) == 0x0003D0, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, K2Node_DynamicCast_AsBP_Player_Controller_Shelter) == 0x0003D8, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::K2Node_DynamicCast_AsBP_Player_Controller_Shelter' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, K2Node_DynamicCast_bSuccess) == 0x0003E0, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, CallFunc_IsValid_ReturnValue) == 0x0003E1, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, CallFunc_GetAllStats_LeaderboardsData) == 0x0003E8, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::CallFunc_GetAllStats_LeaderboardsData' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base, K2Node_CreateDelegate_OutputDelegate) == 0x0007A8, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_ExecuteUbergraph_BP_TitleLogic_LeaderboardStat_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_TitleLogic_LeaderboardStat_Base.BP_TitleLogic_LeaderboardStat_Base_C.Leaderboards Loaded
// 0x03C8 (0x03C8 - 0x0000)
struct BP_TitleLogic_LeaderboardStat_Base_C_Leaderboards_Loaded final
{
public:
	bool                                          IsLeaderboardsDataLoaded;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCloudUserProfileStatistics            LeaderboardsData;                                  // 0x0008(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_TitleLogic_LeaderboardStat_Base_C_Leaderboards_Loaded) == 0x000008, "Wrong alignment on BP_TitleLogic_LeaderboardStat_Base_C_Leaderboards_Loaded");
static_assert(sizeof(BP_TitleLogic_LeaderboardStat_Base_C_Leaderboards_Loaded) == 0x0003C8, "Wrong size on BP_TitleLogic_LeaderboardStat_Base_C_Leaderboards_Loaded");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_Leaderboards_Loaded, IsLeaderboardsDataLoaded) == 0x000000, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_Leaderboards_Loaded::IsLeaderboardsDataLoaded' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_Leaderboards_Loaded, LeaderboardsData) == 0x000008, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_Leaderboards_Loaded::LeaderboardsData' has a wrong offset!");

// Function BP_TitleLogic_LeaderboardStat_Base.BP_TitleLogic_LeaderboardStat_Base_C.Get Stat Value from Leaderboards
// 0x0004 (0x0004 - 0x0000)
struct BP_TitleLogic_LeaderboardStat_Base_C_Get_Stat_Value_from_Leaderboards final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleLogic_LeaderboardStat_Base_C_Get_Stat_Value_from_Leaderboards) == 0x000004, "Wrong alignment on BP_TitleLogic_LeaderboardStat_Base_C_Get_Stat_Value_from_Leaderboards");
static_assert(sizeof(BP_TitleLogic_LeaderboardStat_Base_C_Get_Stat_Value_from_Leaderboards) == 0x000004, "Wrong size on BP_TitleLogic_LeaderboardStat_Base_C_Get_Stat_Value_from_Leaderboards");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_Get_Stat_Value_from_Leaderboards, Value) == 0x000000, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_Get_Stat_Value_from_Leaderboards::Value' has a wrong offset!");

// Function BP_TitleLogic_LeaderboardStat_Base.BP_TitleLogic_LeaderboardStat_Base_C.Is Initialized
// 0x0001 (0x0001 - 0x0000)
struct BP_TitleLogic_LeaderboardStat_Base_C_Is_Initialized final
{
public:
	bool                                          Initialized;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_LeaderboardStat_Base_C_Is_Initialized) == 0x000001, "Wrong alignment on BP_TitleLogic_LeaderboardStat_Base_C_Is_Initialized");
static_assert(sizeof(BP_TitleLogic_LeaderboardStat_Base_C_Is_Initialized) == 0x000001, "Wrong size on BP_TitleLogic_LeaderboardStat_Base_C_Is_Initialized");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_Is_Initialized, Initialized) == 0x000000, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_Is_Initialized::Initialized' has a wrong offset!");

// Function BP_TitleLogic_LeaderboardStat_Base.BP_TitleLogic_LeaderboardStat_Base_C.Is Rank Owned
// 0x00C8 (0x00C8 - 0x0000)
struct BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned final
{
public:
	struct FF_TitleRank                           Rank_Info;                                         // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Owned;                                             // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Stat_Value_from_Leaderboards_Value;   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned) == 0x000008, "Wrong alignment on BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned");
static_assert(sizeof(BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned) == 0x0000C8, "Wrong size on BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned, Rank_Info) == 0x000000, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned::Rank_Info' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned, Owned) == 0x0000B8, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned::Owned' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned, CallFunc_Get_Stat_Value_from_Leaderboards_Value) == 0x0000BC, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned::CallFunc_Get_Stat_Value_from_Leaderboards_Value' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'BP_TitleLogic_LeaderboardStat_Base_C_Is_Rank_Owned::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

