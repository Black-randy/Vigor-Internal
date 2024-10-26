#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SR_Physics_Target_02_NonChallenge

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SR_Physics_Target_02_NonChallenge.BP_SR_Physics_Target_02_NonChallenge_C.ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge
// 0x0010 (0x0010 - 0x0000)
struct BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_IndicatorIndex;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsActive;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge) == 0x000004, "Wrong alignment on BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge");
static_assert(sizeof(BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge) == 0x000010, "Wrong size on BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge");
static_assert(offsetof(BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge, EntryPoint) == 0x000000, "Member 'BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge, K2Node_Event_IndicatorIndex) == 0x000008, "Member 'BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge::K2Node_Event_IndicatorIndex' has a wrong offset!");
static_assert(offsetof(BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge, K2Node_Event_IsActive) == 0x00000C, "Member 'BP_SR_Physics_Target_02_NonChallenge_C_ExecuteUbergraph_BP_SR_Physics_Target_02_NonChallenge::K2Node_Event_IsActive' has a wrong offset!");

// Function BP_SR_Physics_Target_02_NonChallenge.BP_SR_Physics_Target_02_NonChallenge_C.SetTargetActivity
// 0x0001 (0x0001 - 0x0000)
struct BP_SR_Physics_Target_02_NonChallenge_C_SetTargetActivity final
{
public:
	bool                                          IsActive_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SR_Physics_Target_02_NonChallenge_C_SetTargetActivity) == 0x000001, "Wrong alignment on BP_SR_Physics_Target_02_NonChallenge_C_SetTargetActivity");
static_assert(sizeof(BP_SR_Physics_Target_02_NonChallenge_C_SetTargetActivity) == 0x000001, "Wrong size on BP_SR_Physics_Target_02_NonChallenge_C_SetTargetActivity");
static_assert(offsetof(BP_SR_Physics_Target_02_NonChallenge_C_SetTargetActivity, IsActive_0) == 0x000000, "Member 'BP_SR_Physics_Target_02_NonChallenge_C_SetTargetActivity::IsActive_0' has a wrong offset!");

// Function BP_SR_Physics_Target_02_NonChallenge.BP_SR_Physics_Target_02_NonChallenge_C.OnHitHandleChallenges
// 0x0004 (0x0004 - 0x0000)
struct BP_SR_Physics_Target_02_NonChallenge_C_OnHitHandleChallenges final
{
public:
	int32                                         IndicatorIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SR_Physics_Target_02_NonChallenge_C_OnHitHandleChallenges) == 0x000004, "Wrong alignment on BP_SR_Physics_Target_02_NonChallenge_C_OnHitHandleChallenges");
static_assert(sizeof(BP_SR_Physics_Target_02_NonChallenge_C_OnHitHandleChallenges) == 0x000004, "Wrong size on BP_SR_Physics_Target_02_NonChallenge_C_OnHitHandleChallenges");
static_assert(offsetof(BP_SR_Physics_Target_02_NonChallenge_C_OnHitHandleChallenges, IndicatorIndex) == 0x000000, "Member 'BP_SR_Physics_Target_02_NonChallenge_C_OnHitHandleChallenges::IndicatorIndex' has a wrong offset!");

}

