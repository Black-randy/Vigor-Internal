#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TemplateSceneActor_Base

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TemplateSceneActor_Base.BP_TemplateSceneActor_Base_C
// 0x0038 (0x0258 - 0x0220)
class ABP_TemplateSceneActor_Base_C final : public AActor
{
public:
	class UArrowComponent*                        CameraPos;                                         // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight1;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Environment;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_WardrobeFavorite_Render_Simple_C*   RenderBooth;                                       // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USceneComponent*                        TargetSceneComponent;                              // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetCameraPosition(struct FTransform* CameraTransform);
	void GetScenePrimitives(TArray<class UPrimitiveComponent*>* Primitives);
	void ApplyCustomizationsToMannequin(class FName MannequinTag, const struct FCustomizationContainer& Customizations);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TemplateSceneActor_Base_C">();
	}
	static class ABP_TemplateSceneActor_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TemplateSceneActor_Base_C>();
	}
};
static_assert(alignof(ABP_TemplateSceneActor_Base_C) == 0x000008, "Wrong alignment on ABP_TemplateSceneActor_Base_C");
static_assert(sizeof(ABP_TemplateSceneActor_Base_C) == 0x000258, "Wrong size on ABP_TemplateSceneActor_Base_C");
static_assert(offsetof(ABP_TemplateSceneActor_Base_C, CameraPos) == 0x000220, "Member 'ABP_TemplateSceneActor_Base_C::CameraPos' has a wrong offset!");
static_assert(offsetof(ABP_TemplateSceneActor_Base_C, PointLight1) == 0x000228, "Member 'ABP_TemplateSceneActor_Base_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ABP_TemplateSceneActor_Base_C, Environment) == 0x000230, "Member 'ABP_TemplateSceneActor_Base_C::Environment' has a wrong offset!");
static_assert(offsetof(ABP_TemplateSceneActor_Base_C, Scene) == 0x000238, "Member 'ABP_TemplateSceneActor_Base_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_TemplateSceneActor_Base_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_TemplateSceneActor_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TemplateSceneActor_Base_C, RenderBooth) == 0x000248, "Member 'ABP_TemplateSceneActor_Base_C::RenderBooth' has a wrong offset!");
static_assert(offsetof(ABP_TemplateSceneActor_Base_C, TargetSceneComponent) == 0x000250, "Member 'ABP_TemplateSceneActor_Base_C::TargetSceneComponent' has a wrong offset!");

}

