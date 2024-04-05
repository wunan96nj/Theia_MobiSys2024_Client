#include "NativizedAssets.h"
#include "BP_TabMusic__pf3087176809.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtTextRenderActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtTextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableCheckButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableToggleButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBasePressableButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonComponent.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_TabMusic_C__pf3087176809::ABP_TabMusic_C__pf3087176809(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__UxtUIElement_Tab__pf = CreateDefaultSubobject<UUxtUIElementComponent>(TEXT("UxtUIElement_Tab"));
	bpv__StaticMesh_Artwork__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_Artwork"));
	bpv__ChildActor_Text_Title__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Text_Title"));
	bpv__ChildActor_Text_Artist__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Text_Artist"));
	bpv__ChildActor_Text_Header__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Text_Header"));
	bpv__Audio__pf = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	bpv__ChildActor_Check_PlayPause__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Check_PlayPause"));
	bpv__ChildActor_Check_Heart__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Check_Heart"));
	bpv__ChildActor_Text_ElapsedTime__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Text_ElapsedTime"));
	bpv__StaticMesh_Slider__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_Slider"));
	bpv__Min__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Min"));
	bpv__Max__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Max"));
	bpv__StaticMesh_Thumb__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_Thumb"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), false, 0));
	bpv__UxtUIElement_Tab__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtUIElement_Tab__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtUIElement_Tab__pf), false, 0));
	bpv__StaticMesh_Artwork__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh_Artwork__pf->AttachToComponent(bpv__UxtUIElement_Tab__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh_Artwork__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh_Artwork__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh_Artwork__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh_Artwork__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__StaticMesh_Artwork__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__3 = FVector(0.001000, -0.000000, 1.192929);
	auto& __Local__4 = (*(AccessPrivateProperty<FRotator >((bpv__StaticMesh_Artwork__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__4 = FRotator(0.000000, -90.000000, 90.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__StaticMesh_Artwork__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__5 = FVector(0.060000, 0.060000, 0.060000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMesh_Artwork__pf), true, 0));
	bpv__ChildActor_Text_Title__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Text_Title__pf->AttachToComponent(bpv__UxtUIElement_Tab__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Text_Title__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__6 = AUxtTextRenderActor::StaticClass();
	auto& __Local__7 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Text_Title__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__7 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Text_Title__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__8 = FVector(0.001000, 5.128712, -4.790446);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Text_Title__pf), false, 0));
	bpv__ChildActor_Text_Artist__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Text_Artist__pf->AttachToComponent(bpv__UxtUIElement_Tab__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__9 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Text_Artist__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__9 = AUxtTextRenderActor::StaticClass();
	auto& __Local__10 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Text_Artist__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__10 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[1]);
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Text_Artist__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__11 = FVector(0.001000, 5.128712, -5.471570);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Text_Artist__pf), false, 0));
	bpv__ChildActor_Text_Header__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Text_Header__pf->AttachToComponent(bpv__UxtUIElement_Tab__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Text_Header__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__12 = AUxtTextRenderActor::StaticClass();
	auto& __Local__13 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Text_Header__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__13 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[2]);
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Text_Header__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(0.001000, 0.000000, 5.466451);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Text_Header__pf), false, 0));
	bpv__Audio__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Audio__pf->AttachToComponent(bpv__UxtUIElement_Tab__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Audio__pf->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Audio__pf->bAutoActivate = false;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Audio__pf), false, 0));
	bpv__ChildActor_Check_PlayPause__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Check_PlayPause__pf->AttachToComponent(bpv__UxtUIElement_Tab__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__15 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Check_PlayPause__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__15 = AUxtPressableCheckButtonActor::StaticClass();
	auto& __Local__16 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Check_PlayPause__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__16 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[3]);
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Check_PlayPause__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__17 = FVector(0.000000, 0.000000, -7.766497);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Check_PlayPause__pf), false, 0));
	bpv__ChildActor_Check_Heart__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Check_Heart__pf->AttachToComponent(bpv__UxtUIElement_Tab__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Check_Heart__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__18 = AUxtPressableCheckButtonActor::StaticClass();
	auto& __Local__19 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Check_Heart__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__19 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[4]);
	auto& __Local__20 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Check_Heart__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__20 = FVector(0.000000, -4.800055, -5.193969);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Check_Heart__pf), false, 0));
	bpv__ChildActor_Text_ElapsedTime__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Text_ElapsedTime__pf->AttachToComponent(bpv__UxtUIElement_Tab__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__21 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Text_ElapsedTime__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__21 = AUxtTextRenderActor::StaticClass();
	auto& __Local__22 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Text_ElapsedTime__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__22 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[5]);
	auto& __Local__23 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Text_ElapsedTime__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__23 = FVector(0.001000, 0.441421, -3.522940);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Text_ElapsedTime__pf), false, 0));
	bpv__StaticMesh_Slider__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh_Slider__pf->AttachToComponent(bpv__UxtUIElement_Tab__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__24 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh_Slider__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__24 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMesh_Slider__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh_Slider__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh_Slider__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__StaticMesh_Slider__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__StaticMesh_Slider__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__25 = FVector(0.000000, 0.000000, -2.631919);
	auto& __Local__26 = (*(AccessPrivateProperty<FVector >((bpv__StaticMesh_Slider__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__26 = FVector(0.000800, 0.100000, 0.000800);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMesh_Slider__pf), true, 0));
	bpv__Min__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Min__pf->AttachToComponent(bpv__StaticMesh_Slider__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__Min__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__27 = FVector(0.000000, 50.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Min__pf), false, 0));
	bpv__Max__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Max__pf->AttachToComponent(bpv__StaticMesh_Slider__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__28 = (*(AccessPrivateProperty<FVector >((bpv__Max__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__28 = FVector(0.000000, -50.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Max__pf), false, 0));
	bpv__StaticMesh_Thumb__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh_Thumb__pf->AttachToComponent(bpv__StaticMesh_Slider__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__29 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh_Thumb__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__29 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__StaticMesh_Thumb__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh_Thumb__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh_Thumb__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__StaticMesh_Thumb__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__30 = FVector(0.000000, 50.000000, 0.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<FVector >((bpv__StaticMesh_Thumb__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__31 = FVector(6.250000, 0.050000, 6.250000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMesh_Thumb__pf), true, 0));
	auto& __Local__32 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__32 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_TabMusic_C__pf3087176809::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtUIElement_Tab__pf)
	{
		bpv__UxtUIElement_Tab__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh_Artwork__pf)
	{
		bpv__StaticMesh_Artwork__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Text_Title__pf)
	{
		bpv__ChildActor_Text_Title__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Text_Artist__pf)
	{
		bpv__ChildActor_Text_Artist__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Text_Header__pf)
	{
		bpv__ChildActor_Text_Header__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Audio__pf)
	{
		bpv__Audio__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Check_PlayPause__pf)
	{
		bpv__ChildActor_Check_PlayPause__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Check_Heart__pf)
	{
		bpv__ChildActor_Check_Heart__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Text_ElapsedTime__pf)
	{
		bpv__ChildActor_Text_ElapsedTime__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh_Slider__pf)
	{
		bpv__StaticMesh_Slider__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Min__pf)
	{
		bpv__Min__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Max__pf)
	{
		bpv__Max__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh_Thumb__pf)
	{
		bpv__StaticMesh_Thumb__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_TabMusic_C__pf3087176809::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__33 = NewObject<AUxtTextRenderActor>(InDynamicClass, AUxtTextRenderActor::StaticClass(), TEXT("ChildActor_Text_Title_GEN_VARIABLE_UxtTextRenderActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__33);
	auto& __Local__34 = (*(AccessPrivateProperty<UUxtTextRenderComponent*>((__Local__33), AUxtTextRenderActor::__PPO__TextRender() )));
	auto __Local__35 = CastChecked<UUxtTextRenderComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("NewTextRenderComponent")), ECastCheckedType::NullAllowed);
	__Local__35->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[141FFDBE44E1C63C4427A295802F4916]\", \"D04292764A0CC3405441AC957C54221F\", \"VR_WorldMoveLoop_02\")")	);
	__Local__35->Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__35->WorldSize = 0.800000f;
	static TWeakFieldPtr<FProperty> __Local__37{};
	const FProperty* __Local__36 = __Local__37.Get();
	if (nullptr == __Local__36)
	{
		__Local__36 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__36);
		__Local__37 = __Local__36;
	}
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__35), false, 0));
	__Local__34 = __Local__35;
	auto& __Local__38 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__33), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__38 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__39 = (*(AccessPrivateProperty<UUxtTextRenderComponent*>((__Local__33), AActor::__PPO__RootComponent() )));
	__Local__39 = __Local__35;
	auto __Local__40 = NewObject<AUxtTextRenderActor>(InDynamicClass, AUxtTextRenderActor::StaticClass(), TEXT("ChildActor_Text_Artist_GEN_VARIABLE_UxtTextRenderActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__40);
	auto& __Local__41 = (*(AccessPrivateProperty<UUxtTextRenderComponent*>((__Local__40), AUxtTextRenderActor::__PPO__TextRender() )));
	auto __Local__42 = CastChecked<UUxtTextRenderComponent>(__Local__40->GetDefaultSubobjectByName(TEXT("NewTextRenderComponent")), ECastCheckedType::NullAllowed);
	__Local__42->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[141FFDBE44E1C63C4427A295802F4916]\", \"08E3CD004F514A21840D1F98C3DC52D3\", \"Epic Games\")")	);
	__Local__42->Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__42->WorldSize = 0.600000f;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__42), false, 0));
	__Local__41 = __Local__42;
	auto& __Local__43 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__40), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__43 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__44 = (*(AccessPrivateProperty<UUxtTextRenderComponent*>((__Local__40), AActor::__PPO__RootComponent() )));
	__Local__44 = __Local__42;
	auto __Local__45 = NewObject<AUxtTextRenderActor>(InDynamicClass, AUxtTextRenderActor::StaticClass(), TEXT("ChildActor_Text_Header_GEN_VARIABLE_UxtTextRenderActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__45);
	auto& __Local__46 = (*(AccessPrivateProperty<UUxtTextRenderComponent*>((__Local__45), AUxtTextRenderActor::__PPO__TextRender() )));
	auto __Local__47 = CastChecked<UUxtTextRenderComponent>(__Local__45->GetDefaultSubobjectByName(TEXT("NewTextRenderComponent")), ECastCheckedType::NullAllowed);
	__Local__47->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[141FFDBE44E1C63C4427A295802F4916]\", \"EA4D071D475FC73D073ACBA064C6784E\", \"Epic Games\")")	);
	__Local__47->Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__47->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__47), false, 0));
	__Local__46 = __Local__47;
	auto& __Local__48 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__45), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__48 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__49 = (*(AccessPrivateProperty<UUxtTextRenderComponent*>((__Local__45), AActor::__PPO__RootComponent() )));
	__Local__49 = __Local__47;
	auto __Local__50 = NewObject<AUxtPressableCheckButtonActor>(InDynamicClass, AUxtPressableCheckButtonActor::StaticClass(), TEXT("ChildActor_Check_PlayPause_GEN_VARIABLE_UxtPressableCheckButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__50);
	auto& __Local__51 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__50), AUxtPressableCheckButtonActor::__PPO__UncheckedIconBrush() )));
	__Local__51.Icon = FString(TEXT("E768"));
	__Local__51.TextBrush.Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	auto& __Local__52 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__50), AUxtPressableCheckButtonActor::__PPO__CheckedIconBrush() )));
	__Local__52.Icon = FString(TEXT("E769"));
	__Local__52.TextBrush.Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	auto& __Local__53 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__50), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__54 = CastChecked<UUxtToggleStateComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__54), false, 0));
	__Local__53 = __Local__54;
	auto& __Local__55 = (*(AccessPrivateProperty<bool >((__Local__50), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__55 = false;
	auto& __Local__56 = (*(AccessPrivateProperty<FText >((__Local__50), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__56 = FText::GetEmpty();
	auto& __Local__57 = (*(AccessPrivateProperty<USceneComponent*>((__Local__50), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__58 = CastChecked<USceneComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__59 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__58), USceneComponent::__PPO__AttachParent() )));
	auto __Local__60 = CastChecked<UUxtPressableButtonComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__60), false, 0));
	__Local__59 = __Local__60;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__58), false, 0));
	__Local__57 = __Local__58;
	auto& __Local__61 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__50), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__62 = CastChecked<UUxtBackPlateComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__63 = (*(AccessPrivateProperty<USceneComponent*>((__Local__62), USceneComponent::__PPO__AttachParent() )));
	__Local__63 = __Local__58;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__62), true, 0));
	__Local__61 = __Local__62;
	auto& __Local__64 = (*(AccessPrivateProperty<USceneComponent*>((__Local__50), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__65 = CastChecked<USceneComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__66 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__65), USceneComponent::__PPO__AttachParent() )));
	__Local__66 = __Local__60;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__65), false, 0));
	__Local__64 = __Local__65;
	auto& __Local__67 = (*(AccessPrivateProperty<USceneComponent*>((__Local__50), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__68 = CastChecked<USceneComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__69 = (*(AccessPrivateProperty<USceneComponent*>((__Local__68), USceneComponent::__PPO__AttachParent() )));
	__Local__69 = __Local__65;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__68), false, 0));
	__Local__67 = __Local__68;
	auto& __Local__70 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__50), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__71 = CastChecked<UStaticMeshComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__72 = (*(AccessPrivateProperty<USceneComponent*>((__Local__71), USceneComponent::__PPO__AttachParent() )));
	__Local__72 = __Local__68;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__71), true, 0));
	__Local__70 = __Local__71;
	auto& __Local__73 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__50), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__74 = CastChecked<UTextRenderComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__75 = (*(AccessPrivateProperty<USceneComponent*>((__Local__74), USceneComponent::__PPO__AttachParent() )));
	__Local__75 = __Local__68;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__74), false, 0));
	__Local__73 = __Local__74;
	auto& __Local__76 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__50), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__77 = CastChecked<UTextRenderComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__78 = (*(AccessPrivateProperty<USceneComponent*>((__Local__77), USceneComponent::__PPO__AttachParent() )));
	__Local__78 = __Local__68;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__77), false, 0));
	__Local__76 = __Local__77;
	auto& __Local__79 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__50), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__80 = CastChecked<UAudioComponent>(__Local__50->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__81 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__80), USceneComponent::__PPO__AttachParent() )));
	__Local__81 = __Local__60;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__80), false, 0));
	__Local__79 = __Local__80;
	auto& __Local__82 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__50), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__82 = __Local__60;
	auto& __Local__83 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__50), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__83 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__84 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__50), AActor::__PPO__RootComponent() )));
	__Local__84 = __Local__60;
	auto __Local__85 = NewObject<AUxtPressableCheckButtonActor>(InDynamicClass, AUxtPressableCheckButtonActor::StaticClass(), TEXT("ChildActor_Check_Heart_GEN_VARIABLE_UxtPressableCheckButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__85);
	auto& __Local__86 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__85), AUxtPressableCheckButtonActor::__PPO__UncheckedIconBrush() )));
	__Local__86.Icon = FString(TEXT("EB51"));
	__Local__86.TextBrush.Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	auto& __Local__87 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__85), AUxtPressableCheckButtonActor::__PPO__CheckedIconBrush() )));
	__Local__87.Icon = FString(TEXT("EB52"));
	__Local__87.TextBrush.Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_TabMusic_C__pf3087176809::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	auto& __Local__88 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__85), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__89 = CastChecked<UUxtToggleStateComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__89), false, 0));
	__Local__88 = __Local__89;
	auto& __Local__90 = (*(AccessPrivateProperty<bool >((__Local__85), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__90 = false;
	auto& __Local__91 = (*(AccessPrivateProperty<FText >((__Local__85), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__91 = FText::GetEmpty();
	auto& __Local__92 = (*(AccessPrivateProperty<USceneComponent*>((__Local__85), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__93 = CastChecked<USceneComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__94 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__93), USceneComponent::__PPO__AttachParent() )));
	auto __Local__95 = CastChecked<UUxtPressableButtonComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__95), false, 0));
	__Local__94 = __Local__95;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__93), false, 0));
	__Local__92 = __Local__93;
	auto& __Local__96 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__85), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__97 = CastChecked<UUxtBackPlateComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__98 = (*(AccessPrivateProperty<USceneComponent*>((__Local__97), USceneComponent::__PPO__AttachParent() )));
	__Local__98 = __Local__93;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__97), true, 0));
	__Local__96 = __Local__97;
	auto& __Local__99 = (*(AccessPrivateProperty<USceneComponent*>((__Local__85), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__100 = CastChecked<USceneComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__101 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__100), USceneComponent::__PPO__AttachParent() )));
	__Local__101 = __Local__95;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__100), false, 0));
	__Local__99 = __Local__100;
	auto& __Local__102 = (*(AccessPrivateProperty<USceneComponent*>((__Local__85), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__103 = CastChecked<USceneComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__104 = (*(AccessPrivateProperty<USceneComponent*>((__Local__103), USceneComponent::__PPO__AttachParent() )));
	__Local__104 = __Local__100;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__103), false, 0));
	__Local__102 = __Local__103;
	auto& __Local__105 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__85), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__106 = CastChecked<UStaticMeshComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__107 = (*(AccessPrivateProperty<USceneComponent*>((__Local__106), USceneComponent::__PPO__AttachParent() )));
	__Local__107 = __Local__103;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__106), true, 0));
	__Local__105 = __Local__106;
	auto& __Local__108 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__85), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__109 = CastChecked<UTextRenderComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__110 = (*(AccessPrivateProperty<USceneComponent*>((__Local__109), USceneComponent::__PPO__AttachParent() )));
	__Local__110 = __Local__103;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__109), false, 0));
	__Local__108 = __Local__109;
	auto& __Local__111 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__85), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__112 = CastChecked<UTextRenderComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__113 = (*(AccessPrivateProperty<USceneComponent*>((__Local__112), USceneComponent::__PPO__AttachParent() )));
	__Local__113 = __Local__103;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__112), false, 0));
	__Local__111 = __Local__112;
	auto& __Local__114 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__85), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__115 = CastChecked<UAudioComponent>(__Local__85->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__116 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__115), USceneComponent::__PPO__AttachParent() )));
	__Local__116 = __Local__95;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__115), false, 0));
	__Local__114 = __Local__115;
	auto& __Local__117 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__85), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__117 = __Local__95;
	auto& __Local__118 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__85), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__118 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__119 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__85), AActor::__PPO__RootComponent() )));
	__Local__119 = __Local__95;
	auto __Local__120 = NewObject<AUxtTextRenderActor>(InDynamicClass, AUxtTextRenderActor::StaticClass(), TEXT("ChildActor_Text_ElapsedTime_GEN_VARIABLE_UxtTextRenderActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__120);
	auto& __Local__121 = (*(AccessPrivateProperty<UUxtTextRenderComponent*>((__Local__120), AUxtTextRenderActor::__PPO__TextRender() )));
	auto __Local__122 = CastChecked<UUxtTextRenderComponent>(__Local__120->GetDefaultSubobjectByName(TEXT("NewTextRenderComponent")), ECastCheckedType::NullAllowed);
	__Local__122->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[141FFDBE44E1C63C4427A295802F4916]\", \"FB48C69C4F6FDAAB0EB6ED94020B1127\", \"0:00\")")	);
	__Local__122->WorldSize = 0.800000f;
	(((FBoolProperty*)__Local__36)->SetPropertyValue_InContainer((__Local__122), false, 0));
	__Local__121 = __Local__122;
	auto& __Local__123 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__120), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__123 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__124 = (*(AccessPrivateProperty<UUxtTextRenderComponent*>((__Local__120), AActor::__PPO__RootComponent() )));
	__Local__124 = __Local__122;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_TabMusic_C__pf3087176809::bpf__ExecuteUbergraph_BP_TabMusic__pf_0(int32 bpp__EntryPoint__pf)
{
	UUxtToggleStateComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__ChildActor_Check_PlayPause__pf) && ::IsValid((*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Check_PlayPause__pf), UChildActorComponent::__PPO__ChildActor() )))))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<UUxtToggleStateComponent>((*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Check_PlayPause__pf), UChildActorComponent::__PPO__ChildActor() )))->AActor::GetComponentByClass(UUxtToggleStateComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_3__pf.BindUFunction(this,FName(TEXT("OnPlayPauseToggled")));
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue__pf->OnToggled.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_3__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("OnUIElementHide")));
	if(::IsValid(bpv__UxtUIElement_Tab__pf))
	{
		bpv__UxtUIElement_Tab__pf->OnHideElement.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_1__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnAudioFinished")));
	if(::IsValid(bpv__Audio__pf))
	{
		bpv__Audio__pf->OnAudioFinished.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate_2__pf.BindUFunction(this,FName(TEXT("OnAudioPlayback")));
	if(::IsValid(bpv__Audio__pf))
	{
		bpv__Audio__pf->OnAudioPlaybackPercent.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_2__pf);
	}
	return; // KCST_GotoReturn
}
void ABP_TabMusic_C__pf3087176809::bpf__ExecuteUbergraph_BP_TabMusic__pf_1(int32 bpp__EntryPoint__pf)
{
	UUxtToggleStateComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				if(::IsValid(bpv__ChildActor_Check_PlayPause__pf) && ::IsValid((*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Check_PlayPause__pf), UChildActorComponent::__PPO__ChildActor() )))))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<UUxtToggleStateComponent>((*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Check_PlayPause__pf), UChildActorComponent::__PPO__ChildActor() )))->AActor::GetComponentByClass(UUxtToggleStateComponent::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf->UUxtToggleStateComponent::SetIsChecked(false);
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				__CurrentState = 12;
				break;
			}
		case 14:
			{
				if(::IsValid(bpv__Audio__pf))
				{
					bpv__Audio__pf->Stop();
				}
				__CurrentState = 12;
				break;
			}
		case 15:
			{
				__CurrentState = 14;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_TabMusic_C__pf3087176809::bpf__ExecuteUbergraph_BP_TabMusic__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_ToggleState__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue__pf = b0l__K2Node_CustomEvent_ToggleState__pf->UUxtToggleStateComponent::IsChecked();
				}
				if (!bpfv__CallFunc_IsChecked_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				if(::IsValid(bpv__Audio__pf))
				{
					bpv__Audio__pf->Play(0.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(::IsValid(bpv__Audio__pf))
				{
					bpv__Audio__pf->Stop();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_TabMusic_C__pf3087176809::bpf__ExecuteUbergraph_BP_TabMusic__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	float  __Local__125 = 0.000000;
	bpf__UpdateSlider__pf(((::IsValid(b0l__K2Node_CustomEvent_PlayingSoundWave__pf)) ? (b0l__K2Node_CustomEvent_PlayingSoundWave__pf->Duration) : (__Local__125)), b0l__K2Node_CustomEvent_PlaybackPercent__pf);
	return; // KCST_GotoReturn
}
void ABP_TabMusic_C__pf3087176809::bpf__OnAudioPlayback__pf(const USoundWave* bpp__PlayingSoundWave__pf__const, const float bpp__PlaybackPercent__pf__const)
{
	typedef USoundWave*  T__Local__126;
	T__Local__126& bpp__PlayingSoundWave__pf = *const_cast<T__Local__126 *>(&bpp__PlayingSoundWave__pf__const);
	typedef float  T__Local__127;
	T__Local__127& bpp__PlaybackPercent__pf = *const_cast<T__Local__127 *>(&bpp__PlaybackPercent__pf__const);
	b0l__K2Node_CustomEvent_PlayingSoundWave__pf = bpp__PlayingSoundWave__pf;
	b0l__K2Node_CustomEvent_PlaybackPercent__pf = bpp__PlaybackPercent__pf;
	bpf__ExecuteUbergraph_BP_TabMusic__pf_3(1);
}
void ABP_TabMusic_C__pf3087176809::bpf__OnUIElementHide__pf(UUxtUIElementComponent* bpp__UIElement__pf, bool bpp__bShouldAffectLayout__pf)
{
	b0l__K2Node_CustomEvent_UIElement__pf = bpp__UIElement__pf;
	b0l__K2Node_CustomEvent_bShouldAffectLayout__pf = bpp__bShouldAffectLayout__pf;
	bpf__ExecuteUbergraph_BP_TabMusic__pf_1(15);
}
void ABP_TabMusic_C__pf3087176809::bpf__OnAudioFinished__pf()
{
	bpf__ExecuteUbergraph_BP_TabMusic__pf_1(13);
}
void ABP_TabMusic_C__pf3087176809::bpf__OnPlayPauseToggled__pf(UUxtToggleStateComponent* bpp__ToggleState__pf)
{
	b0l__K2Node_CustomEvent_ToggleState__pf = bpp__ToggleState__pf;
	bpf__ExecuteUbergraph_BP_TabMusic__pf_2(8);
}
void ABP_TabMusic_C__pf3087176809::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_TabMusic__pf_0(3);
}
void ABP_TabMusic_C__pf3087176809::bpf__UpdateSlider__pf(float bpp__Duration__pf, float bpp__Percent__pf)
{
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	FVector bpfv__CallFunc_VLerp_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	UTextRenderComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__Percent__pf, bpp__Duration__pf);
	bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, ERoundingMode::HalfToEven, false, true, 1, 324, 2, 2);
	if(::IsValid(bpv__ChildActor_Text_ElapsedTime__pf) && ::IsValid((*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Text_ElapsedTime__pf), UChildActorComponent::__PPO__ChildActor() )))))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<UTextRenderComponent>((*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Text_ElapsedTime__pf), UChildActorComponent::__PPO__ChildActor() )))->AActor::GetComponentByClass(UTextRenderComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue__pf->UTextRenderComponent::K2_SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf);
	}
	bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpp__Percent__pf, 0.000000, 1.000000);
	FVector  __Local__128 = FVector(0.000000,0.000000,0.000000);
	FVector  __Local__129 = FVector(0.000000,0.000000,0.000000);
	bpfv__CallFunc_VLerp_ReturnValue__pf = UKismetMathLibrary::VLerp(((::IsValid(bpv__Min__pf)) ? ((*(AccessPrivateProperty<FVector >((bpv__Min__pf), USceneComponent::__PPO__RelativeLocation() )))) : (__Local__128)), ((::IsValid(bpv__Max__pf)) ? ((*(AccessPrivateProperty<FVector >((bpv__Max__pf), USceneComponent::__PPO__RelativeLocation() )))) : (__Local__129)), bpfv__CallFunc_FClamp_ReturnValue__pf);
	if(::IsValid(bpv__StaticMesh_Thumb__pf))
	{
		bpv__StaticMesh_Thumb__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_VLerp_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_TabMusic_C__pf3087176809::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Plane.Plane 
		{193, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXToolsExamples/Button/Blueprints/M_MusicArtwork.M_MusicArtwork 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Engine/VREditor/Sounds/VR_WorldMoveLoop_02.VR_WorldMoveLoop_02 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_SimpleLit_White.MI_SimpleLit_White 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Bold_42.Font_SegoeUI_Bold_42 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeHoloMDL_Regular_42.Font_SegoeHoloMDL_Regular_42 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_TabMusic_C__pf3087176809::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{165, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtUIElementComponent 
		{75, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{91, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{196, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtTextRenderActor 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXTools/Fonts/M_DefaultFont.M_DefaultFont 
		{85, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{191, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableCheckButtonActor 
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
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundWave 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.OnAudioFinished__DelegateSignature 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtUIElementHideDelegate__DelegateSignature 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.OnAudioPlaybackPercent__DelegateSignature 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtToggleStateComponent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtToggledDelegate__DelegateSignature 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{115, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_TabMusic_C__pf3087176809
{
	FRegisterHelper__ABP_TabMusic_C__pf3087176809()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/Button/Blueprints/BP_TabMusic"), &ABP_TabMusic_C__pf3087176809::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_TabMusic_C__pf3087176809 Instance;
};
FRegisterHelper__ABP_TabMusic_C__pf3087176809 FRegisterHelper__ABP_TabMusic_C__pf3087176809::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
