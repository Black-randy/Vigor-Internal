#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_ShelterLevel5Update

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LS_ShelterLevel5Update.SequenceDirector_C
// 0x0008 (0x0040 - 0x0038)
class LS_ShelterLevel5Update::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
	void SetFrameMobility(class AStaticMeshActor* SM_WindowFrame_Window_Old, EComponentMobility NewMobility);
	void Hide_All_Props();
	void Set_Actor_visibility_by_Tag(class FName MeshActor_TAG, bool Visibility);
	void CaptureAllCameras(class ABP_ShelterCameras_C* BP_ShelterCameras, int32 CaptureTotalCount);
	void UsePlayerCustomizations(class ABP_Mannequin_C* BP_Mannequin);
	void PassNextUIContext(class ABP_ShelterCameras_C* BP_ShelterCameras);
	void SetSublevelVisibility(class ABP_StreamingRepair_C* BP_StreamingRepair, bool bShouldBeVisible, int32 ShelterLevel);
	void CaptureUpgradeSnapshot(class ABP_ShelterCameras_C* BP_ShelterCameras, int32 Index_0);
	void BP_ShelterCameras_Event_1(class ABP_ShelterCameras_C* BP_ShelterCameras, int32 Index_0);
	void BP_ShelterCameras_Event_0(class ABP_ShelterCameras_C* BP_ShelterCameras, int32 Index_0);
	void BP_StreamingRepair_Event_0(class ABP_StreamingRepair_C* BP_StreamingRepair, bool bShouldBeVisible, int32 ShelterLevel);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_ShelterCameras_C* BP_ShelterCameras);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_ShelterCameras_C* BP_ShelterCameras);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_ShelterCameras_C* BP_ShelterCameras);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_StreamingRepair_C* BP_StreamingRepair);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABP_StreamingRepair_C* BP_StreamingRepair);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABP_Mannequin_C* BP_Mannequin);
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class ABP_StreamingRepair_C* BP_StreamingRepair);
	void SequenceEvent__ENTRYPOINTSequenceDirector_7(class ABP_StreamingRepair_C* BP_StreamingRepair);
	void SequenceEvent__ENTRYPOINTSequenceDirector_8();
	void SequenceEvent__ENTRYPOINTSequenceDirector_9();
	void SequenceEvent__ENTRYPOINTSequenceDirector_10();
	void SequenceEvent__ENTRYPOINTSequenceDirector_11();
	void SequenceEvent__ENTRYPOINTSequenceDirector_12();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass LS_ShelterLevel5Update.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class LS_ShelterLevel5Update::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<LS_ShelterLevel5Update::USequenceDirector_C>();
	}
};
static_assert(alignof(LS_ShelterLevel5Update::USequenceDirector_C) == 0x000008, "Wrong alignment on LS_ShelterLevel5Update::USequenceDirector_C");
static_assert(sizeof(LS_ShelterLevel5Update::USequenceDirector_C) == 0x000040, "Wrong size on LS_ShelterLevel5Update::USequenceDirector_C");
static_assert(offsetof(LS_ShelterLevel5Update::USequenceDirector_C, UberGraphFrame) == 0x000038, "Member 'LS_ShelterLevel5Update::USequenceDirector_C::UberGraphFrame' has a wrong offset!");

}
