#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HealedByOther

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HealedByOther.UI_HealedByOther_C
// 0x0030 (0x02E8 - 0x02B8)
class UUI_HealedByOther_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_83;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_155;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_325;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CircularProgress_C*                 UI_CircularProgress;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PlayerNickname_C*                   UI_PlayerNickname;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_HealedByOther(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetHealer(class AHumanPlayerState* HealerPlayerState);
	void SetProgress(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HealedByOther_C">();
	}
	static class UUI_HealedByOther_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HealedByOther_C>();
	}
};
static_assert(alignof(UUI_HealedByOther_C) == 0x000008, "Wrong alignment on UUI_HealedByOther_C");
static_assert(sizeof(UUI_HealedByOther_C) == 0x0002E8, "Wrong size on UUI_HealedByOther_C");
static_assert(offsetof(UUI_HealedByOther_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_HealedByOther_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HealedByOther_C, HorizontalBox_83) == 0x0002C0, "Member 'UUI_HealedByOther_C::HorizontalBox_83' has a wrong offset!");
static_assert(offsetof(UUI_HealedByOther_C, Image_155) == 0x0002C8, "Member 'UUI_HealedByOther_C::Image_155' has a wrong offset!");
static_assert(offsetof(UUI_HealedByOther_C, Image_325) == 0x0002D0, "Member 'UUI_HealedByOther_C::Image_325' has a wrong offset!");
static_assert(offsetof(UUI_HealedByOther_C, UI_CircularProgress) == 0x0002D8, "Member 'UUI_HealedByOther_C::UI_CircularProgress' has a wrong offset!");
static_assert(offsetof(UUI_HealedByOther_C, UI_PlayerNickname) == 0x0002E0, "Member 'UUI_HealedByOther_C::UI_PlayerNickname' has a wrong offset!");

}
