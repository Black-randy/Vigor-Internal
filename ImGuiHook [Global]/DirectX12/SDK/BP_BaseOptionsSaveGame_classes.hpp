#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaseOptionsSaveGame

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BaseOptionsSaveGame.BP_BaseOptionsSaveGame_C
// 0x0000 (0x01F0 - 0x01F0)
class UBP_BaseOptionsSaveGame_C final : public UOptionsSaveGame
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BaseOptionsSaveGame_C">();
	}
	static class UBP_BaseOptionsSaveGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BaseOptionsSaveGame_C>();
	}
};
static_assert(alignof(UBP_BaseOptionsSaveGame_C) == 0x000008, "Wrong alignment on UBP_BaseOptionsSaveGame_C");
static_assert(sizeof(UBP_BaseOptionsSaveGame_C) == 0x0001F0, "Wrong size on UBP_BaseOptionsSaveGame_C");

}
