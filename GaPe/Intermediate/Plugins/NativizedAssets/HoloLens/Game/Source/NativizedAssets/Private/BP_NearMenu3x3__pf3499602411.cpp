#include "NativizedAssets.h"
#include "BP_NearMenu3x3__pf3499602411.h"
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
ABP_NearMenu3x3_C__pf3499602411::ABP_NearMenu3x3_C__pf3499602411(const FObjectInitializer& ObjectInitializer) : Super()
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
	bpv__Button_09__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_09"));
	bpv__Button_Pin__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_Pin"));
	auto& __Local__0 = (*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__0 = FVector(1.600000, 12.800000, 12.800000);
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
	__Local__4 = FVector(1.000000, 0.300000, 6.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Left__pf), true, 0));
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Right__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(0.001000, -5.600000, 0.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Right__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__6 = FVector(1.000000, 0.300000, 6.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Right__pf), true, 0));
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Top__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__7 = FVector(0.001000, 0.000000, 5.600000);
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Top__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__8 = FVector(1.000000, 6.000000, 0.300000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Top__pf), true, 0));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Bottom__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(0.001000, 0.000000, -5.600000);
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Bottom__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__10 = FVector(1.000000, 6.000000, 0.300000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Bottom__pf), true, 0));
	bpv__Buttons__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Buttons__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Buttons__pf), false, 0));
	bpv__Button_01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_01__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_01__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__11 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__12 = (*(AccessPrivateProperty<AActor* >((bpv__Button_01__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__12 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__Button_01__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__13 = FVector(0.000000, 3.200000, 3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_01__pf), false, 0));
	bpv__Button_02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_02__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_02__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__14 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__15 = (*(AccessPrivateProperty<AActor* >((bpv__Button_02__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__15 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[1]);
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__Button_02__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(0.000000, 0.000000, 3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_02__pf), false, 0));
	bpv__Button_03__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_03__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__17 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_03__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__17 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__18 = (*(AccessPrivateProperty<AActor* >((bpv__Button_03__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__18 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[2]);
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__Button_03__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__19 = FVector(0.000000, -3.200000, 3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_03__pf), false, 0));
	bpv__Button_04__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_04__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__20 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_04__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__20 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__21 = (*(AccessPrivateProperty<AActor* >((bpv__Button_04__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__21 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[3]);
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__Button_04__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__22 = FVector(0.000000, 3.200000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_04__pf), false, 0));
	bpv__Button_05__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_05__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__23 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_05__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__23 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__24 = (*(AccessPrivateProperty<AActor* >((bpv__Button_05__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__24 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[4]);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_05__pf), false, 0));
	bpv__Button_06__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_06__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__25 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_06__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__25 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__26 = (*(AccessPrivateProperty<AActor* >((bpv__Button_06__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__26 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[5]);
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__Button_06__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__27 = FVector(0.000000, -3.200000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_06__pf), false, 0));
	bpv__Button_07__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_07__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__28 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_07__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__28 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__29 = (*(AccessPrivateProperty<AActor* >((bpv__Button_07__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__29 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[6]);
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__Button_07__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__30 = FVector(0.000000, 3.200000, -3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_07__pf), false, 0));
	bpv__Button_08__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_08__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__31 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_08__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__31 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__32 = (*(AccessPrivateProperty<AActor* >((bpv__Button_08__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__32 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[7]);
	auto& __Local__33 = (*(AccessPrivateProperty<FVector >((bpv__Button_08__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__33 = FVector(0.000000, 0.000000, -3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_08__pf), false, 0));
	bpv__Button_09__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_09__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__34 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_09__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__34 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__35 = (*(AccessPrivateProperty<AActor* >((bpv__Button_09__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__35 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[8]);
	auto& __Local__36 = (*(AccessPrivateProperty<FVector >((bpv__Button_09__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__36 = FVector(0.000000, -3.200000, -3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_09__pf), false, 0));
	bpv__Button_Pin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_Pin__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__37 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__37 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__38 = (*(AccessPrivateProperty<AActor* >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__38 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x3_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[9]);
	auto& __Local__39 = (*(AccessPrivateProperty<FVector >((bpv__Button_Pin__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__39 = FVector(0.000000, -8.200000, 4.800000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Pin__pf), false, 0));
	auto& __Local__40 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__40 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_NearMenu3x3_C__pf3499602411::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__Button_09__pf)
	{
		bpv__Button_09__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_Pin__pf)
	{
		bpv__Button_Pin__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenu3x3_C__pf3499602411::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__41 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_01_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__41);
	auto& __Local__42 = (*(AccessPrivateProperty<bool >((__Local__41), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__42 = false;
	auto& __Local__43 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__41), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__43.Icon = FString(TEXT("E713"));
	auto& __Local__44 = (*(AccessPrivateProperty<FText >((__Local__41), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__44 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"3C388EA5451699FE984535B6D9D6B856\", \"Menu One\")")	);
	auto& __Local__45 = (*(AccessPrivateProperty<USceneComponent*>((__Local__41), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__46 = CastChecked<USceneComponent>(__Local__41->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__47 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__46), USceneComponent::__PPO__AttachParent() )));
	auto __Local__48 = CastChecked<UUxtPressableButtonComponent>(__Local__41->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__50{};
	const FProperty* __Local__49 = __Local__50.Get();
	if (nullptr == __Local__49)
	{
		__Local__49 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__49);
		__Local__50 = __Local__49;
	}
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__48), false, 0));
	__Local__47 = __Local__48;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__46), false, 0));
	__Local__45 = __Local__46;
	auto& __Local__51 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__41), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__52 = CastChecked<UUxtBackPlateComponent>(__Local__41->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__53 = (*(AccessPrivateProperty<USceneComponent*>((__Local__52), USceneComponent::__PPO__AttachParent() )));
	__Local__53 = __Local__46;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__52), true, 0));
	__Local__51 = __Local__52;
	auto& __Local__54 = (*(AccessPrivateProperty<USceneComponent*>((__Local__41), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__55 = CastChecked<USceneComponent>(__Local__41->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__56 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__55), USceneComponent::__PPO__AttachParent() )));
	__Local__56 = __Local__48;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__55), false, 0));
	__Local__54 = __Local__55;
	auto& __Local__57 = (*(AccessPrivateProperty<USceneComponent*>((__Local__41), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__58 = CastChecked<USceneComponent>(__Local__41->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__59 = (*(AccessPrivateProperty<USceneComponent*>((__Local__58), USceneComponent::__PPO__AttachParent() )));
	__Local__59 = __Local__55;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__58), false, 0));
	__Local__57 = __Local__58;
	auto& __Local__60 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__41), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__61 = CastChecked<UStaticMeshComponent>(__Local__41->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__62 = (*(AccessPrivateProperty<USceneComponent*>((__Local__61), USceneComponent::__PPO__AttachParent() )));
	__Local__62 = __Local__58;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__61), true, 0));
	__Local__60 = __Local__61;
	auto& __Local__63 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__41), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__64 = CastChecked<UTextRenderComponent>(__Local__41->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__65 = (*(AccessPrivateProperty<USceneComponent*>((__Local__64), USceneComponent::__PPO__AttachParent() )));
	__Local__65 = __Local__58;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__64), false, 0));
	__Local__63 = __Local__64;
	auto& __Local__66 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__41), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__67 = CastChecked<UTextRenderComponent>(__Local__41->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__68 = (*(AccessPrivateProperty<USceneComponent*>((__Local__67), USceneComponent::__PPO__AttachParent() )));
	__Local__68 = __Local__58;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__67), false, 0));
	__Local__66 = __Local__67;
	auto& __Local__69 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__41), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__70 = CastChecked<UAudioComponent>(__Local__41->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__71 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__70), USceneComponent::__PPO__AttachParent() )));
	__Local__71 = __Local__48;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__70), false, 0));
	__Local__69 = __Local__70;
	auto& __Local__72 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__41), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__72 = __Local__48;
	auto& __Local__73 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__41), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__73 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__74 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__41), AActor::__PPO__RootComponent() )));
	__Local__74 = __Local__48;
	auto __Local__75 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_02_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__75);
	auto& __Local__76 = (*(AccessPrivateProperty<bool >((__Local__75), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__76 = false;
	auto& __Local__77 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__75), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__77.Icon = FString(TEXT("E72D"));
	auto& __Local__78 = (*(AccessPrivateProperty<FText >((__Local__75), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__78 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"145ABAD94CC5B8542152ACACF1051A1E\", \"Menu Two\")")	);
	auto& __Local__79 = (*(AccessPrivateProperty<USceneComponent*>((__Local__75), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__80 = CastChecked<USceneComponent>(__Local__75->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__81 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__80), USceneComponent::__PPO__AttachParent() )));
	auto __Local__82 = CastChecked<UUxtPressableButtonComponent>(__Local__75->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__82), false, 0));
	__Local__81 = __Local__82;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__80), false, 0));
	__Local__79 = __Local__80;
	auto& __Local__83 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__75), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__84 = CastChecked<UUxtBackPlateComponent>(__Local__75->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__85 = (*(AccessPrivateProperty<USceneComponent*>((__Local__84), USceneComponent::__PPO__AttachParent() )));
	__Local__85 = __Local__80;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__84), true, 0));
	__Local__83 = __Local__84;
	auto& __Local__86 = (*(AccessPrivateProperty<USceneComponent*>((__Local__75), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__87 = CastChecked<USceneComponent>(__Local__75->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__88 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__87), USceneComponent::__PPO__AttachParent() )));
	__Local__88 = __Local__82;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__87), false, 0));
	__Local__86 = __Local__87;
	auto& __Local__89 = (*(AccessPrivateProperty<USceneComponent*>((__Local__75), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__90 = CastChecked<USceneComponent>(__Local__75->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__91 = (*(AccessPrivateProperty<USceneComponent*>((__Local__90), USceneComponent::__PPO__AttachParent() )));
	__Local__91 = __Local__87;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__90), false, 0));
	__Local__89 = __Local__90;
	auto& __Local__92 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__75), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__93 = CastChecked<UStaticMeshComponent>(__Local__75->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__94 = (*(AccessPrivateProperty<USceneComponent*>((__Local__93), USceneComponent::__PPO__AttachParent() )));
	__Local__94 = __Local__90;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__93), true, 0));
	__Local__92 = __Local__93;
	auto& __Local__95 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__75), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__96 = CastChecked<UTextRenderComponent>(__Local__75->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__97 = (*(AccessPrivateProperty<USceneComponent*>((__Local__96), USceneComponent::__PPO__AttachParent() )));
	__Local__97 = __Local__90;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__96), false, 0));
	__Local__95 = __Local__96;
	auto& __Local__98 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__75), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__99 = CastChecked<UTextRenderComponent>(__Local__75->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__100 = (*(AccessPrivateProperty<USceneComponent*>((__Local__99), USceneComponent::__PPO__AttachParent() )));
	__Local__100 = __Local__90;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__99), false, 0));
	__Local__98 = __Local__99;
	auto& __Local__101 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__75), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__102 = CastChecked<UAudioComponent>(__Local__75->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__103 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__102), USceneComponent::__PPO__AttachParent() )));
	__Local__103 = __Local__82;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__102), false, 0));
	__Local__101 = __Local__102;
	auto& __Local__104 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__75), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__104 = __Local__82;
	auto& __Local__105 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__75), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__105 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__106 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__75), AActor::__PPO__RootComponent() )));
	__Local__106 = __Local__82;
	auto __Local__107 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_03_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__107);
	auto& __Local__108 = (*(AccessPrivateProperty<bool >((__Local__107), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__108 = false;
	auto& __Local__109 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__107), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__109.Icon = FString(TEXT("E895"));
	auto& __Local__110 = (*(AccessPrivateProperty<FText >((__Local__107), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__110 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"80651A864E44F113FEC7CB8F85F5E831\", \"Menu Three\")")	);
	auto& __Local__111 = (*(AccessPrivateProperty<USceneComponent*>((__Local__107), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__112 = CastChecked<USceneComponent>(__Local__107->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__113 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__112), USceneComponent::__PPO__AttachParent() )));
	auto __Local__114 = CastChecked<UUxtPressableButtonComponent>(__Local__107->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__114), false, 0));
	__Local__113 = __Local__114;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__112), false, 0));
	__Local__111 = __Local__112;
	auto& __Local__115 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__107), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__116 = CastChecked<UUxtBackPlateComponent>(__Local__107->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__117 = (*(AccessPrivateProperty<USceneComponent*>((__Local__116), USceneComponent::__PPO__AttachParent() )));
	__Local__117 = __Local__112;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__116), true, 0));
	__Local__115 = __Local__116;
	auto& __Local__118 = (*(AccessPrivateProperty<USceneComponent*>((__Local__107), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__119 = CastChecked<USceneComponent>(__Local__107->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__120 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__119), USceneComponent::__PPO__AttachParent() )));
	__Local__120 = __Local__114;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__119), false, 0));
	__Local__118 = __Local__119;
	auto& __Local__121 = (*(AccessPrivateProperty<USceneComponent*>((__Local__107), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__122 = CastChecked<USceneComponent>(__Local__107->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__123 = (*(AccessPrivateProperty<USceneComponent*>((__Local__122), USceneComponent::__PPO__AttachParent() )));
	__Local__123 = __Local__119;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__122), false, 0));
	__Local__121 = __Local__122;
	auto& __Local__124 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__107), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__125 = CastChecked<UStaticMeshComponent>(__Local__107->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__126 = (*(AccessPrivateProperty<USceneComponent*>((__Local__125), USceneComponent::__PPO__AttachParent() )));
	__Local__126 = __Local__122;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__125), true, 0));
	__Local__124 = __Local__125;
	auto& __Local__127 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__107), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__128 = CastChecked<UTextRenderComponent>(__Local__107->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__129 = (*(AccessPrivateProperty<USceneComponent*>((__Local__128), USceneComponent::__PPO__AttachParent() )));
	__Local__129 = __Local__122;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__128), false, 0));
	__Local__127 = __Local__128;
	auto& __Local__130 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__107), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__131 = CastChecked<UTextRenderComponent>(__Local__107->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__132 = (*(AccessPrivateProperty<USceneComponent*>((__Local__131), USceneComponent::__PPO__AttachParent() )));
	__Local__132 = __Local__122;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__131), false, 0));
	__Local__130 = __Local__131;
	auto& __Local__133 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__107), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__134 = CastChecked<UAudioComponent>(__Local__107->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__135 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__134), USceneComponent::__PPO__AttachParent() )));
	__Local__135 = __Local__114;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__134), false, 0));
	__Local__133 = __Local__134;
	auto& __Local__136 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__107), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__136 = __Local__114;
	auto& __Local__137 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__107), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__137 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__138 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__107), AActor::__PPO__RootComponent() )));
	__Local__138 = __Local__114;
	auto __Local__139 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_04_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__139);
	auto& __Local__140 = (*(AccessPrivateProperty<bool >((__Local__139), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__140 = false;
	auto& __Local__141 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__139), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__141.Icon = FString(TEXT("E706"));
	auto& __Local__142 = (*(AccessPrivateProperty<FText >((__Local__139), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__142 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"99508E1F40A6A323C2EC48B2BCDDF8CB\", \"Menu Four\")")	);
	auto& __Local__143 = (*(AccessPrivateProperty<USceneComponent*>((__Local__139), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__144 = CastChecked<USceneComponent>(__Local__139->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__145 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__144), USceneComponent::__PPO__AttachParent() )));
	auto __Local__146 = CastChecked<UUxtPressableButtonComponent>(__Local__139->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__146), false, 0));
	__Local__145 = __Local__146;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__144), false, 0));
	__Local__143 = __Local__144;
	auto& __Local__147 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__139), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__148 = CastChecked<UUxtBackPlateComponent>(__Local__139->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__149 = (*(AccessPrivateProperty<USceneComponent*>((__Local__148), USceneComponent::__PPO__AttachParent() )));
	__Local__149 = __Local__144;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__148), true, 0));
	__Local__147 = __Local__148;
	auto& __Local__150 = (*(AccessPrivateProperty<USceneComponent*>((__Local__139), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__151 = CastChecked<USceneComponent>(__Local__139->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__152 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__151), USceneComponent::__PPO__AttachParent() )));
	__Local__152 = __Local__146;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__151), false, 0));
	__Local__150 = __Local__151;
	auto& __Local__153 = (*(AccessPrivateProperty<USceneComponent*>((__Local__139), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__154 = CastChecked<USceneComponent>(__Local__139->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__155 = (*(AccessPrivateProperty<USceneComponent*>((__Local__154), USceneComponent::__PPO__AttachParent() )));
	__Local__155 = __Local__151;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__154), false, 0));
	__Local__153 = __Local__154;
	auto& __Local__156 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__139), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__157 = CastChecked<UStaticMeshComponent>(__Local__139->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__158 = (*(AccessPrivateProperty<USceneComponent*>((__Local__157), USceneComponent::__PPO__AttachParent() )));
	__Local__158 = __Local__154;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__157), true, 0));
	__Local__156 = __Local__157;
	auto& __Local__159 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__139), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__160 = CastChecked<UTextRenderComponent>(__Local__139->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__161 = (*(AccessPrivateProperty<USceneComponent*>((__Local__160), USceneComponent::__PPO__AttachParent() )));
	__Local__161 = __Local__154;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__160), false, 0));
	__Local__159 = __Local__160;
	auto& __Local__162 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__139), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__163 = CastChecked<UTextRenderComponent>(__Local__139->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__164 = (*(AccessPrivateProperty<USceneComponent*>((__Local__163), USceneComponent::__PPO__AttachParent() )));
	__Local__164 = __Local__154;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__163), false, 0));
	__Local__162 = __Local__163;
	auto& __Local__165 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__139), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__166 = CastChecked<UAudioComponent>(__Local__139->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__167 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__166), USceneComponent::__PPO__AttachParent() )));
	__Local__167 = __Local__146;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__166), false, 0));
	__Local__165 = __Local__166;
	auto& __Local__168 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__139), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__168 = __Local__146;
	auto& __Local__169 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__139), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__169 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__170 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__139), AActor::__PPO__RootComponent() )));
	__Local__170 = __Local__146;
	auto __Local__171 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_05_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__171);
	auto& __Local__172 = (*(AccessPrivateProperty<bool >((__Local__171), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__172 = false;
	auto& __Local__173 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__171), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__173.Icon = FString(TEXT("E942"));
	auto& __Local__174 = (*(AccessPrivateProperty<FText >((__Local__171), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__174 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"9E060BE74D1551443A6B759925FB7EBF\", \"Menu Five\")")	);
	auto& __Local__175 = (*(AccessPrivateProperty<USceneComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__176 = CastChecked<USceneComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__177 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__176), USceneComponent::__PPO__AttachParent() )));
	auto __Local__178 = CastChecked<UUxtPressableButtonComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__178), false, 0));
	__Local__177 = __Local__178;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__176), false, 0));
	__Local__175 = __Local__176;
	auto& __Local__179 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__180 = CastChecked<UUxtBackPlateComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__181 = (*(AccessPrivateProperty<USceneComponent*>((__Local__180), USceneComponent::__PPO__AttachParent() )));
	__Local__181 = __Local__176;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__180), true, 0));
	__Local__179 = __Local__180;
	auto& __Local__182 = (*(AccessPrivateProperty<USceneComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__183 = CastChecked<USceneComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__184 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__183), USceneComponent::__PPO__AttachParent() )));
	__Local__184 = __Local__178;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__183), false, 0));
	__Local__182 = __Local__183;
	auto& __Local__185 = (*(AccessPrivateProperty<USceneComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__186 = CastChecked<USceneComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__187 = (*(AccessPrivateProperty<USceneComponent*>((__Local__186), USceneComponent::__PPO__AttachParent() )));
	__Local__187 = __Local__183;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__186), false, 0));
	__Local__185 = __Local__186;
	auto& __Local__188 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__189 = CastChecked<UStaticMeshComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__190 = (*(AccessPrivateProperty<USceneComponent*>((__Local__189), USceneComponent::__PPO__AttachParent() )));
	__Local__190 = __Local__186;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__189), true, 0));
	__Local__188 = __Local__189;
	auto& __Local__191 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__192 = CastChecked<UTextRenderComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__193 = (*(AccessPrivateProperty<USceneComponent*>((__Local__192), USceneComponent::__PPO__AttachParent() )));
	__Local__193 = __Local__186;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__192), false, 0));
	__Local__191 = __Local__192;
	auto& __Local__194 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__195 = CastChecked<UTextRenderComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__196 = (*(AccessPrivateProperty<USceneComponent*>((__Local__195), USceneComponent::__PPO__AttachParent() )));
	__Local__196 = __Local__186;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__195), false, 0));
	__Local__194 = __Local__195;
	auto& __Local__197 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__198 = CastChecked<UAudioComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__199 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__198), USceneComponent::__PPO__AttachParent() )));
	__Local__199 = __Local__178;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__198), false, 0));
	__Local__197 = __Local__198;
	auto& __Local__200 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__171), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__200 = __Local__178;
	auto& __Local__201 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__171), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__201 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__202 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__171), AActor::__PPO__RootComponent() )));
	__Local__202 = __Local__178;
	auto __Local__203 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_06_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__203);
	auto& __Local__204 = (*(AccessPrivateProperty<bool >((__Local__203), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__204 = false;
	auto& __Local__205 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__203), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__205.Icon = FString(TEXT("E761"));
	auto& __Local__206 = (*(AccessPrivateProperty<FText >((__Local__203), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__206 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"A2FEA1244477392716ADF799CE47A557\", \"Menu Six\")")	);
	auto& __Local__207 = (*(AccessPrivateProperty<USceneComponent*>((__Local__203), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__208 = CastChecked<USceneComponent>(__Local__203->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__209 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__208), USceneComponent::__PPO__AttachParent() )));
	auto __Local__210 = CastChecked<UUxtPressableButtonComponent>(__Local__203->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__210), false, 0));
	__Local__209 = __Local__210;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__208), false, 0));
	__Local__207 = __Local__208;
	auto& __Local__211 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__203), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__212 = CastChecked<UUxtBackPlateComponent>(__Local__203->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__213 = (*(AccessPrivateProperty<USceneComponent*>((__Local__212), USceneComponent::__PPO__AttachParent() )));
	__Local__213 = __Local__208;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__212), true, 0));
	__Local__211 = __Local__212;
	auto& __Local__214 = (*(AccessPrivateProperty<USceneComponent*>((__Local__203), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__215 = CastChecked<USceneComponent>(__Local__203->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__216 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__215), USceneComponent::__PPO__AttachParent() )));
	__Local__216 = __Local__210;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__215), false, 0));
	__Local__214 = __Local__215;
	auto& __Local__217 = (*(AccessPrivateProperty<USceneComponent*>((__Local__203), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__218 = CastChecked<USceneComponent>(__Local__203->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__219 = (*(AccessPrivateProperty<USceneComponent*>((__Local__218), USceneComponent::__PPO__AttachParent() )));
	__Local__219 = __Local__215;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__218), false, 0));
	__Local__217 = __Local__218;
	auto& __Local__220 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__203), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__221 = CastChecked<UStaticMeshComponent>(__Local__203->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__222 = (*(AccessPrivateProperty<USceneComponent*>((__Local__221), USceneComponent::__PPO__AttachParent() )));
	__Local__222 = __Local__218;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__221), true, 0));
	__Local__220 = __Local__221;
	auto& __Local__223 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__203), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__224 = CastChecked<UTextRenderComponent>(__Local__203->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__225 = (*(AccessPrivateProperty<USceneComponent*>((__Local__224), USceneComponent::__PPO__AttachParent() )));
	__Local__225 = __Local__218;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__224), false, 0));
	__Local__223 = __Local__224;
	auto& __Local__226 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__203), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__227 = CastChecked<UTextRenderComponent>(__Local__203->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__228 = (*(AccessPrivateProperty<USceneComponent*>((__Local__227), USceneComponent::__PPO__AttachParent() )));
	__Local__228 = __Local__218;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__227), false, 0));
	__Local__226 = __Local__227;
	auto& __Local__229 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__203), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__230 = CastChecked<UAudioComponent>(__Local__203->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__231 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__230), USceneComponent::__PPO__AttachParent() )));
	__Local__231 = __Local__210;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__230), false, 0));
	__Local__229 = __Local__230;
	auto& __Local__232 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__203), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__232 = __Local__210;
	auto& __Local__233 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__203), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__233 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__234 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__203), AActor::__PPO__RootComponent() )));
	__Local__234 = __Local__210;
	auto __Local__235 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_07_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__235);
	auto& __Local__236 = (*(AccessPrivateProperty<bool >((__Local__235), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__236 = false;
	auto& __Local__237 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__235), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__237.Icon = FString(TEXT("E774"));
	auto& __Local__238 = (*(AccessPrivateProperty<FText >((__Local__235), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__238 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"A336506F44C6482FDD756ABF29CB441F\", \"Menu Seven\")")	);
	auto& __Local__239 = (*(AccessPrivateProperty<USceneComponent*>((__Local__235), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__240 = CastChecked<USceneComponent>(__Local__235->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__241 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__240), USceneComponent::__PPO__AttachParent() )));
	auto __Local__242 = CastChecked<UUxtPressableButtonComponent>(__Local__235->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__242), false, 0));
	__Local__241 = __Local__242;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__240), false, 0));
	__Local__239 = __Local__240;
	auto& __Local__243 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__235), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__244 = CastChecked<UUxtBackPlateComponent>(__Local__235->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__245 = (*(AccessPrivateProperty<USceneComponent*>((__Local__244), USceneComponent::__PPO__AttachParent() )));
	__Local__245 = __Local__240;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__244), true, 0));
	__Local__243 = __Local__244;
	auto& __Local__246 = (*(AccessPrivateProperty<USceneComponent*>((__Local__235), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__247 = CastChecked<USceneComponent>(__Local__235->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__248 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__247), USceneComponent::__PPO__AttachParent() )));
	__Local__248 = __Local__242;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__247), false, 0));
	__Local__246 = __Local__247;
	auto& __Local__249 = (*(AccessPrivateProperty<USceneComponent*>((__Local__235), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__250 = CastChecked<USceneComponent>(__Local__235->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__251 = (*(AccessPrivateProperty<USceneComponent*>((__Local__250), USceneComponent::__PPO__AttachParent() )));
	__Local__251 = __Local__247;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__250), false, 0));
	__Local__249 = __Local__250;
	auto& __Local__252 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__235), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__253 = CastChecked<UStaticMeshComponent>(__Local__235->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__254 = (*(AccessPrivateProperty<USceneComponent*>((__Local__253), USceneComponent::__PPO__AttachParent() )));
	__Local__254 = __Local__250;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__253), true, 0));
	__Local__252 = __Local__253;
	auto& __Local__255 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__235), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__256 = CastChecked<UTextRenderComponent>(__Local__235->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__257 = (*(AccessPrivateProperty<USceneComponent*>((__Local__256), USceneComponent::__PPO__AttachParent() )));
	__Local__257 = __Local__250;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__256), false, 0));
	__Local__255 = __Local__256;
	auto& __Local__258 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__235), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__259 = CastChecked<UTextRenderComponent>(__Local__235->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__260 = (*(AccessPrivateProperty<USceneComponent*>((__Local__259), USceneComponent::__PPO__AttachParent() )));
	__Local__260 = __Local__250;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__259), false, 0));
	__Local__258 = __Local__259;
	auto& __Local__261 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__235), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__262 = CastChecked<UAudioComponent>(__Local__235->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__263 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__262), USceneComponent::__PPO__AttachParent() )));
	__Local__263 = __Local__242;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__262), false, 0));
	__Local__261 = __Local__262;
	auto& __Local__264 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__235), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__264 = __Local__242;
	auto& __Local__265 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__235), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__265 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__266 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__235), AActor::__PPO__RootComponent() )));
	__Local__266 = __Local__242;
	auto __Local__267 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_08_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__267);
	auto& __Local__268 = (*(AccessPrivateProperty<bool >((__Local__267), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__268 = false;
	auto& __Local__269 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__267), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__269.Icon = FString(TEXT("E895"));
	auto& __Local__270 = (*(AccessPrivateProperty<FText >((__Local__267), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__270 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"27A60D2643140B4A7F5C0FA9FCD9776B\", \"Menu Eight\")")	);
	auto& __Local__271 = (*(AccessPrivateProperty<USceneComponent*>((__Local__267), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__272 = CastChecked<USceneComponent>(__Local__267->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__273 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__272), USceneComponent::__PPO__AttachParent() )));
	auto __Local__274 = CastChecked<UUxtPressableButtonComponent>(__Local__267->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__274), false, 0));
	__Local__273 = __Local__274;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__272), false, 0));
	__Local__271 = __Local__272;
	auto& __Local__275 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__267), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__276 = CastChecked<UUxtBackPlateComponent>(__Local__267->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__277 = (*(AccessPrivateProperty<USceneComponent*>((__Local__276), USceneComponent::__PPO__AttachParent() )));
	__Local__277 = __Local__272;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__276), true, 0));
	__Local__275 = __Local__276;
	auto& __Local__278 = (*(AccessPrivateProperty<USceneComponent*>((__Local__267), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__279 = CastChecked<USceneComponent>(__Local__267->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__280 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__279), USceneComponent::__PPO__AttachParent() )));
	__Local__280 = __Local__274;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__279), false, 0));
	__Local__278 = __Local__279;
	auto& __Local__281 = (*(AccessPrivateProperty<USceneComponent*>((__Local__267), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__282 = CastChecked<USceneComponent>(__Local__267->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__283 = (*(AccessPrivateProperty<USceneComponent*>((__Local__282), USceneComponent::__PPO__AttachParent() )));
	__Local__283 = __Local__279;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__282), false, 0));
	__Local__281 = __Local__282;
	auto& __Local__284 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__267), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__285 = CastChecked<UStaticMeshComponent>(__Local__267->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__286 = (*(AccessPrivateProperty<USceneComponent*>((__Local__285), USceneComponent::__PPO__AttachParent() )));
	__Local__286 = __Local__282;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__285), true, 0));
	__Local__284 = __Local__285;
	auto& __Local__287 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__267), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__288 = CastChecked<UTextRenderComponent>(__Local__267->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__289 = (*(AccessPrivateProperty<USceneComponent*>((__Local__288), USceneComponent::__PPO__AttachParent() )));
	__Local__289 = __Local__282;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__288), false, 0));
	__Local__287 = __Local__288;
	auto& __Local__290 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__267), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__291 = CastChecked<UTextRenderComponent>(__Local__267->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__292 = (*(AccessPrivateProperty<USceneComponent*>((__Local__291), USceneComponent::__PPO__AttachParent() )));
	__Local__292 = __Local__282;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__291), false, 0));
	__Local__290 = __Local__291;
	auto& __Local__293 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__267), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__294 = CastChecked<UAudioComponent>(__Local__267->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__295 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__294), USceneComponent::__PPO__AttachParent() )));
	__Local__295 = __Local__274;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__294), false, 0));
	__Local__293 = __Local__294;
	auto& __Local__296 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__267), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__296 = __Local__274;
	auto& __Local__297 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__267), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__297 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__298 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__267), AActor::__PPO__RootComponent() )));
	__Local__298 = __Local__274;
	auto __Local__299 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_09_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__299);
	auto& __Local__300 = (*(AccessPrivateProperty<bool >((__Local__299), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__300 = false;
	auto& __Local__301 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__299), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__301.Icon = FString(TEXT("E909"));
	auto& __Local__302 = (*(AccessPrivateProperty<FText >((__Local__299), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__302 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"7DCF212B41341F09DD9BF1AC5D4FC382\", \"Menu Nine\")")	);
	auto& __Local__303 = (*(AccessPrivateProperty<USceneComponent*>((__Local__299), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__304 = CastChecked<USceneComponent>(__Local__299->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__305 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__304), USceneComponent::__PPO__AttachParent() )));
	auto __Local__306 = CastChecked<UUxtPressableButtonComponent>(__Local__299->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__306), false, 0));
	__Local__305 = __Local__306;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__304), false, 0));
	__Local__303 = __Local__304;
	auto& __Local__307 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__299), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__308 = CastChecked<UUxtBackPlateComponent>(__Local__299->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__309 = (*(AccessPrivateProperty<USceneComponent*>((__Local__308), USceneComponent::__PPO__AttachParent() )));
	__Local__309 = __Local__304;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__308), true, 0));
	__Local__307 = __Local__308;
	auto& __Local__310 = (*(AccessPrivateProperty<USceneComponent*>((__Local__299), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__311 = CastChecked<USceneComponent>(__Local__299->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__312 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__311), USceneComponent::__PPO__AttachParent() )));
	__Local__312 = __Local__306;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__311), false, 0));
	__Local__310 = __Local__311;
	auto& __Local__313 = (*(AccessPrivateProperty<USceneComponent*>((__Local__299), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__314 = CastChecked<USceneComponent>(__Local__299->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__315 = (*(AccessPrivateProperty<USceneComponent*>((__Local__314), USceneComponent::__PPO__AttachParent() )));
	__Local__315 = __Local__311;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__314), false, 0));
	__Local__313 = __Local__314;
	auto& __Local__316 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__299), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__317 = CastChecked<UStaticMeshComponent>(__Local__299->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__318 = (*(AccessPrivateProperty<USceneComponent*>((__Local__317), USceneComponent::__PPO__AttachParent() )));
	__Local__318 = __Local__314;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__317), true, 0));
	__Local__316 = __Local__317;
	auto& __Local__319 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__299), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__320 = CastChecked<UTextRenderComponent>(__Local__299->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__321 = (*(AccessPrivateProperty<USceneComponent*>((__Local__320), USceneComponent::__PPO__AttachParent() )));
	__Local__321 = __Local__314;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__320), false, 0));
	__Local__319 = __Local__320;
	auto& __Local__322 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__299), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__323 = CastChecked<UTextRenderComponent>(__Local__299->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__324 = (*(AccessPrivateProperty<USceneComponent*>((__Local__323), USceneComponent::__PPO__AttachParent() )));
	__Local__324 = __Local__314;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__323), false, 0));
	__Local__322 = __Local__323;
	auto& __Local__325 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__299), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__326 = CastChecked<UAudioComponent>(__Local__299->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__327 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__326), USceneComponent::__PPO__AttachParent() )));
	__Local__327 = __Local__306;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__326), false, 0));
	__Local__325 = __Local__326;
	auto& __Local__328 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__299), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__328 = __Local__306;
	auto& __Local__329 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__299), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__329 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__330 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__299), AActor::__PPO__RootComponent() )));
	__Local__330 = __Local__306;
	auto __Local__331 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("Button_Pin_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__331);
	auto& __Local__332 = (*(AccessPrivateProperty<bool >((__Local__331), AUxtPressableToggleButtonActor::__PPO__bIsInitiallyChecked() )));
	__Local__332 = true;
	auto& __Local__333 = (*(AccessPrivateProperty<bool >((__Local__331), AUxtPressableToggleButtonActor::__PPO__bToggleOnRelease() )));
	__Local__333 = true;
	auto& __Local__334 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__331), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__335 = CastChecked<UUxtToggleStateComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__335), false, 0));
	__Local__334 = __Local__335;
	auto& __Local__336 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__331), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__337 = CastChecked<UUxtBackPlateComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__338 = (*(AccessPrivateProperty<USceneComponent*>((__Local__337), USceneComponent::__PPO__AttachParent() )));
	auto __Local__339 = CastChecked<USceneComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__340 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__339), USceneComponent::__PPO__AttachParent() )));
	auto __Local__341 = CastChecked<UUxtPressableButtonComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__341), false, 0));
	__Local__340 = __Local__341;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__339), false, 0));
	__Local__338 = __Local__339;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__337), true, 0));
	__Local__336 = __Local__337;
	auto& __Local__342 = (*(AccessPrivateProperty<bool >((__Local__331), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__342 = false;
	auto& __Local__343 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__331), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__343.Icon = FString(TEXT("E718"));
	__Local__343.TextBrush.RelativeRotation = FRotator(0.000000, 0.000000, 45.000000);
	auto& __Local__344 = (*(AccessPrivateProperty<FText >((__Local__331), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__344 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[DB893A5E4612972843BC08B88A3CC5B1]\", \"6A5891F94B06CFB7E6A427AD8E3C136F\", \"Pin\")")	);
	auto& __Local__345 = (*(AccessPrivateProperty<USceneComponent*>((__Local__331), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__345 = __Local__339;
	auto& __Local__346 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__331), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__347 = CastChecked<UUxtBackPlateComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__348 = (*(AccessPrivateProperty<USceneComponent*>((__Local__347), USceneComponent::__PPO__AttachParent() )));
	__Local__348 = __Local__339;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__347), true, 0));
	__Local__346 = __Local__347;
	auto& __Local__349 = (*(AccessPrivateProperty<USceneComponent*>((__Local__331), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__350 = CastChecked<USceneComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__351 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__350), USceneComponent::__PPO__AttachParent() )));
	__Local__351 = __Local__341;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__350), false, 0));
	__Local__349 = __Local__350;
	auto& __Local__352 = (*(AccessPrivateProperty<USceneComponent*>((__Local__331), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__353 = CastChecked<USceneComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__354 = (*(AccessPrivateProperty<USceneComponent*>((__Local__353), USceneComponent::__PPO__AttachParent() )));
	__Local__354 = __Local__350;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__353), false, 0));
	__Local__352 = __Local__353;
	auto& __Local__355 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__331), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__356 = CastChecked<UStaticMeshComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__357 = (*(AccessPrivateProperty<USceneComponent*>((__Local__356), USceneComponent::__PPO__AttachParent() )));
	__Local__357 = __Local__353;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__356), true, 0));
	__Local__355 = __Local__356;
	auto& __Local__358 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__331), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__359 = CastChecked<UTextRenderComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__360 = (*(AccessPrivateProperty<USceneComponent*>((__Local__359), USceneComponent::__PPO__AttachParent() )));
	__Local__360 = __Local__353;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__359), false, 0));
	__Local__358 = __Local__359;
	auto& __Local__361 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__331), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__362 = CastChecked<UTextRenderComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__363 = (*(AccessPrivateProperty<USceneComponent*>((__Local__362), USceneComponent::__PPO__AttachParent() )));
	__Local__363 = __Local__353;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__362), false, 0));
	__Local__361 = __Local__362;
	auto& __Local__364 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__331), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__365 = CastChecked<UAudioComponent>(__Local__331->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__366 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__365), USceneComponent::__PPO__AttachParent() )));
	__Local__366 = __Local__341;
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__365), false, 0));
	__Local__364 = __Local__365;
	auto& __Local__367 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__331), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__367 = __Local__341;
	auto& __Local__368 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__331), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__368 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__369 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__331), AActor::__PPO__RootComponent() )));
	__Local__369 = __Local__341;
	auto __Local__370 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__370);
	(((FBoolProperty*)__Local__49)->SetPropertyValue_InContainer((__Local__370), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_NearMenu3x3_C__pf3499602411::bpf__UserConstructionScript__pf()
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
				Super::bpf__UserConstructionScript__pf();
			}
		case 3:
			{
				AActor*  __Local__371 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf = Cast<AUxtPressableToggleButtonActor>(((::IsValid(bpv__Button_Pin__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__371)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				UUxtPressableButtonComponent*  __Local__372 = ((UUxtPressableButtonComponent*)nullptr);
				bpv__PinButton__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UUxtPressableButtonComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))) : (__Local__372));
			}
		case 5:
			{
				UUxtToggleStateComponent*  __Local__373 = ((UUxtToggleStateComponent*)nullptr);
				bpv__PinButtonState__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UUxtToggleStateComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )))) : (__Local__373));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenu3x3_C__pf3499602411::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenu3x3_C__pf3499602411::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__ABP_NearMenu3x3_C__pf3499602411
{
	FRegisterHelper__ABP_NearMenu3x3_C__pf3499602411()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/NearMenu/Blueprints/BP_NearMenu3x3"), &ABP_NearMenu3x3_C__pf3499602411::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_NearMenu3x3_C__pf3499602411 Instance;
};
FRegisterHelper__ABP_NearMenu3x3_C__pf3499602411 FRegisterHelper__ABP_NearMenu3x3_C__pf3499602411::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
