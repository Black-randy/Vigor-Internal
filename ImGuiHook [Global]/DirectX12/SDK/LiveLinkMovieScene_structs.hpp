#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkMovieScene

#include "Basic.hpp"

#include "MovieSceneTracks_structs.hpp"
#include "LiveLinkInterface_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
// 0x0058 (0x0058 - 0x0000)
struct FLiveLinkPropertyData final
{
public:
	class FName                                   PropertyName;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>        FloatChannel;                                      // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneStringChannel>       StringChannel;                                     // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneIntegerChannel>      IntegerChannel;                                    // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneBoolChannel>         BoolChannel;                                       // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneByteChannel>         ByteChannel;                                       // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLiveLinkPropertyData) == 0x000008, "Wrong alignment on FLiveLinkPropertyData");
static_assert(sizeof(FLiveLinkPropertyData) == 0x000058, "Wrong size on FLiveLinkPropertyData");
static_assert(offsetof(FLiveLinkPropertyData, PropertyName) == 0x000000, "Member 'FLiveLinkPropertyData::PropertyName' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, FloatChannel) == 0x000008, "Member 'FLiveLinkPropertyData::FloatChannel' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, StringChannel) == 0x000018, "Member 'FLiveLinkPropertyData::StringChannel' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, IntegerChannel) == 0x000028, "Member 'FLiveLinkPropertyData::IntegerChannel' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, BoolChannel) == 0x000038, "Member 'FLiveLinkPropertyData::BoolChannel' has a wrong offset!");
static_assert(offsetof(FLiveLinkPropertyData, ByteChannel) == 0x000048, "Member 'FLiveLinkPropertyData::ByteChannel' has a wrong offset!");

// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
// 0x0010 (0x0010 - 0x0000)
struct FLiveLinkSubSectionData final
{
public:
	TArray<struct FLiveLinkPropertyData>          Properties;                                        // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLiveLinkSubSectionData) == 0x000008, "Wrong alignment on FLiveLinkSubSectionData");
static_assert(sizeof(FLiveLinkSubSectionData) == 0x000010, "Wrong size on FLiveLinkSubSectionData");
static_assert(offsetof(FLiveLinkSubSectionData, Properties) == 0x000000, "Member 'FLiveLinkSubSectionData::Properties' has a wrong offset!");

// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// 0x0080 (0x00B8 - 0x0038)
struct FMovieSceneLiveLinkSectionTemplate final : public FMovieScenePropertySectionTemplate
{
public:
	struct FLiveLinkSubjectPreset                 SubjectPreset;                                     // 0x0038(0x0038)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<bool>                                  ChannelMask;                                       // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkSubSectionData>        SubSectionsData;                                   // 0x0080(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_90[0x28];                                      // 0x0090(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneLiveLinkSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneLiveLinkSectionTemplate");
static_assert(sizeof(FMovieSceneLiveLinkSectionTemplate) == 0x0000B8, "Wrong size on FMovieSceneLiveLinkSectionTemplate");
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubjectPreset) == 0x000038, "Member 'FMovieSceneLiveLinkSectionTemplate::SubjectPreset' has a wrong offset!");
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, ChannelMask) == 0x000070, "Member 'FMovieSceneLiveLinkSectionTemplate::ChannelMask' has a wrong offset!");
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubSectionsData) == 0x000080, "Member 'FMovieSceneLiveLinkSectionTemplate::SubSectionsData' has a wrong offset!");

}
