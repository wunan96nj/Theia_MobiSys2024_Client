#include "NativizedAssets.h"
#include "BP_NearMenu3x2__pf3499602411.h"
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
ABP_NearMenu3x2_C__pf3499602411::ABP_NearMenu3x2_C__pf3499602411(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__Buttons__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Buttons"));
	bpv__Button_01__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_01"));
	bpv__Button_02__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_02"));
	bpv__Button_03__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_03"));
	bpv__Button_04__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_04"));
	bpv__Button_05__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_05"));
	bpv__Button_06__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_06"));
	bpv__Button_Pin__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_Pin"));
	auto& __Local__0 = (*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__0 = FVector(1.600000, 12.800000, 9.600000);
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
	__Local__7 = FVector(0.001000, 0.000000, 4.000000);
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Top__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__8 = FVector(1.000000, 6.000000, 0.300000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__GrabDots_Top__pf), true, 0));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Bottom__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(0.001000, 0.000000, -4.000000);
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
	__Local__12 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__Button_01__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__13 = FVector(0.000000, 3.200000, 1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_01__pf), false, 0));
	bpv__Button_02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_02__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_02__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__14 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__15 = (*(AccessPrivateProperty<AActor* >((bpv__Button_02__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__15 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[1]);
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__Button_02__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(0.000000, 0.000000, 1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_02__pf), false, 0));
	bpv__Button_03__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_03__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__17 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_03__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__17 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__18 = (*(AccessPrivateProperty<AActor* >((bpv__Button_03__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__18 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[2]);
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__Button_03__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__19 = FVector(0.000000, -3.200000, 1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_03__pf), false, 0));
	bpv__Button_04__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_04__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__20 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_04__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__20 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__21 = (*(AccessPrivateProperty<AActor* >((bpv__Button_04__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__21 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[3]);
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__Button_04__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__22 = FVector(0.000000, 3.200000, -1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_04__pf), false, 0));
	bpv__Button_05__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_05__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__23 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_05__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__23 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__24 = (*(AccessPrivateProperty<AActor* >((bpv__Button_05__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__24 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[4]);
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__Button_05__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__25 = FVector(0.000000, 0.000000, -1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_05__pf), false, 0));
	bpv__Button_06__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_06__pf->AttachToComponent(bpv__Buttons__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__26 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_06__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__26 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__27 = (*(AccessPrivateProperty<AActor* >((bpv__Button_06__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__27 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[5]);
	auto& __Local__28 = (*(AccessPrivateProperty<FVector >((bpv__Button_06__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__28 = FVector(0.000000, -3.200000, -1.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_06__pf), false, 0));
	bpv__Button_Pin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_Pin__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__29 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__29 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__30 = (*(AccessPrivateProperty<AActor* >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__30 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_NearMenu3x2_C__pf3499602411::StaticClass())->MiscConvertedSubobjects[6]);
	auto& __Local__31 = (*(AccessPrivateProperty<FVector >((bpv__Button_Pin__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__31 = FVector(0.000000, -8.200000, 3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_Pin__pf), false, 0));
	auto& __Local__32 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__32 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_NearMenu3x2_C__pf3499602411::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__Button_Pin__pf)
	{
		bpv__Button_Pin__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenu3x2_C__pf3499602411::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__33 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_01_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__33);
	auto& __Local__34 = (*(AccessPrivateProperty<bool >((__Local__33), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__34 = false;
	auto& __Local__35 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__33), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__35.Icon = FString(TEXT("E713"));
	auto& __Local__36 = (*(AccessPrivateProperty<FText >((__Local__33), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__36 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C110EF6B497CFDDC986EF192B94A5E3E]\", \"CC0D8AB945A4013528FE6EB1F89F46FD\", \"Menu One\")")	);
	auto& __Local__37 = (*(AccessPrivateProperty<USceneComponent*>((__Local__33), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__38 = CastChecked<USceneComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__39 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__38), USceneComponent::__PPO__AttachParent() )));
	auto __Local__40 = CastChecked<UUxtPressableButtonComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__42{};
	const FProperty* __Local__41 = __Local__42.Get();
	if (nullptr == __Local__41)
	{
		__Local__41 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__41);
		__Local__42 = __Local__41;
	}
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__40), false, 0));
	__Local__39 = __Local__40;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__38), false, 0));
	__Local__37 = __Local__38;
	auto& __Local__43 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__33), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__44 = CastChecked<UUxtBackPlateComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__45 = (*(AccessPrivateProperty<USceneComponent*>((__Local__44), USceneComponent::__PPO__AttachParent() )));
	__Local__45 = __Local__38;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__44), true, 0));
	__Local__43 = __Local__44;
	auto& __Local__46 = (*(AccessPrivateProperty<USceneComponent*>((__Local__33), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__47 = CastChecked<USceneComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__48 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__47), USceneComponent::__PPO__AttachParent() )));
	__Local__48 = __Local__40;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__47), false, 0));
	__Local__46 = __Local__47;
	auto& __Local__49 = (*(AccessPrivateProperty<USceneComponent*>((__Local__33), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__50 = CastChecked<USceneComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__51 = (*(AccessPrivateProperty<USceneComponent*>((__Local__50), USceneComponent::__PPO__AttachParent() )));
	__Local__51 = __Local__47;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__50), false, 0));
	__Local__49 = __Local__50;
	auto& __Local__52 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__33), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__53 = CastChecked<UStaticMeshComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__54 = (*(AccessPrivateProperty<USceneComponent*>((__Local__53), USceneComponent::__PPO__AttachParent() )));
	__Local__54 = __Local__50;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__53), true, 0));
	__Local__52 = __Local__53;
	auto& __Local__55 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__33), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__56 = CastChecked<UTextRenderComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__57 = (*(AccessPrivateProperty<USceneComponent*>((__Local__56), USceneComponent::__PPO__AttachParent() )));
	__Local__57 = __Local__50;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__56), false, 0));
	__Local__55 = __Local__56;
	auto& __Local__58 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__33), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__59 = CastChecked<UTextRenderComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__60 = (*(AccessPrivateProperty<USceneComponent*>((__Local__59), USceneComponent::__PPO__AttachParent() )));
	__Local__60 = __Local__50;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__59), false, 0));
	__Local__58 = __Local__59;
	auto& __Local__61 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__33), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__62 = CastChecked<UAudioComponent>(__Local__33->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__63 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__62), USceneComponent::__PPO__AttachParent() )));
	__Local__63 = __Local__40;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__62), false, 0));
	__Local__61 = __Local__62;
	auto& __Local__64 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__33), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__64 = __Local__40;
	auto& __Local__65 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__33), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__65 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__66 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__33), AActor::__PPO__RootComponent() )));
	__Local__66 = __Local__40;
	auto __Local__67 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_02_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__67);
	auto& __Local__68 = (*(AccessPrivateProperty<bool >((__Local__67), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__68 = false;
	auto& __Local__69 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__67), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__69.Icon = FString(TEXT("E72D"));
	auto& __Local__70 = (*(AccessPrivateProperty<FText >((__Local__67), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__70 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C110EF6B497CFDDC986EF192B94A5E3E]\", \"A33CB08D4D58B4622C8EF298B785A9C7\", \"Menu Two\")")	);
	auto& __Local__71 = (*(AccessPrivateProperty<USceneComponent*>((__Local__67), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__72 = CastChecked<USceneComponent>(__Local__67->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__73 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__72), USceneComponent::__PPO__AttachParent() )));
	auto __Local__74 = CastChecked<UUxtPressableButtonComponent>(__Local__67->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__74), false, 0));
	__Local__73 = __Local__74;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__72), false, 0));
	__Local__71 = __Local__72;
	auto& __Local__75 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__67), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__76 = CastChecked<UUxtBackPlateComponent>(__Local__67->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__77 = (*(AccessPrivateProperty<USceneComponent*>((__Local__76), USceneComponent::__PPO__AttachParent() )));
	__Local__77 = __Local__72;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__76), true, 0));
	__Local__75 = __Local__76;
	auto& __Local__78 = (*(AccessPrivateProperty<USceneComponent*>((__Local__67), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__79 = CastChecked<USceneComponent>(__Local__67->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__80 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__79), USceneComponent::__PPO__AttachParent() )));
	__Local__80 = __Local__74;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__79), false, 0));
	__Local__78 = __Local__79;
	auto& __Local__81 = (*(AccessPrivateProperty<USceneComponent*>((__Local__67), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__82 = CastChecked<USceneComponent>(__Local__67->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__83 = (*(AccessPrivateProperty<USceneComponent*>((__Local__82), USceneComponent::__PPO__AttachParent() )));
	__Local__83 = __Local__79;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__82), false, 0));
	__Local__81 = __Local__82;
	auto& __Local__84 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__67), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__85 = CastChecked<UStaticMeshComponent>(__Local__67->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__86 = (*(AccessPrivateProperty<USceneComponent*>((__Local__85), USceneComponent::__PPO__AttachParent() )));
	__Local__86 = __Local__82;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__85), true, 0));
	__Local__84 = __Local__85;
	auto& __Local__87 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__67), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__88 = CastChecked<UTextRenderComponent>(__Local__67->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__89 = (*(AccessPrivateProperty<USceneComponent*>((__Local__88), USceneComponent::__PPO__AttachParent() )));
	__Local__89 = __Local__82;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__88), false, 0));
	__Local__87 = __Local__88;
	auto& __Local__90 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__67), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__91 = CastChecked<UTextRenderComponent>(__Local__67->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__92 = (*(AccessPrivateProperty<USceneComponent*>((__Local__91), USceneComponent::__PPO__AttachParent() )));
	__Local__92 = __Local__82;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__91), false, 0));
	__Local__90 = __Local__91;
	auto& __Local__93 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__67), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__94 = CastChecked<UAudioComponent>(__Local__67->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__95 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__94), USceneComponent::__PPO__AttachParent() )));
	__Local__95 = __Local__74;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__94), false, 0));
	__Local__93 = __Local__94;
	auto& __Local__96 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__67), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__96 = __Local__74;
	auto& __Local__97 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__67), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__97 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__98 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__67), AActor::__PPO__RootComponent() )));
	__Local__98 = __Local__74;
	auto __Local__99 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_03_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__99);
	auto& __Local__100 = (*(AccessPrivateProperty<bool >((__Local__99), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__100 = false;
	auto& __Local__101 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__99), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__101.Icon = FString(TEXT("E895"));
	auto& __Local__102 = (*(AccessPrivateProperty<FText >((__Local__99), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__102 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C110EF6B497CFDDC986EF192B94A5E3E]\", \"5DC35C174A9E10B7FAAE81849C80F25D\", \"Menu Three\")")	);
	auto& __Local__103 = (*(AccessPrivateProperty<USceneComponent*>((__Local__99), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__104 = CastChecked<USceneComponent>(__Local__99->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__105 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__104), USceneComponent::__PPO__AttachParent() )));
	auto __Local__106 = CastChecked<UUxtPressableButtonComponent>(__Local__99->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__106), false, 0));
	__Local__105 = __Local__106;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__104), false, 0));
	__Local__103 = __Local__104;
	auto& __Local__107 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__99), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__108 = CastChecked<UUxtBackPlateComponent>(__Local__99->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__109 = (*(AccessPrivateProperty<USceneComponent*>((__Local__108), USceneComponent::__PPO__AttachParent() )));
	__Local__109 = __Local__104;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__108), true, 0));
	__Local__107 = __Local__108;
	auto& __Local__110 = (*(AccessPrivateProperty<USceneComponent*>((__Local__99), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__111 = CastChecked<USceneComponent>(__Local__99->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__112 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__111), USceneComponent::__PPO__AttachParent() )));
	__Local__112 = __Local__106;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__111), false, 0));
	__Local__110 = __Local__111;
	auto& __Local__113 = (*(AccessPrivateProperty<USceneComponent*>((__Local__99), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__114 = CastChecked<USceneComponent>(__Local__99->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__115 = (*(AccessPrivateProperty<USceneComponent*>((__Local__114), USceneComponent::__PPO__AttachParent() )));
	__Local__115 = __Local__111;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__114), false, 0));
	__Local__113 = __Local__114;
	auto& __Local__116 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__99), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__117 = CastChecked<UStaticMeshComponent>(__Local__99->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__118 = (*(AccessPrivateProperty<USceneComponent*>((__Local__117), USceneComponent::__PPO__AttachParent() )));
	__Local__118 = __Local__114;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__117), true, 0));
	__Local__116 = __Local__117;
	auto& __Local__119 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__99), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__120 = CastChecked<UTextRenderComponent>(__Local__99->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__121 = (*(AccessPrivateProperty<USceneComponent*>((__Local__120), USceneComponent::__PPO__AttachParent() )));
	__Local__121 = __Local__114;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__120), false, 0));
	__Local__119 = __Local__120;
	auto& __Local__122 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__99), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__123 = CastChecked<UTextRenderComponent>(__Local__99->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__124 = (*(AccessPrivateProperty<USceneComponent*>((__Local__123), USceneComponent::__PPO__AttachParent() )));
	__Local__124 = __Local__114;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__123), false, 0));
	__Local__122 = __Local__123;
	auto& __Local__125 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__99), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__126 = CastChecked<UAudioComponent>(__Local__99->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__127 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__126), USceneComponent::__PPO__AttachParent() )));
	__Local__127 = __Local__106;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__126), false, 0));
	__Local__125 = __Local__126;
	auto& __Local__128 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__99), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__128 = __Local__106;
	auto& __Local__129 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__99), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__129 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__130 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__99), AActor::__PPO__RootComponent() )));
	__Local__130 = __Local__106;
	auto __Local__131 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_04_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__131);
	auto& __Local__132 = (*(AccessPrivateProperty<bool >((__Local__131), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__132 = false;
	auto& __Local__133 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__131), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__133.Icon = FString(TEXT("E706"));
	auto& __Local__134 = (*(AccessPrivateProperty<FText >((__Local__131), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__134 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C110EF6B497CFDDC986EF192B94A5E3E]\", \"9635F4B8400BB7C04993F4B7A8AB0069\", \"Menu Four\")")	);
	auto& __Local__135 = (*(AccessPrivateProperty<USceneComponent*>((__Local__131), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__136 = CastChecked<USceneComponent>(__Local__131->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__137 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__136), USceneComponent::__PPO__AttachParent() )));
	auto __Local__138 = CastChecked<UUxtPressableButtonComponent>(__Local__131->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__138), false, 0));
	__Local__137 = __Local__138;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__136), false, 0));
	__Local__135 = __Local__136;
	auto& __Local__139 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__131), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__140 = CastChecked<UUxtBackPlateComponent>(__Local__131->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__141 = (*(AccessPrivateProperty<USceneComponent*>((__Local__140), USceneComponent::__PPO__AttachParent() )));
	__Local__141 = __Local__136;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__140), true, 0));
	__Local__139 = __Local__140;
	auto& __Local__142 = (*(AccessPrivateProperty<USceneComponent*>((__Local__131), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__143 = CastChecked<USceneComponent>(__Local__131->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__144 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__143), USceneComponent::__PPO__AttachParent() )));
	__Local__144 = __Local__138;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__143), false, 0));
	__Local__142 = __Local__143;
	auto& __Local__145 = (*(AccessPrivateProperty<USceneComponent*>((__Local__131), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__146 = CastChecked<USceneComponent>(__Local__131->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__147 = (*(AccessPrivateProperty<USceneComponent*>((__Local__146), USceneComponent::__PPO__AttachParent() )));
	__Local__147 = __Local__143;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__146), false, 0));
	__Local__145 = __Local__146;
	auto& __Local__148 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__131), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__149 = CastChecked<UStaticMeshComponent>(__Local__131->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__150 = (*(AccessPrivateProperty<USceneComponent*>((__Local__149), USceneComponent::__PPO__AttachParent() )));
	__Local__150 = __Local__146;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__149), true, 0));
	__Local__148 = __Local__149;
	auto& __Local__151 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__131), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__152 = CastChecked<UTextRenderComponent>(__Local__131->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__153 = (*(AccessPrivateProperty<USceneComponent*>((__Local__152), USceneComponent::__PPO__AttachParent() )));
	__Local__153 = __Local__146;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__152), false, 0));
	__Local__151 = __Local__152;
	auto& __Local__154 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__131), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__155 = CastChecked<UTextRenderComponent>(__Local__131->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__156 = (*(AccessPrivateProperty<USceneComponent*>((__Local__155), USceneComponent::__PPO__AttachParent() )));
	__Local__156 = __Local__146;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__155), false, 0));
	__Local__154 = __Local__155;
	auto& __Local__157 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__131), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__158 = CastChecked<UAudioComponent>(__Local__131->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__159 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__158), USceneComponent::__PPO__AttachParent() )));
	__Local__159 = __Local__138;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__158), false, 0));
	__Local__157 = __Local__158;
	auto& __Local__160 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__131), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__160 = __Local__138;
	auto& __Local__161 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__131), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__161 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__162 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__131), AActor::__PPO__RootComponent() )));
	__Local__162 = __Local__138;
	auto __Local__163 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_05_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__163);
	auto& __Local__164 = (*(AccessPrivateProperty<bool >((__Local__163), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__164 = false;
	auto& __Local__165 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__163), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__165.Icon = FString(TEXT("E942"));
	auto& __Local__166 = (*(AccessPrivateProperty<FText >((__Local__163), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__166 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C110EF6B497CFDDC986EF192B94A5E3E]\", \"5E59CCD74BCD7C25F3855D84CD00D247\", \"Menu Five\")")	);
	auto& __Local__167 = (*(AccessPrivateProperty<USceneComponent*>((__Local__163), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__168 = CastChecked<USceneComponent>(__Local__163->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__169 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__168), USceneComponent::__PPO__AttachParent() )));
	auto __Local__170 = CastChecked<UUxtPressableButtonComponent>(__Local__163->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__170), false, 0));
	__Local__169 = __Local__170;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__168), false, 0));
	__Local__167 = __Local__168;
	auto& __Local__171 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__163), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__172 = CastChecked<UUxtBackPlateComponent>(__Local__163->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__173 = (*(AccessPrivateProperty<USceneComponent*>((__Local__172), USceneComponent::__PPO__AttachParent() )));
	__Local__173 = __Local__168;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__172), true, 0));
	__Local__171 = __Local__172;
	auto& __Local__174 = (*(AccessPrivateProperty<USceneComponent*>((__Local__163), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__175 = CastChecked<USceneComponent>(__Local__163->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__176 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__175), USceneComponent::__PPO__AttachParent() )));
	__Local__176 = __Local__170;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__175), false, 0));
	__Local__174 = __Local__175;
	auto& __Local__177 = (*(AccessPrivateProperty<USceneComponent*>((__Local__163), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__178 = CastChecked<USceneComponent>(__Local__163->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__179 = (*(AccessPrivateProperty<USceneComponent*>((__Local__178), USceneComponent::__PPO__AttachParent() )));
	__Local__179 = __Local__175;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__178), false, 0));
	__Local__177 = __Local__178;
	auto& __Local__180 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__163), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__181 = CastChecked<UStaticMeshComponent>(__Local__163->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__182 = (*(AccessPrivateProperty<USceneComponent*>((__Local__181), USceneComponent::__PPO__AttachParent() )));
	__Local__182 = __Local__178;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__181), true, 0));
	__Local__180 = __Local__181;
	auto& __Local__183 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__163), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__184 = CastChecked<UTextRenderComponent>(__Local__163->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__185 = (*(AccessPrivateProperty<USceneComponent*>((__Local__184), USceneComponent::__PPO__AttachParent() )));
	__Local__185 = __Local__178;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__184), false, 0));
	__Local__183 = __Local__184;
	auto& __Local__186 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__163), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__187 = CastChecked<UTextRenderComponent>(__Local__163->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__188 = (*(AccessPrivateProperty<USceneComponent*>((__Local__187), USceneComponent::__PPO__AttachParent() )));
	__Local__188 = __Local__178;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__187), false, 0));
	__Local__186 = __Local__187;
	auto& __Local__189 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__163), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__190 = CastChecked<UAudioComponent>(__Local__163->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__191 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__190), USceneComponent::__PPO__AttachParent() )));
	__Local__191 = __Local__170;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__190), false, 0));
	__Local__189 = __Local__190;
	auto& __Local__192 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__163), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__192 = __Local__170;
	auto& __Local__193 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__163), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__193 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__194 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__163), AActor::__PPO__RootComponent() )));
	__Local__194 = __Local__170;
	auto __Local__195 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_06_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__195);
	auto& __Local__196 = (*(AccessPrivateProperty<bool >((__Local__195), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__196 = false;
	auto& __Local__197 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__195), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__197.Icon = FString(TEXT("E761"));
	auto& __Local__198 = (*(AccessPrivateProperty<FText >((__Local__195), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__198 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C110EF6B497CFDDC986EF192B94A5E3E]\", \"1CA4D4B44618AEE7C27274A858FE3286\", \"Menu Six\")")	);
	auto& __Local__199 = (*(AccessPrivateProperty<USceneComponent*>((__Local__195), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__200 = CastChecked<USceneComponent>(__Local__195->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__201 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__200), USceneComponent::__PPO__AttachParent() )));
	auto __Local__202 = CastChecked<UUxtPressableButtonComponent>(__Local__195->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__202), false, 0));
	__Local__201 = __Local__202;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__200), false, 0));
	__Local__199 = __Local__200;
	auto& __Local__203 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__195), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__204 = CastChecked<UUxtBackPlateComponent>(__Local__195->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__205 = (*(AccessPrivateProperty<USceneComponent*>((__Local__204), USceneComponent::__PPO__AttachParent() )));
	__Local__205 = __Local__200;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__204), true, 0));
	__Local__203 = __Local__204;
	auto& __Local__206 = (*(AccessPrivateProperty<USceneComponent*>((__Local__195), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__207 = CastChecked<USceneComponent>(__Local__195->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__208 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__207), USceneComponent::__PPO__AttachParent() )));
	__Local__208 = __Local__202;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__207), false, 0));
	__Local__206 = __Local__207;
	auto& __Local__209 = (*(AccessPrivateProperty<USceneComponent*>((__Local__195), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__210 = CastChecked<USceneComponent>(__Local__195->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__211 = (*(AccessPrivateProperty<USceneComponent*>((__Local__210), USceneComponent::__PPO__AttachParent() )));
	__Local__211 = __Local__207;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__210), false, 0));
	__Local__209 = __Local__210;
	auto& __Local__212 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__195), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__213 = CastChecked<UStaticMeshComponent>(__Local__195->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__214 = (*(AccessPrivateProperty<USceneComponent*>((__Local__213), USceneComponent::__PPO__AttachParent() )));
	__Local__214 = __Local__210;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__213), true, 0));
	__Local__212 = __Local__213;
	auto& __Local__215 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__195), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__216 = CastChecked<UTextRenderComponent>(__Local__195->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__217 = (*(AccessPrivateProperty<USceneComponent*>((__Local__216), USceneComponent::__PPO__AttachParent() )));
	__Local__217 = __Local__210;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__216), false, 0));
	__Local__215 = __Local__216;
	auto& __Local__218 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__195), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__219 = CastChecked<UTextRenderComponent>(__Local__195->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__220 = (*(AccessPrivateProperty<USceneComponent*>((__Local__219), USceneComponent::__PPO__AttachParent() )));
	__Local__220 = __Local__210;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__219), false, 0));
	__Local__218 = __Local__219;
	auto& __Local__221 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__195), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__222 = CastChecked<UAudioComponent>(__Local__195->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__223 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__222), USceneComponent::__PPO__AttachParent() )));
	__Local__223 = __Local__202;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__222), false, 0));
	__Local__221 = __Local__222;
	auto& __Local__224 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__195), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__224 = __Local__202;
	auto& __Local__225 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__195), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__225 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__226 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__195), AActor::__PPO__RootComponent() )));
	__Local__226 = __Local__202;
	auto __Local__227 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("Button_Pin_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__227);
	auto& __Local__228 = (*(AccessPrivateProperty<bool >((__Local__227), AUxtPressableToggleButtonActor::__PPO__bIsInitiallyChecked() )));
	__Local__228 = true;
	auto& __Local__229 = (*(AccessPrivateProperty<bool >((__Local__227), AUxtPressableToggleButtonActor::__PPO__bToggleOnRelease() )));
	__Local__229 = true;
	auto& __Local__230 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__227), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__231 = CastChecked<UUxtToggleStateComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__231), false, 0));
	__Local__230 = __Local__231;
	auto& __Local__232 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__227), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__233 = CastChecked<UUxtBackPlateComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__234 = (*(AccessPrivateProperty<USceneComponent*>((__Local__233), USceneComponent::__PPO__AttachParent() )));
	auto __Local__235 = CastChecked<USceneComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__236 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__235), USceneComponent::__PPO__AttachParent() )));
	auto __Local__237 = CastChecked<UUxtPressableButtonComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__237), false, 0));
	__Local__236 = __Local__237;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__235), false, 0));
	__Local__234 = __Local__235;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__233), true, 0));
	__Local__232 = __Local__233;
	auto& __Local__238 = (*(AccessPrivateProperty<bool >((__Local__227), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__238 = false;
	auto& __Local__239 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__227), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__239.Icon = FString(TEXT("E718"));
	__Local__239.TextBrush.RelativeRotation = FRotator(0.000000, 0.000000, 45.000000);
	auto& __Local__240 = (*(AccessPrivateProperty<FText >((__Local__227), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__240 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C110EF6B497CFDDC986EF192B94A5E3E]\", \"6D7D295E4F13F8FE1CC421A714389B60\", \"Pin\")")	);
	auto& __Local__241 = (*(AccessPrivateProperty<USceneComponent*>((__Local__227), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__241 = __Local__235;
	auto& __Local__242 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__227), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__243 = CastChecked<UUxtBackPlateComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__244 = (*(AccessPrivateProperty<USceneComponent*>((__Local__243), USceneComponent::__PPO__AttachParent() )));
	__Local__244 = __Local__235;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__243), true, 0));
	__Local__242 = __Local__243;
	auto& __Local__245 = (*(AccessPrivateProperty<USceneComponent*>((__Local__227), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__246 = CastChecked<USceneComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__247 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__246), USceneComponent::__PPO__AttachParent() )));
	__Local__247 = __Local__237;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__246), false, 0));
	__Local__245 = __Local__246;
	auto& __Local__248 = (*(AccessPrivateProperty<USceneComponent*>((__Local__227), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__249 = CastChecked<USceneComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__250 = (*(AccessPrivateProperty<USceneComponent*>((__Local__249), USceneComponent::__PPO__AttachParent() )));
	__Local__250 = __Local__246;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__249), false, 0));
	__Local__248 = __Local__249;
	auto& __Local__251 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__227), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__252 = CastChecked<UStaticMeshComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__253 = (*(AccessPrivateProperty<USceneComponent*>((__Local__252), USceneComponent::__PPO__AttachParent() )));
	__Local__253 = __Local__249;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__252), true, 0));
	__Local__251 = __Local__252;
	auto& __Local__254 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__227), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__255 = CastChecked<UTextRenderComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__256 = (*(AccessPrivateProperty<USceneComponent*>((__Local__255), USceneComponent::__PPO__AttachParent() )));
	__Local__256 = __Local__249;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__255), false, 0));
	__Local__254 = __Local__255;
	auto& __Local__257 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__227), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__258 = CastChecked<UTextRenderComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__259 = (*(AccessPrivateProperty<USceneComponent*>((__Local__258), USceneComponent::__PPO__AttachParent() )));
	__Local__259 = __Local__249;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__258), false, 0));
	__Local__257 = __Local__258;
	auto& __Local__260 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__227), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__261 = CastChecked<UAudioComponent>(__Local__227->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__262 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__261), USceneComponent::__PPO__AttachParent() )));
	__Local__262 = __Local__237;
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__261), false, 0));
	__Local__260 = __Local__261;
	auto& __Local__263 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__227), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__263 = __Local__237;
	auto& __Local__264 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__227), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__264 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__265 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__227), AActor::__PPO__RootComponent() )));
	__Local__265 = __Local__237;
	auto __Local__266 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__266);
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__266), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_NearMenu3x2_C__pf3499602411::bpf__UserConstructionScript__pf()
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
				AActor*  __Local__267 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf = Cast<AUxtPressableToggleButtonActor>(((::IsValid(bpv__Button_Pin__pf)) ? ((*(AccessPrivateProperty<AActor* >((bpv__Button_Pin__pf), UChildActorComponent::__PPO__ChildActor() )))) : (__Local__267)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				UUxtPressableButtonComponent*  __Local__268 = ((UUxtPressableButtonComponent*)nullptr);
				bpv__PinButton__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UUxtPressableButtonComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )))) : (__Local__268));
			}
		case 5:
			{
				UUxtToggleStateComponent*  __Local__269 = ((UUxtToggleStateComponent*)nullptr);
				bpv__PinButtonState__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UUxtToggleStateComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Toggle_Button_Actor__pf), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )))) : (__Local__269));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenu3x2_C__pf3499602411::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenu3x2_C__pf3499602411::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__ABP_NearMenu3x2_C__pf3499602411
{
	FRegisterHelper__ABP_NearMenu3x2_C__pf3499602411()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/NearMenu/Blueprints/BP_NearMenu3x2"), &ABP_NearMenu3x2_C__pf3499602411::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_NearMenu3x2_C__pf3499602411 Instance;
};
FRegisterHelper__ABP_NearMenu3x2_C__pf3499602411 FRegisterHelper__ABP_NearMenu3x2_C__pf3499602411::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
