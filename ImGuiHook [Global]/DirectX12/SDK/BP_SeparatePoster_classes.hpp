#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SeparatePoster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FlameUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SeparatePoster.BP_SeparatePoster_C
// 0x01B8 (0x03D8 - 0x0220)
class ABP_SeparatePoster_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URectLightComponent*                    RectLight;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CameraTarget;                                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractionItemComponent_C*         BP_InteractionItemComponent;                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail_0;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail_1;                                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Photo_0;                                           // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Initialized;                                       // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PosterID;                                          // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         CurrentModelID;                                    // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               PhotoDynMaterial;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RenderTarget_X_Resolution;                         // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RenderTarget_Y_Resolution;                         // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            PosterMesh;                                        // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CurrentTargetTexture;                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ValidPlacement;                                    // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraComponent*                       PlayerCamera;                                      // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldUsePictureLight;                            // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_SeparatePosterMenu_C*               SeparatePosterUI;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_InteractableWardrobe_C*             BP_Wardrobe;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              ScaleLimits;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class AActor*>                           ShelterPropsTouched;                               // 0x02D0(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         Min_LightIntensity;                                // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_LightIntensity;                                // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, TSoftObjectPtr<class UStaticMesh>> FrameMeshMap;                                      // 0x0328(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TSoftObjectPtr<class UStaticMesh>, TSoftObjectPtr<class UMaterialInterface>> FrameMesh_to_Material;                             // 0x0378(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             PosterTexturesUpdated;                             // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void PosterTexturesUpdated__DelegateSignature(class ABP_SeparatePoster_C* Poster);
	void ExecuteUbergraph_BP_SeparatePoster(int32 EntryPoint);
	void OpenEditPosterUI();
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_On_Client__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void SetAppearance();
	void ExportCurrentPosterEvent();
	void UserConstructionScript();
	void SetInitialVisibility(bool bHidden_0);
	struct FTransform GetCameraPosition();
	void HighlightPoster(bool ShouldHighlight);
	class UMaterialInstanceDynamic* SetDynamicMaterial(class FName OptionalName);
	void SetCapturedRenderTexture(class UTextureRenderTarget2D* RenderTargetTexture);
	void SetMaterialTextureParam(class UTexture2D* Texture);
	void SetOverlayTexture(class UTexture2D* Texture);
	void ClearOverlayTexture();
	void GetRenderResolution(int32* X, int32* Y);
	void ExportPresentTexture();
	void SetPosterModel(int32 ModelID);
	void Check_for_Correct_Wall_Placement(TArray<class ABP_ValidPosterPlane_C*>& ValidWalls, bool* Valid);
	struct FTransform GetValidTeleportLocation(bool* Valid);
	void GetTheWallPosterIsPlacedUpon(class ABP_ValidPosterPlane_C** Wall);
	void Adjust_ScaleDependentStuff();
	void DEBUG_PrintArmLength();
	void DEBUG_ReRenderPoster();
	void SetLightEnabled(bool bNewEnabled);
	void CheckForShelterPropsOverlaps();
	void Cycle_to_Another_Poster_ModelID(int32* NewPosterModel);
	void CheckForDefaultPosterMaterial(bool* HasEmptyTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SeparatePoster_C">();
	}
	static class ABP_SeparatePoster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SeparatePoster_C>();
	}
};
static_assert(alignof(ABP_SeparatePoster_C) == 0x000008, "Wrong alignment on ABP_SeparatePoster_C");
static_assert(sizeof(ABP_SeparatePoster_C) == 0x0003D8, "Wrong size on ABP_SeparatePoster_C");
static_assert(offsetof(ABP_SeparatePoster_C, UberGraphFrame) == 0x000220, "Member 'ABP_SeparatePoster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, RectLight) == 0x000228, "Member 'ABP_SeparatePoster_C::RectLight' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, SpringArm) == 0x000230, "Member 'ABP_SeparatePoster_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, CameraTarget) == 0x000238, "Member 'ABP_SeparatePoster_C::CameraTarget' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, BP_InteractionItemComponent) == 0x000240, "Member 'ABP_SeparatePoster_C::BP_InteractionItemComponent' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, Nail_0) == 0x000248, "Member 'ABP_SeparatePoster_C::Nail_0' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, Nail_1) == 0x000250, "Member 'ABP_SeparatePoster_C::Nail_1' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, Photo_0) == 0x000258, "Member 'ABP_SeparatePoster_C::Photo_0' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, Scene) == 0x000260, "Member 'ABP_SeparatePoster_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, DefaultSceneRoot) == 0x000268, "Member 'ABP_SeparatePoster_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, Initialized) == 0x000270, "Member 'ABP_SeparatePoster_C::Initialized' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, PosterID) == 0x000274, "Member 'ABP_SeparatePoster_C::PosterID' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, CurrentModelID) == 0x000278, "Member 'ABP_SeparatePoster_C::CurrentModelID' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, PhotoDynMaterial) == 0x000280, "Member 'ABP_SeparatePoster_C::PhotoDynMaterial' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, RenderTarget_X_Resolution) == 0x000288, "Member 'ABP_SeparatePoster_C::RenderTarget_X_Resolution' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, RenderTarget_Y_Resolution) == 0x00028C, "Member 'ABP_SeparatePoster_C::RenderTarget_Y_Resolution' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, PosterMesh) == 0x000290, "Member 'ABP_SeparatePoster_C::PosterMesh' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, CurrentTargetTexture) == 0x000298, "Member 'ABP_SeparatePoster_C::CurrentTargetTexture' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, ValidPlacement) == 0x0002A0, "Member 'ABP_SeparatePoster_C::ValidPlacement' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, PlayerCamera) == 0x0002A8, "Member 'ABP_SeparatePoster_C::PlayerCamera' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, bShouldUsePictureLight) == 0x0002B0, "Member 'ABP_SeparatePoster_C::bShouldUsePictureLight' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, SeparatePosterUI) == 0x0002B8, "Member 'ABP_SeparatePoster_C::SeparatePosterUI' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, BP_Wardrobe) == 0x0002C0, "Member 'ABP_SeparatePoster_C::BP_Wardrobe' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, ScaleLimits) == 0x0002C8, "Member 'ABP_SeparatePoster_C::ScaleLimits' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, ShelterPropsTouched) == 0x0002D0, "Member 'ABP_SeparatePoster_C::ShelterPropsTouched' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, Min_LightIntensity) == 0x000320, "Member 'ABP_SeparatePoster_C::Min_LightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, Max_LightIntensity) == 0x000324, "Member 'ABP_SeparatePoster_C::Max_LightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, FrameMeshMap) == 0x000328, "Member 'ABP_SeparatePoster_C::FrameMeshMap' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, FrameMesh_to_Material) == 0x000378, "Member 'ABP_SeparatePoster_C::FrameMesh_to_Material' has a wrong offset!");
static_assert(offsetof(ABP_SeparatePoster_C, PosterTexturesUpdated) == 0x0003C8, "Member 'ABP_SeparatePoster_C::PosterTexturesUpdated' has a wrong offset!");

}
