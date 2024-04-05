#include "NativizedAssets.h"
#include "BP_NearMenu4x2__pf3499602411.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
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
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableToggleButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtToggleStateComponent.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
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
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Utils/UxtFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_NearMenu4x2_C__pf3499602411::ABP_NearMenu4x2_C__pf3499602411(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__Buttons__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Buttons"));
	bpv__Button_01__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_01"));
	bpv__Button_02__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_02"));
	bpv__Button_03__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_03"));
	bpv__Button_04__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_04"));
	bpv__Button_05__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_05"));
	bpv__Button_06__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_06"));
	bpv__Button_07__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_07"));
	bpv__Button_08__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_08"));
	bpv__Button_Pin__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_Pin"));
	auto& __Local__0 = (*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__0 = FVector(1.600000, 16.000000, 9.600000);
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
	__Local__3 = FVector(0.001000, 7.000000, 0.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Left__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__4 = FVector(1.000000, 0.300000, 6.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Left__pf), true, 0));
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Right__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(0.001000, -7.000000, 0.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Right__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__6 = FVector(1.000000, 0.300000, 6.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Right__pf), true, 0));
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Top__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__7 = FVector(0.001000, 0.000000, 4.000000);
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Top__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__8 = FVector(1.000000, 10.000000, 0.300000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Top__pf), true, 0));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Bottom__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(0.001000, 0.000000, -4.000000);
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Bottom__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__10 = FVector(1.000000, 10.000000, 0.300000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Bottom__pf), true, 0));
	bpv__Buttons__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Buttons__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Buttons__pf), false, 0));
	bpv__Button_01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_01__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_01__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__11 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__12 = (*(AccessPrivateProperty<AActor* >((bpv__Button_01__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__12 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu4x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__Button_01__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__13 = FVector(0.000000, 4.800000, 1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_01__pf), false, 0));
	bpv__Button_02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_02__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_02__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__14 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__15 = (*(AccessPrivateProperty<AActor* >((bpv__Button_02__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__15 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu4x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[1]);
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__Button_02__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(0.000000, 1.600000, 1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_02__pf), false, 0));
	bpv__Button_03__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_03__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__17 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_03__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__17 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__18 = (*(AccessPrivateProperty<AActor* >((bpv__Button_03__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__18 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu4x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[2]);
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__Button_03__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__19 = FVector(0.000000, -1.600000, 1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_03__pf), false, 0));
	bpv__Button_04__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_04__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__20 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_04__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__20 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__21 = (*(AccessPrivateProperty<AActor* >((bpv__Button_04__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__21 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu4x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[3]);
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__Button_04__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__22 = FVector(0.000000, -4.800000, 1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_04__pf), false, 0));
	bpv__Button_05__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_05__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__23 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_05__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__23 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__24 = (*(AccessPrivateProperty<AActor* >((bpv__Button_05__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__24 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu4x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[4]);
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__Button_05__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__25 = FVector(0.000000, 4.800000, -1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_05__pf), false, 0));
	bpv__Button_06__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_06__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__26 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_06__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__26 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__27 = (*(AccessPrivateProperty<AActor* >((bpv__Button_06__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__27 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu4x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[5]);
	auto& __Local__28 = (*(AccessPrivateProperty<FVector >((bpv__Button_06__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__28 = FVector(0.000000, 1.600000, -1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_06__pf), false, 0));
	bpv__Button_07__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_07__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__29 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_07__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__29 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__30 = (*(AccessPrivateProperty<AActor* >((bpv__Button_07__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__30 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu4x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[6]);
	auto& __Local__31 = (*(AccessPrivateProperty<FVector >((bpv__Button_07__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__31 = FVector(0.000000, -1.600000, -1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_07__pf), false, 0));
	bpv__Button_08__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_08__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__32 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_08__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__32 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__33 = (*(AccessPrivateProperty<AActor* >((bpv__Button_08__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__33 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu4x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[7]);
	auto& __Local__34 = (*(AccessPrivateProperty<FVector >((bpv__Button_08__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__34 = FVector(0.000000, -4.800000, -1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_08__pf), false, 0));
	bpv__Button_Pin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_Pin__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__35 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__35 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__36 = (*(AccessPrivateProperty<AActor* >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__36 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu4x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[8]);
	auto& __Local__37 = (*(AccessPrivateProperty<FVector >((bpv__Button_Pin__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__37 = FVector(0.000000, -9.800000, 3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Pin__pf), false, 0));
	auto& __Local__38 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__38 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_NearMenu4x2_C__pf3499602411::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Buttons__pf)
	{
		bpv__Buttons__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_01__pf)
	{
		bpv__Button_01__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_02__pf)
	{
		bpv__Button_02__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_03__pf)
	{
		bpv__Button_03__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_04__pf)
	{
		bpv__Button_04__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_05__pf)
	{
		bpv__Button_05__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_06__pf)
	{
		bpv__Button_06__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_07__pf)
	{
		bpv__Button_07__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_08__pf)
	{
		bpv__Button_08__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_Pin__pf)
	{
		bpv__Button_Pin__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenu4x2_C__pf3499602411::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ABP_NearMenuBase_C__pf3547134495::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__39 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_01_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__39);
	auto& __Local__40 = (*(AccessPrivateProperty<bool >((__Local__39), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__40 = false;
	auto& __Local__41 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__39), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__41.Icon = FString(TEXT("E713"));
	auto& __Local__42 = (*(AccessPrivateProperty<FText >((__Local__39), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__42 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E634A4BF412FDB61368C95A539297E31]\", \"E17D6FFE431CB70841437088FAC567A6\", \"Menu One\")")	);
	auto& __Local__43 = (*(AccessPrivateProperty<USceneComponent*>((__Local__39), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__44 = CastChecked<USceneComponent>(__Local__39->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__45 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__44), USceneComponent::__PPO__AttachParent() )));
	auto __Local__46 = CastChecked<UUxtPressableButtonComponent>(__Local__39->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__48{};
	const FProperty* __Local__47 = __Local__48.Get();
	if (nullptr == __Local__47)
	{
		__Local__47 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__47);
		__Local__48 = __Local__47;
	}
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__46), false, 0));
	__Local__45 = __Local__46;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__44), false, 0));
	__Local__43 = __Local__44;
	auto& __Local__49 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__39), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__50 = CastChecked<UUxtBackPlateComponent>(__Local__39->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__51 = (*(AccessPrivateProperty<USceneComponent*>((__Local__50), USceneComponent::__PPO__AttachParent() )));
	__Local__51 = __Local__44;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__50), true, 0));
	__Local__49 = __Local__50;
	auto& __Local__52 = (*(AccessPrivateProperty<USceneComponent*>((__Local__39), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__53 = CastChecked<USceneComponent>(__Local__39->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__54 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__53), USceneComponent::__PPO__AttachParent() )));
	__Local__54 = __Local__46;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__53), false, 0));
	__Local__52 = __Local__53;
	auto& __Local__55 = (*(AccessPrivateProperty<USceneComponent*>((__Local__39), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__56 = CastChecked<USceneComponent>(__Local__39->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__57 = (*(AccessPrivateProperty<USceneComponent*>((__Local__56), USceneComponent::__PPO__AttachParent() )));
	__Local__57 = __Local__53;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__56), false, 0));
	__Local__55 = __Local__56;
	auto& __Local__58 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__39), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__59 = CastChecked<UStaticMeshComponent>(__Local__39->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__60 = (*(AccessPrivateProperty<USceneComponent*>((__Local__59), USceneComponent::__PPO__AttachParent() )));
	__Local__60 = __Local__56;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__59), true, 0));
	__Local__58 = __Local__59;
	auto& __Local__61 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__39), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__62 = CastChecked<UTextRenderComponent>(__Local__39->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__63 = (*(AccessPrivateProperty<USceneComponent*>((__Local__62), USceneComponent::__PPO__AttachParent() )));
	__Local__63 = __Local__56;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__62), false, 0));
	__Local__61 = __Local__62;
	auto& __Local__64 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__39), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__65 = CastChecked<UTextRenderComponent>(__Local__39->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__66 = (*(AccessPrivateProperty<USceneComponent*>((__Local__65), USceneComponent::__PPO__AttachParent() )));
	__Local__66 = __Local__56;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__65), false, 0));
	__Local__64 = __Local__65;
	auto& __Local__67 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__39), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__68 = CastChecked<UAudioComponent>(__Local__39->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__69 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__68), USceneComponent::__PPO__AttachParent() )));
	__Local__69 = __Local__46;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__68), false, 0));
	__Local__67 = __Local__68;
	auto& __Local__70 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__39), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__70 = __Local__46;
	auto& __Local__71 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__39), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__71 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__72 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__39), AActor::__PPO__RootComponent() )));
	__Local__72 = __Local__46;
	auto __Local__73 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_02_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__73);
	auto& __Local__74 = (*(AccessPrivateProperty<bool >((__Local__73), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__74 = false;
	auto& __Local__75 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__73), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__75.Icon = FString(TEXT("E72D"));
	auto& __Local__76 = (*(AccessPrivateProperty<FText >((__Local__73), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__76 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E634A4BF412FDB61368C95A539297E31]\", \"CD5207454DE1E7896626B9BE8402D0E2\", \"Menu Two\")")	);
	auto& __Local__77 = (*(AccessPrivateProperty<USceneComponent*>((__Local__73), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__78 = CastChecked<USceneComponent>(__Local__73->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__79 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__78), USceneComponent::__PPO__AttachParent() )));
	auto __Local__80 = CastChecked<UUxtPressableButtonComponent>(__Local__73->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__80), false, 0));
	__Local__79 = __Local__80;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__78), false, 0));
	__Local__77 = __Local__78;
	auto& __Local__81 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__73), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__82 = CastChecked<UUxtBackPlateComponent>(__Local__73->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__83 = (*(AccessPrivateProperty<USceneComponent*>((__Local__82), USceneComponent::__PPO__AttachParent() )));
	__Local__83 = __Local__78;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__82), true, 0));
	__Local__81 = __Local__82;
	auto& __Local__84 = (*(AccessPrivateProperty<USceneComponent*>((__Local__73), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__85 = CastChecked<USceneComponent>(__Local__73->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__86 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__85), USceneComponent::__PPO__AttachParent() )));
	__Local__86 = __Local__80;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__85), false, 0));
	__Local__84 = __Local__85;
	auto& __Local__87 = (*(AccessPrivateProperty<USceneComponent*>((__Local__73), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__88 = CastChecked<USceneComponent>(__Local__73->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__89 = (*(AccessPrivateProperty<USceneComponent*>((__Local__88), USceneComponent::__PPO__AttachParent() )));
	__Local__89 = __Local__85;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__88), false, 0));
	__Local__87 = __Local__88;
	auto& __Local__90 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__73), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__91 = CastChecked<UStaticMeshComponent>(__Local__73->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__92 = (*(AccessPrivateProperty<USceneComponent*>((__Local__91), USceneComponent::__PPO__AttachParent() )));
	__Local__92 = __Local__88;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__91), true, 0));
	__Local__90 = __Local__91;
	auto& __Local__93 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__73), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__94 = CastChecked<UTextRenderComponent>(__Local__73->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__95 = (*(AccessPrivateProperty<USceneComponent*>((__Local__94), USceneComponent::__PPO__AttachParent() )));
	__Local__95 = __Local__88;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__94), false, 0));
	__Local__93 = __Local__94;
	auto& __Local__96 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__73), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__97 = CastChecked<UTextRenderComponent>(__Local__73->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__98 = (*(AccessPrivateProperty<USceneComponent*>((__Local__97), USceneComponent::__PPO__AttachParent() )));
	__Local__98 = __Local__88;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__97), false, 0));
	__Local__96 = __Local__97;
	auto& __Local__99 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__73), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__100 = CastChecked<UAudioComponent>(__Local__73->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__101 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__100), USceneComponent::__PPO__AttachParent() )));
	__Local__101 = __Local__80;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__100), false, 0));
	__Local__99 = __Local__100;
	auto& __Local__102 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__73), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__102 = __Local__80;
	auto& __Local__103 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__73), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__103 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__104 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__73), AActor::__PPO__RootComponent() )));
	__Local__104 = __Local__80;
	auto __Local__105 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_03_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__105);
	auto& __Local__106 = (*(AccessPrivateProperty<bool >((__Local__105), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__106 = false;
	auto& __Local__107 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__105), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__107.Icon = FString(TEXT("E895"));
	auto& __Local__108 = (*(AccessPrivateProperty<FText >((__Local__105), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__108 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E634A4BF412FDB61368C95A539297E31]\", \"50C344FB475331C32E2934BF6AE9FAF9\", \"Menu Three\")")	);
	auto& __Local__109 = (*(AccessPrivateProperty<USceneComponent*>((__Local__105), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__110 = CastChecked<USceneComponent>(__Local__105->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__111 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__110), USceneComponent::__PPO__AttachParent() )));
	auto __Local__112 = CastChecked<UUxtPressableButtonComponent>(__Local__105->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__112), false, 0));
	__Local__111 = __Local__112;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__110), false, 0));
	__Local__109 = __Local__110;
	auto& __Local__113 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__105), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__114 = CastChecked<UUxtBackPlateComponent>(__Local__105->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__115 = (*(AccessPrivateProperty<USceneComponent*>((__Local__114), USceneComponent::__PPO__AttachParent() )));
	__Local__115 = __Local__110;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__114), true, 0));
	__Local__113 = __Local__114;
	auto& __Local__116 = (*(AccessPrivateProperty<USceneComponent*>((__Local__105), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__117 = CastChecked<USceneComponent>(__Local__105->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__118 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__117), USceneComponent::__PPO__AttachParent() )));
	__Local__118 = __Local__112;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__117), false, 0));
	__Local__116 = __Local__117;
	auto& __Local__119 = (*(AccessPrivateProperty<USceneComponent*>((__Local__105), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__120 = CastChecked<USceneComponent>(__Local__105->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__121 = (*(AccessPrivateProperty<USceneComponent*>((__Local__120), USceneComponent::__PPO__AttachParent() )));
	__Local__121 = __Local__117;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__120), false, 0));
	__Local__119 = __Local__120;
	auto& __Local__122 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__105), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__123 = CastChecked<UStaticMeshComponent>(__Local__105->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__124 = (*(AccessPrivateProperty<USceneComponent*>((__Local__123), USceneComponent::__PPO__AttachParent() )));
	__Local__124 = __Local__120;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__123), true, 0));
	__Local__122 = __Local__123;
	auto& __Local__125 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__105), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__126 = CastChecked<UTextRenderComponent>(__Local__105->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__127 = (*(AccessPrivateProperty<USceneComponent*>((__Local__126), USceneComponent::__PPO__AttachParent() )));
	__Local__127 = __Local__120;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__126), false, 0));
	__Local__125 = __Local__126;
	auto& __Local__128 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__105), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__129 = CastChecked<UTextRenderComponent>(__Local__105->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__130 = (*(AccessPrivateProperty<USceneComponent*>((__Local__129), USceneComponent::__PPO__AttachParent() )));
	__Local__130 = __Local__120;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__129), false, 0));
	__Local__128 = __Local__129;
	auto& __Local__131 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__105), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__132 = CastChecked<UAudioComponent>(__Local__105->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__133 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__132), USceneComponent::__PPO__AttachParent() )));
	__Local__133 = __Local__112;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__132), false, 0));
	__Local__131 = __Local__132;
	auto& __Local__134 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__105), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__134 = __Local__112;
	auto& __Local__135 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__105), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__135 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__136 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__105), AActor::__PPO__RootComponent() )));
	__Local__136 = __Local__112;
	auto __Local__137 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_04_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__137);
	auto& __Local__138 = (*(AccessPrivateProperty<bool >((__Local__137), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__138 = false;
	auto& __Local__139 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__137), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__139.Icon = FString(TEXT("E774"));
	auto& __Local__140 = (*(AccessPrivateProperty<FText >((__Local__137), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__140 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E634A4BF412FDB61368C95A539297E31]\", \"A0A65DB3401A3C24F5D35CAF67FE9D3B\", \"Menu Four\")")	);
	auto& __Local__141 = (*(AccessPrivateProperty<USceneComponent*>((__Local__137), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__142 = CastChecked<USceneComponent>(__Local__137->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__143 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__142), USceneComponent::__PPO__AttachParent() )));
	auto __Local__144 = CastChecked<UUxtPressableButtonComponent>(__Local__137->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__144), false, 0));
	__Local__143 = __Local__144;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__142), false, 0));
	__Local__141 = __Local__142;
	auto& __Local__145 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__137), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__146 = CastChecked<UUxtBackPlateComponent>(__Local__137->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__147 = (*(AccessPrivateProperty<USceneComponent*>((__Local__146), USceneComponent::__PPO__AttachParent() )));
	__Local__147 = __Local__142;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__146), true, 0));
	__Local__145 = __Local__146;
	auto& __Local__148 = (*(AccessPrivateProperty<USceneComponent*>((__Local__137), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__149 = CastChecked<USceneComponent>(__Local__137->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__150 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__149), USceneComponent::__PPO__AttachParent() )));
	__Local__150 = __Local__144;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__149), false, 0));
	__Local__148 = __Local__149;
	auto& __Local__151 = (*(AccessPrivateProperty<USceneComponent*>((__Local__137), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__152 = CastChecked<USceneComponent>(__Local__137->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__153 = (*(AccessPrivateProperty<USceneComponent*>((__Local__152), USceneComponent::__PPO__AttachParent() )));
	__Local__153 = __Local__149;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__152), false, 0));
	__Local__151 = __Local__152;
	auto& __Local__154 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__137), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__155 = CastChecked<UStaticMeshComponent>(__Local__137->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__156 = (*(AccessPrivateProperty<USceneComponent*>((__Local__155), USceneComponent::__PPO__AttachParent() )));
	__Local__156 = __Local__152;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__155), true, 0));
	__Local__154 = __Local__155;
	auto& __Local__157 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__137), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__158 = CastChecked<UTextRenderComponent>(__Local__137->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__159 = (*(AccessPrivateProperty<USceneComponent*>((__Local__158), USceneComponent::__PPO__AttachParent() )));
	__Local__159 = __Local__152;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__158), false, 0));
	__Local__157 = __Local__158;
	auto& __Local__160 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__137), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__161 = CastChecked<UTextRenderComponent>(__Local__137->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__162 = (*(AccessPrivateProperty<USceneComponent*>((__Local__161), USceneComponent::__PPO__AttachParent() )));
	__Local__162 = __Local__152;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__161), false, 0));
	__Local__160 = __Local__161;
	auto& __Local__163 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__137), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__164 = CastChecked<UAudioComponent>(__Local__137->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__165 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__164), USceneComponent::__PPO__AttachParent() )));
	__Local__165 = __Local__144;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__164), false, 0));
	__Local__163 = __Local__164;
	auto& __Local__166 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__137), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__166 = __Local__144;
	auto& __Local__167 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__137), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__167 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__168 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__137), AActor::__PPO__RootComponent() )));
	__Local__168 = __Local__144;
	auto __Local__169 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_05_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__169);
	auto& __Local__170 = (*(AccessPrivateProperty<bool >((__Local__169), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__170 = false;
	auto& __Local__171 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__169), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__171.Icon = FString(TEXT("E706"));
	auto& __Local__172 = (*(AccessPrivateProperty<FText >((__Local__169), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__172 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E634A4BF412FDB61368C95A539297E31]\", \"8ED296324A66632941410CB95B9AAFFA\", \"Menu Five\")")	);
	auto& __Local__173 = (*(AccessPrivateProperty<USceneComponent*>((__Local__169), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__174 = CastChecked<USceneComponent>(__Local__169->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__175 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__174), USceneComponent::__PPO__AttachParent() )));
	auto __Local__176 = CastChecked<UUxtPressableButtonComponent>(__Local__169->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__176), false, 0));
	__Local__175 = __Local__176;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__174), false, 0));
	__Local__173 = __Local__174;
	auto& __Local__177 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__169), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__178 = CastChecked<UUxtBackPlateComponent>(__Local__169->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__179 = (*(AccessPrivateProperty<USceneComponent*>((__Local__178), USceneComponent::__PPO__AttachParent() )));
	__Local__179 = __Local__174;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__178), true, 0));
	__Local__177 = __Local__178;
	auto& __Local__180 = (*(AccessPrivateProperty<USceneComponent*>((__Local__169), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__181 = CastChecked<USceneComponent>(__Local__169->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__182 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__181), USceneComponent::__PPO__AttachParent() )));
	__Local__182 = __Local__176;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__181), false, 0));
	__Local__180 = __Local__181;
	auto& __Local__183 = (*(AccessPrivateProperty<USceneComponent*>((__Local__169), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__184 = CastChecked<USceneComponent>(__Local__169->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__185 = (*(AccessPrivateProperty<USceneComponent*>((__Local__184), USceneComponent::__PPO__AttachParent() )));
	__Local__185 = __Local__181;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__184), false, 0));
	__Local__183 = __Local__184;
	auto& __Local__186 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__169), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__187 = CastChecked<UStaticMeshComponent>(__Local__169->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__188 = (*(AccessPrivateProperty<USceneComponent*>((__Local__187), USceneComponent::__PPO__AttachParent() )));
	__Local__188 = __Local__184;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__187), true, 0));
	__Local__186 = __Local__187;
	auto& __Local__189 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__169), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__190 = CastChecked<UTextRenderComponent>(__Local__169->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__191 = (*(AccessPrivateProperty<USceneComponent*>((__Local__190), USceneComponent::__PPO__AttachParent() )));
	__Local__191 = __Local__184;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__190), false, 0));
	__Local__189 = __Local__190;
	auto& __Local__192 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__169), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__193 = CastChecked<UTextRenderComponent>(__Local__169->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__194 = (*(AccessPrivateProperty<USceneComponent*>((__Local__193), USceneComponent::__PPO__AttachParent() )));
	__Local__194 = __Local__184;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__193), false, 0));
	__Local__192 = __Local__193;
	auto& __Local__195 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__169), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__196 = CastChecked<UAudioComponent>(__Local__169->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__197 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__196), USceneComponent::__PPO__AttachParent() )));
	__Local__197 = __Local__176;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__196), false, 0));
	__Local__195 = __Local__196;
	auto& __Local__198 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__169), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__198 = __Local__176;
	auto& __Local__199 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__169), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__199 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__200 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__169), AActor::__PPO__RootComponent() )));
	__Local__200 = __Local__176;
	auto __Local__201 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_06_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__201);
	auto& __Local__202 = (*(AccessPrivateProperty<bool >((__Local__201), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__202 = false;
	auto& __Local__203 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__201), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__203.Icon = FString(TEXT("E942"));
	auto& __Local__204 = (*(AccessPrivateProperty<FText >((__Local__201), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__204 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E634A4BF412FDB61368C95A539297E31]\", \"4DEAC45A47076E2046FB8BA6289E1B94\", \"Menu Six\")")	);
	auto& __Local__205 = (*(AccessPrivateProperty<USceneComponent*>((__Local__201), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__206 = CastChecked<USceneComponent>(__Local__201->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__207 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__206), USceneComponent::__PPO__AttachParent() )));
	auto __Local__208 = CastChecked<UUxtPressableButtonComponent>(__Local__201->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__208), false, 0));
	__Local__207 = __Local__208;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__206), false, 0));
	__Local__205 = __Local__206;
	auto& __Local__209 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__201), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__210 = CastChecked<UUxtBackPlateComponent>(__Local__201->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__211 = (*(AccessPrivateProperty<USceneComponent*>((__Local__210), USceneComponent::__PPO__AttachParent() )));
	__Local__211 = __Local__206;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__210), true, 0));
	__Local__209 = __Local__210;
	auto& __Local__212 = (*(AccessPrivateProperty<USceneComponent*>((__Local__201), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__213 = CastChecked<USceneComponent>(__Local__201->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__214 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__213), USceneComponent::__PPO__AttachParent() )));
	__Local__214 = __Local__208;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__213), false, 0));
	__Local__212 = __Local__213;
	auto& __Local__215 = (*(AccessPrivateProperty<USceneComponent*>((__Local__201), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__216 = CastChecked<USceneComponent>(__Local__201->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__217 = (*(AccessPrivateProperty<USceneComponent*>((__Local__216), USceneComponent::__PPO__AttachParent() )));
	__Local__217 = __Local__213;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__216), false, 0));
	__Local__215 = __Local__216;
	auto& __Local__218 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__201), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__219 = CastChecked<UStaticMeshComponent>(__Local__201->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__220 = (*(AccessPrivateProperty<USceneComponent*>((__Local__219), USceneComponent::__PPO__AttachParent() )));
	__Local__220 = __Local__216;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__219), true, 0));
	__Local__218 = __Local__219;
	auto& __Local__221 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__201), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__222 = CastChecked<UTextRenderComponent>(__Local__201->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__223 = (*(AccessPrivateProperty<USceneComponent*>((__Local__222), USceneComponent::__PPO__AttachParent() )));
	__Local__223 = __Local__216;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__222), false, 0));
	__Local__221 = __Local__222;
	auto& __Local__224 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__201), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__225 = CastChecked<UTextRenderComponent>(__Local__201->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__226 = (*(AccessPrivateProperty<USceneComponent*>((__Local__225), USceneComponent::__PPO__AttachParent() )));
	__Local__226 = __Local__216;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__225), false, 0));
	__Local__224 = __Local__225;
	auto& __Local__227 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__201), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__228 = CastChecked<UAudioComponent>(__Local__201->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__229 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__228), USceneComponent::__PPO__AttachParent() )));
	__Local__229 = __Local__208;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__228), false, 0));
	__Local__227 = __Local__228;
	auto& __Local__230 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__201), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__230 = __Local__208;
	auto& __Local__231 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__201), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__231 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__232 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__201), AActor::__PPO__RootComponent() )));
	__Local__232 = __Local__208;
	auto __Local__233 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_07_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__233);
	auto& __Local__234 = (*(AccessPrivateProperty<bool >((__Local__233), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__234 = false;
	auto& __Local__235 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__233), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__235.Icon = FString(TEXT("E761"));
	auto& __Local__236 = (*(AccessPrivateProperty<FText >((__Local__233), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__236 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E634A4BF412FDB61368C95A539297E31]\", \"47E16BC04C33112A4C037F8EDBB0B6AC\", \"Menu Seven\")")	);
	auto& __Local__237 = (*(AccessPrivateProperty<USceneComponent*>((__Local__233), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__238 = CastChecked<USceneComponent>(__Local__233->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__239 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__238), USceneComponent::__PPO__AttachParent() )));
	auto __Local__240 = CastChecked<UUxtPressableButtonComponent>(__Local__233->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__240), false, 0));
	__Local__239 = __Local__240;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__238), false, 0));
	__Local__237 = __Local__238;
	auto& __Local__241 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__233), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__242 = CastChecked<UUxtBackPlateComponent>(__Local__233->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__243 = (*(AccessPrivateProperty<USceneComponent*>((__Local__242), USceneComponent::__PPO__AttachParent() )));
	__Local__243 = __Local__238;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__242), true, 0));
	__Local__241 = __Local__242;
	auto& __Local__244 = (*(AccessPrivateProperty<USceneComponent*>((__Local__233), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__245 = CastChecked<USceneComponent>(__Local__233->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__246 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__245), USceneComponent::__PPO__AttachParent() )));
	__Local__246 = __Local__240;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__245), false, 0));
	__Local__244 = __Local__245;
	auto& __Local__247 = (*(AccessPrivateProperty<USceneComponent*>((__Local__233), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__248 = CastChecked<USceneComponent>(__Local__233->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__249 = (*(AccessPrivateProperty<USceneComponent*>((__Local__248), USceneComponent::__PPO__AttachParent() )));
	__Local__249 = __Local__245;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__248), false, 0));
	__Local__247 = __Local__248;
	auto& __Local__250 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__233), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__251 = CastChecked<UStaticMeshComponent>(__Local__233->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__252 = (*(AccessPrivateProperty<USceneComponent*>((__Local__251), USceneComponent::__PPO__AttachParent() )));
	__Local__252 = __Local__248;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__251), true, 0));
	__Local__250 = __Local__251;
	auto& __Local__253 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__233), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__254 = CastChecked<UTextRenderComponent>(__Local__233->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__255 = (*(AccessPrivateProperty<USceneComponent*>((__Local__254), USceneComponent::__PPO__AttachParent() )));
	__Local__255 = __Local__248;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__254), false, 0));
	__Local__253 = __Local__254;
	auto& __Local__256 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__233), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__257 = CastChecked<UTextRenderComponent>(__Local__233->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__258 = (*(AccessPrivateProperty<USceneComponent*>((__Local__257), USceneComponent::__PPO__AttachParent() )));
	__Local__258 = __Local__248;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__257), false, 0));
	__Local__256 = __Local__257;
	auto& __Local__259 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__233), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__260 = CastChecked<UAudioComponent>(__Local__233->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__261 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__260), USceneComponent::__PPO__AttachParent() )));
	__Local__261 = __Local__240;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__260), false, 0));
	__Local__259 = __Local__260;
	auto& __Local__262 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__233), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__262 = __Local__240;
	auto& __Local__263 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__233), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__263 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__264 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__233), AActor::__PPO__RootComponent() )));
	__Local__264 = __Local__240;
	auto __Local__265 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_08_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__265);
	auto& __Local__266 = (*(AccessPrivateProperty<bool >((__Local__265), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__266 = false;
	auto& __Local__267 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__265), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__267.Icon = FString(TEXT("E72C"));
	auto& __Local__268 = (*(AccessPrivateProperty<FText >((__Local__265), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__268 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E634A4BF412FDB61368C95A539297E31]\", \"749BA562413EB5B64A4843A6506407D5\", \"Menu Eight\")")	);
	auto& __Local__269 = (*(AccessPrivateProperty<USceneComponent*>((__Local__265), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__270 = CastChecked<USceneComponent>(__Local__265->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__271 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__270), USceneComponent::__PPO__AttachParent() )));
	auto __Local__272 = CastChecked<UUxtPressableButtonComponent>(__Local__265->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__272), false, 0));
	__Local__271 = __Local__272;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__270), false, 0));
	__Local__269 = __Local__270;
	auto& __Local__273 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__265), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__274 = CastChecked<UUxtBackPlateComponent>(__Local__265->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__275 = (*(AccessPrivateProperty<USceneComponent*>((__Local__274), USceneComponent::__PPO__AttachParent() )));
	__Local__275 = __Local__270;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__274), true, 0));
	__Local__273 = __Local__274;
	auto& __Local__276 = (*(AccessPrivateProperty<USceneComponent*>((__Local__265), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__277 = CastChecked<USceneComponent>(__Local__265->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__278 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__277), USceneComponent::__PPO__AttachParent() )));
	__Local__278 = __Local__272;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__277), false, 0));
	__Local__276 = __Local__277;
	auto& __Local__279 = (*(AccessPrivateProperty<USceneComponent*>((__Local__265), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__280 = CastChecked<USceneComponent>(__Local__265->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__281 = (*(AccessPrivateProperty<USceneComponent*>((__Local__280), USceneComponent::__PPO__AttachParent() )));
	__Local__281 = __Local__277;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__280), false, 0));
	__Local__279 = __Local__280;
	auto& __Local__282 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__265), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__283 = CastChecked<UStaticMeshComponent>(__Local__265->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__284 = (*(AccessPrivateProperty<USceneComponent*>((__Local__283), USceneComponent::__PPO__AttachParent() )));
	__Local__284 = __Local__280;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__283), true, 0));
	__Local__282 = __Local__283;
	auto& __Local__285 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__265), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__286 = CastChecked<UTextRenderComponent>(__Local__265->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__287 = (*(AccessPrivateProperty<USceneComponent*>((__Local__286), USceneComponent::__PPO__AttachParent() )));
	__Local__287 = __Local__280;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__286), false, 0));
	__Local__285 = __Local__286;
	auto& __Local__288 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__265), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__289 = CastChecked<UTextRenderComponent>(__Local__265->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__290 = (*(AccessPrivateProperty<USceneComponent*>((__Local__289), USceneComponent::__PPO__AttachParent() )));
	__Local__290 = __Local__280;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__289), false, 0));
	__Local__288 = __Local__289;
	auto& __Local__291 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__265), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__292 = CastChecked<UAudioComponent>(__Local__265->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__293 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__292), USceneComponent::__PPO__AttachParent() )));
	__Local__293 = __Local__272;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__292), false, 0));
	__Local__291 = __Local__292;
	auto& __Local__294 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__265), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__294 = __Local__272;
	auto& __Local__295 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__265), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__295 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__296 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__265), AActor::__PPO__RootComponent() )));
	__Local__296 = __Local__272;
	auto __Local__297 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("Button_Pin_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__297);
	auto& __Local__298 = (*(AccessPrivateProperty<bool >((__Local__297), AUxtPressableToggleButtonActor::__PPO__bIsInitiallyChecked() )));
	__Local__298 = true;
	auto& __Local__299 = (*(AccessPrivateProperty<bool >((__Local__297), AUxtPressableToggleButtonActor::__PPO__bToggleOnRelease() )));
	__Local__299 = true;
	auto& __Local__300 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__297), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__301 = CastChecked<UUxtToggleStateComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__301), false, 0));
	__Local__300 = __Local__301;
	auto& __Local__302 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__297), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__303 = CastChecked<UUxtBackPlateComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__304 = (*(AccessPrivateProperty<USceneComponent*>((__Local__303), USceneComponent::__PPO__AttachParent() )));
	auto __Local__305 = CastChecked<USceneComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__306 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__305), USceneComponent::__PPO__AttachParent() )));
	auto __Local__307 = CastChecked<UUxtPressableButtonComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__307), false, 0));
	__Local__306 = __Local__307;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__305), false, 0));
	__Local__304 = __Local__305;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__303), true, 0));
	__Local__302 = __Local__303;
	auto& __Local__308 = (*(AccessPrivateProperty<bool >((__Local__297), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__308 = false;
	auto& __Local__309 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__297), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__309.Icon = FString(TEXT("E718"));
	__Local__309.TextBrush.RelativeRotation = FRotator(0.000000, 0.000000, 45.000000);
	auto& __Local__310 = (*(AccessPrivateProperty<FText >((__Local__297), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__310 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E634A4BF412FDB61368C95A539297E31]\", \"22B749684F8E6D3A6795659325C8C2BC\", \"Pin\")")	);
	auto& __Local__311 = (*(AccessPrivateProperty<USceneComponent*>((__Local__297), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__311 = __Local__305;
	auto& __Local__312 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__297), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__313 = CastChecked<UUxtBackPlateComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__314 = (*(AccessPrivateProperty<USceneComponent*>((__Local__313), USceneComponent::__PPO__AttachParent() )));
	__Local__314 = __Local__305;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__313), true, 0));
	__Local__312 = __Local__313;
	auto& __Local__315 = (*(AccessPrivateProperty<USceneComponent*>((__Local__297), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__316 = CastChecked<USceneComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__317 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__316), USceneComponent::__PPO__AttachParent() )));
	__Local__317 = __Local__307;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__316), false, 0));
	__Local__315 = __Local__316;
	auto& __Local__318 = (*(AccessPrivateProperty<USceneComponent*>((__Local__297), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__319 = CastChecked<USceneComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__320 = (*(AccessPrivateProperty<USceneComponent*>((__Local__319), USceneComponent::__PPO__AttachParent() )));
	__Local__320 = __Local__316;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__319), false, 0));
	__Local__318 = __Local__319;
	auto& __Local__321 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__297), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__322 = CastChecked<UStaticMeshComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__323 = (*(AccessPrivateProperty<USceneComponent*>((__Local__322), USceneComponent::__PPO__AttachParent() )));
	__Local__323 = __Local__319;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__322), true, 0));
	__Local__321 = __Local__322;
	auto& __Local__324 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__297), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__325 = CastChecked<UTextRenderComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__326 = (*(AccessPrivateProperty<USceneComponent*>((__Local__325), USceneComponent::__PPO__AttachParent() )));
	__Local__326 = __Local__319;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__325), false, 0));
	__Local__324 = __Local__325;
	auto& __Local__327 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__297), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__328 = CastChecked<UTextRenderComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__329 = (*(AccessPrivateProperty<USceneComponent*>((__Local__328), USceneComponent::__PPO__AttachParent() )));
	__Local__329 = __Local__319;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__328), false, 0));
	__Local__327 = __Local__328;
	auto& __Local__330 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__297), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__331 = CastChecked<UAudioComponent>(__Local__297->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__332 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__331), USceneComponent::__PPO__AttachParent() )));
	__Local__332 = __Local__307;
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__331), false, 0));
	__Local__330 = __Local__331;
	auto& __Local__333 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__297), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__333 = __Local__307;
	auto& __Local__334 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__297), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__334 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__335 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__297), AActor::__PPO__RootComponent() )));
	__Local__335 = __Local__307;
	auto __Local__336 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__336);
	(((FBoolProperty*)__Local__47)->SetPropertyValue_InContainer((__Local__336), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_NearMenu4x2_C__pf3499602411::bpf__UserConstructionScript__pf()
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
				bpv__HorizontalGrabDotsCount__pf = 33.000000;
			}
		case 2:
			{
				bpv__VerticalGrabDotsCount__pf = 70.000000;
			}
		case 3:
			{
				Super::bpf__UserConstructionScript__pf();
			}
		case 4:
			{
				AActor*  __Local__337 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf = Cast<AUxtPressableToggleButtonActor>(((::IsValid(bpv__Button_Pin__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__337)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				UUxtPressableButtonComponent*  __Local__338 = ((UUxtPressableButtonComponent*)nullptr);
				bpv__PinButton__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UUxtPressableButtonComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))) : (__Local__338));
			}
		case 6:
			{
				UUxtToggleStateComponent*  __Local__339 = ((UUxtToggleStateComponent*)nullptr);
				bpv__PinButtonState__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UUxtToggleStateComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )))) : (__Local__339));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenu4x2_C__pf3499602411::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenu4x2_C__pf3499602411::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{90, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/Common/ToggleFeaturesPanel/BP_NearMenuBase.BP_NearMenuBase_C 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{91, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{104, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonActor 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeHoloMDL_Regular_42.Font_SegoeHoloMDL_Regular_42 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXTools/Fonts/M_DefaultFont.M_DefaultFont 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Semibold_42.Font_SegoeUI_Semibold_42 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_HoloLens2BackPlate.MI_HoloLens2BackPlate 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Models/SM_BackPlateRoundedThick_4.SM_BackPlateRoundedThick_4 
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
		{92, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableToggleButtonActor 
		{75, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Pointers/Meshes/SM_UnitQuad.SM_UnitQuad 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXTools/Materials/M_GrabbableDots.M_GrabbableDots 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBackPlateComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonComponent 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBasePressableButtonActor 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtToggleStateComponent 
		{76, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFollowComponent 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGenericManipulatorComponent 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFaceUserConstraint 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UXTools.EUxtButtonState 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtToggledDelegate__DelegateSignature 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGrabTargetComponent 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UXTools.UxtGrabPointerData 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{85, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorEnd_Mono_01.S_ManipulatorEnd_Mono_01 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorStart_Mono_01.S_ManipulatorStart_Mono_01 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFunctionLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_NearMenu4x2_C__pf3499602411
{
	FRegisterHelper__ABP_NearMenu4x2_C__pf3499602411()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/NearMenu/Blueprints/BP_NearMenu4x2"), &ABP_NearMenu4x2_C__pf3499602411::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_NearMenu4x2_C__pf3499602411 Instance;
};
FRegisterHelper__ABP_NearMenu4x2_C__pf3499602411 FRegisterHelper__ABP_NearMenu4x2_C__pf3499602411::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
