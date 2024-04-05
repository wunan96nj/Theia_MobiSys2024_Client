#include "NativizedAssets.h"
#include "BP_ToggleFeaturesPanel__pf3547134495.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableToggleButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBasePressableButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarTarget.h"
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
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtToggleStateComponent.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Utils/UxtFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_ToggleFeaturesPanel_C__pf3547134495::ABP_ToggleFeaturesPanel_C__pf3547134495(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__Buttons__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Buttons"));
	bpv__Button_Stats__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_Stats"));
	bpv__Button_Home__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_Home"));
	bpv__Button_Reposition__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_Reposition"));
	bpv__Button_Pin__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_Pin"));
	auto& __Local__0 = (*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__0 = FVector(1.600000, 12.800000, 6.400000);
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
	__Local__3 = FVector(0.001000, 5.600000, 0.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Left__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__4 = FVector(1.000000, 0.300000, 4.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Left__pf), true, 0));
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Right__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(0.001000, -5.600000, 0.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Right__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__6 = FVector(1.000000, 0.300000, 4.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Right__pf), true, 0));
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Top__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__7 = FVector(0.001000, 0.000000, 2.600000);
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Top__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__8 = FVector(1.000000, 6.000000, 0.300000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Top__pf), true, 0));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Bottom__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(0.001000, 0.000000, -2.600000);
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Bottom__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__10 = FVector(1.000000, 6.000000, 0.300000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Bottom__pf), true, 0));
	bpv__Buttons__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Buttons__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Buttons__pf), false, 0));
	bpv__Button_Stats__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_Stats__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_Stats__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__11 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__12 = (*(AccessPrivateProperty<AActor* >((bpv__Button_Stats__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__12 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_ToggleFeaturesPanel_C__pf3547134495::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__Button_Stats__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__13 = FVector(0.000000, 3.200000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Stats__pf), false, 0));
	bpv__Button_Home__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_Home__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_Home__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__14 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__15 = (*(AccessPrivateProperty<AActor* >((bpv__Button_Home__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__15 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_ToggleFeaturesPanel_C__pf3547134495::StaticClass())->MiscConvertedSubobjects[1]);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Home__pf), false, 0));
	bpv__Button_Reposition__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_Reposition__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__16 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_Reposition__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__16 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__17 = (*(AccessPrivateProperty<AActor* >((bpv__Button_Reposition__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__17 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_ToggleFeaturesPanel_C__pf3547134495::StaticClass())->MiscConvertedSubobjects[2]);
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__Button_Reposition__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__18 = FVector(0.000000, -3.200000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Reposition__pf), false, 0));
	bpv__Button_Pin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_Pin__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__19 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__19 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__20 = (*(AccessPrivateProperty<AActor* >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__20 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_ToggleFeaturesPanel_C__pf3547134495::StaticClass())->MiscConvertedSubobjects[3]);
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__Button_Pin__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__21 = FVector(0.000000, -8.200000, 1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Pin__pf), false, 0));
	bpv__ShouldAutoFollow__pf = true;
	auto& __Local__22 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__22 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanel_C__pf3547134495::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Buttons__pf)
	{
		bpv__Buttons__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_Stats__pf)
	{
		bpv__Button_Stats__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_Home__pf)
	{
		bpv__Button_Home__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_Reposition__pf)
	{
		bpv__Button_Reposition__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_Pin__pf)
	{
		bpv__Button_Pin__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanel_C__pf3547134495::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__23 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("ChildActor_Button01_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__23);
	auto& __Local__24 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__23), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__25 = CastChecked<UUxtToggleStateComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__27{};
	const FProperty* __Local__26 = __Local__27.Get();
	if (nullptr == __Local__26)
	{
		__Local__26 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__26);
		__Local__27 = __Local__26;
	}
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__25), false, 0));
	__Local__24 = __Local__25;
	auto& __Local__28 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__23), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__29 = CastChecked<UUxtBackPlateComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__30 = (*(AccessPrivateProperty<USceneComponent*>((__Local__29), USceneComponent::__PPO__AttachParent() )));
	auto __Local__31 = CastChecked<USceneComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__32 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__31), USceneComponent::__PPO__AttachParent() )));
	auto __Local__33 = CastChecked<UUxtPressableButtonComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__33), false, 0));
	__Local__32 = __Local__33;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__31), false, 0));
	__Local__30 = __Local__31;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__29), true, 0));
	__Local__28 = __Local__29;
	auto& __Local__34 = (*(AccessPrivateProperty<bool >((__Local__23), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__34 = false;
	auto& __Local__35 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__23), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__35.Icon = FString(TEXT("EA40"));
	auto& __Local__36 = (*(AccessPrivateProperty<FText >((__Local__23), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__36 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5CF2198946DF3D3C5BF06A85FFDBF82A]\", \"530166584542E0FBB10AFFA947C0BB27\", \"Stats\")")	);
	auto& __Local__37 = (*(AccessPrivateProperty<USceneComponent*>((__Local__23), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__37 = __Local__31;
	auto& __Local__38 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__23), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__39 = CastChecked<UUxtBackPlateComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__40 = (*(AccessPrivateProperty<USceneComponent*>((__Local__39), USceneComponent::__PPO__AttachParent() )));
	__Local__40 = __Local__31;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__39), true, 0));
	__Local__38 = __Local__39;
	auto& __Local__41 = (*(AccessPrivateProperty<USceneComponent*>((__Local__23), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__42 = CastChecked<USceneComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__43 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__42), USceneComponent::__PPO__AttachParent() )));
	__Local__43 = __Local__33;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__42), false, 0));
	__Local__41 = __Local__42;
	auto& __Local__44 = (*(AccessPrivateProperty<USceneComponent*>((__Local__23), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__45 = CastChecked<USceneComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__46 = (*(AccessPrivateProperty<USceneComponent*>((__Local__45), USceneComponent::__PPO__AttachParent() )));
	__Local__46 = __Local__42;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__45), false, 0));
	__Local__44 = __Local__45;
	auto& __Local__47 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__23), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__48 = CastChecked<UStaticMeshComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__49 = (*(AccessPrivateProperty<USceneComponent*>((__Local__48), USceneComponent::__PPO__AttachParent() )));
	__Local__49 = __Local__45;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__48), true, 0));
	__Local__47 = __Local__48;
	auto& __Local__50 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__23), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__51 = CastChecked<UTextRenderComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__52 = (*(AccessPrivateProperty<USceneComponent*>((__Local__51), USceneComponent::__PPO__AttachParent() )));
	__Local__52 = __Local__45;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__51), false, 0));
	__Local__50 = __Local__51;
	auto& __Local__53 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__23), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__54 = CastChecked<UTextRenderComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__55 = (*(AccessPrivateProperty<USceneComponent*>((__Local__54), USceneComponent::__PPO__AttachParent() )));
	__Local__55 = __Local__45;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__54), false, 0));
	__Local__53 = __Local__54;
	auto& __Local__56 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__23), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__57 = CastChecked<UAudioComponent>(__Local__23->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__58 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__57), USceneComponent::__PPO__AttachParent() )));
	__Local__58 = __Local__33;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__57), false, 0));
	__Local__56 = __Local__57;
	auto& __Local__59 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__23), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__59 = __Local__33;
	auto& __Local__60 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__23), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__60 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__61 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__23), AActor::__PPO__RootComponent() )));
	__Local__61 = __Local__33;
	auto __Local__62 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_Home_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__62);
	auto& __Local__63 = (*(AccessPrivateProperty<bool >((__Local__62), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__63 = false;
	auto& __Local__64 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__62), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__64.Icon = FString(TEXT("E80F"));
	auto& __Local__65 = (*(AccessPrivateProperty<FText >((__Local__62), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__65 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5CF2198946DF3D3C5BF06A85FFDBF82A]\", \"B88E240642D02104756D23848DA4AD87\", \"Home\")")	);
	auto& __Local__66 = (*(AccessPrivateProperty<USceneComponent*>((__Local__62), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__67 = CastChecked<USceneComponent>(__Local__62->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__68 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__67), USceneComponent::__PPO__AttachParent() )));
	auto __Local__69 = CastChecked<UUxtPressableButtonComponent>(__Local__62->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__69), false, 0));
	__Local__68 = __Local__69;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__67), false, 0));
	__Local__66 = __Local__67;
	auto& __Local__70 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__62), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__71 = CastChecked<UUxtBackPlateComponent>(__Local__62->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__72 = (*(AccessPrivateProperty<USceneComponent*>((__Local__71), USceneComponent::__PPO__AttachParent() )));
	__Local__72 = __Local__67;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__71), true, 0));
	__Local__70 = __Local__71;
	auto& __Local__73 = (*(AccessPrivateProperty<USceneComponent*>((__Local__62), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__74 = CastChecked<USceneComponent>(__Local__62->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__75 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__74), USceneComponent::__PPO__AttachParent() )));
	__Local__75 = __Local__69;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__74), false, 0));
	__Local__73 = __Local__74;
	auto& __Local__76 = (*(AccessPrivateProperty<USceneComponent*>((__Local__62), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__77 = CastChecked<USceneComponent>(__Local__62->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__78 = (*(AccessPrivateProperty<USceneComponent*>((__Local__77), USceneComponent::__PPO__AttachParent() )));
	__Local__78 = __Local__74;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__77), false, 0));
	__Local__76 = __Local__77;
	auto& __Local__79 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__62), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__80 = CastChecked<UStaticMeshComponent>(__Local__62->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__81 = (*(AccessPrivateProperty<USceneComponent*>((__Local__80), USceneComponent::__PPO__AttachParent() )));
	__Local__81 = __Local__77;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__80), true, 0));
	__Local__79 = __Local__80;
	auto& __Local__82 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__62), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__83 = CastChecked<UTextRenderComponent>(__Local__62->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__84 = (*(AccessPrivateProperty<USceneComponent*>((__Local__83), USceneComponent::__PPO__AttachParent() )));
	__Local__84 = __Local__77;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__83), false, 0));
	__Local__82 = __Local__83;
	auto& __Local__85 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__62), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__86 = CastChecked<UTextRenderComponent>(__Local__62->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__87 = (*(AccessPrivateProperty<USceneComponent*>((__Local__86), USceneComponent::__PPO__AttachParent() )));
	__Local__87 = __Local__77;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__86), false, 0));
	__Local__85 = __Local__86;
	auto& __Local__88 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__62), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__89 = CastChecked<UAudioComponent>(__Local__62->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__90 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__89), USceneComponent::__PPO__AttachParent() )));
	__Local__90 = __Local__69;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__89), false, 0));
	__Local__88 = __Local__89;
	auto& __Local__91 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__62), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__91 = __Local__69;
	auto& __Local__92 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__62), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__92 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__93 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__62), AActor::__PPO__RootComponent() )));
	__Local__93 = __Local__69;
	auto __Local__94 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_Reposition_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__94);
	auto& __Local__95 = (*(AccessPrivateProperty<bool >((__Local__94), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__95 = false;
	auto& __Local__96 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__94), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__96.Icon = FString(TEXT("E777"));
	auto& __Local__97 = (*(AccessPrivateProperty<FText >((__Local__94), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__97 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5CF2198946DF3D3C5BF06A85FFDBF82A]\", \"BEDB100742F03D974105D1843A8FBE3A\", \"Reposition\")")	);
	auto& __Local__98 = (*(AccessPrivateProperty<USceneComponent*>((__Local__94), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__99 = CastChecked<USceneComponent>(__Local__94->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__100 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__99), USceneComponent::__PPO__AttachParent() )));
	auto __Local__101 = CastChecked<UUxtPressableButtonComponent>(__Local__94->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__101), false, 0));
	__Local__100 = __Local__101;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__99), false, 0));
	__Local__98 = __Local__99;
	auto& __Local__102 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__94), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__103 = CastChecked<UUxtBackPlateComponent>(__Local__94->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__104 = (*(AccessPrivateProperty<USceneComponent*>((__Local__103), USceneComponent::__PPO__AttachParent() )));
	__Local__104 = __Local__99;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__103), true, 0));
	__Local__102 = __Local__103;
	auto& __Local__105 = (*(AccessPrivateProperty<USceneComponent*>((__Local__94), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__106 = CastChecked<USceneComponent>(__Local__94->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__107 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__106), USceneComponent::__PPO__AttachParent() )));
	__Local__107 = __Local__101;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__106), false, 0));
	__Local__105 = __Local__106;
	auto& __Local__108 = (*(AccessPrivateProperty<USceneComponent*>((__Local__94), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__109 = CastChecked<USceneComponent>(__Local__94->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__110 = (*(AccessPrivateProperty<USceneComponent*>((__Local__109), USceneComponent::__PPO__AttachParent() )));
	__Local__110 = __Local__106;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__109), false, 0));
	__Local__108 = __Local__109;
	auto& __Local__111 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__94), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__112 = CastChecked<UStaticMeshComponent>(__Local__94->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__113 = (*(AccessPrivateProperty<USceneComponent*>((__Local__112), USceneComponent::__PPO__AttachParent() )));
	__Local__113 = __Local__109;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__112), true, 0));
	__Local__111 = __Local__112;
	auto& __Local__114 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__94), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__115 = CastChecked<UTextRenderComponent>(__Local__94->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__116 = (*(AccessPrivateProperty<USceneComponent*>((__Local__115), USceneComponent::__PPO__AttachParent() )));
	__Local__116 = __Local__109;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__115), false, 0));
	__Local__114 = __Local__115;
	auto& __Local__117 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__94), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__118 = CastChecked<UTextRenderComponent>(__Local__94->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__119 = (*(AccessPrivateProperty<USceneComponent*>((__Local__118), USceneComponent::__PPO__AttachParent() )));
	__Local__119 = __Local__109;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__118), false, 0));
	__Local__117 = __Local__118;
	auto& __Local__120 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__94), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__121 = CastChecked<UAudioComponent>(__Local__94->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__122 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__121), USceneComponent::__PPO__AttachParent() )));
	__Local__122 = __Local__101;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__121), false, 0));
	__Local__120 = __Local__121;
	auto& __Local__123 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__94), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__123 = __Local__101;
	auto& __Local__124 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__94), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__124 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__125 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__94), AActor::__PPO__RootComponent() )));
	__Local__125 = __Local__101;
	auto __Local__126 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("Button_Pin_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__126);
	auto& __Local__127 = (*(AccessPrivateProperty<bool >((__Local__126), AUxtPressableToggleButtonActor::__PPO__bIsInitiallyChecked() )));
	__Local__127 = true;
	auto& __Local__128 = (*(AccessPrivateProperty<bool >((__Local__126), AUxtPressableToggleButtonActor::__PPO__bToggleOnRelease() )));
	__Local__128 = true;
	auto& __Local__129 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__126), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__130 = CastChecked<UUxtToggleStateComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__130), false, 0));
	__Local__129 = __Local__130;
	auto& __Local__131 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__126), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__132 = CastChecked<UUxtBackPlateComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__133 = (*(AccessPrivateProperty<USceneComponent*>((__Local__132), USceneComponent::__PPO__AttachParent() )));
	auto __Local__134 = CastChecked<USceneComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__135 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__134), USceneComponent::__PPO__AttachParent() )));
	auto __Local__136 = CastChecked<UUxtPressableButtonComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__136), false, 0));
	__Local__135 = __Local__136;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__134), false, 0));
	__Local__133 = __Local__134;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__132), true, 0));
	__Local__131 = __Local__132;
	auto& __Local__137 = (*(AccessPrivateProperty<bool >((__Local__126), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__137 = false;
	auto& __Local__138 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__126), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__138.Icon = FString(TEXT("E718"));
	__Local__138.TextBrush.RelativeRotation = FRotator(0.000000, 0.000000, 45.000000);
	auto& __Local__139 = (*(AccessPrivateProperty<FText >((__Local__126), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__139 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[5CF2198946DF3D3C5BF06A85FFDBF82A]\", \"C6F331564BD541E2D9E1D0B507AB1932\", \"Pin\")")	);
	auto& __Local__140 = (*(AccessPrivateProperty<USceneComponent*>((__Local__126), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__140 = __Local__134;
	auto& __Local__141 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__126), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__142 = CastChecked<UUxtBackPlateComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__143 = (*(AccessPrivateProperty<USceneComponent*>((__Local__142), USceneComponent::__PPO__AttachParent() )));
	__Local__143 = __Local__134;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__142), true, 0));
	__Local__141 = __Local__142;
	auto& __Local__144 = (*(AccessPrivateProperty<USceneComponent*>((__Local__126), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__145 = CastChecked<USceneComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__146 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__145), USceneComponent::__PPO__AttachParent() )));
	__Local__146 = __Local__136;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__145), false, 0));
	__Local__144 = __Local__145;
	auto& __Local__147 = (*(AccessPrivateProperty<USceneComponent*>((__Local__126), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__148 = CastChecked<USceneComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__149 = (*(AccessPrivateProperty<USceneComponent*>((__Local__148), USceneComponent::__PPO__AttachParent() )));
	__Local__149 = __Local__145;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__148), false, 0));
	__Local__147 = __Local__148;
	auto& __Local__150 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__126), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__151 = CastChecked<UStaticMeshComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__152 = (*(AccessPrivateProperty<USceneComponent*>((__Local__151), USceneComponent::__PPO__AttachParent() )));
	__Local__152 = __Local__148;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__151), true, 0));
	__Local__150 = __Local__151;
	auto& __Local__153 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__126), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__154 = CastChecked<UTextRenderComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__155 = (*(AccessPrivateProperty<USceneComponent*>((__Local__154), USceneComponent::__PPO__AttachParent() )));
	__Local__155 = __Local__148;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__154), false, 0));
	__Local__153 = __Local__154;
	auto& __Local__156 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__126), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__157 = CastChecked<UTextRenderComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__158 = (*(AccessPrivateProperty<USceneComponent*>((__Local__157), USceneComponent::__PPO__AttachParent() )));
	__Local__158 = __Local__148;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__157), false, 0));
	__Local__156 = __Local__157;
	auto& __Local__159 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__126), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__160 = CastChecked<UAudioComponent>(__Local__126->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__161 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__160), USceneComponent::__PPO__AttachParent() )));
	__Local__161 = __Local__136;
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__160), false, 0));
	__Local__159 = __Local__160;
	auto& __Local__162 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__126), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__162 = __Local__136;
	auto& __Local__163 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__126), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__163 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__164 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__126), AActor::__PPO__RootComponent() )));
	__Local__164 = __Local__136;
	auto __Local__165 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__165);
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__165), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	AActor*  __Local__166 = ((AActor*)nullptr);
	b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor_1__pf = Cast<AUxtPressableToggleButtonActor>(((::IsValid(bpv__Button_Stats__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__Button_Stats__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__166)));
	b1l__K2Node_DynamicCast_bSuccess_3__pf = (b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor_1__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess_3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor_1__pf) && ::IsValid((*(AccessPrivateProperty<UUxtToggleStateComponent* >((b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor_1__pf), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )))))
	{
		bpfv__CallFunc_IsChecked_ReturnValue__pf = (*(AccessPrivateProperty<UUxtToggleStateComponent* >((b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor_1__pf), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )))->UUxtToggleStateComponent::IsChecked();
	}
	if (!bpfv__CallFunc_IsChecked_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("stat unit")), ((APlayerController*)nullptr));
	return; //KCST_EndOfThread
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_1(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				__CurrentState = 5;
				break;
			}
		case 5:
			{
				Super::bpf__ReceiveBeginPlay__pf();
			}
		case 6:
			{
				__StateStack.Push(11);
				__StateStack.Push(9);
			}
		case 7:
			{
				AActor*  __Local__167 = ((AActor*)nullptr);
				b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf = Cast<AUxtPressableToggleButtonActor>(((::IsValid(bpv__Button_Stats__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__Button_Stats__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__167)));
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("Event ToggleStats")));
				if(::IsValid(b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf) && ::IsValid((*(AccessPrivateProperty<UUxtPressableButtonComponent* >((b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))))
				{
					(*(AccessPrivateProperty<UUxtPressableButtonComponent* >((b1l__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))->OnButtonReleased.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				AActor*  __Local__168 = ((AActor*)nullptr);
				b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf = Cast<AUxtPressableButtonActor>(((::IsValid(bpv__Button_Home__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__Button_Home__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__168)));
				b1l__K2Node_DynamicCast_bSuccess_1__pf = (b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("Event HomeReleased")));
				if(::IsValid(b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf) && ::IsValid((*(AccessPrivateProperty<UUxtPressableButtonComponent* >((b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))))
				{
					(*(AccessPrivateProperty<UUxtPressableButtonComponent* >((b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))->OnButtonReleased.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				AActor*  __Local__169 = ((AActor*)nullptr);
				b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf = Cast<AUxtPressableButtonActor>(((::IsValid(bpv__Button_Reposition__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__Button_Reposition__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__169)));
				b1l__K2Node_DynamicCast_bSuccess_2__pf = (b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				b1l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("Event Reposition")));
				if(::IsValid(b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf) && ::IsValid((*(AccessPrivateProperty<UUxtPressableButtonComponent* >((b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))))
				{
					(*(AccessPrivateProperty<UUxtPressableButtonComponent* >((b1l__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))->OnButtonReleased.AddUnique(b1l__K2Node_CreateDelegate_OutputDelegate_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpf__RepositionLevel__pf();
	return; //KCST_EndOfThread
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("Loader")), true, FString(TEXT("")));
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				__CurrentState = 18;
				break;
			}
		case 18:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(2, 1916506125, TEXT("ExecuteUbergraph_BP_ToggleFeaturesPanel_3"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("stat unit")), ((APlayerController*)nullptr));
	return; //KCST_EndOfThread
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	Super::bpf__ReceiveTick__pf(b1l__K2Node_Event_DeltaSeconds__pf);
	return; //KCST_EndOfThread
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf)
{
	b1l__K2Node_Event_EndPlayReason__pf = bpp__EndPlayReason__pf;
	bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_0(21);
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__EventxReposition__pfT(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf)
{
	b1l__K2Node_CustomEvent_Button__pf = bpp__Button__pf;
	b1l__K2Node_CustomEvent_Pointer__pf = bpp__Pointer__pf;
	bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_2(19);
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__EventxHomeReleased__pfT(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf)
{
	b1l__K2Node_CustomEvent_Button_1__pf = bpp__Button__pf;
	b1l__K2Node_CustomEvent_Pointer_1__pf = bpp__Pointer__pf;
	bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_3(17);
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__EventxToggleStats__pfT(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf)
{
	b1l__K2Node_CustomEvent_Button_2__pf = bpp__Button__pf;
	b1l__K2Node_CustomEvent_Pointer_2__pf = bpp__Pointer__pf;
	bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_4(15);
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b1l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_5(13);
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_ToggleFeaturesPanel__pf_1(4);
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__UserConstructionScript__pf()
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
				Super::bpf__UserConstructionScript__pf();
			}
		case 2:
			{
				AActor*  __Local__171 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf = Cast<AUxtPressableToggleButtonActor>(((::IsValid(bpv__Button_Pin__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__171)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				UUxtPressableButtonComponent*  __Local__172 = ((UUxtPressableButtonComponent*)nullptr);
				bpv__PinButton__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UUxtPressableButtonComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))) : (__Local__172));
			}
		case 4:
			{
				UUxtToggleStateComponent*  __Local__173 = ((UUxtToggleStateComponent*)nullptr);
				bpv__PinButtonState__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UUxtToggleStateComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )))) : (__Local__173));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_ToggleFeaturesPanel_C__pf3547134495::bpf__RepositionLevel__pf()
{
	FRotator bpfv__RotationOffset__pf(EForceInit::ForceInit);
	FVector bpfv__LocationOffset__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_ProjectVectorOnToPlane_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_NegateRotator_ReturnValue__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(7);
				__StateStack.Push(5);
				__StateStack.Push(4);
				__StateStack.Push(3);
			}
		case 2:
			{
				if(::IsValid(bpv__PinButtonState__pf))
				{
					bpv__PinButtonState__pf->UUxtToggleStateComponent::SetIsChecked(true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf, /*out*/ bpfv__CallFunc_GetOrientationAndPosition_DevicePosition_1__pf);
				bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation_1__pf);
				bpfv__CallFunc_ProjectVectorOnToPlane_ReturnValue__pf = UKismetMathLibrary::ProjectVectorOnToPlane(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, FVector(0.000000,0.000000,1.000000));
				bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_ProjectVectorOnToPlane_ReturnValue__pf);
				bpfv__CallFunc_NegateRotator_ReturnValue__pf = UKismetMathLibrary::NegateRotator(bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf);
				bpfv__RotationOffset__pf = bpfv__CallFunc_NegateRotator_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__Scene__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Scene__pf->USceneComponent::K2_GetComponentLocation();
				}
				UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpfv__RotationOffset__pf);
				bpfv__LocationOffset__pf = bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				if(::IsValid(bpv__Scene__pf))
				{
					bpv__Scene__pf->USceneComponent::K2_SetWorldLocation(bpfv__LocationOffset__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__Scene__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Scene__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, bpfv__RotationOffset__pf);
				if(::IsValid(bpv__Scene__pf))
				{
					bpv__Scene__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_ComposeRotators_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(0.000000, EOrientPositionSelector::OrientationAndPosition);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanel_C__pf3547134495::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ToggleFeaturesPanel_C__pf3547134495::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{90, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/Common/ToggleFeaturesPanel/BP_NearMenuBase.BP_NearMenuBase_C 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
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
		{104, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonActor 
		{75, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Pointers/Meshes/SM_UnitQuad.SM_UnitQuad 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXTools/Materials/M_GrabbableDots.M_GrabbableDots 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBackPlateComponent 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtButtonReleasedDelegate__DelegateSignature 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonComponent 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPointerComponent 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EEndPlayReason 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBasePressableButtonActor 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtToggleStateComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{76, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFollowComponent 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGenericManipulatorComponent 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFaceUserConstraint 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UXTools.EUxtButtonState 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtToggledDelegate__DelegateSignature 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGrabTargetComponent 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UXTools.UxtGrabPointerData 
		{85, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorEnd_Mono_01.S_ManipulatorEnd_Mono_01 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorStart_Mono_01.S_ManipulatorStart_Mono_01 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFunctionLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_ToggleFeaturesPanel_C__pf3547134495
{
	FRegisterHelper__ABP_ToggleFeaturesPanel_C__pf3547134495()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/Common/ToggleFeaturesPanel/BP_ToggleFeaturesPanel"), &ABP_ToggleFeaturesPanel_C__pf3547134495::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_ToggleFeaturesPanel_C__pf3547134495 Instance;
};
FRegisterHelper__ABP_ToggleFeaturesPanel_C__pf3547134495 FRegisterHelper__ABP_ToggleFeaturesPanel_C__pf3547134495::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
