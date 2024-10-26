#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TitleListItem

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "F_TitleRank_structs.hpp"
#include "Engine_structs.hpp"
#include "F_TitleList_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_TitleListItem.UI_TitleListItem_C.ExecuteUbergraph_UI_TitleListItem
// 0x01E8 (0x01E8 - 0x0000)
struct UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_TitleRank                           CallFunc_Get_Rank_Info_Rank_Info;                  // 0x0038(0x00B8)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Select_Default;                             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0134(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsShipping_ReturnValue;                   // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_145[0x3];                                      // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0170(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0188(0x0018)()
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUICoreObject*                          CallFunc_GetUICoreObject_ReturnValue;              // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemRarity                            CallFunc_GetItemRarity_ReturnValue;                // 0x01C0(0x0028)(ConstParm)
};
static_assert(alignof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem) == 0x000008, "Wrong alignment on UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem");
static_assert(sizeof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem) == 0x0001E8, "Wrong size on UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, EntryPoint) == 0x000000, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, Temp_bool_Variable) == 0x000004, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, Temp_text_Variable) == 0x000008, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, Temp_bool_Variable_1) == 0x000020, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, Temp_object_Variable) == 0x000028, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_ComponentBoundEvent_Sender_2) == 0x000030, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_Get_Rank_Info_Rank_Info) == 0x000038, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_Get_Rank_Info_Rank_Info' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, Temp_bool_Variable_2) == 0x0000F0, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0000F8, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000100, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_DynamicCast_AsTexture_2D) == 0x000108, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_Select_Default) == 0x000118, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_DynamicCast_AsTexture_2D_1) == 0x000128, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_DynamicCast_bSuccess_1) == 0x000130, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_CreateDelegate_OutputDelegate) == 0x000134, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_IsShipping_ReturnValue) == 0x000144, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_IsShipping_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_Conv_NameToString_ReturnValue) == 0x000148, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_Concat_StrStr_ReturnValue) == 0x000158, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_ComponentBoundEvent_Sender_1) == 0x000168, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_Conv_NameToText_ReturnValue) == 0x000170, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_Select_Default_1) == 0x000188, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_NotEqual_NameName_ReturnValue) == 0x0001A0, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_ComponentBoundEvent_Sender) == 0x0001A8, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_GetUICoreObject_ReturnValue) == 0x0001B0, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_GetUICoreObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, K2Node_CustomEvent_Loaded) == 0x0001B8, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem, CallFunc_GetItemRarity_ReturnValue) == 0x0001C0, "Member 'UI_TitleListItem_C_ExecuteUbergraph_UI_TitleListItem::CallFunc_GetItemRarity_ReturnValue' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_TitleListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.OnLoaded_303A9E7341428F48F05BE78A3D4C2D37
// 0x0008 (0x0008 - 0x0000)
struct UI_TitleListItem_C_OnLoaded_303A9E7341428F48F05BE78A3D4C2D37 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TitleListItem_C_OnLoaded_303A9E7341428F48F05BE78A3D4C2D37) == 0x000008, "Wrong alignment on UI_TitleListItem_C_OnLoaded_303A9E7341428F48F05BE78A3D4C2D37");
static_assert(sizeof(UI_TitleListItem_C_OnLoaded_303A9E7341428F48F05BE78A3D4C2D37) == 0x000008, "Wrong size on UI_TitleListItem_C_OnLoaded_303A9E7341428F48F05BE78A3D4C2D37");
static_assert(offsetof(UI_TitleListItem_C_OnLoaded_303A9E7341428F48F05BE78A3D4C2D37, Loaded) == 0x000000, "Member 'UI_TitleListItem_C_OnLoaded_303A9E7341428F48F05BE78A3D4C2D37::Loaded' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.Set Checkmark
// 0x0005 (0x0005 - 0x0000)
struct UI_TitleListItem_C_Set_Checkmark final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TitleListItem_C_Set_Checkmark) == 0x000001, "Wrong alignment on UI_TitleListItem_C_Set_Checkmark");
static_assert(sizeof(UI_TitleListItem_C_Set_Checkmark) == 0x000005, "Wrong size on UI_TitleListItem_C_Set_Checkmark");
static_assert(offsetof(UI_TitleListItem_C_Set_Checkmark, Visible) == 0x000000, "Member 'UI_TitleListItem_C_Set_Checkmark::Visible' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Set_Checkmark, Temp_bool_Variable) == 0x000001, "Member 'UI_TitleListItem_C_Set_Checkmark::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Set_Checkmark, Temp_byte_Variable) == 0x000002, "Member 'UI_TitleListItem_C_Set_Checkmark::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Set_Checkmark, Temp_byte_Variable_1) == 0x000003, "Member 'UI_TitleListItem_C_Set_Checkmark::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Set_Checkmark, K2Node_Select_Default) == 0x000004, "Member 'UI_TitleListItem_C_Set_Checkmark::K2Node_Select_Default' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.Get Title Name
// 0x0008 (0x0008 - 0x0000)
struct UI_TitleListItem_C_Get_Title_Name final
{
public:
	class FName                                   Title_Name_0;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TitleListItem_C_Get_Title_Name) == 0x000004, "Wrong alignment on UI_TitleListItem_C_Get_Title_Name");
static_assert(sizeof(UI_TitleListItem_C_Get_Title_Name) == 0x000008, "Wrong size on UI_TitleListItem_C_Get_Title_Name");
static_assert(offsetof(UI_TitleListItem_C_Get_Title_Name, Title_Name_0) == 0x000000, "Member 'UI_TitleListItem_C_Get_Title_Name::Title_Name_0' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.Get Rank Index
// 0x0004 (0x0004 - 0x0000)
struct UI_TitleListItem_C_Get_Rank_Index final
{
public:
	int32                                         Title_Rank_0;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TitleListItem_C_Get_Rank_Index) == 0x000004, "Wrong alignment on UI_TitleListItem_C_Get_Rank_Index");
static_assert(sizeof(UI_TitleListItem_C_Get_Rank_Index) == 0x000004, "Wrong size on UI_TitleListItem_C_Get_Rank_Index");
static_assert(offsetof(UI_TitleListItem_C_Get_Rank_Index, Title_Rank_0) == 0x000000, "Member 'UI_TitleListItem_C_Get_Rank_Index::Title_Rank_0' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.Get Title Info
// 0x0048 (0x0048 - 0x0000)
struct UI_TitleListItem_C_Get_Title_Info final
{
public:
	struct FF_TitleList                           Title_Info_0;                                      // 0x0000(0x0048)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(UI_TitleListItem_C_Get_Title_Info) == 0x000008, "Wrong alignment on UI_TitleListItem_C_Get_Title_Info");
static_assert(sizeof(UI_TitleListItem_C_Get_Title_Info) == 0x000048, "Wrong size on UI_TitleListItem_C_Get_Title_Info");
static_assert(offsetof(UI_TitleListItem_C_Get_Title_Info, Title_Info_0) == 0x000000, "Member 'UI_TitleListItem_C_Get_Title_Info::Title_Info_0' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.Is Owned
// 0x0001 (0x0001 - 0x0000)
struct UI_TitleListItem_C_Is_Owned final
{
public:
	bool                                          Title_Owned_0;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_TitleListItem_C_Is_Owned) == 0x000001, "Wrong alignment on UI_TitleListItem_C_Is_Owned");
static_assert(sizeof(UI_TitleListItem_C_Is_Owned) == 0x000001, "Wrong size on UI_TitleListItem_C_Is_Owned");
static_assert(offsetof(UI_TitleListItem_C_Is_Owned, Title_Owned_0) == 0x000000, "Member 'UI_TitleListItem_C_Is_Owned::Title_Owned_0' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.Get Rank Info
// 0x0178 (0x0178 - 0x0000)
struct UI_TitleListItem_C_Get_Rank_Info final
{
public:
	struct FF_TitleRank                           Rank_Info;                                         // 0x0000(0x00B8)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_TitleRank                           CallFunc_Array_Get_Item;                           // 0x00C0(0x00B8)(HasGetValueTypeHash)
};
static_assert(alignof(UI_TitleListItem_C_Get_Rank_Info) == 0x000008, "Wrong alignment on UI_TitleListItem_C_Get_Rank_Info");
static_assert(sizeof(UI_TitleListItem_C_Get_Rank_Info) == 0x000178, "Wrong size on UI_TitleListItem_C_Get_Rank_Info");
static_assert(offsetof(UI_TitleListItem_C_Get_Rank_Info, Rank_Info) == 0x000000, "Member 'UI_TitleListItem_C_Get_Rank_Info::Rank_Info' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Rank_Info, CallFunc_NotEqual_NameName_ReturnValue) == 0x0000B8, "Member 'UI_TitleListItem_C_Get_Rank_Info::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Rank_Info, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'UI_TitleListItem_C_Get_Rank_Info::CallFunc_Array_Get_Item' has a wrong offset!");

// Function UI_TitleListItem.UI_TitleListItem_C.Get Description
// 0x0168 (0x0168 - 0x0000)
struct UI_TitleListItem_C_Get_Description final
{
public:
	class FText                                   Title_Description;                                 // 0x0000(0x0018)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_Title_Logic_Base;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_TitleRank                           CallFunc_Get_Rank_Info_Rank_Info;                  // 0x0040(0x00B8)(HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0100(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
};
static_assert(alignof(UI_TitleListItem_C_Get_Description) == 0x000008, "Wrong alignment on UI_TitleListItem_C_Get_Description");
static_assert(sizeof(UI_TitleListItem_C_Get_Description) == 0x000168, "Wrong size on UI_TitleListItem_C_Get_Description");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, Title_Description) == 0x000000, "Member 'UI_TitleListItem_C_Get_Description::Title_Description' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, Temp_bool_Variable) == 0x000018, "Member 'UI_TitleListItem_C_Get_Description::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x000020, "Member 'UI_TitleListItem_C_Get_Description::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, CallFunc_NotEqual_NameName_ReturnValue) == 0x000028, "Member 'UI_TitleListItem_C_Get_Description::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, K2Node_ClassDynamicCast_AsBP_Title_Logic_Base) == 0x000030, "Member 'UI_TitleListItem_C_Get_Description::K2Node_ClassDynamicCast_AsBP_Title_Logic_Base' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, K2Node_ClassDynamicCast_bSuccess) == 0x000038, "Member 'UI_TitleListItem_C_Get_Description::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000039, "Member 'UI_TitleListItem_C_Get_Description::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, CallFunc_Get_Rank_Info_Rank_Info) == 0x000040, "Member 'UI_TitleListItem_C_Get_Description::CallFunc_Get_Rank_Info_Rank_Info' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, CallFunc_Divide_IntInt_ReturnValue) == 0x0000F8, "Member 'UI_TitleListItem_C_Get_Description::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, K2Node_Select_Default) == 0x0000FC, "Member 'UI_TitleListItem_C_Get_Description::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, K2Node_MakeStruct_FormatArgumentData) == 0x000100, "Member 'UI_TitleListItem_C_Get_Description::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, K2Node_MakeArray_Array) == 0x000140, "Member 'UI_TitleListItem_C_Get_Description::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_TitleListItem_C_Get_Description, CallFunc_Format_ReturnValue) == 0x000150, "Member 'UI_TitleListItem_C_Get_Description::CallFunc_Format_ReturnValue' has a wrong offset!");

}

