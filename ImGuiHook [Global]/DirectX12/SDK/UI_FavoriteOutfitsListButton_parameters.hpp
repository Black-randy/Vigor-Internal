#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FavoriteOutfitsListButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_FavoriteOutfitsListButton.UI_FavoriteOutfitsListButton_C.ExecuteUbergraph_UI_FavoriteOutfitsListButton
// 0x0078 (0x0078 - 0x0000)
struct UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetFocusedWidget_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton) == 0x000008, "Wrong alignment on UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton");
static_assert(sizeof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton) == 0x000078, "Wrong size on UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, EntryPoint) == 0x000000, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, K2Node_ComponentBoundEvent_Sender_2) == 0x000008, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, K2Node_ComponentBoundEvent_Sender_1) == 0x000010, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, K2Node_ComponentBoundEvent_Sender) == 0x000018, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, K2Node_Event_IsDesignTime) == 0x000020, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000028, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, CallFunc_GetFocusedWidget_ReturnValue) == 0x000058, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::CallFunc_GetFocusedWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'UI_FavoriteOutfitsListButton_C_ExecuteUbergraph_UI_FavoriteOutfitsListButton::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function UI_FavoriteOutfitsListButton.UI_FavoriteOutfitsListButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_FavoriteOutfitsListButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_FavoriteOutfitsListButton_C_PreConstruct) == 0x000001, "Wrong alignment on UI_FavoriteOutfitsListButton_C_PreConstruct");
static_assert(sizeof(UI_FavoriteOutfitsListButton_C_PreConstruct) == 0x000001, "Wrong size on UI_FavoriteOutfitsListButton_C_PreConstruct");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_FavoriteOutfitsListButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_FavoriteOutfitsListButton.UI_FavoriteOutfitsListButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_FavoriteOutfitsListButton.UI_FavoriteOutfitsListButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_FavoriteOutfitsListButton.UI_FavoriteOutfitsListButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
static_assert(sizeof(UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_FavoriteOutfitsListButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_FavoriteOutfitsListButton.UI_FavoriteOutfitsListButton_C.SetCorrectDisplayName
// 0x0070 (0x0070 - 0x0000)
struct UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0058(0x0018)()
};
static_assert(alignof(UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName) == 0x000008, "Wrong alignment on UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName");
static_assert(sizeof(UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName) == 0x000070, "Wrong size on UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName, CallFunc_Add_IntInt_ReturnValue) == 0x000000, "Member 'UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName, K2Node_MakeArray_Array) == 0x000048, "Member 'UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName, CallFunc_Format_ReturnValue) == 0x000058, "Member 'UI_FavoriteOutfitsListButton_C_SetCorrectDisplayName::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_FavoriteOutfitsListButton.UI_FavoriteOutfitsListButton_C.Toggle Focus
// 0x0005 (0x0005 - 0x0000)
struct UI_FavoriteOutfitsListButton_C_Toggle_Focus final
{
public:
	bool                                          bShouldBeFocused;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_FavoriteOutfitsListButton_C_Toggle_Focus) == 0x000001, "Wrong alignment on UI_FavoriteOutfitsListButton_C_Toggle_Focus");
static_assert(sizeof(UI_FavoriteOutfitsListButton_C_Toggle_Focus) == 0x000005, "Wrong size on UI_FavoriteOutfitsListButton_C_Toggle_Focus");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_Toggle_Focus, bShouldBeFocused) == 0x000000, "Member 'UI_FavoriteOutfitsListButton_C_Toggle_Focus::bShouldBeFocused' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_Toggle_Focus, Temp_bool_Variable) == 0x000001, "Member 'UI_FavoriteOutfitsListButton_C_Toggle_Focus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_Toggle_Focus, Temp_byte_Variable) == 0x000002, "Member 'UI_FavoriteOutfitsListButton_C_Toggle_Focus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_Toggle_Focus, Temp_byte_Variable_1) == 0x000003, "Member 'UI_FavoriteOutfitsListButton_C_Toggle_Focus::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_Toggle_Focus, K2Node_Select_Default) == 0x000004, "Member 'UI_FavoriteOutfitsListButton_C_Toggle_Focus::K2Node_Select_Default' has a wrong offset!");

// Function UI_FavoriteOutfitsListButton.UI_FavoriteOutfitsListButton_C.GetCorrectDisplayName
// 0x0068 (0x0068 - 0x0000)
struct UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0038(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0050(0x0018)()
};
static_assert(alignof(UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName) == 0x000008, "Wrong alignment on UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName");
static_assert(sizeof(UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName) == 0x000068, "Wrong size on UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName, ReturnValue) == 0x000000, "Member 'UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName, Temp_int_Variable) == 0x000018, "Member 'UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName, Temp_text_Variable) == 0x000020, "Member 'UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName, Temp_text_Variable_1) == 0x000038, "Member 'UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName, K2Node_Select_Default) == 0x000050, "Member 'UI_FavoriteOutfitsListButton_C_GetCorrectDisplayName::K2Node_Select_Default' has a wrong offset!");

}
