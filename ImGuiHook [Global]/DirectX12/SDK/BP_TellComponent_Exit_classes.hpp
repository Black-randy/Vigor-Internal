#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TellComponent_Exit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_TellComponent_Base_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TellComponent_Exit.BP_TellComponent_Exit_C
// 0x0020 (0x0150 - 0x0130)
class UBP_TellComponent_Exit_C final : public UBP_TellComponent_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TellComponent_Exit_C;            // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRandomStream                          RandomStream;                                      // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	TArray<class ABP_ExitTell_BirdsSpawnPoint_C*> BirdsSpawn;                                        // 0x0140(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)

public:
	void ExecuteUbergraph_BP_TellComponent_Exit(int32 EntryPoint);
	void EncounterStarted();
	void PlayTellEffect();
	void RegisterBirdsSpawn(class ABP_ExitTell_BirdsSpawnPoint_C* BirdsSpawn_0);
	void SendAnalyticEvent(class AHumanCharacter*& IncomingPlayer, TSet<class AHumanCharacter*>& Campers, bool TellFired);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TellComponent_Exit_C">();
	}
	static class UBP_TellComponent_Exit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TellComponent_Exit_C>();
	}
};
static_assert(alignof(UBP_TellComponent_Exit_C) == 0x000008, "Wrong alignment on UBP_TellComponent_Exit_C");
static_assert(sizeof(UBP_TellComponent_Exit_C) == 0x000150, "Wrong size on UBP_TellComponent_Exit_C");
static_assert(offsetof(UBP_TellComponent_Exit_C, UberGraphFrame_BP_TellComponent_Exit_C) == 0x000130, "Member 'UBP_TellComponent_Exit_C::UberGraphFrame_BP_TellComponent_Exit_C' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Exit_C, RandomStream) == 0x000138, "Member 'UBP_TellComponent_Exit_C::RandomStream' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Exit_C, BirdsSpawn) == 0x000140, "Member 'UBP_TellComponent_Exit_C::BirdsSpawn' has a wrong offset!");

}

