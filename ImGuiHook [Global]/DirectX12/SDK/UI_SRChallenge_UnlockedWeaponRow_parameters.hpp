#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SRChallenge_UnlockedWeaponRow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function UI_SRChallenge_UnlockedWeaponRow.UI_SRChallenge_UnlockedWeaponRow_C.ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow
// 0x00E8 (0x00E8 - 0x0000)
struct UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWeapon*                                CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetWeaponIcon_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemRarity                            CallFunc_GetItemRarity_ReturnValue;                // 0x0018(0x0028)(ConstParm)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0040(0x0088)()
	class FText                                   CallFunc_GetWeaponName_ReturnValue;                // 0x00C8(0x0018)()
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x00E0(0x0008)(NoDestructor)
};
static_assert(alignof(UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow) == 0x000008, "Wrong alignment on UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow");
static_assert(sizeof(UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow) == 0x0000E8, "Wrong size on UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow, EntryPoint) == 0x000000, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000008, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow, CallFunc_GetWeaponIcon_ReturnValue) == 0x000010, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow::CallFunc_GetWeaponIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow, CallFunc_GetItemRarity_ReturnValue) == 0x000018, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow::CallFunc_GetItemRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x000040, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow, CallFunc_GetWeaponName_ReturnValue) == 0x0000C8, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow::CallFunc_GetWeaponName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow, K2Node_Event_InFocusEvent) == 0x0000E0, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_ExecuteUbergraph_UI_SRChallenge_UnlockedWeaponRow::K2Node_Event_InFocusEvent' has a wrong offset!");

// Function UI_SRChallenge_UnlockedWeaponRow.UI_SRChallenge_UnlockedWeaponRow_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct UI_SRChallenge_UnlockedWeaponRow_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UI_SRChallenge_UnlockedWeaponRow_C_OnFocusLost) == 0x000004, "Wrong alignment on UI_SRChallenge_UnlockedWeaponRow_C_OnFocusLost");
static_assert(sizeof(UI_SRChallenge_UnlockedWeaponRow_C_OnFocusLost) == 0x000008, "Wrong size on UI_SRChallenge_UnlockedWeaponRow_C_OnFocusLost");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function UI_SRChallenge_UnlockedWeaponRow.UI_SRChallenge_UnlockedWeaponRow_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived) == 0x000008, "Wrong alignment on UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived");
static_assert(sizeof(UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived) == 0x0001B0, "Wrong size on UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'UI_SRChallenge_UnlockedWeaponRow_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

}
