#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BoughtItemScene

#include "Basic.hpp"

#include "BP_BoughtItemScene_classes.hpp"
#include "BP_BoughtItemScene_parameters.hpp"


namespace SDK
{

// Function BP_BoughtItemScene.BP_BoughtItemScene_C.ExecuteUbergraph_BP_BoughtItemScene
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoughtItemScene_C::ExecuteUbergraph_BP_BoughtItemScene(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "ExecuteUbergraph_BP_BoughtItemScene");

	Params::BP_BoughtItemScene_C_ExecuteUbergraph_BP_BoughtItemScene Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.OnMoveInFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_BoughtItemScene_C::OnMoveInFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "OnMoveInFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.OnAutorotationTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_BoughtItemScene_C::OnAutorotationTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "OnAutorotationTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.StopMoving
// (BlueprintCallable, BlueprintEvent)

void ABP_BoughtItemScene_C::StopMoving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "StopMoving");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.MoveOut
// (BlueprintCallable, BlueprintEvent)

void ABP_BoughtItemScene_C::MoveOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "MoveOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.Move
// (BlueprintCallable, BlueprintEvent)

void ABP_BoughtItemScene_C::Move()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "Move");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.StartEffectMiddle
// (BlueprintCallable, BlueprintEvent)

void ABP_BoughtItemScene_C::StartEffectMiddle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "StartEffectMiddle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.MoveIn
// (BlueprintCallable, BlueprintEvent)

void ABP_BoughtItemScene_C::MoveIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "MoveIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoughtItemScene_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.StartRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_BoughtItemScene_C::StartRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "StartRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.PreviewItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayMoveInAnimation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Optional_PreviewParam                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoughtItemScene_C::PreviewItem(class UClass* ItemClass, bool PlayMoveInAnimation, int32 Optional_PreviewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "PreviewItem");

	Params::BP_BoughtItemScene_C_PreviewItem Parms{};

	Parms.ItemClass = ItemClass;
	Parms.PlayMoveInAnimation = PlayMoveInAnimation;
	Parms.Optional_PreviewParam = Optional_PreviewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.ShowItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Optional_PreviewParam                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoughtItemScene_C::ShowItem(class UClass* Item, int32 Optional_PreviewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "ShowItem");

	Params::BP_BoughtItemScene_C_ShowItem Parms{};

	Parms.Item = Item;
	Parms.Optional_PreviewParam = Optional_PreviewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.Transform Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Optional_Preview_Parameter                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoughtItemScene_C::Transform_Item(class UClass* Item, int32 Optional_Preview_Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "Transform Item");

	Params::BP_BoughtItemScene_C_Transform_Item Parms{};

	Parms.Item = Item;
	Parms.Optional_Preview_Parameter = Optional_Preview_Parameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.HandleRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoughtItemScene_C::HandleRarity(class UClass* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "HandleRarity");

	Params::BP_BoughtItemScene_C_HandleRarity Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.ActivateParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CameraLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoughtItemScene_C::ActivateParticles(class UClass* InputPin, const struct FVector& CameraLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "ActivateParticles");

	Params::BP_BoughtItemScene_C_ActivateParticles Parms{};

	Parms.InputPin = InputPin;
	Parms.CameraLocation = std::move(CameraLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.StartMiddleEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Item_class                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoughtItemScene_C::StartMiddleEffects(class UClass* Item_class)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "StartMiddleEffects");

	Params::BP_BoughtItemScene_C_StartMiddleEffects Parms{};

	Parms.Item_class = Item_class;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BoughtItemScene.BP_BoughtItemScene_C.InitCameraPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BoughtItemScene_C::InitCameraPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoughtItemScene_C", "InitCameraPosition");

	UObject::ProcessEvent(Func, nullptr);
}

}
