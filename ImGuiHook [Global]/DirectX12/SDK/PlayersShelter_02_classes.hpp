#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayersShelter_02

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayersShelter_02.PlayersShelter_02_C
// 0x0008 (0x0230 - 0x0228)
class APlayersShelter_02_C final : public AFlameLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_PlayersShelter_02(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayersShelter_02_C">();
	}
	static class APlayersShelter_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayersShelter_02_C>();
	}
};
static_assert(alignof(APlayersShelter_02_C) == 0x000008, "Wrong alignment on APlayersShelter_02_C");
static_assert(sizeof(APlayersShelter_02_C) == 0x000230, "Wrong size on APlayersShelter_02_C");
static_assert(offsetof(APlayersShelter_02_C, UberGraphFrame) == 0x000228, "Member 'APlayersShelter_02_C::UberGraphFrame' has a wrong offset!");

}
