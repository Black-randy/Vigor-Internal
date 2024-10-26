#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattlePass

#include "Basic.hpp"

#include "S_BattlePassLevelRewardFull_structs.hpp"


namespace SDK::Params
{

// Function BP_BattlePass.BP_BattlePass_C.ExecuteUbergraph_BP_BattlePass
// 0x0058 (0x0058 - 0x0000)
struct BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattlePassSystem*                      CallFunc_GetBattlePassSystem_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractionItemComponent*              K2Node_ComponentBoundEvent_Sender;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Interacting_Actor;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BattlePassSystem_C*                 K2Node_DynamicCast_AsBP_Battle_Pass_System;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                 K2Node_DynamicCast_AsBP_Player_Controller;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass) == 0x000008, "Wrong alignment on BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass");
static_assert(sizeof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass) == 0x000058, "Wrong size on BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, EntryPoint) == 0x000000, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, CallFunc_GetBattlePassSystem_ReturnValue) == 0x000018, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::CallFunc_GetBattlePassSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, K2Node_ComponentBoundEvent_Sender) == 0x000020, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, K2Node_ComponentBoundEvent_Interacting_Actor) == 0x000028, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::K2Node_ComponentBoundEvent_Interacting_Actor' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, K2Node_DynamicCast_AsBP_Battle_Pass_System) == 0x000030, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::K2Node_DynamicCast_AsBP_Battle_Pass_System' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, CallFunc_GetInstigatorController_ReturnValue) == 0x000040, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, K2Node_DynamicCast_AsBP_Player_Controller) == 0x000048, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::K2Node_DynamicCast_AsBP_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_BattlePass_C_ExecuteUbergraph_BP_BattlePass::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_BattlePass.BP_BattlePass_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction Start On Client__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_BattlePass_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature final
{
public:
	class UInteractionItemComponent*              Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Interacting_Actor;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattlePass_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature) == 0x000008, "Wrong alignment on BP_BattlePass_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature");
static_assert(sizeof(BP_BattlePass_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature) == 0x000010, "Wrong size on BP_BattlePass_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature");
static_assert(offsetof(BP_BattlePass_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature, Sender) == 0x000000, "Member 'BP_BattlePass_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature::Sender' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature, Interacting_Actor) == 0x000008, "Member 'BP_BattlePass_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_1_Interaction_Start_On_Client__DelegateSignature::Interacting_Actor' has a wrong offset!");

// Function BP_BattlePass.BP_BattlePass_C.RefreshVisuals
// 0x0148 (0x0148 - 0x0000)
struct BP_BattlePass_C_RefreshVisuals final
{
public:
	class UFlameAssetManager*                     CallFunc_GetAssetManagerSystem_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameAssetManager*                     CallFunc_GetAssetManagerSystem_ReturnValue_1;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue_1;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlameAssetManager*                     CallFunc_GetAssetManagerSystem_ReturnValue_2;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue_2;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh_1;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameAssetManager*                     CallFunc_GetAssetManagerSystem_ReturnValue_3;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue_3;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh_2;                // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_2;              // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattlePassSystem*                      CallFunc_GetBattlePassSystem_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BattlePassSystem_C*                 K2Node_DynamicCast_AsBP_Battle_Pass_System;        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_Get_Unclaimed_Rewards_Seasons;            // 0x00C8(0x0010)(ReferenceParm)
	TArray<struct FS_BattlePassLevelRewardFull>   CallFunc_Get_Unclaimed_Rewards_Free_Rewards;       // 0x00D8(0x0010)(ReferenceParm)
	TArray<struct FS_BattlePassLevelRewardFull>   CallFunc_Get_Unclaimed_Rewards_Premium_Rewards;    // 0x00E8(0x0010)(ReferenceParm)
	TArray<class FName>                           CallFunc_Get_Unclaimed_Rewards_Seasons_1;          // 0x00F8(0x0010)(ReferenceParm)
	TArray<struct FS_BattlePassLevelRewardFull>   CallFunc_Get_Unclaimed_Rewards_Free_Rewards_1;     // 0x0108(0x0010)(ReferenceParm)
	TArray<struct FS_BattlePassLevelRewardFull>   CallFunc_Get_Unclaimed_Rewards_Premium_Rewards_1;  // 0x0118(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x013E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x013F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattlePass_C_RefreshVisuals) == 0x000008, "Wrong alignment on BP_BattlePass_C_RefreshVisuals");
static_assert(sizeof(BP_BattlePass_C_RefreshVisuals) == 0x000148, "Wrong size on BP_BattlePass_C_RefreshVisuals");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_GetAssetManagerSystem_ReturnValue) == 0x000000, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_GetAssetManagerSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_LoadSoftReference_ReturnValue) == 0x000010, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_LoadSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000018, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_AsStatic_Mesh) == 0x000020, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_AsStatic_Mesh' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_GetAssetManagerSystem_ReturnValue_1) == 0x000030, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_GetAssetManagerSystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_LoadSoftReference_ReturnValue_1) == 0x000038, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_LoadSoftReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_GetAssetManagerSystem_ReturnValue_2) == 0x000040, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_GetAssetManagerSystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_AsMaterial_Interface) == 0x000048, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_AsMaterial_Interface' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_LoadSoftReference_ReturnValue_2) == 0x000058, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_LoadSoftReference_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_AsStatic_Mesh_1) == 0x000068, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_AsStatic_Mesh_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_SetStaticMesh_ReturnValue) == 0x000071, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_GetAssetManagerSystem_ReturnValue_3) == 0x000078, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_GetAssetManagerSystem_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_LoadSoftReference_ReturnValue_3) == 0x000080, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_LoadSoftReference_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_IsValid_ReturnValue_2) == 0x000088, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_IsValid_ReturnValue_3) == 0x000089, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_AsStatic_Mesh_2) == 0x000090, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_AsStatic_Mesh_2' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_bSuccess_3) == 0x000098, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_IsValid_ReturnValue_4) == 0x000099, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_IsValid_ReturnValue_5) == 0x00009A, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_SetStaticMesh_ReturnValue_1) == 0x00009B, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_IsValid_ReturnValue_6) == 0x00009C, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_SetStaticMesh_ReturnValue_2) == 0x00009D, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_SetStaticMesh_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_GetNumMaterials_ReturnValue) == 0x0000A0, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_GetBattlePassSystem_ReturnValue) == 0x0000A8, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_GetBattlePassSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_AsBP_Battle_Pass_System) == 0x0000B8, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_AsBP_Battle_Pass_System' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, K2Node_DynamicCast_bSuccess_4) == 0x0000C0, "Member 'BP_BattlePass_C_RefreshVisuals::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Get_Unclaimed_Rewards_Seasons) == 0x0000C8, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Get_Unclaimed_Rewards_Seasons' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Get_Unclaimed_Rewards_Free_Rewards) == 0x0000D8, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Get_Unclaimed_Rewards_Free_Rewards' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Get_Unclaimed_Rewards_Premium_Rewards) == 0x0000E8, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Get_Unclaimed_Rewards_Premium_Rewards' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Get_Unclaimed_Rewards_Seasons_1) == 0x0000F8, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Get_Unclaimed_Rewards_Seasons_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Get_Unclaimed_Rewards_Free_Rewards_1) == 0x000108, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Get_Unclaimed_Rewards_Free_Rewards_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Get_Unclaimed_Rewards_Premium_Rewards_1) == 0x000118, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Get_Unclaimed_Rewards_Premium_Rewards_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Array_Length_ReturnValue) == 0x000128, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Array_Length_ReturnValue_1) == 0x00012C, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Greater_IntInt_ReturnValue) == 0x000130, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000131, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Not_PreBool_ReturnValue) == 0x000132, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Not_PreBool_ReturnValue_1) == 0x000133, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Array_Length_ReturnValue_2) == 0x000134, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Array_Length_ReturnValue_3) == 0x000138, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Greater_IntInt_ReturnValue_2) == 0x00013C, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Greater_IntInt_ReturnValue_3) == 0x00013D, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Not_PreBool_ReturnValue_2) == 0x00013E, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_Not_PreBool_ReturnValue_3) == 0x00013F, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_BooleanAND_ReturnValue) == 0x000140, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattlePass_C_RefreshVisuals, CallFunc_BooleanAND_ReturnValue_1) == 0x000141, "Member 'BP_BattlePass_C_RefreshVisuals::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}

