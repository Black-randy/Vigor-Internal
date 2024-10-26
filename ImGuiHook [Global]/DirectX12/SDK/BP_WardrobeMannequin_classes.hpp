#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WardrobeMannequin

#include "Basic.hpp"

#include "BP_ItemPreview_Static_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WardrobeMannequin.BP_WardrobeMannequin_C
// 0x0020 (0x0320 - 0x0300)
class ABP_WardrobeMannequin_C final : public ABP_ItemPreview_Static_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_WardrobeMannequin_C;             // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   TemplateMesh;                                      // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RightHandItem;                                     // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LeftHandItem;                                      // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_WardrobeMannequin(int32 EntryPoint);
	void ReceiveBeginPlay();
	void GetItemPreviewPrimitives(TArray<class UPrimitiveComponent*>* Primitives);
	void GetCurrentOutfitVarinatSlots(class ABP_Character_Shelter_C* ShelterCharacter, TArray<struct FCustomizationSlotVariant>* Pairs1, bool* bSuccess);
	void ClearHideEverything();
	void SetLOD();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WardrobeMannequin_C">();
	}
	static class ABP_WardrobeMannequin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WardrobeMannequin_C>();
	}
};
static_assert(alignof(ABP_WardrobeMannequin_C) == 0x000008, "Wrong alignment on ABP_WardrobeMannequin_C");
static_assert(sizeof(ABP_WardrobeMannequin_C) == 0x000320, "Wrong size on ABP_WardrobeMannequin_C");
static_assert(offsetof(ABP_WardrobeMannequin_C, UberGraphFrame_BP_WardrobeMannequin_C) == 0x000300, "Member 'ABP_WardrobeMannequin_C::UberGraphFrame_BP_WardrobeMannequin_C' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeMannequin_C, TemplateMesh) == 0x000308, "Member 'ABP_WardrobeMannequin_C::TemplateMesh' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeMannequin_C, RightHandItem) == 0x000310, "Member 'ABP_WardrobeMannequin_C::RightHandItem' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeMannequin_C, LeftHandItem) == 0x000318, "Member 'ABP_WardrobeMannequin_C::LeftHandItem' has a wrong offset!");

}

