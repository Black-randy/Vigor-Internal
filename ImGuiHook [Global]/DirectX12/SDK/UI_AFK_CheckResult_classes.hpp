#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_AFK_CheckResult

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_AFK_CheckResult.UI_AFK_CheckResult_C
// 0x0068 (0x0320 - 0x02B8)
class UUI_AFK_CheckResult_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_VoteWindow;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_65;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Body;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_143;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_Title;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          AFK_PlayerToBeKicked;                              // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerToKickName;                                  // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         TimeToBeDisplayedFor;                              // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_AFK_CheckResult(int32 EntryPoint);
	void RemoveAfterDelay();
	void StartRemoveTimer();
	void PreConstruct(bool IsDesignTime);
	void SetResultDescription();
	void Construct();
	void Finished_B45DE34F415C7891786F3CA5DEB601B7();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_AFK_CheckResult_C">();
	}
	static class UUI_AFK_CheckResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_AFK_CheckResult_C>();
	}
};
static_assert(alignof(UUI_AFK_CheckResult_C) == 0x000008, "Wrong alignment on UUI_AFK_CheckResult_C");
static_assert(sizeof(UUI_AFK_CheckResult_C) == 0x000320, "Wrong size on UUI_AFK_CheckResult_C");
static_assert(offsetof(UUI_AFK_CheckResult_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_AFK_CheckResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, FadeIn) == 0x0002C0, "Member 'UUI_AFK_CheckResult_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, Canvas_VoteWindow) == 0x0002C8, "Member 'UUI_AFK_CheckResult_C::Canvas_VoteWindow' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, Image) == 0x0002D0, "Member 'UUI_AFK_CheckResult_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, Image_65) == 0x0002D8, "Member 'UUI_AFK_CheckResult_C::Image_65' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, Overlay_Body) == 0x0002E0, "Member 'UUI_AFK_CheckResult_C::Overlay_Body' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, RichTextBlock_143) == 0x0002E8, "Member 'UUI_AFK_CheckResult_C::RichTextBlock_143' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, Text_Title) == 0x0002F0, "Member 'UUI_AFK_CheckResult_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, UI_FlameSafezone) == 0x0002F8, "Member 'UUI_AFK_CheckResult_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, AFK_PlayerToBeKicked) == 0x000300, "Member 'UUI_AFK_CheckResult_C::AFK_PlayerToBeKicked' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, PlayerToKickName) == 0x000308, "Member 'UUI_AFK_CheckResult_C::PlayerToKickName' has a wrong offset!");
static_assert(offsetof(UUI_AFK_CheckResult_C, TimeToBeDisplayedFor) == 0x000318, "Member 'UUI_AFK_CheckResult_C::TimeToBeDisplayedFor' has a wrong offset!");

}

