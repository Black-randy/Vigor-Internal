#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShootingChallenges_TargetComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ShootingChallenges_TargetComponent.BP_ShootingChallenges_TargetComponent_C.ScoreHit
// 0x0020 (0x0020 - 0x0000)
struct BP_ShootingChallenges_TargetComponent_C_ScoreHit final
{
public:
	bool                                          WasShootable;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ShootingChallenges_GMComponent_C*   CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ShootingChallenges_TargetComponent_C_ScoreHit) == 0x000008, "Wrong alignment on BP_ShootingChallenges_TargetComponent_C_ScoreHit");
static_assert(sizeof(BP_ShootingChallenges_TargetComponent_C_ScoreHit) == 0x000020, "Wrong size on BP_ShootingChallenges_TargetComponent_C_ScoreHit");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_ScoreHit, WasShootable) == 0x000000, "Member 'BP_ShootingChallenges_TargetComponent_C_ScoreHit::WasShootable' has a wrong offset!");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_ScoreHit, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'BP_ShootingChallenges_TargetComponent_C_ScoreHit::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_ScoreHit, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ShootingChallenges_TargetComponent_C_ScoreHit::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_ScoreHit, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_ShootingChallenges_TargetComponent_C_ScoreHit::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ShootingChallenges_TargetComponent.BP_ShootingChallenges_TargetComponent_C.FailChallenge
// 0x0038 (0x0038 - 0x0000)
struct BP_ShootingChallenges_TargetComponent_C_FailChallenge final
{
public:
	class FText                                   FailingReason;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          SuccesfullyFailed;                                 // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ShootingChallenges_GMComponent_C*   CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ShootingChallenges_TargetComponent_C_FailChallenge) == 0x000008, "Wrong alignment on BP_ShootingChallenges_TargetComponent_C_FailChallenge");
static_assert(sizeof(BP_ShootingChallenges_TargetComponent_C_FailChallenge) == 0x000038, "Wrong size on BP_ShootingChallenges_TargetComponent_C_FailChallenge");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_FailChallenge, FailingReason) == 0x000000, "Member 'BP_ShootingChallenges_TargetComponent_C_FailChallenge::FailingReason' has a wrong offset!");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_FailChallenge, SuccesfullyFailed) == 0x000018, "Member 'BP_ShootingChallenges_TargetComponent_C_FailChallenge::SuccesfullyFailed' has a wrong offset!");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_FailChallenge, CallFunc_GetGameMode_ReturnValue) == 0x000020, "Member 'BP_ShootingChallenges_TargetComponent_C_FailChallenge::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_FailChallenge, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_ShootingChallenges_TargetComponent_C_FailChallenge::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_FailChallenge, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_ShootingChallenges_TargetComponent_C_FailChallenge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShootingChallenges_TargetComponent_C_FailChallenge, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000031, "Member 'BP_ShootingChallenges_TargetComponent_C_FailChallenge::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

