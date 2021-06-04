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

// Class Tethering.CordRenderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCordRenderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.CordRenderInterface");
		return ptr;
	}



};

// Class Tethering.CordRenderComponent
// 0x0038 (FullSize[0x05F0] - InheritedSize[0x05B8])
class UCordRenderComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_L8SR[0x8];                                     // 0x05B8(0x0008) Fix Super Size
	TArray<class UMaterialInstanceDynamic*>            CordMaterials;                                             // 0x05C0(0x0010) (ZeroConstructor, Transient, Protected)
	float                                              ThicknessCm;                                               // 0x05D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TV5T[0x1C];                                    // 0x05D4(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.CordRenderComponent");
		return ptr;
	}



};

// Class Tethering.DynamicCordRenderComponent
// 0x0060 (FullSize[0x0650] - InheritedSize[0x05F0])
class UDynamicCordRenderComponent : public UCordRenderComponent
{
public:
	float                                              BoundsPadding;                                             // 0x05F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RB7O[0x4];                                     // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             EndPointA;                                                 // 0x05F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             EndPointB;                                                 // 0x0600(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D3V6[0x48];                                    // 0x0608(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.DynamicCordRenderComponent");
		return ptr;
	}



	void SetCordEndPointB(class USceneComponent* EndPointB);
	void SetCordEndPointA(class USceneComponent* EndPointA);
};

// Class Tethering.HarpoonRenderComponent
// 0x0020 (FullSize[0x0610] - InheritedSize[0x05F0])
class UHarpoonRenderComponent : public UCordRenderComponent
{
public:
	TArray<class UMaterialInstanceDynamic*>            HarpoonMaterials;                                          // 0x05F0(0x0010) (ZeroConstructor, Transient)
	float                                              LaunchAnimationDurationSecs;                               // 0x0600(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitAnimationDurationSecs;                                  // 0x0604(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              QuickRetractAnimationSpeed;                                // 0x0608(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JAAL[0x4];                                     // 0x060C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.HarpoonRenderComponent");
		return ptr;
	}



};

// Class Tethering.TetherConstraintInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTetherConstraintInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.TetherConstraintInterface");
		return ptr;
	}



};

// Class Tethering.DistanceJointComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
class UDistanceJointComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_6YHV[0x70];                                    // 0x00C8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDistance;                                               // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistance;                                               // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpringStiffness;                                           // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpringDamping;                                             // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ApplyAsSpring;                                             // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnforceMinDistance;                                        // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnforceMaxDistance;                                        // 0x014A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TQQH[0x5];                                     // 0x014B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.DistanceJointComponent");
		return ptr;
	}



};

// Class Tethering.ShouldTetherInWorldSpaceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShouldTetherInWorldSpaceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.ShouldTetherInWorldSpaceInterface");
		return ptr;
	}



};

// Class Tethering.TetherQueriableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTetherQueriableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.TetherQueriableInterface");
		return ptr;
	}



};

// Class Tethering.TetherCustomisationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTetherCustomisationInterface : public UTetherQueriableInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.TetherCustomisationInterface");
		return ptr;
	}



};

// Class Tethering.TetherInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTetherInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.TetherInterface");
		return ptr;
	}



};

// Class Tethering.Tether
// 0x0140 (FullSize[0x0570] - InheritedSize[0x0430])
class ATether : public AActor
{
public:
	unsigned char                                      UnknownData_TQEG[0xF8];                                    // 0x0430(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             TetherPositionAnchorComponent;                             // 0x0528(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            SourcePhysicsHandle;                                       // 0x0530(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            TargetPhysicsHandle;                                       // 0x0538(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDistanceJointComponent*                     JointComponent;                                            // 0x0540(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SourceActor;                                               // 0x0548(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TargetActor;                                               // 0x0550(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SlackCm;                                                   // 0x0558(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxLengthWhenGrowing;                                      // 0x055C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ETK6[0x8];                                     // 0x0560(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               HasAttached;                                               // 0x0568(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               HasSourceActor;                                            // 0x0569(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               HasTargetActor;                                            // 0x056A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               IsSlackEnabled;                                            // 0x056B(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	TEnumAsByte<Tethering_ETetherConstrainMode>        CurrentTetherMode;                                         // 0x056C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1TIO[0x3];                                     // 0x056D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.Tether");
		return ptr;
	}



};

// Class Tethering.TetherCustomisationComponent
// 0x00F0 (FullSize[0x01B8] - InheritedSize[0x00C8])
class UTetherCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_3UUZ[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             ComponentToTetherTo;                                       // 0x00D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SNXO[0xD8];                                    // 0x00D8(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MassIntertiaScale;                                         // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanBeTethered;                                             // 0x01B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMassInertiaScalingEnabled;                               // 0x01B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AC6E[0x2];                                     // 0x01B6(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.TetherCustomisationComponent");
		return ptr;
	}



};

// Class Tethering.TetherInWorldSpaceComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UTetherInWorldSpaceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_FS1R[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tethering.TetherInWorldSpaceComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
