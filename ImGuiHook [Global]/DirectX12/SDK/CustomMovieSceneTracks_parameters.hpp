#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomMovieSceneTracks

#include "Basic.hpp"

#include "MovieScene_structs.hpp"


namespace SDK::Params
{

// Function CustomMovieSceneTracks.MovieSceneCableAttachmentSection.SetConstraintBindingID
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneCableAttachmentSection_SetConstraintBindingID final
{
public:
	struct FMovieSceneObjectBindingID             InConstraintBindingID;                             // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCableAttachmentSection_SetConstraintBindingID) == 0x000004, "Wrong alignment on MovieSceneCableAttachmentSection_SetConstraintBindingID");
static_assert(sizeof(MovieSceneCableAttachmentSection_SetConstraintBindingID) == 0x000018, "Wrong size on MovieSceneCableAttachmentSection_SetConstraintBindingID");
static_assert(offsetof(MovieSceneCableAttachmentSection_SetConstraintBindingID, InConstraintBindingID) == 0x000000, "Member 'MovieSceneCableAttachmentSection_SetConstraintBindingID::InConstraintBindingID' has a wrong offset!");

// Function CustomMovieSceneTracks.MovieSceneCableAttachmentSection.GetConstraintBindingID
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneCableAttachmentSection_GetConstraintBindingID final
{
public:
	struct FMovieSceneObjectBindingID             ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCableAttachmentSection_GetConstraintBindingID) == 0x000004, "Wrong alignment on MovieSceneCableAttachmentSection_GetConstraintBindingID");
static_assert(sizeof(MovieSceneCableAttachmentSection_GetConstraintBindingID) == 0x000018, "Wrong size on MovieSceneCableAttachmentSection_GetConstraintBindingID");
static_assert(offsetof(MovieSceneCableAttachmentSection_GetConstraintBindingID, ReturnValue) == 0x000000, "Member 'MovieSceneCableAttachmentSection_GetConstraintBindingID::ReturnValue' has a wrong offset!");

}

