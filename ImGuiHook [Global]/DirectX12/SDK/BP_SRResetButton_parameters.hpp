#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SRResetButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SRResetButton.BP_SRResetButton_C.ExecuteUbergraph_BP_SRResetButton
// 0x0058 (0x0058 - 0x0000)
struct BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class II_ShootingRangeTarget_C> K2Node_DynamicCast_AsI_Shooting_Range_Target;      // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractionItemComponent*              K2Node_ComponentBoundEvent_Sender;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Interacting_Actor;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton) == 0x000008, "Wrong alignment on BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton");
static_assert(sizeof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton) == 0x000058, "Wrong size on BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, EntryPoint) == 0x000000, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000008, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, K2Node_DynamicCast_AsI_Shooting_Range_Target) == 0x000030, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::K2Node_DynamicCast_AsI_Shooting_Range_Target' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, CallFunc_Less_IntInt_ReturnValue) == 0x000041, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, K2Node_ComponentBoundEvent_Sender) == 0x000048, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton, K2Node_ComponentBoundEvent_Interacting_Actor) == 0x000050, "Member 'BP_SRResetButton_C_ExecuteUbergraph_BP_SRResetButton::K2Node_ComponentBoundEvent_Interacting_Actor' has a wrong offset!");

// Function BP_SRResetButton.BP_SRResetButton_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction Start on Server__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature final
{
public:
	class UInteractionItemComponent*              Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Interacting_Actor;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature) == 0x000008, "Wrong alignment on BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature");
static_assert(sizeof(BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature) == 0x000010, "Wrong size on BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature");
static_assert(offsetof(BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature, Sender) == 0x000000, "Member 'BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature::Sender' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature, Interacting_Actor) == 0x000008, "Member 'BP_SRResetButton_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_on_Server__DelegateSignature::Interacting_Actor' has a wrong offset!");

// Function BP_SRResetButton.BP_SRResetButton_C.UserConstructionScript
// 0x0048 (0x0048 - 0x0000)
struct BP_SRResetButton_C_UserConstructionScript final
{
public:
	TSoftObjectPtr<class UObject>                 CallFunc_GetSoftReference_ReturnValue;             // 0x0000(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SRResetButton_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_SRResetButton_C_UserConstructionScript");
static_assert(sizeof(BP_SRResetButton_C_UserConstructionScript) == 0x000048, "Wrong size on BP_SRResetButton_C_UserConstructionScript");
static_assert(offsetof(BP_SRResetButton_C_UserConstructionScript, CallFunc_GetSoftReference_ReturnValue) == 0x000000, "Member 'BP_SRResetButton_C_UserConstructionScript::CallFunc_GetSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_UserConstructionScript, CallFunc_LoadSoftReference_ReturnValue) == 0x000028, "Member 'BP_SRResetButton_C_UserConstructionScript::CallFunc_LoadSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_UserConstructionScript, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000030, "Member 'BP_SRResetButton_C_UserConstructionScript::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_SRResetButton_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_UserConstructionScript, K2Node_DynamicCast_AsStatic_Mesh) == 0x000038, "Member 'BP_SRResetButton_C_UserConstructionScript::K2Node_DynamicCast_AsStatic_Mesh' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_SRResetButton_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SRResetButton_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000041, "Member 'BP_SRResetButton_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

}
