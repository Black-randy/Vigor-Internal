#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_CombinationChest_LootManager

#include "Basic.hpp"

#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BP_ADM_CombinationChest_LootManager.BP_ADM_CombinationChest_LootManager_C.OnCommodityParamsModify
// 0x0130 (0x0130 - 0x0000)
struct BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify final
{
public:
	TSubclassOf<class AActor>                     CommodityType;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         SpawnProbabilityIn;                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CapacityMinIn;                                     // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CapacityMaxIn;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubObjectsLimitMinIn;                              // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubObjectsLimitMaxIn;                              // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnProbabilityOut;                               // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CapacityMinOut;                                    // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CapacityMaxOut;                                    // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubObjectsLimitMinOut;                             // 0x0028(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubObjectsLimitMaxOut;                             // 0x002C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BoosterCount;                                      // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Commodity;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubObjectMax;                                      // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubObjectMin;                                      // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoosterCoef;                                       // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CapacityMax;                                       // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CapacityMin;                                       // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnProbability;                                  // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsConsumable_Item;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AConsumableItem*                        CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRarity_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_Matches_C*                K2Node_DynamicCast_AsBP_Game_State_Matches;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCloudMatchSettingsInfo                CallFunc_GetCloudMatchSettingsInfo_ReturnValue;    // 0x00A8(0x0028)()
	int32                                         CallFunc_GetBoosterCount_Count;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsWeapon;                  // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeapon*                                CallFunc_GetClassDefaultObject_ReturnValue_1;      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRarity_ReturnValue_1;                  // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue_1;               // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsResource_Item;           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_2;                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_MathExpression_ReturnValue_2;               // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue_3;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify) == 0x000008, "Wrong alignment on BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify");
static_assert(sizeof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify) == 0x000130, "Wrong size on BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CommodityType) == 0x000000, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CommodityType' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, SpawnProbabilityIn) == 0x000008, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::SpawnProbabilityIn' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CapacityMinIn) == 0x00000C, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CapacityMinIn' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CapacityMaxIn) == 0x000010, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CapacityMaxIn' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, SubObjectsLimitMinIn) == 0x000014, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::SubObjectsLimitMinIn' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, SubObjectsLimitMaxIn) == 0x000018, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::SubObjectsLimitMaxIn' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, SpawnProbabilityOut) == 0x00001C, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::SpawnProbabilityOut' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CapacityMinOut) == 0x000020, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CapacityMinOut' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CapacityMaxOut) == 0x000024, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CapacityMaxOut' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, SubObjectsLimitMinOut) == 0x000028, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::SubObjectsLimitMinOut' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, SubObjectsLimitMaxOut) == 0x00002C, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::SubObjectsLimitMaxOut' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, BoosterCount) == 0x000030, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::BoosterCount' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, Commodity) == 0x000038, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::Commodity' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, SubObjectMax) == 0x000040, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::SubObjectMax' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, SubObjectMin) == 0x000044, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::SubObjectMin' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, BoosterCoef) == 0x000048, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::BoosterCoef' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CapacityMax) == 0x00004C, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CapacityMax' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CapacityMin) == 0x000050, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CapacityMin' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, SpawnProbability) == 0x000054, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::SpawnProbability' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_ClassDynamicCast_AsConsumable_Item) == 0x000058, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_ClassDynamicCast_AsConsumable_Item' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_ClassDynamicCast_bSuccess) == 0x000060, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000068, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_GetRarity_ReturnValue) == 0x000070, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000074, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000078, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_MathExpression_ReturnValue) == 0x00007C, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_FClamp_ReturnValue) == 0x000080, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000084, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x000088, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_GetGameState_ReturnValue) == 0x000090, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_DynamicCast_AsBP_Game_State_Matches) == 0x000098, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_DynamicCast_AsBP_Game_State_Matches' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_GetCloudMatchSettingsInfo_ReturnValue) == 0x0000A8, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_GetCloudMatchSettingsInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_GetBoosterCount_Count) == 0x0000D0, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_GetBoosterCount_Count' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_ClassDynamicCast_AsWeapon) == 0x0000D8, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_ClassDynamicCast_AsWeapon' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_ClassDynamicCast_bSuccess_1) == 0x0000E0, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_GetClassDefaultObject_ReturnValue_1) == 0x0000E8, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_GetClassDefaultObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_GetRarity_ReturnValue_1) == 0x0000F4, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_GetRarity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_Conv_IntToFloat_ReturnValue_4) == 0x0000F8, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_Conv_IntToFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000FC, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_Add_IntInt_ReturnValue_1) == 0x000100, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_MathExpression_ReturnValue_1) == 0x000104, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_MathExpression_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_FClamp_ReturnValue_1) == 0x000108, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_ClassDynamicCast_AsResource_Item) == 0x000110, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_ClassDynamicCast_AsResource_Item' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_ClassDynamicCast_bSuccess_2) == 0x000118, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_ClassDynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_MathExpression_ReturnValue_2) == 0x00011C, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_MathExpression_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, K2Node_MathExpression_ReturnValue_3) == 0x000120, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::K2Node_MathExpression_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_FTrunc_ReturnValue) == 0x000124, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify, CallFunc_FTrunc_ReturnValue_1) == 0x000128, "Member 'BP_ADM_CombinationChest_LootManager_C_OnCommodityParamsModify::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");

}
