#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WardrobeFavorite_Render_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FlameUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C
// 0x00A8 (0x02C8 - 0x0220)
class ABP_WardrobeFavorite_Render_Simple_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   WallFront;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WallCeiling;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WallFloor;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WallRight;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WallLeft;                                          // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WallBack;                                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Box;                                               // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCapture2D_Test;                               // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCapture2D_DEBUG_RealTime;                     // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BackgroundRarity;                                  // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ItemTransform_Render_C*             BP_ItemTransform_Render;                           // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_WardrobeMannequin_C*                ItemPreview;                                       // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_TemplateSceneActor_Base_C*          TemplateSceneActor;                                // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstance*>              RarityMaterialInstances;                           // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SceneCaptureIndex;                                 // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             TexturesLoaded;                                    // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DEBUG_AUTO_RefreshActive;                          // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void TexturesLoaded__DelegateSignature();
	void ExecuteUbergraph_BP_WardrobeFavorite_Render_Simple(int32 EntryPoint);
	void TexturesLoadedAfterDelay();
	void ReceiveTick(float DeltaSeconds);
	void StopCapture();
	void StartCapture();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ShowItem(class UClass* ItemClass);
	void GetTransformFromComponent(class UClass* ItemClass, struct FS_ItemTransformSetting* ItemTransform);
	void ShowTemplateSceneActor(const struct FS_FavoriteOutfitePosterRenderSettings& PosterSettings, const struct FCustomizationContainer& PlayerCustomizations, bool* bSuccess);
	void ClearRenderBooth();
	void GetSceneCaptureCamera(class USceneCaptureComponent2D** SceneCapture);
	void OverrideLOD___Mipmaps(class ABP_TemplateSceneActor_Base_C* TemplateActor);
	void DisableSnowEffects();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WardrobeFavorite_Render_Simple_C">();
	}
	static class ABP_WardrobeFavorite_Render_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WardrobeFavorite_Render_Simple_C>();
	}
};
static_assert(alignof(ABP_WardrobeFavorite_Render_Simple_C) == 0x000008, "Wrong alignment on ABP_WardrobeFavorite_Render_Simple_C");
static_assert(sizeof(ABP_WardrobeFavorite_Render_Simple_C) == 0x0002C8, "Wrong size on ABP_WardrobeFavorite_Render_Simple_C");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, UberGraphFrame) == 0x000220, "Member 'ABP_WardrobeFavorite_Render_Simple_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, WallFront) == 0x000228, "Member 'ABP_WardrobeFavorite_Render_Simple_C::WallFront' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, WallCeiling) == 0x000230, "Member 'ABP_WardrobeFavorite_Render_Simple_C::WallCeiling' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, WallFloor) == 0x000238, "Member 'ABP_WardrobeFavorite_Render_Simple_C::WallFloor' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, WallRight) == 0x000240, "Member 'ABP_WardrobeFavorite_Render_Simple_C::WallRight' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, WallLeft) == 0x000248, "Member 'ABP_WardrobeFavorite_Render_Simple_C::WallLeft' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, WallBack) == 0x000250, "Member 'ABP_WardrobeFavorite_Render_Simple_C::WallBack' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, Box) == 0x000258, "Member 'ABP_WardrobeFavorite_Render_Simple_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, SceneCapture2D_Test) == 0x000260, "Member 'ABP_WardrobeFavorite_Render_Simple_C::SceneCapture2D_Test' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, SceneCapture2D_DEBUG_RealTime) == 0x000268, "Member 'ABP_WardrobeFavorite_Render_Simple_C::SceneCapture2D_DEBUG_RealTime' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, BackgroundRarity) == 0x000270, "Member 'ABP_WardrobeFavorite_Render_Simple_C::BackgroundRarity' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, Scene) == 0x000278, "Member 'ABP_WardrobeFavorite_Render_Simple_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, BP_ItemTransform_Render) == 0x000280, "Member 'ABP_WardrobeFavorite_Render_Simple_C::BP_ItemTransform_Render' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, ItemPreview) == 0x000288, "Member 'ABP_WardrobeFavorite_Render_Simple_C::ItemPreview' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, TemplateSceneActor) == 0x000290, "Member 'ABP_WardrobeFavorite_Render_Simple_C::TemplateSceneActor' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, RarityMaterialInstances) == 0x000298, "Member 'ABP_WardrobeFavorite_Render_Simple_C::RarityMaterialInstances' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, SceneCaptureIndex) == 0x0002A8, "Member 'ABP_WardrobeFavorite_Render_Simple_C::SceneCaptureIndex' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, TexturesLoaded) == 0x0002B0, "Member 'ABP_WardrobeFavorite_Render_Simple_C::TexturesLoaded' has a wrong offset!");
static_assert(offsetof(ABP_WardrobeFavorite_Render_Simple_C, DEBUG_AUTO_RefreshActive) == 0x0002C0, "Member 'ABP_WardrobeFavorite_Render_Simple_C::DEBUG_AUTO_RefreshActive' has a wrong offset!");

}

