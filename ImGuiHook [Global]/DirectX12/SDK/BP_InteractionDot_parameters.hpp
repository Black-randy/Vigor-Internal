#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractionDot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_InteractionDot.BP_InteractionDot_C.ExecuteUbergraph_BP_InteractionDot
// 0x00B8 (0x00B8 - 0x0000)
struct BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_New_Location;                   // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0018(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_InteractionDot_C*                   K2Node_DynamicCast_AsUI_Interaction_Dot;           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot) == 0x000008, "Wrong alignment on BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot");
static_assert(sizeof(BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot) == 0x0000B8, "Wrong size on BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot");
static_assert(offsetof(BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot, EntryPoint) == 0x000000, "Member 'BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot, K2Node_CustomEvent_New_Location) == 0x000004, "Member 'BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot::K2Node_CustomEvent_New_Location' has a wrong offset!");
static_assert(offsetof(BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000010, "Member 'BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000018, "Member 'BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot, K2Node_DynamicCast_AsUI_Interaction_Dot) == 0x0000A8, "Member 'BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot::K2Node_DynamicCast_AsUI_Interaction_Dot' has a wrong offset!");
static_assert(offsetof(BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'BP_InteractionDot_C_ExecuteUbergraph_BP_InteractionDot::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_InteractionDot.BP_InteractionDot_C.Update Location
// 0x000C (0x000C - 0x0000)
struct BP_InteractionDot_C_Update_Location final
{
public:
	struct FVector                                New_Location;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractionDot_C_Update_Location) == 0x000004, "Wrong alignment on BP_InteractionDot_C_Update_Location");
static_assert(sizeof(BP_InteractionDot_C_Update_Location) == 0x00000C, "Wrong size on BP_InteractionDot_C_Update_Location");
static_assert(offsetof(BP_InteractionDot_C_Update_Location, New_Location) == 0x000000, "Member 'BP_InteractionDot_C_Update_Location::New_Location' has a wrong offset!");

}

