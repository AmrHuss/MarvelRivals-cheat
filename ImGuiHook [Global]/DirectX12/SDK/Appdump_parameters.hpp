#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Appdump

#include "Basic.hpp"


namespace SDK::Params
{

// Function Appdump.AppdumpLibrary.AddFiles
// 0x0010 (0x0010 - 0x0000)
struct AppdumpLibrary_AddFiles final
{
public:
	TArray<class UAppDumpAssociatedFile*>         NtAssociatedFileArray;                             // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_AddFiles) == 0x000008, "Wrong alignment on AppdumpLibrary_AddFiles");
static_assert(sizeof(AppdumpLibrary_AddFiles) == 0x000010, "Wrong size on AppdumpLibrary_AddFiles");
static_assert(offsetof(AppdumpLibrary_AddFiles, NtAssociatedFileArray) == 0x000000, "Member 'AppdumpLibrary_AddFiles::NtAssociatedFileArray' has a wrong offset!");

// Function Appdump.AppdumpLibrary.GetUploadFileDir
// 0x0010 (0x0010 - 0x0000)
struct AppdumpLibrary_GetUploadFileDir final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_GetUploadFileDir) == 0x000008, "Wrong alignment on AppdumpLibrary_GetUploadFileDir");
static_assert(sizeof(AppdumpLibrary_GetUploadFileDir) == 0x000010, "Wrong size on AppdumpLibrary_GetUploadFileDir");
static_assert(offsetof(AppdumpLibrary_GetUploadFileDir, ReturnValue) == 0x000000, "Member 'AppdumpLibrary_GetUploadFileDir::ReturnValue' has a wrong offset!");

// Function Appdump.AppdumpLibrary.InitWithFile
// 0x0048 (0x0048 - 0x0000)
struct AppdumpLibrary_InitWithFile final
{
public:
	class FString                                 DesFileName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SrcContent;                                        // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SrcFilePath;                                       // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FileFeature;                                       // 0x0030(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAppDumpAssociatedFile*                 ReturnValue;                                       // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_InitWithFile) == 0x000008, "Wrong alignment on AppdumpLibrary_InitWithFile");
static_assert(sizeof(AppdumpLibrary_InitWithFile) == 0x000048, "Wrong size on AppdumpLibrary_InitWithFile");
static_assert(offsetof(AppdumpLibrary_InitWithFile, DesFileName) == 0x000000, "Member 'AppdumpLibrary_InitWithFile::DesFileName' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_InitWithFile, SrcContent) == 0x000010, "Member 'AppdumpLibrary_InitWithFile::SrcContent' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_InitWithFile, SrcFilePath) == 0x000020, "Member 'AppdumpLibrary_InitWithFile::SrcFilePath' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_InitWithFile, FileFeature) == 0x000030, "Member 'AppdumpLibrary_InitWithFile::FileFeature' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_InitWithFile, ReturnValue) == 0x000040, "Member 'AppdumpLibrary_InitWithFile::ReturnValue' has a wrong offset!");

// Function Appdump.AppdumpLibrary.IsLastTimeAnr
// 0x0001 (0x0001 - 0x0000)
struct AppdumpLibrary_IsLastTimeAnr final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_IsLastTimeAnr) == 0x000001, "Wrong alignment on AppdumpLibrary_IsLastTimeAnr");
static_assert(sizeof(AppdumpLibrary_IsLastTimeAnr) == 0x000001, "Wrong size on AppdumpLibrary_IsLastTimeAnr");
static_assert(offsetof(AppdumpLibrary_IsLastTimeAnr, ReturnValue) == 0x000000, "Member 'AppdumpLibrary_IsLastTimeAnr::ReturnValue' has a wrong offset!");

// Function Appdump.AppdumpLibrary.IsLastTimeCrash
// 0x0001 (0x0001 - 0x0000)
struct AppdumpLibrary_IsLastTimeCrash final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_IsLastTimeCrash) == 0x000001, "Wrong alignment on AppdumpLibrary_IsLastTimeCrash");
static_assert(sizeof(AppdumpLibrary_IsLastTimeCrash) == 0x000001, "Wrong size on AppdumpLibrary_IsLastTimeCrash");
static_assert(offsetof(AppdumpLibrary_IsLastTimeCrash, ReturnValue) == 0x000000, "Member 'AppdumpLibrary_IsLastTimeCrash::ReturnValue' has a wrong offset!");

// Function Appdump.AppdumpLibrary.PostFiles
// 0x0028 (0x0028 - 0x0000)
struct AppdumpLibrary_PostFiles final
{
public:
	const class UAppDumpAssociatedFile*           MainFile;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAppDumpAssociatedFile*>         MinorFileArray;                                    // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 ErrorType;                                         // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_PostFiles) == 0x000008, "Wrong alignment on AppdumpLibrary_PostFiles");
static_assert(sizeof(AppdumpLibrary_PostFiles) == 0x000028, "Wrong size on AppdumpLibrary_PostFiles");
static_assert(offsetof(AppdumpLibrary_PostFiles, MainFile) == 0x000000, "Member 'AppdumpLibrary_PostFiles::MainFile' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_PostFiles, MinorFileArray) == 0x000008, "Member 'AppdumpLibrary_PostFiles::MinorFileArray' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_PostFiles, ErrorType) == 0x000018, "Member 'AppdumpLibrary_PostFiles::ErrorType' has a wrong offset!");

// Function Appdump.AppdumpLibrary.PostScriptError
// 0x0010 (0x0010 - 0x0000)
struct AppdumpLibrary_PostScriptError final
{
public:
	class FString                                 ErrorContent;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_PostScriptError) == 0x000008, "Wrong alignment on AppdumpLibrary_PostScriptError");
static_assert(sizeof(AppdumpLibrary_PostScriptError) == 0x000010, "Wrong size on AppdumpLibrary_PostScriptError");
static_assert(offsetof(AppdumpLibrary_PostScriptError, ErrorContent) == 0x000000, "Member 'AppdumpLibrary_PostScriptError::ErrorContent' has a wrong offset!");

// Function Appdump.AppdumpLibrary.SafelyBindCondition
// 0x0028 (0x0028 - 0x0000)
struct AppdumpLibrary_SafelyBindCondition final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AppdumpLibrary_SafelyBindCondition) == 0x000008, "Wrong alignment on AppdumpLibrary_SafelyBindCondition");
static_assert(sizeof(AppdumpLibrary_SafelyBindCondition) == 0x000028, "Wrong size on AppdumpLibrary_SafelyBindCondition");
static_assert(offsetof(AppdumpLibrary_SafelyBindCondition, Key) == 0x000000, "Member 'AppdumpLibrary_SafelyBindCondition::Key' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_SafelyBindCondition, Value) == 0x000010, "Member 'AppdumpLibrary_SafelyBindCondition::Value' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_SafelyBindCondition, ReturnValue) == 0x000020, "Member 'AppdumpLibrary_SafelyBindCondition::ReturnValue' has a wrong offset!");

// Function Appdump.AppdumpLibrary.SafelyUnbindCondition
// 0x0028 (0x0028 - 0x0000)
struct AppdumpLibrary_SafelyUnbindCondition final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AppdumpLibrary_SafelyUnbindCondition) == 0x000008, "Wrong alignment on AppdumpLibrary_SafelyUnbindCondition");
static_assert(sizeof(AppdumpLibrary_SafelyUnbindCondition) == 0x000028, "Wrong size on AppdumpLibrary_SafelyUnbindCondition");
static_assert(offsetof(AppdumpLibrary_SafelyUnbindCondition, Key) == 0x000000, "Member 'AppdumpLibrary_SafelyUnbindCondition::Key' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_SafelyUnbindCondition, Value) == 0x000010, "Member 'AppdumpLibrary_SafelyUnbindCondition::Value' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_SafelyUnbindCondition, ReturnValue) == 0x000020, "Member 'AppdumpLibrary_SafelyUnbindCondition::ReturnValue' has a wrong offset!");

// Function Appdump.AppdumpLibrary.SetBranch
// 0x0010 (0x0010 - 0x0000)
struct AppdumpLibrary_SetBranch final
{
public:
	class FString                                 branch;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_SetBranch) == 0x000008, "Wrong alignment on AppdumpLibrary_SetBranch");
static_assert(sizeof(AppdumpLibrary_SetBranch) == 0x000010, "Wrong size on AppdumpLibrary_SetBranch");
static_assert(offsetof(AppdumpLibrary_SetBranch, branch) == 0x000000, "Member 'AppdumpLibrary_SetBranch::branch' has a wrong offset!");

// Function Appdump.AppdumpLibrary.SetDebugMode
// 0x0001 (0x0001 - 0x0000)
struct AppdumpLibrary_SetDebugMode final
{
public:
	bool                                          DebugMode;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_SetDebugMode) == 0x000001, "Wrong alignment on AppdumpLibrary_SetDebugMode");
static_assert(sizeof(AppdumpLibrary_SetDebugMode) == 0x000001, "Wrong size on AppdumpLibrary_SetDebugMode");
static_assert(offsetof(AppdumpLibrary_SetDebugMode, DebugMode) == 0x000000, "Member 'AppdumpLibrary_SetDebugMode::DebugMode' has a wrong offset!");

// Function Appdump.AppdumpLibrary.SetEventOccurCallback
// 0x0014 (0x0014 - 0x0000)
struct AppdumpLibrary_SetEventOccurCallback final
{
public:
	TDelegate<void(int32 EventType, const class FString& EventInfo)> TOnEventOccurBLCallback;                           // 0x0000(0x0014)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_SetEventOccurCallback) == 0x000004, "Wrong alignment on AppdumpLibrary_SetEventOccurCallback");
static_assert(sizeof(AppdumpLibrary_SetEventOccurCallback) == 0x000014, "Wrong size on AppdumpLibrary_SetEventOccurCallback");
static_assert(offsetof(AppdumpLibrary_SetEventOccurCallback, TOnEventOccurBLCallback) == 0x000000, "Member 'AppdumpLibrary_SetEventOccurCallback::TOnEventOccurBLCallback' has a wrong offset!");

// Function Appdump.AppdumpLibrary.SetHost
// 0x0010 (0x0010 - 0x0000)
struct AppdumpLibrary_SetHost final
{
public:
	class FString                                 Host;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_SetHost) == 0x000008, "Wrong alignment on AppdumpLibrary_SetHost");
static_assert(sizeof(AppdumpLibrary_SetHost) == 0x000010, "Wrong size on AppdumpLibrary_SetHost");
static_assert(offsetof(AppdumpLibrary_SetHost, Host) == 0x000000, "Member 'AppdumpLibrary_SetHost::Host' has a wrong offset!");

// Function Appdump.AppdumpLibrary.SetParam
// 0x0020 (0x0020 - 0x0000)
struct AppdumpLibrary_SetParam final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_SetParam) == 0x000008, "Wrong alignment on AppdumpLibrary_SetParam");
static_assert(sizeof(AppdumpLibrary_SetParam) == 0x000020, "Wrong size on AppdumpLibrary_SetParam");
static_assert(offsetof(AppdumpLibrary_SetParam, Key) == 0x000000, "Member 'AppdumpLibrary_SetParam::Key' has a wrong offset!");
static_assert(offsetof(AppdumpLibrary_SetParam, Value) == 0x000010, "Member 'AppdumpLibrary_SetParam::Value' has a wrong offset!");

// Function Appdump.AppdumpLibrary.SetUrl
// 0x0010 (0x0010 - 0x0000)
struct AppdumpLibrary_SetUrl final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppdumpLibrary_SetUrl) == 0x000008, "Wrong alignment on AppdumpLibrary_SetUrl");
static_assert(sizeof(AppdumpLibrary_SetUrl) == 0x000010, "Wrong size on AppdumpLibrary_SetUrl");
static_assert(offsetof(AppdumpLibrary_SetUrl, URL) == 0x000000, "Member 'AppdumpLibrary_SetUrl::URL' has a wrong offset!");

}
