#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GestureSegment

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function UI_GestureSegment.UI_GestureSegment_C.ExecuteUbergraph_UI_GestureSegment
// 0x0160 (0x0160 - 0x0000)
struct UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectionWheelComponent*               CallFunc_GetWheelComponent_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SelectionWheelComponent_C*          K2Node_DynamicCast_AsBP_Selection_Wheel_Component; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectionWheelComponent*               CallFunc_GetWheelComponent_ReturnValue_1;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomizationPair                     CallFunc_GetCustomizationInSlot_ReturnValue;       // 0x0040(0x0010)(NoDestructor)
	class UBP_SelectionWheelComponent_C*          K2Node_DynamicCast_AsBP_Selection_Wheel_Component_1; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACustomizationVariant*                  CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemName_ReturnValue;                  // 0x0070(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0088(0x0018)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller_1;    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCustomizationPair                     CallFunc_GetCustomizationInSlot_ReturnValue_1;     // 0x00B8(0x0010)(NoDestructor)
	class UAnimMontage*                           CallFunc_GetAnimationMontage_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue_1;               // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_DynamicCast_AsHuman_Character;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00EC(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller_2;    // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCustomizationPair                     CallFunc_GetCustomizationInSlot_ReturnValue_2;     // 0x0140(0x0010)(NoDestructor)
	class UClass*                                 K2Node_ClassDynamicCast_AsCustomization_Gesture_Variant; // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Send_Gesture_Used_Event_ReturnValue;      // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment) == 0x000008, "Wrong alignment on UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment");
static_assert(sizeof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment) == 0x000160, "Wrong size on UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, EntryPoint) == 0x000000, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetWheelComponent_ReturnValue) == 0x000008, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetWheelComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_AsBP_Selection_Wheel_Component) == 0x000010, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_AsBP_Selection_Wheel_Component' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000028, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetWheelComponent_ReturnValue_1) == 0x000038, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetWheelComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetCustomizationInSlot_ReturnValue) == 0x000040, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetCustomizationInSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_AsBP_Selection_Wheel_Component_1) == 0x000050, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_AsBP_Selection_Wheel_Component_1' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000060, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_IsValidClass_ReturnValue) == 0x000068, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetItemName_ReturnValue) == 0x000070, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_TextToUpper_ReturnValue) == 0x000088, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x0000A0, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_AsHuman_Player_Controller_1) == 0x0000A8, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_AsHuman_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_bSuccess_3) == 0x0000B0, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetCustomizationInSlot_ReturnValue_1) == 0x0000B8, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetCustomizationInSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetAnimationMontage_ReturnValue) == 0x0000C8, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetAnimationMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_IsValidClass_ReturnValue_1) == 0x0000D1, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_IsValidClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x0000D8, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_AsHuman_Character) == 0x0000E0, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_AsHuman_Character' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_bSuccess_4) == 0x0000E8, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_Event_MyGeometry) == 0x0000EC, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_Event_InDeltaTime) == 0x000124, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000128, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_AsHuman_Player_Controller_2) == 0x000130, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_AsHuman_Player_Controller_2' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_DynamicCast_bSuccess_5) == 0x000138, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_GetCustomizationInSlot_ReturnValue_2) == 0x000140, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_GetCustomizationInSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_ClassDynamicCast_AsCustomization_Gesture_Variant) == 0x000150, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_ClassDynamicCast_AsCustomization_Gesture_Variant' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, K2Node_ClassDynamicCast_bSuccess) == 0x000158, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment, CallFunc_Send_Gesture_Used_Event_ReturnValue) == 0x000159, "Member 'UI_GestureSegment_C_ExecuteUbergraph_UI_GestureSegment::CallFunc_Send_Gesture_Used_Event_ReturnValue' has a wrong offset!");

// Function UI_GestureSegment.UI_GestureSegment_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_GestureSegment_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GestureSegment_C_Tick) == 0x000004, "Wrong alignment on UI_GestureSegment_C_Tick");
static_assert(sizeof(UI_GestureSegment_C_Tick) == 0x00003C, "Wrong size on UI_GestureSegment_C_Tick");
static_assert(offsetof(UI_GestureSegment_C_Tick, MyGeometry) == 0x000000, "Member 'UI_GestureSegment_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_GestureSegment_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_GestureSegment.UI_GestureSegment_C.UpdateOpacity
// 0x0010 (0x0010 - 0x0000)
struct UI_GestureSegment_C_UpdateOpacity final
{
public:
	TSubclassOf<class AItem>                      CallFunc_GetItemType_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GestureSegment_C_UpdateOpacity) == 0x000008, "Wrong alignment on UI_GestureSegment_C_UpdateOpacity");
static_assert(sizeof(UI_GestureSegment_C_UpdateOpacity) == 0x000010, "Wrong size on UI_GestureSegment_C_UpdateOpacity");
static_assert(offsetof(UI_GestureSegment_C_UpdateOpacity, CallFunc_GetItemType_ReturnValue) == 0x000000, "Member 'UI_GestureSegment_C_UpdateOpacity::CallFunc_GetItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_UpdateOpacity, CallFunc_IsValidClass_ReturnValue) == 0x000008, "Member 'UI_GestureSegment_C_UpdateOpacity::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

// Function UI_GestureSegment.UI_GestureSegment_C.CanBeSelected
// 0x0018 (0x0018 - 0x0000)
struct UI_GestureSegment_C_CanBeSelected final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AItem>                      CallFunc_GetItemType_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GestureSegment_C_CanBeSelected) == 0x000008, "Wrong alignment on UI_GestureSegment_C_CanBeSelected");
static_assert(sizeof(UI_GestureSegment_C_CanBeSelected) == 0x000018, "Wrong size on UI_GestureSegment_C_CanBeSelected");
static_assert(offsetof(UI_GestureSegment_C_CanBeSelected, ReturnValue) == 0x000000, "Member 'UI_GestureSegment_C_CanBeSelected::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_CanBeSelected, CallFunc_GetItemType_ReturnValue) == 0x000008, "Member 'UI_GestureSegment_C_CanBeSelected::CallFunc_GetItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureSegment_C_CanBeSelected, CallFunc_IsValidClass_ReturnValue) == 0x000010, "Member 'UI_GestureSegment_C_CanBeSelected::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

}
