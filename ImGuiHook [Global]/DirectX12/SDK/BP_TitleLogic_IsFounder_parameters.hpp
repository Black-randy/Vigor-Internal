#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_IsFounder

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "F_TitleRank_structs.hpp"


namespace SDK::Params
{

// Function BP_TitleLogic_IsFounder.BP_TitleLogic_IsFounder_C.ExecuteUbergraph_BP_TitleLogic_IsFounder
// 0x01E8 (0x01E8 - 0x0000)
struct BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUserCloudInfo                         K2Node_CustomEvent_User_Info;                      // 0x0008(0x01B0)()
	TDelegate<void(const struct FUserCloudInfo& User_Info)> K2Node_CreateDelegate_OutputDelegate;              // 0x01B8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue; // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_Shelter_C*         K2Node_DynamicCast_AsBP_Player_Controller_Shelter; // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder) == 0x000008, "Wrong alignment on BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder");
static_assert(sizeof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder) == 0x0001E8, "Wrong size on BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder, EntryPoint) == 0x000000, "Member 'BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder, K2Node_CustomEvent_User_Info) == 0x000008, "Member 'BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder::K2Node_CustomEvent_User_Info' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder, K2Node_CreateDelegate_OutputDelegate) == 0x0001B8, "Member 'BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder, CallFunc_GetUserControllerId_ReturnValue) == 0x0001C8, "Member 'BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue) == 0x0001D0, "Member 'BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder, K2Node_DynamicCast_AsBP_Player_Controller_Shelter) == 0x0001D8, "Member 'BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder::K2Node_DynamicCast_AsBP_Player_Controller_Shelter' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder, CallFunc_IsValid_ReturnValue) == 0x0001E1, "Member 'BP_TitleLogic_IsFounder_C_ExecuteUbergraph_BP_TitleLogic_IsFounder::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_TitleLogic_IsFounder.BP_TitleLogic_IsFounder_C.User Info Loaded
// 0x01B0 (0x01B0 - 0x0000)
struct BP_TitleLogic_IsFounder_C_User_Info_Loaded final
{
public:
	struct FUserCloudInfo                         User_Info_0;                                       // 0x0000(0x01B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_TitleLogic_IsFounder_C_User_Info_Loaded) == 0x000008, "Wrong alignment on BP_TitleLogic_IsFounder_C_User_Info_Loaded");
static_assert(sizeof(BP_TitleLogic_IsFounder_C_User_Info_Loaded) == 0x0001B0, "Wrong size on BP_TitleLogic_IsFounder_C_User_Info_Loaded");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_User_Info_Loaded, User_Info_0) == 0x000000, "Member 'BP_TitleLogic_IsFounder_C_User_Info_Loaded::User_Info_0' has a wrong offset!");

// Function BP_TitleLogic_IsFounder.BP_TitleLogic_IsFounder_C.Is Initialized
// 0x0001 (0x0001 - 0x0000)
struct BP_TitleLogic_IsFounder_C_Is_Initialized final
{
public:
	bool                                          Initialized;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_IsFounder_C_Is_Initialized) == 0x000001, "Wrong alignment on BP_TitleLogic_IsFounder_C_Is_Initialized");
static_assert(sizeof(BP_TitleLogic_IsFounder_C_Is_Initialized) == 0x000001, "Wrong size on BP_TitleLogic_IsFounder_C_Is_Initialized");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_Is_Initialized, Initialized) == 0x000000, "Member 'BP_TitleLogic_IsFounder_C_Is_Initialized::Initialized' has a wrong offset!");

// Function BP_TitleLogic_IsFounder.BP_TitleLogic_IsFounder_C.Is Rank Owned
// 0x00C0 (0x00C0 - 0x0000)
struct BP_TitleLogic_IsFounder_C_Is_Rank_Owned final
{
public:
	struct FF_TitleRank                           Rank_Info;                                         // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Owned;                                             // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_IsFounder_C_Is_Rank_Owned) == 0x000008, "Wrong alignment on BP_TitleLogic_IsFounder_C_Is_Rank_Owned");
static_assert(sizeof(BP_TitleLogic_IsFounder_C_Is_Rank_Owned) == 0x0000C0, "Wrong size on BP_TitleLogic_IsFounder_C_Is_Rank_Owned");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_Is_Rank_Owned, Rank_Info) == 0x000000, "Member 'BP_TitleLogic_IsFounder_C_Is_Rank_Owned::Rank_Info' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_IsFounder_C_Is_Rank_Owned, Owned) == 0x0000B8, "Member 'BP_TitleLogic_IsFounder_C_Is_Rank_Owned::Owned' has a wrong offset!");

}
