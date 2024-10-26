#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChallengesList

#include "Basic.hpp"

#include "E_ChallengeSlotState_structs.hpp"
#include "E_ChallengeManagerState_structs.hpp"


namespace SDK::Params
{

// Function UI_ChallengesList.UI_ChallengesList_C.ExecuteUbergraph_UI_ChallengesList
// 0x00E0 (0x00E0 - 0x0000)
struct UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_ChallengesListItemSimple_C*         CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AChallengeManager*                      CallFunc_GetChallengeManager_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ChallengeManager_C*                 K2Node_DynamicCast_AsBP_Challenge_Manager;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63[0x1];                                       // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ChallengeSlot_C*>            CallFunc_GetAllChallengeSlotsSorted_ChallengeSlotsSorted; // 0x0068(0x0010)(ReferenceParm)
	class UUI_ChallengesListItemSimple_C*         CallFunc_Create_ReturnValue_1;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ChallengeSlot_C*                    CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ChallengeSlotState                          CallFunc_Get_Slot_State_Slot_State;                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ChallengeSlot_C*                    K2Node_CustomEvent_ChallengeSlot;                  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ABP_ChallengeSlot_C* Slot)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	E_ChallengeManagerState                       CallFunc_Get_Challenge_Manager_State_State;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ChallengeSlot_C*                    K2Node_CustomEvent_Slot;                           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList) == 0x000008, "Wrong alignment on UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList");
static_assert(sizeof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList) == 0x0000E0, "Wrong size on UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, EntryPoint) == 0x000000, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, Temp_int_Variable) == 0x000004, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, Temp_int_Array_Index_Variable) == 0x000030, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Create_ReturnValue) == 0x000038, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_GetChallengeManager_ReturnValue) == 0x000048, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_GetChallengeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, K2Node_DynamicCast_AsBP_Challenge_Manager) == 0x000058, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::K2Node_DynamicCast_AsBP_Challenge_Manager' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, Temp_bool_True_if_break_was_hit_Variable) == 0x000061, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Not_PreBool_ReturnValue_1) == 0x000062, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_GetAllChallengeSlotsSorted_ChallengeSlotsSorted) == 0x000068, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_GetAllChallengeSlotsSorted_ChallengeSlotsSorted' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Create_ReturnValue_1) == 0x000078, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Array_Get_Item) == 0x000080, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Array_Length_ReturnValue_2) == 0x000088, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Get_Slot_State_Slot_State) == 0x00008C, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Get_Slot_State_Slot_State' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00008D, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Array_Contains_ReturnValue) == 0x00008E, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_BooleanOR_ReturnValue) == 0x00008F, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, K2Node_CustomEvent_ChallengeSlot) == 0x000098, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::K2Node_CustomEvent_ChallengeSlot' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A0, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Get_Challenge_Manager_State_State) == 0x0000B0, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Get_Challenge_Manager_State_State' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000B1, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, K2Node_CustomEvent_Slot) == 0x0000B8, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, K2Node_Event_IsDesignTime) == 0x0000C0, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, Temp_int_Loop_Counter_Variable) == 0x0000C4, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C9, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000CC, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_BooleanAND_ReturnValue) == 0x0000D0, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList, CallFunc_AddChild_ReturnValue_1) == 0x0000D8, "Member 'UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

// Function UI_ChallengesList.UI_ChallengesList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ChallengesList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ChallengesList_C_PreConstruct) == 0x000001, "Wrong alignment on UI_ChallengesList_C_PreConstruct");
static_assert(sizeof(UI_ChallengesList_C_PreConstruct) == 0x000001, "Wrong size on UI_ChallengesList_C_PreConstruct");
static_assert(offsetof(UI_ChallengesList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_ChallengesList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_ChallengesList.UI_ChallengesList_C.OnStateHasChanged
// 0x0008 (0x0008 - 0x0000)
struct UI_ChallengesList_C_OnStateHasChanged final
{
public:
	class ABP_ChallengeSlot_C*                    Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChallengesList_C_OnStateHasChanged) == 0x000008, "Wrong alignment on UI_ChallengesList_C_OnStateHasChanged");
static_assert(sizeof(UI_ChallengesList_C_OnStateHasChanged) == 0x000008, "Wrong size on UI_ChallengesList_C_OnStateHasChanged");
static_assert(offsetof(UI_ChallengesList_C_OnStateHasChanged, Slot_0) == 0x000000, "Member 'UI_ChallengesList_C_OnStateHasChanged::Slot_0' has a wrong offset!");

// Function UI_ChallengesList.UI_ChallengesList_C.InitializeChallengeListItem
// 0x0008 (0x0008 - 0x0000)
struct UI_ChallengesList_C_InitializeChallengeListItem final
{
public:
	class ABP_ChallengeSlot_C*                    ChallengeSlot;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChallengesList_C_InitializeChallengeListItem) == 0x000008, "Wrong alignment on UI_ChallengesList_C_InitializeChallengeListItem");
static_assert(sizeof(UI_ChallengesList_C_InitializeChallengeListItem) == 0x000008, "Wrong size on UI_ChallengesList_C_InitializeChallengeListItem");
static_assert(offsetof(UI_ChallengesList_C_InitializeChallengeListItem, ChallengeSlot) == 0x000000, "Member 'UI_ChallengesList_C_InitializeChallengeListItem::ChallengeSlot' has a wrong offset!");

// Function UI_ChallengesList.UI_ChallengesList_C.SlotStateChanged
// 0x0018 (0x0018 - 0x0000)
struct UI_ChallengesList_C_SlotStateChanged final
{
public:
	class ABP_ChallengeSlot_C*                    ChallengeSlotIn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Slot_ID_Slot_ID;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_ChallengesListItemSimple_C*         CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChallengesList_C_SlotStateChanged) == 0x000008, "Wrong alignment on UI_ChallengesList_C_SlotStateChanged");
static_assert(sizeof(UI_ChallengesList_C_SlotStateChanged) == 0x000018, "Wrong size on UI_ChallengesList_C_SlotStateChanged");
static_assert(offsetof(UI_ChallengesList_C_SlotStateChanged, ChallengeSlotIn) == 0x000000, "Member 'UI_ChallengesList_C_SlotStateChanged::ChallengeSlotIn' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_SlotStateChanged, CallFunc_Get_Slot_ID_Slot_ID) == 0x000008, "Member 'UI_ChallengesList_C_SlotStateChanged::CallFunc_Get_Slot_ID_Slot_ID' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_SlotStateChanged, CallFunc_Array_Get_Item) == 0x000010, "Member 'UI_ChallengesList_C_SlotStateChanged::CallFunc_Array_Get_Item' has a wrong offset!");

// Function UI_ChallengesList.UI_ChallengesList_C.ShowRewards
// 0x0018 (0x0018 - 0x0000)
struct UI_ChallengesList_C_ShowRewards final
{
public:
	int32                                         CallFunc_GetZOrder_ReturnValue;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ChallengesDetails_C*                CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ChallengesList_C_ShowRewards) == 0x000008, "Wrong alignment on UI_ChallengesList_C_ShowRewards");
static_assert(sizeof(UI_ChallengesList_C_ShowRewards) == 0x000018, "Wrong size on UI_ChallengesList_C_ShowRewards");
static_assert(offsetof(UI_ChallengesList_C_ShowRewards, CallFunc_GetZOrder_ReturnValue) == 0x000000, "Member 'UI_ChallengesList_C_ShowRewards::CallFunc_GetZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ShowRewards, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'UI_ChallengesList_C_ShowRewards::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ChallengesList_C_ShowRewards, CallFunc_Create_ReturnValue) == 0x000010, "Member 'UI_ChallengesList_C_ShowRewards::CallFunc_Create_ReturnValue' has a wrong offset!");

}

