#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_ItemInStash

#include "Basic.hpp"

#include "F_TitleRank_structs.hpp"


namespace SDK::Params
{

// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.ExecuteUbergraph_BP_TitleLogic_ItemInStash
// 0x0050 (0x0050 - 0x0000)
struct BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AStash* Sender, class UStashComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AStash*                                 CallFunc_GetStash_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStash*                                 K2Node_CustomEvent_Sender;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStashComponent*                        K2Node_CustomEvent_Inventory;                      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                      K2Node_DynamicCast_AsBP_Player_State;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash) == 0x000008, "Wrong alignment on BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash");
static_assert(sizeof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash) == 0x000050, "Wrong size on BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, EntryPoint) == 0x000000, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, CallFunc_GetStash_ReturnValue) == 0x000018, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::CallFunc_GetStash_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, CallFunc_GetUserControllerId_ReturnValue) == 0x000024, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue) == 0x000028, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, K2Node_CustomEvent_Sender) == 0x000030, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, K2Node_CustomEvent_Inventory) == 0x000038, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::K2Node_CustomEvent_Inventory' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, K2Node_DynamicCast_AsBP_Player_State) == 0x000040, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::K2Node_DynamicCast_AsBP_Player_State' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_TitleLogic_ItemInStash_C_ExecuteUbergraph_BP_TitleLogic_ItemInStash::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.Stash Ready
// 0x0010 (0x0010 - 0x0000)
struct BP_TitleLogic_ItemInStash_C_Stash_Ready final
{
public:
	class AStash*                                 Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStashComponent*                        Inventory;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleLogic_ItemInStash_C_Stash_Ready) == 0x000008, "Wrong alignment on BP_TitleLogic_ItemInStash_C_Stash_Ready");
static_assert(sizeof(BP_TitleLogic_ItemInStash_C_Stash_Ready) == 0x000010, "Wrong size on BP_TitleLogic_ItemInStash_C_Stash_Ready");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Stash_Ready, Sender) == 0x000000, "Member 'BP_TitleLogic_ItemInStash_C_Stash_Ready::Sender' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Stash_Ready, Inventory) == 0x000008, "Member 'BP_TitleLogic_ItemInStash_C_Stash_Ready::Inventory' has a wrong offset!");

// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.Is Initialized
// 0x0001 (0x0001 - 0x0000)
struct BP_TitleLogic_ItemInStash_C_Is_Initialized final
{
public:
	bool                                          Initialized;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_ItemInStash_C_Is_Initialized) == 0x000001, "Wrong alignment on BP_TitleLogic_ItemInStash_C_Is_Initialized");
static_assert(sizeof(BP_TitleLogic_ItemInStash_C_Is_Initialized) == 0x000001, "Wrong size on BP_TitleLogic_ItemInStash_C_Is_Initialized");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Initialized, Initialized) == 0x000000, "Member 'BP_TitleLogic_ItemInStash_C_Is_Initialized::Initialized' has a wrong offset!");

// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.Is Rank Owned
// 0x00E8 (0x00E8 - 0x0000)
struct BP_TitleLogic_ItemInStash_C_Is_Rank_Owned final
{
public:
	struct FF_TitleRank                           Rank_Info;                                         // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Owned;                                             // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsItem_for_Backpack;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AStash*                                 CallFunc_GetStash_ReturnValue;                     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA[0x2];                                       // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CountOfResource_ReturnValue;              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned) == 0x000008, "Wrong alignment on BP_TitleLogic_ItemInStash_C_Is_Rank_Owned");
static_assert(sizeof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned) == 0x0000E8, "Wrong size on BP_TitleLogic_ItemInStash_C_Is_Rank_Owned");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, Rank_Info) == 0x000000, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::Rank_Info' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, Owned) == 0x0000B8, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::Owned' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, CallFunc_IsValid_ReturnValue) == 0x0000B9, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, K2Node_ClassDynamicCast_AsItem_for_Backpack) == 0x0000C0, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::K2Node_ClassDynamicCast_AsItem_for_Backpack' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, K2Node_ClassDynamicCast_bSuccess) == 0x0000C8, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, CallFunc_GetStash_ReturnValue) == 0x0000D0, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::CallFunc_GetStash_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, CallFunc_IsValid_ReturnValue_2) == 0x0000D9, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, CallFunc_CountOfResource_ReturnValue) == 0x0000DC, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::CallFunc_CountOfResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E0, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Is_Rank_Owned, CallFunc_IsValid_ReturnValue_3) == 0x0000E1, "Member 'BP_TitleLogic_ItemInStash_C_Is_Rank_Owned::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function BP_TitleLogic_ItemInStash.BP_TitleLogic_ItemInStash_C.Get Title Item
// 0x00D8 (0x00D8 - 0x0000)
struct BP_TitleLogic_ItemInStash_C_Get_Title_Item final
{
public:
	struct FF_TitleRank                           Rank;                                              // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UClass*                                 Item;                                              // 0x00B8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_Title_Item_Base;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_ItemInStash_C_Get_Title_Item) == 0x000008, "Wrong alignment on BP_TitleLogic_ItemInStash_C_Get_Title_Item");
static_assert(sizeof(BP_TitleLogic_ItemInStash_C_Get_Title_Item) == 0x0000D8, "Wrong size on BP_TitleLogic_ItemInStash_C_Get_Title_Item");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Get_Title_Item, Rank) == 0x000000, "Member 'BP_TitleLogic_ItemInStash_C_Get_Title_Item::Rank' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Get_Title_Item, Item) == 0x0000B8, "Member 'BP_TitleLogic_ItemInStash_C_Get_Title_Item::Item' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Get_Title_Item, Valid) == 0x0000C0, "Member 'BP_TitleLogic_ItemInStash_C_Get_Title_Item::Valid' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Get_Title_Item, K2Node_ClassDynamicCast_AsBP_Title_Item_Base) == 0x0000C8, "Member 'BP_TitleLogic_ItemInStash_C_Get_Title_Item::K2Node_ClassDynamicCast_AsBP_Title_Item_Base' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_ItemInStash_C_Get_Title_Item, K2Node_ClassDynamicCast_bSuccess) == 0x0000D0, "Member 'BP_TitleLogic_ItemInStash_C_Get_Title_Item::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");

}
