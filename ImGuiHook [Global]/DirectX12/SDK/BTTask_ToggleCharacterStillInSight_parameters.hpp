#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_ToggleCharacterStillInSight

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTTask_ToggleCharacterStillInSight.BTTask_ToggleCharacterStillInSight_C.ExecuteUbergraph_BTTask_ToggleCharacterStillInSight
// 0x0020 (0x0020 - 0x0000)
struct BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TutorialAI_Controller_C*            K2Node_DynamicCast_AsBP_Tutorial_AI_Controller;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight) == 0x000008, "Wrong alignment on BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight");
static_assert(sizeof(BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight) == 0x000020, "Wrong size on BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight");
static_assert(offsetof(BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight, EntryPoint) == 0x000000, "Member 'BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight, K2Node_Event_OwnerActor) == 0x000008, "Member 'BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight::K2Node_Event_OwnerActor' has a wrong offset!");
static_assert(offsetof(BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight, K2Node_DynamicCast_AsBP_Tutorial_AI_Controller) == 0x000010, "Member 'BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight::K2Node_DynamicCast_AsBP_Tutorial_AI_Controller' has a wrong offset!");
static_assert(offsetof(BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BTTask_ToggleCharacterStillInSight_C_ExecuteUbergraph_BTTask_ToggleCharacterStillInSight::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BTTask_ToggleCharacterStillInSight.BTTask_ToggleCharacterStillInSight_C.ReceiveExecute
// 0x0008 (0x0008 - 0x0000)
struct BTTask_ToggleCharacterStillInSight_C_ReceiveExecute final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_ToggleCharacterStillInSight_C_ReceiveExecute) == 0x000008, "Wrong alignment on BTTask_ToggleCharacterStillInSight_C_ReceiveExecute");
static_assert(sizeof(BTTask_ToggleCharacterStillInSight_C_ReceiveExecute) == 0x000008, "Wrong size on BTTask_ToggleCharacterStillInSight_C_ReceiveExecute");
static_assert(offsetof(BTTask_ToggleCharacterStillInSight_C_ReceiveExecute, OwnerActor) == 0x000000, "Member 'BTTask_ToggleCharacterStillInSight_C_ReceiveExecute::OwnerActor' has a wrong offset!");

}
