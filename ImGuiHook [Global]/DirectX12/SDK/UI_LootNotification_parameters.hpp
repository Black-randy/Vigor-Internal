#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LootNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Flame_structs.hpp"
#include "S_LootNotificationRow_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function UI_LootNotification.UI_LootNotification_C.ExecuteUbergraph_UI_LootNotification
// 0x02B8 (0x02B8 - 0x0000)
struct UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, class USoundBase*>        K2Node_MakeMap_Map;                                // 0x0008(0x0050)(ConstParm)
	TMap<class UClass*, class USoundBase*>        K2Node_MakeMap_Map_1;                              // 0x0058(0x0050)(ConstParm)
	TMap<class UClass*, class USoundBase*>        K2Node_MakeMap_Map_2;                              // 0x00A8(0x0050)(ConstParm)
	class UClass*                                 K2Node_CustomEvent_ItemClass;                      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemNum;                        // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_LootNotificationRow                 K2Node_MakeStruct_S_LootNotificationRow;           // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_LootNotificationRow_C*              CallFunc_Array_Get_Item;                           // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_LootNotificationRow_C*              CallFunc_Create_ReturnValue;                       // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimationLeft_Duration;               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_LootNotificationRow_C*              CallFunc_Array_Get_Item_1;                         // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimationUpFadeOut_Duration;          // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimationUp_Duration;                 // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19A[0x6];                                      // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_LootNotificationRow                 CallFunc_Array_Get_Item_2;                         // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01B0(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x01C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01C8(0x0018)()
	class USoundBase*                             CallFunc_Map_Find_Value;                           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             CallFunc_Map_Find_Value_1;                         // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             CallFunc_Map_Find_Value_2;                         // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;               // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_2;             // 0x020B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_3;             // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_4;             // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_5;             // 0x020E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_6;             // 0x020F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_7;             // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_212[0x6];                                      // 0x0212(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AItemForBackpack*                       CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemRarity                            CallFunc_GetItemRarity_ReturnValue;                // 0x0220(0x0028)(ConstParm)
	class UTexture2D*                             CallFunc_GetIcon_ReturnValue;                      // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0254(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x0268(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUI_LootNotificationRow_C*              CallFunc_Array_Get_Item_3;                         // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0278(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_PlayAnimationFadeOut_Duration;            // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x0290(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUI_LootNotificationRow_C*              CallFunc_Array_Get_Item_4;                         // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A2[0x2];                                      // 0x02A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x02A4(0x0010)(NoDestructor)
};
static_assert(alignof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification) == 0x000008, "Wrong alignment on UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification");
static_assert(sizeof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification) == 0x0002B8, "Wrong size on UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, EntryPoint) == 0x000000, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_MakeMap_Map) == 0x000008, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_MakeMap_Map_1) == 0x000058, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_MakeMap_Map_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_MakeMap_Map_2) == 0x0000A8, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_MakeMap_Map_2' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_CustomEvent_ItemClass) == 0x0000F8, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_CustomEvent_ItemClass' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_CustomEvent_ItemNum) == 0x000100, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_CustomEvent_ItemNum' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_MakeStruct_S_LootNotificationRow) == 0x000108, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_MakeStruct_S_LootNotificationRow' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_Length_ReturnValue) == 0x000118, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_Get_Item) == 0x000120, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000128, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_Length_ReturnValue_1) == 0x000138, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000140, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Greater_IntInt_ReturnValue) == 0x000148, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_Add_ReturnValue) == 0x00014C, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, Temp_int_Loop_Counter_Variable) == 0x000150, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_GetOwningPlayer_ReturnValue) == 0x000158, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Less_IntInt_ReturnValue) == 0x000160, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Create_ReturnValue) == 0x000168, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Add_IntInt_ReturnValue) == 0x000170, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_Add_ReturnValue_1) == 0x000174, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_PlayAnimationLeft_Duration) == 0x000178, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_PlayAnimationLeft_Duration' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, Temp_int_Array_Index_Variable) == 0x00017C, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_Get_Item_1) == 0x000180, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_AddChildToCanvas_ReturnValue) == 0x000188, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_PlayAnimationUpFadeOut_Duration) == 0x000190, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_PlayAnimationUpFadeOut_Duration' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_PlayAnimationUp_Duration) == 0x000194, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_PlayAnimationUp_Duration' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000198, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_BooleanAND_ReturnValue) == 0x000199, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_Get_Item_2) == 0x0001A0, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001B0, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0001C0, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Conv_IntToText_ReturnValue) == 0x0001C8, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Map_Find_Value) == 0x0001E0, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Map_Find_ReturnValue) == 0x0001E8, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Map_Find_Value_1) == 0x0001F0, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Map_Find_ReturnValue_1) == 0x0001F8, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Map_Find_Value_2) == 0x000200, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Map_Find_ReturnValue_2) == 0x000208, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_ClassIsChildOf_ReturnValue) == 0x000209, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_ClassIsChildOf_ReturnValue_1) == 0x00020A, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_ClassIsChildOf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_ClassIsChildOf_ReturnValue_2) == 0x00020B, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_ClassIsChildOf_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_ClassIsChildOf_ReturnValue_3) == 0x00020C, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_ClassIsChildOf_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_ClassIsChildOf_ReturnValue_4) == 0x00020D, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_ClassIsChildOf_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_ClassIsChildOf_ReturnValue_5) == 0x00020E, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_ClassIsChildOf_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_ClassIsChildOf_ReturnValue_6) == 0x00020F, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_ClassIsChildOf_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_ClassIsChildOf_ReturnValue_7) == 0x000210, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_ClassIsChildOf_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_BooleanOR_ReturnValue) == 0x000211, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000218, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_GetItemRarity_ReturnValue) == 0x000220, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_GetItemRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_GetIcon_ReturnValue) == 0x000248, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_IsValid_ReturnValue) == 0x000250, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_CreateDelegate_OutputDelegate_2) == 0x000254, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000268, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_Get_Item_3) == 0x000270, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_CreateDelegate_OutputDelegate_3) == 0x000278, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_PlayAnimationFadeOut_Duration) == 0x000288, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_PlayAnimationFadeOut_Duration' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_K2_SetTimerDelegate_ReturnValue_3) == 0x000290, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_K2_SetTimerDelegate_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_Get_Item_4) == 0x000298, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0002A0, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x0002A1, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification, K2Node_MakeStruct_Anchors) == 0x0002A4, "Member 'UI_LootNotification_C_ExecuteUbergraph_UI_LootNotification::K2Node_MakeStruct_Anchors' has a wrong offset!");

// Function UI_LootNotification.UI_LootNotification_C.AddRow
// 0x0010 (0x0010 - 0x0000)
struct UI_LootNotification_C_AddRow final
{
public:
	class UClass*                                 ItemClass;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemNum;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LootNotification_C_AddRow) == 0x000008, "Wrong alignment on UI_LootNotification_C_AddRow");
static_assert(sizeof(UI_LootNotification_C_AddRow) == 0x000010, "Wrong size on UI_LootNotification_C_AddRow");
static_assert(offsetof(UI_LootNotification_C_AddRow, ItemClass) == 0x000000, "Member 'UI_LootNotification_C_AddRow::ItemClass' has a wrong offset!");
static_assert(offsetof(UI_LootNotification_C_AddRow, ItemNum) == 0x000008, "Member 'UI_LootNotification_C_AddRow::ItemNum' has a wrong offset!");

}

