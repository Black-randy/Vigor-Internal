#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OwnedTitles_Savegame

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OwnedTitles_Savegame.BP_OwnedTitles_SaveGame_C
// 0x0060 (0x0088 - 0x0028)
class UBP_OwnedTitles_SaveGame_C final : public USaveGame
{
public:
	class FString                                 SaveSlotName;                                      // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FName, int32>                      OwnedTitles;                                       // 0x0038(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OwnedTitles_SaveGame_C">();
	}
	static class UBP_OwnedTitles_SaveGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_OwnedTitles_SaveGame_C>();
	}
};
static_assert(alignof(UBP_OwnedTitles_SaveGame_C) == 0x000008, "Wrong alignment on UBP_OwnedTitles_SaveGame_C");
static_assert(sizeof(UBP_OwnedTitles_SaveGame_C) == 0x000088, "Wrong size on UBP_OwnedTitles_SaveGame_C");
static_assert(offsetof(UBP_OwnedTitles_SaveGame_C, SaveSlotName) == 0x000028, "Member 'UBP_OwnedTitles_SaveGame_C::SaveSlotName' has a wrong offset!");
static_assert(offsetof(UBP_OwnedTitles_SaveGame_C, OwnedTitles) == 0x000038, "Member 'UBP_OwnedTitles_SaveGame_C::OwnedTitles' has a wrong offset!");

}
