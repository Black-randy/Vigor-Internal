#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BoosterSlot_Crate_Icon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "S_BetterCrateIcon_structs.hpp"


namespace SDK::Params
{

// Function UI_BoosterSlot_Crate_Icon.UI_BoosterSlot_Crate_Icon_C.ExecuteUbergraph_UI_BoosterSlot_Crate_Icon
// 0x0008 (0x0008 - 0x0000)
struct UI_BoosterSlot_Crate_Icon_C_ExecuteUbergraph_UI_BoosterSlot_Crate_Icon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BoosterSlot_Crate_Icon_C_ExecuteUbergraph_UI_BoosterSlot_Crate_Icon) == 0x000004, "Wrong alignment on UI_BoosterSlot_Crate_Icon_C_ExecuteUbergraph_UI_BoosterSlot_Crate_Icon");
static_assert(sizeof(UI_BoosterSlot_Crate_Icon_C_ExecuteUbergraph_UI_BoosterSlot_Crate_Icon) == 0x000008, "Wrong size on UI_BoosterSlot_Crate_Icon_C_ExecuteUbergraph_UI_BoosterSlot_Crate_Icon");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_ExecuteUbergraph_UI_BoosterSlot_Crate_Icon, EntryPoint) == 0x000000, "Member 'UI_BoosterSlot_Crate_Icon_C_ExecuteUbergraph_UI_BoosterSlot_Crate_Icon::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_ExecuteUbergraph_UI_BoosterSlot_Crate_Icon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_BoosterSlot_Crate_Icon_C_ExecuteUbergraph_UI_BoosterSlot_Crate_Icon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_BoosterSlot_Crate_Icon.UI_BoosterSlot_Crate_Icon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_BoosterSlot_Crate_Icon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BoosterSlot_Crate_Icon_C_PreConstruct) == 0x000001, "Wrong alignment on UI_BoosterSlot_Crate_Icon_C_PreConstruct");
static_assert(sizeof(UI_BoosterSlot_Crate_Icon_C_PreConstruct) == 0x000001, "Wrong size on UI_BoosterSlot_Crate_Icon_C_PreConstruct");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_BoosterSlot_Crate_Icon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_BoosterSlot_Crate_Icon.UI_BoosterSlot_Crate_Icon_C.SetupIcon
// 0x00A0 (0x00A0 - 0x0000)
struct UI_BoosterSlot_Crate_Icon_C_SetupIcon final
{
public:
	struct FLinearColor                           InColorAndOpacity;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                   IconRow;                                           // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowBackgroundEffect;                              // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             IconTexture;                                       // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_BetterCrateIcon                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0040(0x0040)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindSubstring_ReturnValue;                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BoosterSlot_Crate_Icon_C_SetupIcon) == 0x000008, "Wrong alignment on UI_BoosterSlot_Crate_Icon_C_SetupIcon");
static_assert(sizeof(UI_BoosterSlot_Crate_Icon_C_SetupIcon) == 0x0000A0, "Wrong size on UI_BoosterSlot_Crate_Icon_C_SetupIcon");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, InColorAndOpacity) == 0x000000, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::InColorAndOpacity' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, InText) == 0x000010, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::InText' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, IconRow) == 0x000028, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::IconRow' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, ShowBackgroundEffect) == 0x000030, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::ShowBackgroundEffect' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, IconTexture) == 0x000038, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::IconTexture' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, CallFunc_GetDataTableRowFromName_OutRow) == 0x000040, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000080, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, CallFunc_Conv_NameToString_ReturnValue) == 0x000088, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, CallFunc_FindSubstring_ReturnValue) == 0x000098, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::CallFunc_FindSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_Icon_C_SetupIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00009C, "Member 'UI_BoosterSlot_Crate_Icon_C_SetupIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}
