#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TextNotification

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function UI_TextNotification.UI_TextNotification_C.ExecuteUbergraph_UI_TextNotification
// 0x0028 (0x0028 - 0x0000)
struct UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification) == 0x000008, "Wrong alignment on UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification");
static_assert(sizeof(UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification) == 0x000028, "Wrong size on UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification");
static_assert(offsetof(UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification, EntryPoint) == 0x000000, "Member 'UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'UI_TextNotification_C_ExecuteUbergraph_UI_TextNotification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function UI_TextNotification.UI_TextNotification_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_TextNotification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_TextNotification_C_PreConstruct) == 0x000001, "Wrong alignment on UI_TextNotification_C_PreConstruct");
static_assert(sizeof(UI_TextNotification_C_PreConstruct) == 0x000001, "Wrong size on UI_TextNotification_C_PreConstruct");
static_assert(offsetof(UI_TextNotification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_TextNotification_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_TextNotification.UI_TextNotification_C.UpdateVisual
// 0x0070 (0x0070 - 0x0000)
struct UI_TextNotification_C_UpdateVisual final
{
public:
	ESlateVisibility                              NewLocalVar_0;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           NewColor;                                          // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OriginalAlpha;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextNotificationType                         Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
};
static_assert(alignof(UI_TextNotification_C_UpdateVisual) == 0x000008, "Wrong alignment on UI_TextNotification_C_UpdateVisual");
static_assert(sizeof(UI_TextNotification_C_UpdateVisual) == 0x000070, "Wrong size on UI_TextNotification_C_UpdateVisual");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, NewLocalVar_0) == 0x000000, "Member 'UI_TextNotification_C_UpdateVisual::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, NewColor) == 0x000004, "Member 'UI_TextNotification_C_UpdateVisual::NewColor' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, OriginalAlpha) == 0x000014, "Member 'UI_TextNotification_C_UpdateVisual::OriginalAlpha' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, Temp_object_Variable) == 0x000018, "Member 'UI_TextNotification_C_UpdateVisual::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, Temp_object_Variable_1) == 0x000020, "Member 'UI_TextNotification_C_UpdateVisual::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, Temp_object_Variable_2) == 0x000028, "Member 'UI_TextNotification_C_UpdateVisual::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, Temp_byte_Variable) == 0x000030, "Member 'UI_TextNotification_C_UpdateVisual::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, K2Node_Select_Default) == 0x000038, "Member 'UI_TextNotification_C_UpdateVisual::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'UI_TextNotification_C_UpdateVisual::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_UpdateVisual, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'UI_TextNotification_C_UpdateVisual::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function UI_TextNotification.UI_TextNotification_C.ToString
// 0x0038 (0x0038 - 0x0000)
struct UI_TextNotification_C_ToString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TextNotification_C_ToString) == 0x000008, "Wrong alignment on UI_TextNotification_C_ToString");
static_assert(sizeof(UI_TextNotification_C_ToString) == 0x000038, "Wrong size on UI_TextNotification_C_ToString");
static_assert(offsetof(UI_TextNotification_C_ToString, ReturnValue) == 0x000000, "Member 'UI_TextNotification_C_ToString::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_ToString, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'UI_TextNotification_C_ToString::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TextNotification_C_ToString, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'UI_TextNotification_C_ToString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}
