#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MementoLootManager_Base

#include "Basic.hpp"

#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BP_MementoLootManager_Base.BP_MementoLootManager_Base_C.Mementos Spawned__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_MementoLootManager_Base_C_Mementos_Spawned__DelegateSignature final
{
public:
	TArray<class UClass*>                         Items;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_MementoLootManager_Base_C_Mementos_Spawned__DelegateSignature) == 0x000008, "Wrong alignment on BP_MementoLootManager_Base_C_Mementos_Spawned__DelegateSignature");
static_assert(sizeof(BP_MementoLootManager_Base_C_Mementos_Spawned__DelegateSignature) == 0x000010, "Wrong size on BP_MementoLootManager_Base_C_Mementos_Spawned__DelegateSignature");
static_assert(offsetof(BP_MementoLootManager_Base_C_Mementos_Spawned__DelegateSignature, Items) == 0x000000, "Member 'BP_MementoLootManager_Base_C_Mementos_Spawned__DelegateSignature::Items' has a wrong offset!");

// Function BP_MementoLootManager_Base.BP_MementoLootManager_Base_C.Spawn Mementos
// 0x0018 (0x0018 - 0x0000)
struct BP_MementoLootManager_Base_C_Spawn_Mementos final
{
public:
	bool                                          Cheat_in_All;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         Spawned_Mementos;                                  // 0x0008(0x0010)(Parm, OutParm)
};
static_assert(alignof(BP_MementoLootManager_Base_C_Spawn_Mementos) == 0x000008, "Wrong alignment on BP_MementoLootManager_Base_C_Spawn_Mementos");
static_assert(sizeof(BP_MementoLootManager_Base_C_Spawn_Mementos) == 0x000018, "Wrong size on BP_MementoLootManager_Base_C_Spawn_Mementos");
static_assert(offsetof(BP_MementoLootManager_Base_C_Spawn_Mementos, Cheat_in_All) == 0x000000, "Member 'BP_MementoLootManager_Base_C_Spawn_Mementos::Cheat_in_All' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Spawn_Mementos, Spawned_Mementos) == 0x000008, "Member 'BP_MementoLootManager_Base_C_Spawn_Mementos::Spawned_Mementos' has a wrong offset!");

// Function BP_MementoLootManager_Base.BP_MementoLootManager_Base_C.Is Cheating Allowed
// 0x0040 (0x0040 - 0x0000)
struct BP_MementoLootManager_Base_C_Is_Cheating_Allowed final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerController*>              CallFunc_GetPlayerControllers_ReturnValue;         // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsShipping_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed) == 0x000008, "Wrong alignment on BP_MementoLootManager_Base_C_Is_Cheating_Allowed");
static_assert(sizeof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed) == 0x000040, "Wrong size on BP_MementoLootManager_Base_C_Is_Cheating_Allowed");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, Result) == 0x000000, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::Result' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, Temp_bool_True_if_break_was_hit_Variable) == 0x000001, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_GetPlayerControllers_ReturnValue) == 0x000010, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_GetPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_IsShipping_ReturnValue) == 0x000020, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_IsShipping_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_IsValid_ReturnValue_1) == 0x000032, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_HasAuthority_ReturnValue) == 0x000038, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Is_Cheating_Allowed, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'BP_MementoLootManager_Base_C_Is_Cheating_Allowed::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_MementoLootManager_Base.BP_MementoLootManager_Base_C.Set Up Commodities to Spawn on All Locations
// 0x0190 (0x0190 - 0x0000)
struct BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations final
{
public:
	TArray<class UClass*>                         Memento_Pool;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UClass*>                         Mementos_Set;                                      // 0x0010(0x0010)(Parm, OutParm)
	TArray<class UClass*>                         Added_Mementos;                                    // 0x0020(0x0010)(Edit, BlueprintVisible)
	TMap<class UClass*, int32>                    Loot_Location_Counts;                              // 0x0030(0x0050)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ClearCommodities_ReturnValue;             // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddCommodity_ReturnValue;                 // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D6[0x2];                                       // 0x00D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_LootLocation_Memento_Base_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x00E0(0x0010)(ReferenceParm)
	class ABP_LootLocation_Memento_Base_C*        CallFunc_Array_Get_Item_1;                         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FE[0x2];                                       // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCommoditySpawnPoint*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0100(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommoditySpawnPoint*                   CallFunc_Array_Get_Item_2;                         // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCommodityDescriptorPoint              CallFunc_Array_Get_Item_3;                         // 0x0128(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsItem;                    // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x3];                                      // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value_1;                         // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17A[0x2];                                      // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations) == 0x000008, "Wrong alignment on BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations");
static_assert(sizeof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations) == 0x000190, "Wrong size on BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Memento_Pool) == 0x000000, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Memento_Pool' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Mementos_Set) == 0x000010, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Mementos_Set' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Added_Mementos) == 0x000020, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Added_Mementos' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Loot_Location_Counts) == 0x000030, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Loot_Location_Counts' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_bool_Variable) == 0x000080, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_int_Array_Index_Variable) == 0x000084, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_int_Array_Index_Variable_1) == 0x000088, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_int_Loop_Counter_Variable) == 0x00008C, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_int_Array_Index_Variable_2) == 0x000094, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_int_Loop_Counter_Variable_1) == 0x000098, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Add_IntInt_ReturnValue_1) == 0x00009C, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_bool_True_if_break_was_hit_Variable) == 0x0000A0, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_int_Array_Index_Variable_3) == 0x0000A4, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_int_Loop_Counter_Variable_2) == 0x0000A8, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_bool_True_if_break_was_hit_Variable_1) == 0x0000AC, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000B0, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_ClearCommodities_ReturnValue) == 0x0000B4, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_ClearCommodities_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Add_ReturnValue) == 0x0000C4, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_IsValidClass_ReturnValue) == 0x0000C9, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_int_Loop_Counter_Variable_3) == 0x0000CC, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Map_Find_Value) == 0x0000D0, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Map_Find_ReturnValue) == 0x0000D4, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_AddCommodity_ReturnValue) == 0x0000D5, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_AddCommodity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000D8, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, Temp_int_Variable) == 0x0000DC, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000E0, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Get_Item_1) == 0x0000F0, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Length_ReturnValue_1) == 0x0000F8, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_IsValid_ReturnValue) == 0x0000FC, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000FD, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000100, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Length_ReturnValue_2) == 0x000110, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Get_Item_2) == 0x000118, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Less_IntInt_ReturnValue_2) == 0x000120, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Get_Item_3) == 0x000128, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Length_ReturnValue_3) == 0x000160, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Less_IntInt_ReturnValue_3) == 0x000164, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, K2Node_ClassDynamicCast_AsItem) == 0x000168, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::K2Node_ClassDynamicCast_AsItem' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, K2Node_ClassDynamicCast_bSuccess) == 0x000170, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Map_Find_Value_1) == 0x000174, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Map_Find_ReturnValue_1) == 0x000178, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Contains_ReturnValue) == 0x000179, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, K2Node_Select_Default) == 0x00017C, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_IsValid_ReturnValue_1) == 0x000180, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Add_IntInt_ReturnValue_4) == 0x000184, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_Array_Contains_ReturnValue_1) == 0x000188, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000189, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations, CallFunc_BooleanOR_ReturnValue) == 0x00018A, "Member 'BP_MementoLootManager_Base_C_Set_Up_Commodities_to_Spawn_on_All_Locations::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}
