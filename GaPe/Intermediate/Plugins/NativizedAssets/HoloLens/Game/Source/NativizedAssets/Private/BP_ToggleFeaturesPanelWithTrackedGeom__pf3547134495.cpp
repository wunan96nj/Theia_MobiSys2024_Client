#include "NativizedAssets.h"
#include "BP_ToggleFeaturesPanelWithTrackedGeom__pf3547134495.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableToggleButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBasePressableButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtUIElementComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtNearPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtFarPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtCollectionObject.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtTextBrush.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtIconBrush.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtButtonBrush.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBackPlateComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/AugmentedReality/Public/ARTrackableNotifyComponent.h"
#include "Runtime/AugmentedReality/Public/ARTrackable.h"
#include "Runtime/MRMesh/Public/MRMeshComponent.h"
#include "Runtime/AugmentedReality/Public/ARTypes.h"
#include "Runtime/AugmentedReality/Public/ARTextures.h"
#include "BP_NearMenuBase__pf3547134495.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Behaviors/UxtFollowComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGenericManipulatorComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtManipulatorComponentBase.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabTargetComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtManipulatorComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtManipulationFlags.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/Constraints/UxtFaceUserConstraint.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/Constraints/UxtTransformConstraint.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Utils/UxtFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"
#include "Runtime/AugmentedReality/Public/ARBlueprintLibrary.h"
#include "Runtime/AugmentedReality/Public/ARSessionConfig.h"
#include "Runtime/AugmentedReality/Public/ARComponent.h"
#include "Runtime/AugmentedReality/Public/ARPin.h"
#include "Runtime/AugmentedReality/Public/ARTraceResult.h"
#include "Runtime/AugmentedReality/Public/ARLightEstimate.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__Button_SurfaceMesh__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_SurfaceMesh"));
	bpv__ARTrackableNotify__pf = CreateDefaultSubobject<UARTrackableNotifyComponent>(TEXT("ARTrackableNotify"));
	auto& __Local__0 = (*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__0 = FVector(1.600000, 16.000000, 6.400000);
	static TWeakFieldPtr<FProperty> __Local__2{};
	const FProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__UxtBackPlate__pf), true, 0));
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Left__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__3 = FVector(0.001000, 7.400000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Left__pf), true, 0));
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Right__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__4 = FVector(0.001000, -7.400000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Right__pf), true, 0));
	auto& __Local__5 = (*(AccessPrivateProperty<AActor* >((bpv__Button_Stats__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__5 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__Button_Stats__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__6 = FVector(0.000000, 4.800000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Stats__pf), false, 0));
	auto __Local__7 = CastChecked<AUxtPressableButtonActor>(bpv__Button_Home__pf->GetDefaultSubobjectByName(TEXT("Button_Home_GEN_VARIABLE_UxtPressableButtonActor_CAT")), ECastCheckedType::NullAllowed);
	if(__Local__7)
	{
		// --- Default subobject 'Button_Home_GEN_VARIABLE_UxtPressableButtonActor_CAT' //
		auto __Local__8 = CastChecked<UUxtPressableButtonComponent>(__Local__7->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
		auto __Local__9 = CastChecked<USceneComponent>(__Local__7->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
		auto __Local__10 = CastChecked<UUxtBackPlateComponent>(__Local__7->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
		auto __Local__11 = CastChecked<USceneComponent>(__Local__7->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
		auto __Local__12 = CastChecked<USceneComponent>(__Local__7->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
		auto __Local__13 = CastChecked<UStaticMeshComponent>(__Local__7->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
		auto __Local__14 = CastChecked<UTextRenderComponent>(__Local__7->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
		auto __Local__15 = CastChecked<UTextRenderComponent>(__Local__7->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
		auto __Local__16 = CastChecked<UAudioComponent>(__Local__7->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
		if(__Local__8)
		{
			// --- Default subobject 'UxtPressableButton' //
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__8), false, 0));
			// --- END default subobject 'UxtPressableButton' //
		}
		if(__Local__9)
		{
			// --- Default subobject 'BackPlatePivot' //
			auto& __Local__17 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__9), USceneComponent::__PPO__AttachParent() )));
			__Local__17 = __Local__8;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__9), false, 0));
			// --- END default subobject 'BackPlatePivot' //
		}
		if(__Local__10)
		{
			// --- Default subobject 'BackPlate' //
			auto& __Local__18 = (*(AccessPrivateProperty<USceneComponent*>((__Local__10), USceneComponent::__PPO__AttachParent() )));
			__Local__18 = __Local__9;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__10), true, 0));
			// --- END default subobject 'BackPlate' //
		}
		if(__Local__11)
		{
			// --- Default subobject 'FrontPlatePivot' //
			auto& __Local__19 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__11), USceneComponent::__PPO__AttachParent() )));
			__Local__19 = __Local__8;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__11), false, 0));
			// --- END default subobject 'FrontPlatePivot' //
		}
		if(__Local__12)
		{
			// --- Default subobject 'FrontPlateCenter' //
			auto& __Local__20 = (*(AccessPrivateProperty<USceneComponent*>((__Local__12), USceneComponent::__PPO__AttachParent() )));
			__Local__20 = __Local__11;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__12), false, 0));
			// --- END default subobject 'FrontPlateCenter' //
		}
		if(__Local__13)
		{
			// --- Default subobject 'FrontPlate' //
			auto& __Local__21 = (*(AccessPrivateProperty<USceneComponent*>((__Local__13), USceneComponent::__PPO__AttachParent() )));
			__Local__21 = __Local__12;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__13), true, 0));
			// --- END default subobject 'FrontPlate' //
		}
		if(__Local__14)
		{
			// --- Default subobject 'Icon' //
			auto& __Local__22 = (*(AccessPrivateProperty<USceneComponent*>((__Local__14), USceneComponent::__PPO__AttachParent() )));
			__Local__22 = __Local__12;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__14), false, 0));
			// --- END default subobject 'Icon' //
		}
		if(__Local__15)
		{
			// --- Default subobject 'Label' //
			auto& __Local__23 = (*(AccessPrivateProperty<USceneComponent*>((__Local__15), USceneComponent::__PPO__AttachParent() )));
			__Local__23 = __Local__12;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__15), false, 0));
			// --- END default subobject 'Label' //
		}
		if(__Local__16)
		{
			// --- Default subobject 'Audio' //
			auto& __Local__24 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__16), USceneComponent::__PPO__AttachParent() )));
			__Local__24 = __Local__8;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__16), false, 0));
			// --- END default subobject 'Audio' //
		}
		auto& __Local__25 = (*(AccessPrivateProperty<USceneComponent*>((__Local__7), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
		__Local__25 = __Local__9;
		auto& __Local__26 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__7), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
		__Local__26 = __Local__10;
		auto& __Local__27 = (*(AccessPrivateProperty<USceneComponent*>((__Local__7), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
		__Local__27 = __Local__11;
		auto& __Local__28 = (*(AccessPrivateProperty<USceneComponent*>((__Local__7), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
		__Local__28 = __Local__12;
		auto& __Local__29 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__7), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
		__Local__29 = __Local__13;
		auto& __Local__30 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__7), AUxtPressableButtonActor::__PPO__IconComponent() )));
		__Local__30 = __Local__14;
		auto& __Local__31 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__7), AUxtPressableButtonActor::__PPO__LabelComponent() )));
		__Local__31 = __Local__15;
		auto& __Local__32 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__7), AUxtPressableButtonActor::__PPO__AudioComponent() )));
		__Local__32 = __Local__16;
		auto& __Local__33 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__7), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
		__Local__33 = __Local__8;
		auto& __Local__34 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__7), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
		__Local__34 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
		auto& __Local__35 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__7), AActor::__PPO__RootComponent() )));
		__Local__35 = __Local__8;
		// --- END default subobject 'Button_Home_GEN_VARIABLE_UxtPressableButtonActor_CAT' //
	}
	auto& __Local__36 = (*(AccessPrivateProperty<AUxtPressableButtonActor*>((bpv__Button_Home__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__36 = __Local__7;
	auto& __Local__37 = (*(AccessPrivateProperty<FVector >((bpv__Button_Home__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__37 = FVector(0.000000, 1.600000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Home__pf), false, 0));
	auto __Local__38 = CastChecked<AUxtPressableButtonActor>(bpv__Button_Reposition__pf->GetDefaultSubobjectByName(TEXT("Button_Reposition_GEN_VARIABLE_UxtPressableButtonActor_CAT")), ECastCheckedType::NullAllowed);
	if(__Local__38)
	{
		// --- Default subobject 'Button_Reposition_GEN_VARIABLE_UxtPressableButtonActor_CAT' //
		auto __Local__39 = CastChecked<UUxtPressableButtonComponent>(__Local__38->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
		auto __Local__40 = CastChecked<USceneComponent>(__Local__38->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
		auto __Local__41 = CastChecked<UUxtBackPlateComponent>(__Local__38->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
		auto __Local__42 = CastChecked<USceneComponent>(__Local__38->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
		auto __Local__43 = CastChecked<USceneComponent>(__Local__38->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
		auto __Local__44 = CastChecked<UStaticMeshComponent>(__Local__38->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
		auto __Local__45 = CastChecked<UTextRenderComponent>(__Local__38->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
		auto __Local__46 = CastChecked<UTextRenderComponent>(__Local__38->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
		auto __Local__47 = CastChecked<UAudioComponent>(__Local__38->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
		if(__Local__39)
		{
			// --- Default subobject 'UxtPressableButton' //
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__39), false, 0));
			// --- END default subobject 'UxtPressableButton' //
		}
		if(__Local__40)
		{
			// --- Default subobject 'BackPlatePivot' //
			auto& __Local__48 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__40), USceneComponent::__PPO__AttachParent() )));
			__Local__48 = __Local__39;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__40), false, 0));
			// --- END default subobject 'BackPlatePivot' //
		}
		if(__Local__41)
		{
			// --- Default subobject 'BackPlate' //
			auto& __Local__49 = (*(AccessPrivateProperty<USceneComponent*>((__Local__41), USceneComponent::__PPO__AttachParent() )));
			__Local__49 = __Local__40;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__41), true, 0));
			// --- END default subobject 'BackPlate' //
		}
		if(__Local__42)
		{
			// --- Default subobject 'FrontPlatePivot' //
			auto& __Local__50 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__42), USceneComponent::__PPO__AttachParent() )));
			__Local__50 = __Local__39;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__42), false, 0));
			// --- END default subobject 'FrontPlatePivot' //
		}
		if(__Local__43)
		{
			// --- Default subobject 'FrontPlateCenter' //
			auto& __Local__51 = (*(AccessPrivateProperty<USceneComponent*>((__Local__43), USceneComponent::__PPO__AttachParent() )));
			__Local__51 = __Local__42;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__43), false, 0));
			// --- END default subobject 'FrontPlateCenter' //
		}
		if(__Local__44)
		{
			// --- Default subobject 'FrontPlate' //
			auto& __Local__52 = (*(AccessPrivateProperty<USceneComponent*>((__Local__44), USceneComponent::__PPO__AttachParent() )));
			__Local__52 = __Local__43;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__44), true, 0));
			// --- END default subobject 'FrontPlate' //
		}
		if(__Local__45)
		{
			// --- Default subobject 'Icon' //
			auto& __Local__53 = (*(AccessPrivateProperty<USceneComponent*>((__Local__45), USceneComponent::__PPO__AttachParent() )));
			__Local__53 = __Local__43;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__45), false, 0));
			// --- END default subobject 'Icon' //
		}
		if(__Local__46)
		{
			// --- Default subobject 'Label' //
			auto& __Local__54 = (*(AccessPrivateProperty<USceneComponent*>((__Local__46), USceneComponent::__PPO__AttachParent() )));
			__Local__54 = __Local__43;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__46), false, 0));
			// --- END default subobject 'Label' //
		}
		if(__Local__47)
		{
			// --- Default subobject 'Audio' //
			auto& __Local__55 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__47), USceneComponent::__PPO__AttachParent() )));
			__Local__55 = __Local__39;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__47), false, 0));
			// --- END default subobject 'Audio' //
		}
		auto& __Local__56 = (*(AccessPrivateProperty<USceneComponent*>((__Local__38), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
		__Local__56 = __Local__40;
		auto& __Local__57 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__38), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
		__Local__57 = __Local__41;
		auto& __Local__58 = (*(AccessPrivateProperty<USceneComponent*>((__Local__38), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
		__Local__58 = __Local__42;
		auto& __Local__59 = (*(AccessPrivateProperty<USceneComponent*>((__Local__38), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
		__Local__59 = __Local__43;
		auto& __Local__60 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__38), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
		__Local__60 = __Local__44;
		auto& __Local__61 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__38), AUxtPressableButtonActor::__PPO__IconComponent() )));
		__Local__61 = __Local__45;
		auto& __Local__62 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__38), AUxtPressableButtonActor::__PPO__LabelComponent() )));
		__Local__62 = __Local__46;
		auto& __Local__63 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__38), AUxtPressableButtonActor::__PPO__AudioComponent() )));
		__Local__63 = __Local__47;
		auto& __Local__64 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__38), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
		__Local__64 = __Local__39;
		auto& __Local__65 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__38), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
		__Local__65 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
		auto& __Local__66 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__38), AActor::__PPO__RootComponent() )));
		__Local__66 = __Local__39;
		// --- END default subobject 'Button_Reposition_GEN_VARIABLE_UxtPressableButtonActor_CAT' //
	}
	auto& __Local__67 = (*(AccessPrivateProperty<AUxtPressableButtonActor*>((bpv__Button_Reposition__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__67 = __Local__38;
	auto& __Local__68 = (*(AccessPrivateProperty<FVector >((bpv__Button_Reposition__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__68 = FVector(0.000000, -1.600000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Reposition__pf), false, 0));
	auto __Local__69 = CastChecked<AUxtPressableToggleButtonActor>(bpv__Button_Pin__pf->GetDefaultSubobjectByName(TEXT("Button_Pin_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT")), ECastCheckedType::NullAllowed);
	if(__Local__69)
	{
		// --- Default subobject 'Button_Pin_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT' //
		auto __Local__70 = CastChecked<UUxtPressableButtonComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
		auto __Local__71 = CastChecked<USceneComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
		auto __Local__72 = CastChecked<UUxtBackPlateComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
		auto __Local__73 = CastChecked<USceneComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
		auto __Local__74 = CastChecked<USceneComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
		auto __Local__75 = CastChecked<UStaticMeshComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
		auto __Local__76 = CastChecked<UTextRenderComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
		auto __Local__77 = CastChecked<UTextRenderComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
		auto __Local__78 = CastChecked<UAudioComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
		auto __Local__79 = CastChecked<UUxtToggleStateComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
		auto __Local__80 = CastChecked<UUxtBackPlateComponent>(__Local__69->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
		if(__Local__70)
		{
			// --- Default subobject 'UxtPressableButton' //
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__70), false, 0));
			// --- END default subobject 'UxtPressableButton' //
		}
		if(__Local__71)
		{
			// --- Default subobject 'BackPlatePivot' //
			auto& __Local__81 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__71), USceneComponent::__PPO__AttachParent() )));
			__Local__81 = __Local__70;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__71), false, 0));
			// --- END default subobject 'BackPlatePivot' //
		}
		if(__Local__72)
		{
			// --- Default subobject 'BackPlate' //
			auto& __Local__82 = (*(AccessPrivateProperty<USceneComponent*>((__Local__72), USceneComponent::__PPO__AttachParent() )));
			__Local__82 = __Local__71;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__72), true, 0));
			// --- END default subobject 'BackPlate' //
		}
		if(__Local__73)
		{
			// --- Default subobject 'FrontPlatePivot' //
			auto& __Local__83 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__73), USceneComponent::__PPO__AttachParent() )));
			__Local__83 = __Local__70;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__73), false, 0));
			// --- END default subobject 'FrontPlatePivot' //
		}
		if(__Local__74)
		{
			// --- Default subobject 'FrontPlateCenter' //
			auto& __Local__84 = (*(AccessPrivateProperty<USceneComponent*>((__Local__74), USceneComponent::__PPO__AttachParent() )));
			__Local__84 = __Local__73;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__74), false, 0));
			// --- END default subobject 'FrontPlateCenter' //
		}
		if(__Local__75)
		{
			// --- Default subobject 'FrontPlate' //
			auto& __Local__85 = (*(AccessPrivateProperty<USceneComponent*>((__Local__75), USceneComponent::__PPO__AttachParent() )));
			__Local__85 = __Local__74;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__75), true, 0));
			// --- END default subobject 'FrontPlate' //
		}
		if(__Local__76)
		{
			// --- Default subobject 'Icon' //
			auto& __Local__86 = (*(AccessPrivateProperty<USceneComponent*>((__Local__76), USceneComponent::__PPO__AttachParent() )));
			__Local__86 = __Local__74;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__76), false, 0));
			// --- END default subobject 'Icon' //
		}
		if(__Local__77)
		{
			// --- Default subobject 'Label' //
			auto& __Local__87 = (*(AccessPrivateProperty<USceneComponent*>((__Local__77), USceneComponent::__PPO__AttachParent() )));
			__Local__87 = __Local__74;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__77), false, 0));
			// --- END default subobject 'Label' //
		}
		if(__Local__78)
		{
			// --- Default subobject 'Audio' //
			auto& __Local__88 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__78), USceneComponent::__PPO__AttachParent() )));
			__Local__88 = __Local__70;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__78), false, 0));
			// --- END default subobject 'Audio' //
		}
		if(__Local__79)
		{
			// --- Default subobject 'UxtToggleState' //
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__79), false, 0));
			// --- END default subobject 'UxtToggleState' //
		}
		if(__Local__80)
		{
			// --- Default subobject 'UxtToggleBackPlate' //
			auto& __Local__89 = (*(AccessPrivateProperty<USceneComponent*>((__Local__80), USceneComponent::__PPO__AttachParent() )));
			__Local__89 = __Local__71;
			(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__80), true, 0));
			// --- END default subobject 'UxtToggleBackPlate' //
		}
		auto& __Local__90 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__69), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
		__Local__90 = __Local__79;
		auto& __Local__91 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__69), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
		__Local__91 = __Local__80;
		auto& __Local__92 = (*(AccessPrivateProperty<USceneComponent*>((__Local__69), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
		__Local__92 = __Local__71;
		auto& __Local__93 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__69), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
		__Local__93 = __Local__72;
		auto& __Local__94 = (*(AccessPrivateProperty<USceneComponent*>((__Local__69), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
		__Local__94 = __Local__73;
		auto& __Local__95 = (*(AccessPrivateProperty<USceneComponent*>((__Local__69), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
		__Local__95 = __Local__74;
		auto& __Local__96 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__69), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
		__Local__96 = __Local__75;
		auto& __Local__97 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__69), AUxtPressableButtonActor::__PPO__IconComponent() )));
		__Local__97 = __Local__76;
		auto& __Local__98 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__69), AUxtPressableButtonActor::__PPO__LabelComponent() )));
		__Local__98 = __Local__77;
		auto& __Local__99 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__69), AUxtPressableButtonActor::__PPO__AudioComponent() )));
		__Local__99 = __Local__78;
		auto& __Local__100 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__69), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
		__Local__100 = __Local__70;
		auto& __Local__101 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__69), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
		__Local__101 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
		auto& __Local__102 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__69), AActor::__PPO__RootComponent() )));
		__Local__102 = __Local__70;
		// --- END default subobject 'Button_Pin_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT' //
	}
	auto& __Local__103 = (*(AccessPrivateProperty<AUxtPressableToggleButtonActor*>((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__103 = __Local__69;
	auto& __Local__104 = (*(AccessPrivateProperty<FVector >((bpv__Button_Pin__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__104 = FVector(0.000000, -9.800000, 1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Pin__pf), false, 0));
	bpv__Button_SurfaceMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_SurfaceMesh__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__105 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_SurfaceMesh__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__105 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__106 = (*(AccessPrivateProperty<AActor* >((bpv__Button_SurfaceMesh__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__106 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::StaticClass())->MiscConvertedSubobjects[1]);
	auto& __Local__107 = (*(AccessPrivateProperty<FVector >((bpv__Button_SurfaceMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__107 = FVector(0.000000, -4.800000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_SurfaceMesh__pf), false, 0));
	bpv__ARTrackableNotify__pf->CreationMethod = EComponentCreationMethod::Native;
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__ARTrackableNotify__pf), false, 0));
	auto& __Local__108 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__108 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Button_SurfaceMesh__pf)
	{
		bpv__Button_SurfaceMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ARTrackableNotify__pf)
	{
		bpv__ARTrackableNotify__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_ToggleFeaturesPanel_C__pf3547134495::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__109 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("Button_Stats_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__109);
	auto& __Local__110 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__109), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__111 = CastChecked<UUxtToggleStateComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__113{};
	const FProperty* __Local__112 = __Local__113.Get();
	if (nullptr == __Local__112)
	{
		__Local__112 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__112);
		__Local__113 = __Local__112;
	}
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__111), false, 0));
	__Local__110 = __Local__111;
	auto& __Local__114 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__109), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__115 = CastChecked<UUxtBackPlateComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__116 = (*(AccessPrivateProperty<USceneComponent*>((__Local__115), USceneComponent::__PPO__AttachParent() )));
	auto __Local__117 = CastChecked<USceneComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__118 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__117), USceneComponent::__PPO__AttachParent() )));
	auto __Local__119 = CastChecked<UUxtPressableButtonComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__119), false, 0));
	__Local__118 = __Local__119;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__117), false, 0));
	__Local__116 = __Local__117;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__115), true, 0));
	__Local__114 = __Local__115;
	auto& __Local__120 = (*(AccessPrivateProperty<bool >((__Local__109), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__120 = false;
	auto& __Local__121 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__109), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__121.Icon = FString(TEXT("EA40"));
	auto& __Local__122 = (*(AccessPrivateProperty<FText >((__Local__109), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__122 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0D5B60D94DF93F2EC7C69D940C3986F4]\", \"D685D93745510DFC19B69A92698A287F\", \"Stats\")")	);
	auto& __Local__123 = (*(AccessPrivateProperty<USceneComponent*>((__Local__109), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__123 = __Local__117;
	auto& __Local__124 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__109), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__125 = CastChecked<UUxtBackPlateComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__126 = (*(AccessPrivateProperty<USceneComponent*>((__Local__125), USceneComponent::__PPO__AttachParent() )));
	__Local__126 = __Local__117;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__125), true, 0));
	__Local__124 = __Local__125;
	auto& __Local__127 = (*(AccessPrivateProperty<USceneComponent*>((__Local__109), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__128 = CastChecked<USceneComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__129 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__128), USceneComponent::__PPO__AttachParent() )));
	__Local__129 = __Local__119;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__128), false, 0));
	__Local__127 = __Local__128;
	auto& __Local__130 = (*(AccessPrivateProperty<USceneComponent*>((__Local__109), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__131 = CastChecked<USceneComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__132 = (*(AccessPrivateProperty<USceneComponent*>((__Local__131), USceneComponent::__PPO__AttachParent() )));
	__Local__132 = __Local__128;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__131), false, 0));
	__Local__130 = __Local__131;
	auto& __Local__133 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__109), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__134 = CastChecked<UStaticMeshComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__135 = (*(AccessPrivateProperty<USceneComponent*>((__Local__134), USceneComponent::__PPO__AttachParent() )));
	__Local__135 = __Local__131;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__134), true, 0));
	__Local__133 = __Local__134;
	auto& __Local__136 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__109), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__137 = CastChecked<UTextRenderComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__138 = (*(AccessPrivateProperty<USceneComponent*>((__Local__137), USceneComponent::__PPO__AttachParent() )));
	__Local__138 = __Local__131;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__137), false, 0));
	__Local__136 = __Local__137;
	auto& __Local__139 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__109), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__140 = CastChecked<UTextRenderComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__141 = (*(AccessPrivateProperty<USceneComponent*>((__Local__140), USceneComponent::__PPO__AttachParent() )));
	__Local__141 = __Local__131;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__140), false, 0));
	__Local__139 = __Local__140;
	auto& __Local__142 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__109), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__143 = CastChecked<UAudioComponent>(__Local__109->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__144 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__143), USceneComponent::__PPO__AttachParent() )));
	__Local__144 = __Local__119;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__143), false, 0));
	__Local__142 = __Local__143;
	auto& __Local__145 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__109), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__145 = __Local__119;
	auto& __Local__146 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__109), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__146 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__147 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__109), AActor::__PPO__RootComponent() )));
	__Local__147 = __Local__119;
	auto __Local__148 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("Button_SurfaceMesh_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__148);
	auto& __Local__149 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__148), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__150 = CastChecked<UUxtToggleStateComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__150), false, 0));
	__Local__149 = __Local__150;
	auto& __Local__151 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__148), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__152 = CastChecked<UUxtBackPlateComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__153 = (*(AccessPrivateProperty<USceneComponent*>((__Local__152), USceneComponent::__PPO__AttachParent() )));
	auto __Local__154 = CastChecked<USceneComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__155 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__154), USceneComponent::__PPO__AttachParent() )));
	auto __Local__156 = CastChecked<UUxtPressableButtonComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__156), false, 0));
	__Local__155 = __Local__156;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__154), false, 0));
	__Local__153 = __Local__154;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__152), true, 0));
	__Local__151 = __Local__152;
	auto& __Local__157 = (*(AccessPrivateProperty<bool >((__Local__148), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__157 = false;
	auto& __Local__158 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__148), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__158.Icon = FString(TEXT("EC95"));
	auto& __Local__159 = (*(AccessPrivateProperty<FText >((__Local__148), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__159 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0D5B60D94DF93F2EC7C69D940C3986F4]\", \"96A82B5F4D5EE0E75E8AF09CD6D5D7E1\", \"Surface Mesh\")")	);
	auto& __Local__160 = (*(AccessPrivateProperty<USceneComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__160 = __Local__154;
	auto& __Local__161 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__162 = CastChecked<UUxtBackPlateComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__163 = (*(AccessPrivateProperty<USceneComponent*>((__Local__162), USceneComponent::__PPO__AttachParent() )));
	__Local__163 = __Local__154;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__162), true, 0));
	__Local__161 = __Local__162;
	auto& __Local__164 = (*(AccessPrivateProperty<USceneComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__165 = CastChecked<USceneComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__166 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__165), USceneComponent::__PPO__AttachParent() )));
	__Local__166 = __Local__156;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__165), false, 0));
	__Local__164 = __Local__165;
	auto& __Local__167 = (*(AccessPrivateProperty<USceneComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__168 = CastChecked<USceneComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__169 = (*(AccessPrivateProperty<USceneComponent*>((__Local__168), USceneComponent::__PPO__AttachParent() )));
	__Local__169 = __Local__165;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__168), false, 0));
	__Local__167 = __Local__168;
	auto& __Local__170 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__171 = CastChecked<UStaticMeshComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__172 = (*(AccessPrivateProperty<USceneComponent*>((__Local__171), USceneComponent::__PPO__AttachParent() )));
	__Local__172 = __Local__168;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__171), true, 0));
	__Local__170 = __Local__171;
	auto& __Local__173 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__174 = CastChecked<UTextRenderComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__175 = (*(AccessPrivateProperty<USceneComponent*>((__Local__174), USceneComponent::__PPO__AttachParent() )));
	__Local__175 = __Local__168;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__174), false, 0));
	__Local__173 = __Local__174;
	auto& __Local__176 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__177 = CastChecked<UTextRenderComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__178 = (*(AccessPrivateProperty<USceneComponent*>((__Local__177), USceneComponent::__PPO__AttachParent() )));
	__Local__178 = __Local__168;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__177), false, 0));
	__Local__176 = __Local__177;
	auto& __Local__179 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__180 = CastChecked<UAudioComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__181 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__180), USceneComponent::__PPO__AttachParent() )));
	__Local__181 = __Local__156;
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__180), false, 0));
	__Local__179 = __Local__180;
	auto& __Local__182 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__148), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__182 = __Local__156;
	auto& __Local__183 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__148), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__183 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__184 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__148), AActor::__PPO__RootComponent() )));
	__Local__184 = __Local__156;
	auto __Local__185 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__185);
	auto __Local__186 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__186);
	(((FBoolProperty*)__Local__112)->SetPropertyValue_InContainer((__Local__185), false, 0));
	__Local__186->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__186->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__186->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__187 = __Local__186->ComponentDelegateBindings[0];
	__Local__187.ComponentPropertyName = FName(TEXT("ARTrackableNotify"));
	__Local__187.DelegatePropertyName = FName(TEXT("OnAddTrackedGeometry"));
	__Local__187.FunctionNameToBind = FName(TEXT("BndEvt__ARTrackableNotify_K2Node_ComponentBoundEvent_0_TrackableDelegate__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__ExecuteUbergraph_BP_ToggleFeaturesPanelWithTrackedGeom__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	Super::bpf__ReceiveBeginPlay__pf();
	// optimized KCST_UnconditionalGoto
	bpf__GetSurfaceVizToggleState__pf(/*out*/ b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent__pf);
	if(::IsValid(b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue_1__pf = b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent__pf->UUxtToggleStateComponent::IsChecked();
	}
	bpf__SetAllSurfacesVisible__pf(bpfv__CallFunc_IsChecked_ReturnValue_1__pf);
	b2l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("SurfaceMeshToggleEvent")));
	bpf__GetSurfaceVizToggleState__pf(/*out*/ b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_2__pf);
	if(::IsValid(b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_2__pf))
	{
		b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_2__pf->OnToggled.AddUnique(b2l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	return; // KCST_GotoReturn
}
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__ExecuteUbergraph_BP_ToggleFeaturesPanelWithTrackedGeom__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpf__GetSurfaceVizToggleState__pf(/*out*/ b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_1__pf);
	if(::IsValid(b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_1__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue_2__pf = b2l__CallFunc_GetSurfaceVizToggleState_ToggleStateComponent_1__pf->UUxtToggleStateComponent::IsChecked();
	}
	bpf__SetSurfaceVisible__pf(bpfv__CallFunc_IsChecked_ReturnValue_2__pf, b2l__K2Node_ComponentBoundEvent_TrackedGeometry__pf);
	return; // KCST_GotoReturn
}
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__ExecuteUbergraph_BP_ToggleFeaturesPanelWithTrackedGeom__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(b2l__K2Node_CustomEvent_ToggleState__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue__pf = b2l__K2Node_CustomEvent_ToggleState__pf->UUxtToggleStateComponent::IsChecked();
	}
	bpf__SetAllSurfacesVisible__pf(bpfv__CallFunc_IsChecked_ReturnValue__pf);
	return; // KCST_GotoReturn
}
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_ToggleFeaturesPanelWithTrackedGeom__pf_0(8);
}
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__BndEvt__ARTrackableNotify_K2Node_ComponentBoundEvent_0_TrackableDelegate__DelegateSignature__pf(UARTrackedGeometry* bpp__TrackedGeometry__pf)
{
	b2l__K2Node_ComponentBoundEvent_TrackedGeometry__pf = bpp__TrackedGeometry__pf;
	bpf__ExecuteUbergraph_BP_ToggleFeaturesPanelWithTrackedGeom__pf_1(3);
}
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__SurfaceMeshToggleEvent__pf(UUxtToggleStateComponent* bpp__ToggleState__pf)
{
	b2l__K2Node_CustomEvent_ToggleState__pf = bpp__ToggleState__pf;
	bpf__ExecuteUbergraph_BP_ToggleFeaturesPanelWithTrackedGeom__pf_2(1);
}
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__SetAllSurfacesVisible__pf(bool bpp__Visible__pf)
{
	TArray<UARTrackedGeometry*> bpfv__CallFunc_GetAllGeometries_ReturnValue__pf{};
	bpfv__CallFunc_GetAllGeometries_ReturnValue__pf = UARBlueprintLibrary::GetAllGeometries();
	bpf__SetSurfacesVisible__pf(bpp__Visible__pf, /*out*/ bpfv__CallFunc_GetAllGeometries_ReturnValue__pf);
}
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__GetSurfaceVizToggleState__pf(/*out*/ UUxtToggleStateComponent*& bpp__ToggleStateComponent__pf)
{
	AUxtPressableToggleButtonActor* bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				AActor*  __Local__188 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf = Cast<AUxtPressableToggleButtonActor>(((::IsValid(bpv__Button_SurfaceMesh__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__Button_SurfaceMesh__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__188)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				UUxtToggleStateComponent*  __Local__189 = ((UUxtToggleStateComponent*)nullptr);
				bpp__ToggleStateComponent__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UUxtToggleStateComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )))) : (__Local__189));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__SetSurfacesVisible__pf(bool bpp__bVisible__pf, /*out*/ TArray<UARTrackedGeometry*>& bpp__Geometries__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	UARTrackedGeometry* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpp__Geometries__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(7);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpp__Geometries__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpf__SetSurfaceVisible__pf(bpp__bVisible__pf, bpfv__CallFunc_Array_Get_Item__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::bpf__SetSurfaceVisible__pf(bool bpp__bVisible__pf, UARTrackedGeometry* bpp__Geometries__pf)
{
	bool bpfv__Temp_bool_Variable__pf{};
	UMRMeshComponent* bpfv__CallFunc_GetUnderlyingMesh_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	UMaterialInterface* bpfv__Temp_object_Variable__pf{};
	UMaterialInterface* bpfv__Temp_object_Variable_1__pf{};
	UMaterialInterface* bpfv__K2Node_Select_Default__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpp__Geometries__pf))
				{
					bpfv__CallFunc_GetUnderlyingMesh_ReturnValue__pf = bpp__Geometries__pf->UARTrackedGeometry::GetUnderlyingMesh();
				}
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetUnderlyingMesh_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpp__Geometries__pf))
				{
					bpfv__CallFunc_GetUnderlyingMesh_ReturnValue__pf = bpp__Geometries__pf->UARTrackedGeometry::GetUnderlyingMesh();
				}
				bpfv__Temp_bool_Variable__pf = bpp__bVisible__pf;
				bpfv__Temp_object_Variable__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
				bpfv__Temp_object_Variable_1__pf = ((UMaterialInterface*)nullptr);
				if(::IsValid(bpfv__CallFunc_GetUnderlyingMesh_ReturnValue__pf))
				{
					bpfv__CallFunc_GetUnderlyingMesh_ReturnValue__pf->SetMaterial(0, TSwitchValue<bool , UMaterialInterface* >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , UMaterialInterface* >(false, bpfv__Temp_object_Variable_1__pf), TSwitchPair<bool , UMaterialInterface* >(true, bpfv__Temp_object_Variable__pf)));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXToolsExamples/Common/Materials/M_TrackedSurfaceMesh.M_TrackedSurfaceMesh 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{137, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/Common/ToggleFeaturesPanel/BP_ToggleFeaturesPanel.BP_ToggleFeaturesPanel_C 
		{91, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{92, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableToggleButtonActor 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_HoloLens2BackPlate.MI_HoloLens2BackPlate 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Models/SM_BackPlateRoundedThick_4.SM_BackPlateRoundedThick_4 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeHoloMDL_Regular_42.Font_SegoeHoloMDL_Regular_42 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXTools/Fonts/M_DefaultFont.M_DefaultFont 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Semibold_42.Font_SegoeUI_Semibold_42 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Buttons/HoloLens2/MI_ButtonHoloLens2FrontPlate.MI_ButtonHoloLens2FrontPlate 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Models/SM_FrontPlate_PX.SM_FrontPlate_PX 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Buttons/HoloLens2/MI_ButtonHoloLens2FrontPlateLocalInputLeft.MI_ButtonHoloLens2FrontPlateLocalInputLeft 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Buttons/HoloLens2/MI_ButtonHoloLens2FrontPlateLocalInputRight.MI_ButtonHoloLens2FrontPlateLocalInputRight 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /UXTools/Buttons/HoloLens2/FC_Hololens2IconFocus.FC_Hololens2IconFocus 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Buttons/HoloLens2/MI_ButtonHoloLens2BackPlateToggle.MI_ButtonHoloLens2BackPlateToggle 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Buttons/HoloLens2/S_ButtonPressed_Mono_01.S_ButtonPressed_Mono_01 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Buttons/HoloLens2/S_ButtonReleased_Mono_01.S_ButtonReleased_Mono_01 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{138, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AugmentedReality.ARTrackableNotifyComponent 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{75, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Pointers/Meshes/SM_UnitQuad.SM_UnitQuad 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXTools/Materials/M_GrabbableDots.M_GrabbableDots 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBackPlateComponent 
		{104, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonActor 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtToggleStateComponent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtToggledDelegate__DelegateSignature 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AugmentedReality.ARTrackedGeometry 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/MRMesh.MRMeshComponent 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AugmentedReality.ARBlueprintLibrary 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtButtonReleasedDelegate__DelegateSignature 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonComponent 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPointerComponent 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EEndPlayReason 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBasePressableButtonActor 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{76, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFollowComponent 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGenericManipulatorComponent 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFaceUserConstraint 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UXTools.EUxtButtonState 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGrabTargetComponent 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UXTools.UxtGrabPointerData 
		{85, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorEnd_Mono_01.S_ManipulatorEnd_Mono_01 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorStart_Mono_01.S_ManipulatorStart_Mono_01 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFunctionLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/Common/ToggleFeaturesPanel/BP_NearMenuBase.BP_NearMenuBase_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495
{
	FRegisterHelper__ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/Common/ToggleFeaturesPanel/BP_ToggleFeaturesPanelWithTrackedGeom"), &ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495 Instance;
};
FRegisterHelper__ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495 FRegisterHelper__ABP_ToggleFeaturesPanelWithTrackedGeom_C__pf3547134495::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
