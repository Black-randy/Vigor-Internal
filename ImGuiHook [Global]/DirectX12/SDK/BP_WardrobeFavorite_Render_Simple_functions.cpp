#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WardrobeFavorite_Render_Simple

#include "Basic.hpp"

#include "BP_WardrobeFavorite_Render_Simple_classes.hpp"
#include "BP_WardrobeFavorite_Render_Simple_parameters.hpp"


namespace SDK
{

// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.TexturesLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WardrobeFavorite_Render_Simple_C::TexturesLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "TexturesLoaded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.ExecuteUbergraph_BP_WardrobeFavorite_Render_Simple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WardrobeFavorite_Render_Simple_C::ExecuteUbergraph_BP_WardrobeFavorite_Render_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "ExecuteUbergraph_BP_WardrobeFavorite_Render_Simple");

	Params::BP_WardrobeFavorite_Render_Simple_C_ExecuteUbergraph_BP_WardrobeFavorite_Render_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.TexturesLoadedAfterDelay
// (BlueprintCallable, BlueprintEvent)

void ABP_WardrobeFavorite_Render_Simple_C::TexturesLoadedAfterDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "TexturesLoadedAfterDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WardrobeFavorite_Render_Simple_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "ReceiveTick");

	Params::BP_WardrobeFavorite_Render_Simple_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.StopCapture
// (BlueprintCallable, BlueprintEvent)

void ABP_WardrobeFavorite_Render_Simple_C::StopCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "StopCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.StartCapture
// (BlueprintCallable, BlueprintEvent)

void ABP_WardrobeFavorite_Render_Simple_C::StartCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "StartCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WardrobeFavorite_Render_Simple_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WardrobeFavorite_Render_Simple_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.ShowItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WardrobeFavorite_Render_Simple_C::ShowItem(class UClass* ItemClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "ShowItem");

	Params::BP_WardrobeFavorite_Render_Simple_C_ShowItem Parms{};

	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.GetTransformFromComponent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemTransformSetting          ItemTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WardrobeFavorite_Render_Simple_C::GetTransformFromComponent(class UClass* ItemClass, struct FS_ItemTransformSetting* ItemTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "GetTransformFromComponent");

	Params::BP_WardrobeFavorite_Render_Simple_C_GetTransformFromComponent Parms{};

	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemTransform != nullptr)
		*ItemTransform = std::move(Parms.ItemTransform);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.ShowTemplateSceneActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_FavoriteOutfitePosterRenderSettingsPosterSettings                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FCustomizationContainer          PlayerCustomizations                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WardrobeFavorite_Render_Simple_C::ShowTemplateSceneActor(const struct FS_FavoriteOutfitePosterRenderSettings& PosterSettings, const struct FCustomizationContainer& PlayerCustomizations, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "ShowTemplateSceneActor");

	Params::BP_WardrobeFavorite_Render_Simple_C_ShowTemplateSceneActor Parms{};

	Parms.PosterSettings = std::move(PosterSettings);
	Parms.PlayerCustomizations = std::move(PlayerCustomizations);

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.ClearRenderBooth
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WardrobeFavorite_Render_Simple_C::ClearRenderBooth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "ClearRenderBooth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.GetSceneCaptureCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneCaptureComponent2D*         SceneCapture                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WardrobeFavorite_Render_Simple_C::GetSceneCaptureCamera(class USceneCaptureComponent2D** SceneCapture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "GetSceneCaptureCamera");

	Params::BP_WardrobeFavorite_Render_Simple_C_GetSceneCaptureCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SceneCapture != nullptr)
		*SceneCapture = Parms.SceneCapture;
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.OverrideLOD_&_Mipmaps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TemplateSceneActor_Base_C*    TemplateActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WardrobeFavorite_Render_Simple_C::OverrideLOD___Mipmaps(class ABP_TemplateSceneActor_Base_C* TemplateActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "OverrideLOD_&_Mipmaps");

	Params::BP_WardrobeFavorite_Render_Simple_C_OverrideLOD___Mipmaps Parms{};

	Parms.TemplateActor = TemplateActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WardrobeFavorite_Render_Simple.BP_WardrobeFavorite_Render_Simple_C.DisableSnowEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WardrobeFavorite_Render_Simple_C::DisableSnowEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WardrobeFavorite_Render_Simple_C", "DisableSnowEffects");

	UObject::ProcessEvent(Func, nullptr);
}

}

