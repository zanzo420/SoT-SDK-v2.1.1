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

// Class ActionStateMachine.ActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActionStateId : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.ActionStateId");
		return ptr;
	}



};

// Class ActionStateMachine.ActionStateCreatorDefinition
// 0x0000 (FullSize[0x0430] - InheritedSize[0x0430])
class AActionStateCreatorDefinition : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.ActionStateCreatorDefinition");
		return ptr;
	}



};

// Class ActionStateMachine.TestActionStateCreatorDefinition
// 0x0018 (FullSize[0x0448] - InheritedSize[0x0430])
class ATestActionStateCreatorDefinition : public AActionStateCreatorDefinition
{
public:
	unsigned char                                      UnknownData_FKJC[0x18];                                    // 0x0430(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.TestActionStateCreatorDefinition");
		return ptr;
	}



};

// Class ActionStateMachine.CustomClientValidityActionState2Id
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomClientValidityActionState2Id : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.CustomClientValidityActionState2Id");
		return ptr;
	}



};

// Class ActionStateMachine.CustomClientValidityActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomClientValidityActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.CustomClientValidityActionStateId");
		return ptr;
	}



};

// Class ActionStateMachine.NullActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNullActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.NullActionStateId");
		return ptr;
	}



};

// Class ActionStateMachine.TestActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTestActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.TestActionStateId");
		return ptr;
	}



};

// Class ActionStateMachine.TestActionStateId2
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTestActionStateId2 : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.TestActionStateId2");
		return ptr;
	}



};

// Class ActionStateMachine.ActionStateMachineComponent
// 0x07C0 (FullSize[0x0888] - InheritedSize[0x00C8])
class UActionStateMachineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_D4XW[0x48];                                    // 0x00C8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnActionChangedOnTrack;                                    // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_2E8T[0x768];                                   // 0x0120(0x0768) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.ActionStateMachineComponent");
		return ptr;
	}



	void Server_RequestActionWithMessageForCurrentState(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, const struct FSerialisedActionStateMessage& InSerialisedPreviousStateMessage);
	void Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<ActionStateMachine_EActionPredictionType> ClientPredicted);
	void PostNetInit();
	void OnNetOwnershipChanged();
	void Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo);
	void Multicast_PushActionFromRequest(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
	void Multicast_PushAction(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
	void End();
	void Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc);
	void Client_CorrectAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo);
};

// Class ActionStateMachine.TestActionStateMachineComponent
// 0x0018 (FullSize[0x08A0] - InheritedSize[0x0888])
class UTestActionStateMachineComponent : public UActionStateMachineComponent
{
public:
	unsigned char                                      UnknownData_1C96[0x18];                                    // 0x0888(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.TestActionStateMachineComponent");
		return ptr;
	}



};

// Class ActionStateMachine.CustomClientValidityCheckCallback
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UCustomClientValidityCheckCallback : public UObject
{
public:
	bool                                               ShouldPassClientValidation;                                // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H8LB[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.CustomClientValidityCheckCallback");
		return ptr;
	}



};

// Class ActionStateMachine.ActionStateMachineComponentTestFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActionStateMachineComponentTestFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.ActionStateMachineComponentTestFunctions");
		return ptr;
	}



	bool STATIC_SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId);
	bool STATIC_SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent);
	bool STATIC_SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent);
	bool STATIC_SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent);
	bool STATIC_SetTestStateFactory(class UActionStateMachineComponent* InComponent);
	bool STATIC_SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback);
	bool STATIC_RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* ClientStateId, class UClass* ServerStateId);
	bool STATIC_RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* StateId);
	bool STATIC_RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId);
	void STATIC_PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* StateId, int DataValue);
	bool STATIC_IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* StateId);
	class UClass* STATIC_GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId);
	bool STATIC_GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, struct FTestActionStateSerialisableData* Data);
	class UCustomClientValidityCheckCallback* STATIC_CreateCustomClientValidityCheckCallback();
};

// Class ActionStateMachine.ActionStateMachineInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActionStateMachineInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.ActionStateMachineInterface");
		return ptr;
	}



};

// Class ActionStateMachine.ActionStatePriorityTableData
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UActionStatePriorityTableData : public UDataAsset
{
public:
	TArray<struct FActionStatePriorityRelationship>    StateDefaultValue;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FActionStatePriorityList>            PriorityTableEntry;                                        // 0x0038(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.ActionStatePriorityTableData");
		return ptr;
	}



};

// Class ActionStateMachine.ActionStatePriorityTableUtility
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActionStatePriorityTableUtility : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.ActionStatePriorityTableUtility");
		return ptr;
	}



	TEnumAsByte<ActionStateMachine_EActionStatePriority> STATIC_GetPriority(struct FActionStatePriorityTable* PriorityTable, class UClass* InStateA, class UClass* InStateB);
	struct FActionStatePriorityTable STATIC_CreatePriorityTable(class UActionStatePriorityTableData* Data);
};

// Class ActionStateMachine.RemoteValidationFailActionStateActor
// 0x0008 (FullSize[0x0438] - InheritedSize[0x0430])
class ARemoteValidationFailActionStateActor : public AActor
{
public:
	class UActionStateMachineComponent*                ActionStateMachineComponent;                               // 0x0430(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.RemoteValidationFailActionStateActor");
		return ptr;
	}



};

// Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USerialisedActionStateConstructionInfoTestFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions");
		return ptr;
	}



	bool STATIC_IsValid(const struct FSerialisedActionStateInfo& TestStruct);
	bool STATIC_HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct);
	bool STATIC_HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct);
	struct FTestActionStateConstructionInfoWithInner STATIC_GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct);
	struct FTestActionStateConstructionInfo STATIC_GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct);
	struct FSerialisedActionStateInfo STATIC_CreateTestSerialisableData(class UClass* Id, int IntProp);
	struct FSerialisedActionStateInfo STATIC_CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const struct FString& StringProp);
	struct FSerialisedActionStateInfo STATIC_CreateTestConstructionInfo(class UClass* Id, int IntProp);
};

// Class ActionStateMachine.TestObjectWithActionStateMachine
// 0x0018 (FullSize[0x0448] - InheritedSize[0x0430])
class ATestObjectWithActionStateMachine : public AActor
{
public:
	class UTestActionStateMachineComponent*            ActionStateMachineComponent;                               // 0x0430(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DTJ4[0x10];                                    // 0x0438(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActionStateMachine.TestObjectWithActionStateMachine");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
