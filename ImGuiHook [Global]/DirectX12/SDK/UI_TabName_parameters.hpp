#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TabName

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_TabName.UI_TabName_C.ExecuteUbergraph_UI_TabName
// 0x0058 (0x0058 - 0x0000)
struct UI_TabName_C_ExecuteUbergraph_UI_TabName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(UI_TabName_C_ExecuteUbergraph_UI_TabName) == 0x000008, "Wrong alignment on UI_TabName_C_ExecuteUbergraph_UI_TabName");
static_assert(sizeof(UI_TabName_C_ExecuteUbergraph_UI_TabName) == 0x000058, "Wrong size on UI_TabName_C_ExecuteUbergraph_UI_TabName");
static_assert(offsetof(UI_TabName_C_ExecuteUbergraph_UI_TabName, EntryPoint) == 0x000000, "Member 'UI_TabName_C_ExecuteUbergraph_UI_TabName::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_TabName_C_ExecuteUbergraph_UI_TabName, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'UI_TabName_C_ExecuteUbergraph_UI_TabName::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_TabName_C_ExecuteUbergraph_UI_TabName, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'UI_TabName_C_ExecuteUbergraph_UI_TabName::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function UI_TabName.UI_TabName_C.SetTabContent
// 0x0008 (0x0008 - 0x0000)
struct UI_TabName_C_SetTabContent final
{
public:
	class UUserWidget*                            Content_0;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TabName_C_SetTabContent) == 0x000008, "Wrong alignment on UI_TabName_C_SetTabContent");
static_assert(sizeof(UI_TabName_C_SetTabContent) == 0x000008, "Wrong size on UI_TabName_C_SetTabContent");
static_assert(offsetof(UI_TabName_C_SetTabContent, Content_0) == 0x000000, "Member 'UI_TabName_C_SetTabContent::Content_0' has a wrong offset!");

// Function UI_TabName.UI_TabName_C.SetTabName
// 0x0030 (0x0030 - 0x0000)
struct UI_TabName_C_SetTabName final
{
public:
	class FText                                   Name_0;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0018(0x0018)()
};
static_assert(alignof(UI_TabName_C_SetTabName) == 0x000008, "Wrong alignment on UI_TabName_C_SetTabName");
static_assert(sizeof(UI_TabName_C_SetTabName) == 0x000030, "Wrong size on UI_TabName_C_SetTabName");
static_assert(offsetof(UI_TabName_C_SetTabName, Name_0) == 0x000000, "Member 'UI_TabName_C_SetTabName::Name_0' has a wrong offset!");
static_assert(offsetof(UI_TabName_C_SetTabName, CallFunc_TextToUpper_ReturnValue) == 0x000018, "Member 'UI_TabName_C_SetTabName::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function UI_TabName.UI_TabName_C.SetTabOrangeDotPrefix
// 0x0010 (0x0010 - 0x0000)
struct UI_TabName_C_SetTabOrangeDotPrefix final
{
public:
	class FString                                 Prefix;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TabName_C_SetTabOrangeDotPrefix) == 0x000008, "Wrong alignment on UI_TabName_C_SetTabOrangeDotPrefix");
static_assert(sizeof(UI_TabName_C_SetTabOrangeDotPrefix) == 0x000010, "Wrong size on UI_TabName_C_SetTabOrangeDotPrefix");
static_assert(offsetof(UI_TabName_C_SetTabOrangeDotPrefix, Prefix) == 0x000000, "Member 'UI_TabName_C_SetTabOrangeDotPrefix::Prefix' has a wrong offset!");

// Function UI_TabName.UI_TabName_C.SetTabSize
// 0x0068 (0x0068 - 0x0000)
struct UI_TabName_C_SetTabSize final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0010(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(UI_TabName_C_SetTabSize) == 0x000008, "Wrong alignment on UI_TabName_C_SetTabSize");
static_assert(sizeof(UI_TabName_C_SetTabSize) == 0x000068, "Wrong size on UI_TabName_C_SetTabSize");
static_assert(offsetof(UI_TabName_C_SetTabSize, Scale) == 0x000000, "Member 'UI_TabName_C_SetTabSize::Scale' has a wrong offset!");
static_assert(offsetof(UI_TabName_C_SetTabSize, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000004, "Member 'UI_TabName_C_SetTabSize::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TabName_C_SetTabSize, CallFunc_FCeil_ReturnValue) == 0x000008, "Member 'UI_TabName_C_SetTabSize::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TabName_C_SetTabSize, K2Node_MakeStruct_SlateFontInfo) == 0x000010, "Member 'UI_TabName_C_SetTabSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function UI_TabName.UI_TabName_C.GetTabContent
// 0x0008 (0x0008 - 0x0000)
struct UI_TabName_C_GetTabContent final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TabName_C_GetTabContent) == 0x000008, "Wrong alignment on UI_TabName_C_GetTabContent");
static_assert(sizeof(UI_TabName_C_GetTabContent) == 0x000008, "Wrong size on UI_TabName_C_GetTabContent");
static_assert(offsetof(UI_TabName_C_GetTabContent, ReturnValue) == 0x000000, "Member 'UI_TabName_C_GetTabContent::ReturnValue' has a wrong offset!");

}
