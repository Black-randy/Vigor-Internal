#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pumpkin_Consumable

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Pumpkin_Consumable.BP_Pumpkin_Consumable_C.ExecuteUbergraph_BP_Pumpkin_Consumable
// 0x0020 (0x0020 - 0x0000)
struct BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        K2Node_Event_ParentCharacter_1;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_Event_ParentCharacter;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable) == 0x000008, "Wrong alignment on BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable");
static_assert(sizeof(BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable) == 0x000020, "Wrong size on BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable");
static_assert(offsetof(BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable, EntryPoint) == 0x000000, "Member 'BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable, K2Node_Event_ParentCharacter_1) == 0x000008, "Member 'BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable::K2Node_Event_ParentCharacter_1' has a wrong offset!");
static_assert(offsetof(BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable, K2Node_Event_ParentCharacter) == 0x000010, "Member 'BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable::K2Node_Event_ParentCharacter' has a wrong offset!");
static_assert(offsetof(BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000018, "Member 'BP_Pumpkin_Consumable_C_ExecuteUbergraph_BP_Pumpkin_Consumable::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");

// Function BP_Pumpkin_Consumable.BP_Pumpkin_Consumable_C.OnGotIntoHandsImplementable
// 0x0008 (0x0008 - 0x0000)
struct BP_Pumpkin_Consumable_C_OnGotIntoHandsImplementable final
{
public:
	class AHumanCharacter*                        ParentCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Pumpkin_Consumable_C_OnGotIntoHandsImplementable) == 0x000008, "Wrong alignment on BP_Pumpkin_Consumable_C_OnGotIntoHandsImplementable");
static_assert(sizeof(BP_Pumpkin_Consumable_C_OnGotIntoHandsImplementable) == 0x000008, "Wrong size on BP_Pumpkin_Consumable_C_OnGotIntoHandsImplementable");
static_assert(offsetof(BP_Pumpkin_Consumable_C_OnGotIntoHandsImplementable, ParentCharacter) == 0x000000, "Member 'BP_Pumpkin_Consumable_C_OnGotIntoHandsImplementable::ParentCharacter' has a wrong offset!");

// Function BP_Pumpkin_Consumable.BP_Pumpkin_Consumable_C.OnUsedImplementable
// 0x0008 (0x0008 - 0x0000)
struct BP_Pumpkin_Consumable_C_OnUsedImplementable final
{
public:
	class AHumanCharacter*                        ParentCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Pumpkin_Consumable_C_OnUsedImplementable) == 0x000008, "Wrong alignment on BP_Pumpkin_Consumable_C_OnUsedImplementable");
static_assert(sizeof(BP_Pumpkin_Consumable_C_OnUsedImplementable) == 0x000008, "Wrong size on BP_Pumpkin_Consumable_C_OnUsedImplementable");
static_assert(offsetof(BP_Pumpkin_Consumable_C_OnUsedImplementable, ParentCharacter) == 0x000000, "Member 'BP_Pumpkin_Consumable_C_OnUsedImplementable::ParentCharacter' has a wrong offset!");

// Function BP_Pumpkin_Consumable.BP_Pumpkin_Consumable_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct BP_Pumpkin_Consumable_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Pumpkin_Consumable_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Pumpkin_Consumable_C_UserConstructionScript");
static_assert(sizeof(BP_Pumpkin_Consumable_C_UserConstructionScript) == 0x000008, "Wrong size on BP_Pumpkin_Consumable_C_UserConstructionScript");
static_assert(offsetof(BP_Pumpkin_Consumable_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_Pumpkin_Consumable_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}
