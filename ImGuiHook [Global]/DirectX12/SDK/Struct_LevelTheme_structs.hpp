#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_LevelTheme

#include "Basic.hpp"

#include "Flame_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_LevelTheme.Struct_LevelTheme
// 0x0050 (0x0050 - 0x0000)
struct FStruct_LevelTheme final
{
public:
	TMap<ESublevelTheme, struct FSubLevel>        Themes_7_CB21A0424C96516598BE738FA19654E1;         // 0x0000(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FStruct_LevelTheme) == 0x000008, "Wrong alignment on FStruct_LevelTheme");
static_assert(sizeof(FStruct_LevelTheme) == 0x000050, "Wrong size on FStruct_LevelTheme");
static_assert(offsetof(FStruct_LevelTheme, Themes_7_CB21A0424C96516598BE738FA19654E1) == 0x000000, "Member 'FStruct_LevelTheme::Themes_7_CB21A0424C96516598BE738FA19654E1' has a wrong offset!");

}
