﻿#pragma once

// Name: SoT, Version: 2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class SimpleOverlaps.OverlapTestActor
// 0x0018 (FullSize[0x0448] - InheritedSize[0x0430])
class AOverlapTestActor : public AActor
{
public:
	unsigned char                                      UnknownData_H2EZ[0x10];                                    // 0x0430(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.OverlapTestActor");
		return ptr;
	}



};

// Class SimpleOverlaps.SimpleOverlapCollectionKey
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USimpleOverlapCollectionKey : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapCollectionKey");
		return ptr;
	}



};

// Class SimpleOverlaps.SimpleOverlapComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class USimpleOverlapComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_4RJP[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapComponent");
		return ptr;
	}



};

// Class SimpleOverlaps.TestObjectMessagingDispatcherInterface
// 0x00A8 (FullSize[0x04D8] - InheritedSize[0x0430])
class ATestObjectMessagingDispatcherInterface : public AActor
{
public:
	unsigned char                                      UnknownData_36UV[0xA8];                                    // 0x0430(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestObjectMessagingDispatcherInterface");
		return ptr;
	}



};

// Class SimpleOverlaps.TestOverlapBroadcasterActor
// 0x0120 (FullSize[0x0550] - InheritedSize[0x0430])
class ATestOverlapBroadcasterActor : public AActor
{
public:
	unsigned char                                      UnknownData_JDJ4[0x30];                                    // 0x0430(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QAHG[0xE8];                                    // 0x0468(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestOverlapBroadcasterActor");
		return ptr;
	}



};

// Class SimpleOverlaps.TestOverlapShapeActor
// 0x0010 (FullSize[0x0440] - InheritedSize[0x0430])
class ATestOverlapShapeActor : public AActor
{
public:
	unsigned char                                      UnknownData_IT1Z[0x8];                                     // 0x0430(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestOverlapShapeActor");
		return ptr;
	}



};

// Class SimpleOverlaps.TestSimpleOverlapsGameState
// 0x0060 (FullSize[0x04E8] - InheritedSize[0x0488])
class ATestSimpleOverlapsGameState : public AGameState
{
public:
	unsigned char                                      UnknownData_1QL2[0x60];                                    // 0x0488(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestSimpleOverlapsGameState");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
