#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FlameTextWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_FlameTextWidget.UI_FlameTextWidget_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct UI_FlameTextWidget_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UI_FlameTextWidget_C_SetText) == 0x000008, "Wrong alignment on UI_FlameTextWidget_C_SetText");
static_assert(sizeof(UI_FlameTextWidget_C_SetText) == 0x000018, "Wrong size on UI_FlameTextWidget_C_SetText");
static_assert(offsetof(UI_FlameTextWidget_C_SetText, InText) == 0x000000, "Member 'UI_FlameTextWidget_C_SetText::InText' has a wrong offset!");

// Function UI_FlameTextWidget.UI_FlameTextWidget_C.SetSize
// 0x0060 (0x0060 - 0x0000)
struct UI_FlameTextWidget_C_SetSize final
{
public:
	int32                                         Size;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0008(0x0058)(HasGetValueTypeHash)
};
static_assert(alignof(UI_FlameTextWidget_C_SetSize) == 0x000008, "Wrong alignment on UI_FlameTextWidget_C_SetSize");
static_assert(sizeof(UI_FlameTextWidget_C_SetSize) == 0x000060, "Wrong size on UI_FlameTextWidget_C_SetSize");
static_assert(offsetof(UI_FlameTextWidget_C_SetSize, Size) == 0x000000, "Member 'UI_FlameTextWidget_C_SetSize::Size' has a wrong offset!");
static_assert(offsetof(UI_FlameTextWidget_C_SetSize, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'UI_FlameTextWidget_C_SetSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

}
