#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlameCameraManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FlameCameraManager.BP_FlameCameraManager_C.BlueprintUpdateCamera
// 0x0048 (0x0048 - 0x0000)
struct BP_FlameCameraManager_C_BlueprintUpdateCamera final
{
public:
	class AActor*                                 CameraTarget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewCameraLocation;                                 // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NewCameraRotation;                                 // 0x0014(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         NewCameraFOV;                                      // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BlueprintUpdateCamera_NewCameraLocation;  // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BlueprintUpdateCamera_NewCameraRotation;  // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BlueprintUpdateCamera_NewCameraFOV;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BlueprintUpdateCamera_ReturnValue;        // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FlameCameraManager_C_BlueprintUpdateCamera) == 0x000008, "Wrong alignment on BP_FlameCameraManager_C_BlueprintUpdateCamera");
static_assert(sizeof(BP_FlameCameraManager_C_BlueprintUpdateCamera) == 0x000048, "Wrong size on BP_FlameCameraManager_C_BlueprintUpdateCamera");
static_assert(offsetof(BP_FlameCameraManager_C_BlueprintUpdateCamera, CameraTarget) == 0x000000, "Member 'BP_FlameCameraManager_C_BlueprintUpdateCamera::CameraTarget' has a wrong offset!");
static_assert(offsetof(BP_FlameCameraManager_C_BlueprintUpdateCamera, NewCameraLocation) == 0x000008, "Member 'BP_FlameCameraManager_C_BlueprintUpdateCamera::NewCameraLocation' has a wrong offset!");
static_assert(offsetof(BP_FlameCameraManager_C_BlueprintUpdateCamera, NewCameraRotation) == 0x000014, "Member 'BP_FlameCameraManager_C_BlueprintUpdateCamera::NewCameraRotation' has a wrong offset!");
static_assert(offsetof(BP_FlameCameraManager_C_BlueprintUpdateCamera, NewCameraFOV) == 0x000020, "Member 'BP_FlameCameraManager_C_BlueprintUpdateCamera::NewCameraFOV' has a wrong offset!");
static_assert(offsetof(BP_FlameCameraManager_C_BlueprintUpdateCamera, ReturnValue) == 0x000024, "Member 'BP_FlameCameraManager_C_BlueprintUpdateCamera::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlameCameraManager_C_BlueprintUpdateCamera, CallFunc_BlueprintUpdateCamera_NewCameraLocation) == 0x000028, "Member 'BP_FlameCameraManager_C_BlueprintUpdateCamera::CallFunc_BlueprintUpdateCamera_NewCameraLocation' has a wrong offset!");
static_assert(offsetof(BP_FlameCameraManager_C_BlueprintUpdateCamera, CallFunc_BlueprintUpdateCamera_NewCameraRotation) == 0x000034, "Member 'BP_FlameCameraManager_C_BlueprintUpdateCamera::CallFunc_BlueprintUpdateCamera_NewCameraRotation' has a wrong offset!");
static_assert(offsetof(BP_FlameCameraManager_C_BlueprintUpdateCamera, CallFunc_BlueprintUpdateCamera_NewCameraFOV) == 0x000040, "Member 'BP_FlameCameraManager_C_BlueprintUpdateCamera::CallFunc_BlueprintUpdateCamera_NewCameraFOV' has a wrong offset!");
static_assert(offsetof(BP_FlameCameraManager_C_BlueprintUpdateCamera, CallFunc_BlueprintUpdateCamera_ReturnValue) == 0x000044, "Member 'BP_FlameCameraManager_C_BlueprintUpdateCamera::CallFunc_BlueprintUpdateCamera_ReturnValue' has a wrong offset!");

}
