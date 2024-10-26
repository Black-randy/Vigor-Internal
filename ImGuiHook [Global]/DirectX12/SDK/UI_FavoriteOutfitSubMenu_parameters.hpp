#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FavoriteOutfitSubMenu

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_FavoriteOutfitSubMenu.UI_FavoriteOutfitSubMenu_C.ExecuteUbergraph_UI_FavoriteOutfitSubMenu
// 0x0120 (0x0120 - 0x0000)
struct UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AHumanCharacter* Sender, class UInventoryCustomizationComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	TDelegate<void(class UButton* Sender)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	class UButton*                                K2Node_CustomEvent_Sender_2;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UButton* Sender)>        K2Node_CreateDelegate_OutputDelegate_3;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	class UButton*                                K2Node_CustomEvent_Sender_1;                       // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCustomizationSlotVariant>      K2Node_MakeArray_Array_1;                          // 0x00D8(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_EquipFavoriteOutfitSet_OutfitChanged;     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EA[0x6];                                       // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        K2Node_CustomEvent_Sender;                         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryCustomizationComponent*       K2Node_CustomEvent_Inventory;                      // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue;           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerCharacter*                  CallFunc_GetHumanCharacter_ReturnValue;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_Script_C*                 K2Node_DynamicCast_AsBP_Character_Script;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu) == 0x000008, "Wrong alignment on UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu");
static_assert(sizeof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu) == 0x000120, "Wrong size on UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, EntryPoint) == 0x000000, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_Event_IsDesignTime) == 0x000038, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_MakeArray_Array) == 0x000080, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, CallFunc_Format_ReturnValue) == 0x000090, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000A8, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_CustomEvent_Sender_2) == 0x0000B8, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000C0, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_CustomEvent_Sender_1) == 0x0000D0, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_MakeArray_Array_1) == 0x0000D8, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, CallFunc_EquipFavoriteOutfitSet_OutfitChanged) == 0x0000E8, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::CallFunc_EquipFavoriteOutfitSet_OutfitChanged' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, CallFunc_IsValid_ReturnValue_2) == 0x0000E9, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_CustomEvent_Sender) == 0x0000F0, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_CustomEvent_Inventory) == 0x0000F8, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_CustomEvent_Inventory' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, CallFunc_GetFlameController_ReturnValue) == 0x000100, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::CallFunc_GetFlameController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, CallFunc_GetHumanCharacter_ReturnValue) == 0x000108, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::CallFunc_GetHumanCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_DynamicCast_AsBP_Character_Script) == 0x000110, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_DynamicCast_AsBP_Character_Script' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'UI_FavoriteOutfitSubMenu_C_ExecuteUbergraph_UI_FavoriteOutfitSubMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_FavoriteOutfitSubMenu.UI_FavoriteOutfitSubMenu_C.NewCustomizationLoaded
// 0x0010 (0x0010 - 0x0000)
struct UI_FavoriteOutfitSubMenu_C_NewCustomizationLoaded final
{
public:
	class AHumanCharacter*                        Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryCustomizationComponent*       Inventory;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_FavoriteOutfitSubMenu_C_NewCustomizationLoaded) == 0x000008, "Wrong alignment on UI_FavoriteOutfitSubMenu_C_NewCustomizationLoaded");
static_assert(sizeof(UI_FavoriteOutfitSubMenu_C_NewCustomizationLoaded) == 0x000010, "Wrong size on UI_FavoriteOutfitSubMenu_C_NewCustomizationLoaded");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_NewCustomizationLoaded, Sender) == 0x000000, "Member 'UI_FavoriteOutfitSubMenu_C_NewCustomizationLoaded::Sender' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_NewCustomizationLoaded, Inventory) == 0x000008, "Member 'UI_FavoriteOutfitSubMenu_C_NewCustomizationLoaded::Inventory' has a wrong offset!");

// Function UI_FavoriteOutfitSubMenu.UI_FavoriteOutfitSubMenu_C.SaveOutfitButtonPressed
// 0x0008 (0x0008 - 0x0000)
struct UI_FavoriteOutfitSubMenu_C_SaveOutfitButtonPressed final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_FavoriteOutfitSubMenu_C_SaveOutfitButtonPressed) == 0x000008, "Wrong alignment on UI_FavoriteOutfitSubMenu_C_SaveOutfitButtonPressed");
static_assert(sizeof(UI_FavoriteOutfitSubMenu_C_SaveOutfitButtonPressed) == 0x000008, "Wrong size on UI_FavoriteOutfitSubMenu_C_SaveOutfitButtonPressed");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_SaveOutfitButtonPressed, Sender) == 0x000000, "Member 'UI_FavoriteOutfitSubMenu_C_SaveOutfitButtonPressed::Sender' has a wrong offset!");

// Function UI_FavoriteOutfitSubMenu.UI_FavoriteOutfitSubMenu_C.EquipOutfitSetButtonPressed
// 0x0008 (0x0008 - 0x0000)
struct UI_FavoriteOutfitSubMenu_C_EquipOutfitSetButtonPressed final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_FavoriteOutfitSubMenu_C_EquipOutfitSetButtonPressed) == 0x000008, "Wrong alignment on UI_FavoriteOutfitSubMenu_C_EquipOutfitSetButtonPressed");
static_assert(sizeof(UI_FavoriteOutfitSubMenu_C_EquipOutfitSetButtonPressed) == 0x000008, "Wrong size on UI_FavoriteOutfitSubMenu_C_EquipOutfitSetButtonPressed");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_EquipOutfitSetButtonPressed, Sender) == 0x000000, "Member 'UI_FavoriteOutfitSubMenu_C_EquipOutfitSetButtonPressed::Sender' has a wrong offset!");

// Function UI_FavoriteOutfitSubMenu.UI_FavoriteOutfitSubMenu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_FavoriteOutfitSubMenu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_FavoriteOutfitSubMenu_C_PreConstruct) == 0x000001, "Wrong alignment on UI_FavoriteOutfitSubMenu_C_PreConstruct");
static_assert(sizeof(UI_FavoriteOutfitSubMenu_C_PreConstruct) == 0x000001, "Wrong size on UI_FavoriteOutfitSubMenu_C_PreConstruct");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_FavoriteOutfitSubMenu_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_FavoriteOutfitSubMenu.UI_FavoriteOutfitSubMenu_C.GetWidgetToFocus
// 0x0008 (0x0008 - 0x0000)
struct UI_FavoriteOutfitSubMenu_C_GetWidgetToFocus final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_FavoriteOutfitSubMenu_C_GetWidgetToFocus) == 0x000008, "Wrong alignment on UI_FavoriteOutfitSubMenu_C_GetWidgetToFocus");
static_assert(sizeof(UI_FavoriteOutfitSubMenu_C_GetWidgetToFocus) == 0x000008, "Wrong size on UI_FavoriteOutfitSubMenu_C_GetWidgetToFocus");
static_assert(offsetof(UI_FavoriteOutfitSubMenu_C_GetWidgetToFocus, ReturnValue) == 0x000000, "Member 'UI_FavoriteOutfitSubMenu_C_GetWidgetToFocus::ReturnValue' has a wrong offset!");

}

