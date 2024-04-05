#include "NativizedAssets.h"
#include "BP_TabbedMenu__pf3087176809.h"
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
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtUIElementComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBackPlateComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
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
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "BP_TabNumpad__pf3087176809.h"
#include "BP_TabMusic__pf3087176809.h"
#include "BP_TabCalender__pf3087176809.h"
#include "BP_TabChecklist__pf3087176809.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtToggleGroupComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_TabbedMenu_C__pf3087176809::ABP_TabbedMenu_C__pf3087176809(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__UxtUIElement_Menu__pf = CreateDefaultSubobject<UUxtUIElementComponent>(TEXT("UxtUIElement_Menu"));
	bpv__UxtBackPlate__pf = CreateDefaultSubobject<UUxtBackPlateComponent>(TEXT("UxtBackPlate"));
	bpv__Divider__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Divider"));
	bpv__ChildActor_Toggle_Numpad__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Toggle_Numpad"));
	bpv__ChildActor_Toggle_Music__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Toggle_Music"));
	bpv__ChildActor_Toggle_Calendar__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Toggle_Calendar"));
	bpv__ChildActor_Toggle_Checklist__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Toggle_Checklist"));
	bpv__ChildActor_Tab_Numpad__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Tab_Numpad"));
	bpv__ChildActor_Tab_Music__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Tab_Music"));
	bpv__ChildActor_Tab_Calendar__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Tab_Calendar"));
	bpv__ChildActor_Tab_Checklist__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor_Tab_Checklist"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__UxtToggleGroup__pf = CreateDefaultSubobject<UUxtToggleGroupComponent>(TEXT("UxtToggleGroup"));
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
	bpv__UxtUIElement_Menu__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtUIElement_Menu__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtUIElement_Menu__pf), false, 0));
	bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtBackPlate__pf->AttachToComponent(bpv__UxtUIElement_Menu__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__UxtBackPlate__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__UxtBackPlate__pf->OverrideMaterials.Reserve(1);
	bpv__UxtBackPlate__pf->OverrideMaterials.Add(nullptr);
	bpv__UxtBackPlate__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__2 = FVector(1.600000, 12.800000, 20.200001);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtBackPlate__pf), true, 0));
	bpv__Divider__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Divider__pf->AttachToComponent(bpv__UxtUIElement_Menu__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Divider__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__3 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Divider__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Divider__pf->OverrideMaterials.Reserve(1);
	bpv__Divider__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Divider__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__Divider__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__4 = FVector(0.000000, 0.000000, 6.659113);
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__Divider__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__5 = FVector(0.000800, 0.120000, 0.000800);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Divider__pf), true, 0));
	bpv__ChildActor_Toggle_Numpad__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Toggle_Numpad__pf->AttachToComponent(bpv__UxtUIElement_Menu__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Toggle_Numpad__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__6 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__7 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Toggle_Numpad__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__7 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Toggle_Numpad__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__8 = FVector(0.000000, 4.800177, 8.500009);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Toggle_Numpad__pf), false, 0));
	bpv__ChildActor_Toggle_Music__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Toggle_Music__pf->AttachToComponent(bpv__UxtUIElement_Menu__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__9 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Toggle_Music__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__9 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__10 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Toggle_Music__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__10 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[1]);
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Toggle_Music__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__11 = FVector(0.000000, 1.600238, 8.500009);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Toggle_Music__pf), false, 0));
	bpv__ChildActor_Toggle_Calendar__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Toggle_Calendar__pf->AttachToComponent(bpv__UxtUIElement_Menu__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Toggle_Calendar__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__12 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__13 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Toggle_Calendar__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__13 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[2]);
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Toggle_Calendar__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(0.000000, -1.599788, 8.500009);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Toggle_Calendar__pf), false, 0));
	bpv__ChildActor_Toggle_Checklist__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Toggle_Checklist__pf->AttachToComponent(bpv__UxtUIElement_Menu__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__15 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Toggle_Checklist__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__15 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__16 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Toggle_Checklist__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__16 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[3]);
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Toggle_Checklist__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__17 = FVector(0.000000, -4.799742, 8.500009);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Toggle_Checklist__pf), false, 0));
	bpv__ChildActor_Tab_Numpad__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Tab_Numpad__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Tab_Numpad__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__18 = ABP_TabNumpad_C__pf3087176809::StaticClass();
	auto& __Local__19 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Tab_Numpad__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__19 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[4]);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Tab_Numpad__pf), false, 0));
	bpv__ChildActor_Tab_Music__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Tab_Music__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__20 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Tab_Music__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__20 = ABP_TabMusic_C__pf3087176809::StaticClass();
	auto& __Local__21 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Tab_Music__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__21 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[5]);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Tab_Music__pf), false, 0));
	bpv__ChildActor_Tab_Calendar__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Tab_Calendar__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__22 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Tab_Calendar__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__22 = ABP_TabCalender_C__pf3087176809::StaticClass();
	auto& __Local__23 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Tab_Calendar__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__23 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[6]);
	auto& __Local__24 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Tab_Calendar__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__24 = FVector(0.000000, 0.000000, -1.600000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Tab_Calendar__pf), false, 0));
	bpv__ChildActor_Tab_Checklist__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ChildActor_Tab_Checklist__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__25 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__ChildActor_Tab_Checklist__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__25 = ABP_TabChecklist_C__pf3087176809::StaticClass();
	auto& __Local__26 = (*(AccessPrivateProperty<AActor* >((bpv__ChildActor_Tab_Checklist__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__26 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_TabbedMenu_C__pf3087176809::StaticClass())->MiscConvertedSubobjects[7]);
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__ChildActor_Tab_Checklist__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__27 = FVector(0.000000, 0.000000, -1.600000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__ChildActor_Tab_Checklist__pf), false, 0));
	bpv__UxtToggleGroup__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__28 = (*(AccessPrivateProperty<int32 >((bpv__UxtToggleGroup__pf), UUxtToggleGroupComponent::__PPO__SelectedIndex() )));
	__Local__28 = 0;
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<FComponentReference> >((bpv__UxtToggleGroup__pf), UUxtToggleGroupComponent::__PPO__ToggleReferences() )));
	__Local__29 = TArray<FComponentReference> ();
	__Local__29.AddUninitialized(4);
	FComponentReference::StaticStruct()->InitializeStruct(__Local__29.GetData(), 4);
	auto& __Local__30 = __Local__29[0];
	__Local__30.ComponentProperty = FName(TEXT("ChildActor_Toggle_Numpad"));
	auto& __Local__31 = __Local__29[1];
	__Local__31.ComponentProperty = FName(TEXT("ChildActor_Toggle_Music"));
	auto& __Local__32 = __Local__29[2];
	__Local__32.ComponentProperty = FName(TEXT("ChildActor_Toggle_Calendar"));
	auto& __Local__33 = __Local__29[3];
	__Local__33.ComponentProperty = FName(TEXT("ChildActor_Toggle_Checklist"));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtToggleGroup__pf), false, 0));
	auto& __Local__34 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__34 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_TabbedMenu_C__pf3087176809::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtUIElement_Menu__pf)
	{
		bpv__UxtUIElement_Menu__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtBackPlate__pf)
	{
		bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Divider__pf)
	{
		bpv__Divider__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Toggle_Numpad__pf)
	{
		bpv__ChildActor_Toggle_Numpad__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Toggle_Music__pf)
	{
		bpv__ChildActor_Toggle_Music__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Toggle_Calendar__pf)
	{
		bpv__ChildActor_Toggle_Calendar__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Toggle_Checklist__pf)
	{
		bpv__ChildActor_Toggle_Checklist__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Tab_Numpad__pf)
	{
		bpv__ChildActor_Tab_Numpad__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Tab_Music__pf)
	{
		bpv__ChildActor_Tab_Music__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Tab_Calendar__pf)
	{
		bpv__ChildActor_Tab_Calendar__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ChildActor_Tab_Checklist__pf)
	{
		bpv__ChildActor_Tab_Checklist__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtToggleGroup__pf)
	{
		bpv__UxtToggleGroup__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_TabbedMenu_C__pf3087176809::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ABP_TabNumpad_C__pf3087176809::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_TabMusic_C__pf3087176809::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_TabCalender_C__pf3087176809::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_TabChecklist_C__pf3087176809::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__35 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("ChildActor_Toggle_Numpad_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__35);
	auto& __Local__36 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__35), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__37 = CastChecked<UUxtToggleStateComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__39{};
	const FProperty* __Local__38 = __Local__39.Get();
	if (nullptr == __Local__38)
	{
		__Local__38 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__38);
		__Local__39 = __Local__38;
	}
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__37), false, 0));
	__Local__36 = __Local__37;
	auto& __Local__40 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__35), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__41 = CastChecked<UUxtBackPlateComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__42 = (*(AccessPrivateProperty<USceneComponent*>((__Local__41), USceneComponent::__PPO__AttachParent() )));
	auto __Local__43 = CastChecked<USceneComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__44 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__43), USceneComponent::__PPO__AttachParent() )));
	auto __Local__45 = CastChecked<UUxtPressableButtonComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__45), false, 0));
	__Local__44 = __Local__45;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__43), false, 0));
	__Local__42 = __Local__43;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__41), true, 0));
	__Local__40 = __Local__41;
	auto& __Local__46 = (*(AccessPrivateProperty<bool >((__Local__35), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__46 = false;
	auto& __Local__47 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__35), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__47.Icon = FString(TEXT("E765"));
	auto& __Local__48 = (*(AccessPrivateProperty<FText >((__Local__35), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__48 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[056774A34381B9E7A2C30E946D2E6F48]\", \"88B7B3E6415D0FFD7B467FB325F59D0B\", \"Numpad\")")	);
	auto& __Local__49 = (*(AccessPrivateProperty<USceneComponent*>((__Local__35), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__49 = __Local__43;
	auto& __Local__50 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__35), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__51 = CastChecked<UUxtBackPlateComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__52 = (*(AccessPrivateProperty<USceneComponent*>((__Local__51), USceneComponent::__PPO__AttachParent() )));
	__Local__52 = __Local__43;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__51), true, 0));
	__Local__50 = __Local__51;
	auto& __Local__53 = (*(AccessPrivateProperty<USceneComponent*>((__Local__35), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__54 = CastChecked<USceneComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__55 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__54), USceneComponent::__PPO__AttachParent() )));
	__Local__55 = __Local__45;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__54), false, 0));
	__Local__53 = __Local__54;
	auto& __Local__56 = (*(AccessPrivateProperty<USceneComponent*>((__Local__35), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__57 = CastChecked<USceneComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__58 = (*(AccessPrivateProperty<USceneComponent*>((__Local__57), USceneComponent::__PPO__AttachParent() )));
	__Local__58 = __Local__54;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__57), false, 0));
	__Local__56 = __Local__57;
	auto& __Local__59 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__35), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__60 = CastChecked<UStaticMeshComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__61 = (*(AccessPrivateProperty<USceneComponent*>((__Local__60), USceneComponent::__PPO__AttachParent() )));
	__Local__61 = __Local__57;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__60), true, 0));
	__Local__59 = __Local__60;
	auto& __Local__62 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__35), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__63 = CastChecked<UTextRenderComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__64 = (*(AccessPrivateProperty<USceneComponent*>((__Local__63), USceneComponent::__PPO__AttachParent() )));
	__Local__64 = __Local__57;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__63), false, 0));
	__Local__62 = __Local__63;
	auto& __Local__65 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__35), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__66 = CastChecked<UTextRenderComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__67 = (*(AccessPrivateProperty<USceneComponent*>((__Local__66), USceneComponent::__PPO__AttachParent() )));
	__Local__67 = __Local__57;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__66), false, 0));
	__Local__65 = __Local__66;
	auto& __Local__68 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__35), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__69 = CastChecked<UAudioComponent>(__Local__35->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__70 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__69), USceneComponent::__PPO__AttachParent() )));
	__Local__70 = __Local__45;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__69), false, 0));
	__Local__68 = __Local__69;
	auto& __Local__71 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__35), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__71 = __Local__45;
	auto& __Local__72 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__35), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__72 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__73 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__35), AActor::__PPO__RootComponent() )));
	__Local__73 = __Local__45;
	auto __Local__74 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("ChildActor_Toggle_Music_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__74);
	auto& __Local__75 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__74), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__76 = CastChecked<UUxtToggleStateComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__76), false, 0));
	__Local__75 = __Local__76;
	auto& __Local__77 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__74), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__78 = CastChecked<UUxtBackPlateComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__79 = (*(AccessPrivateProperty<USceneComponent*>((__Local__78), USceneComponent::__PPO__AttachParent() )));
	auto __Local__80 = CastChecked<USceneComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__81 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__80), USceneComponent::__PPO__AttachParent() )));
	auto __Local__82 = CastChecked<UUxtPressableButtonComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__82), false, 0));
	__Local__81 = __Local__82;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__80), false, 0));
	__Local__79 = __Local__80;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__78), true, 0));
	__Local__77 = __Local__78;
	auto& __Local__83 = (*(AccessPrivateProperty<bool >((__Local__74), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__83 = false;
	auto& __Local__84 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__74), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__84.Icon = FString(TEXT("E995"));
	auto& __Local__85 = (*(AccessPrivateProperty<FText >((__Local__74), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__85 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[056774A34381B9E7A2C30E946D2E6F48]\", \"A50C94AD4FE101373E9D528B603E763E\", \"Music\")")	);
	auto& __Local__86 = (*(AccessPrivateProperty<USceneComponent*>((__Local__74), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__86 = __Local__80;
	auto& __Local__87 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__74), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__88 = CastChecked<UUxtBackPlateComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__89 = (*(AccessPrivateProperty<USceneComponent*>((__Local__88), USceneComponent::__PPO__AttachParent() )));
	__Local__89 = __Local__80;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__88), true, 0));
	__Local__87 = __Local__88;
	auto& __Local__90 = (*(AccessPrivateProperty<USceneComponent*>((__Local__74), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__91 = CastChecked<USceneComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__92 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__91), USceneComponent::__PPO__AttachParent() )));
	__Local__92 = __Local__82;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__91), false, 0));
	__Local__90 = __Local__91;
	auto& __Local__93 = (*(AccessPrivateProperty<USceneComponent*>((__Local__74), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__94 = CastChecked<USceneComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__95 = (*(AccessPrivateProperty<USceneComponent*>((__Local__94), USceneComponent::__PPO__AttachParent() )));
	__Local__95 = __Local__91;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__94), false, 0));
	__Local__93 = __Local__94;
	auto& __Local__96 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__74), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__97 = CastChecked<UStaticMeshComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__98 = (*(AccessPrivateProperty<USceneComponent*>((__Local__97), USceneComponent::__PPO__AttachParent() )));
	__Local__98 = __Local__94;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__97), true, 0));
	__Local__96 = __Local__97;
	auto& __Local__99 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__74), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__100 = CastChecked<UTextRenderComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__101 = (*(AccessPrivateProperty<USceneComponent*>((__Local__100), USceneComponent::__PPO__AttachParent() )));
	__Local__101 = __Local__94;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__100), false, 0));
	__Local__99 = __Local__100;
	auto& __Local__102 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__74), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__103 = CastChecked<UTextRenderComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__104 = (*(AccessPrivateProperty<USceneComponent*>((__Local__103), USceneComponent::__PPO__AttachParent() )));
	__Local__104 = __Local__94;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__103), false, 0));
	__Local__102 = __Local__103;
	auto& __Local__105 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__74), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__106 = CastChecked<UAudioComponent>(__Local__74->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__107 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__106), USceneComponent::__PPO__AttachParent() )));
	__Local__107 = __Local__82;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__106), false, 0));
	__Local__105 = __Local__106;
	auto& __Local__108 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__74), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__108 = __Local__82;
	auto& __Local__109 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__74), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__109 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__110 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__74), AActor::__PPO__RootComponent() )));
	__Local__110 = __Local__82;
	auto __Local__111 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("ChildActor_Toggle_Calendar_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__111);
	auto& __Local__112 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__111), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__113 = CastChecked<UUxtToggleStateComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__113), false, 0));
	__Local__112 = __Local__113;
	auto& __Local__114 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__111), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__115 = CastChecked<UUxtBackPlateComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__116 = (*(AccessPrivateProperty<USceneComponent*>((__Local__115), USceneComponent::__PPO__AttachParent() )));
	auto __Local__117 = CastChecked<USceneComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__118 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__117), USceneComponent::__PPO__AttachParent() )));
	auto __Local__119 = CastChecked<UUxtPressableButtonComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__119), false, 0));
	__Local__118 = __Local__119;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__117), false, 0));
	__Local__116 = __Local__117;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__115), true, 0));
	__Local__114 = __Local__115;
	auto& __Local__120 = (*(AccessPrivateProperty<bool >((__Local__111), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__120 = false;
	auto& __Local__121 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__111), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__121.Icon = FString(TEXT("EC92"));
	auto& __Local__122 = (*(AccessPrivateProperty<FText >((__Local__111), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__122 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[056774A34381B9E7A2C30E946D2E6F48]\", \"F5532B0C4A29C1B65C3169A1991296C3\", \"Calendar\")")	);
	auto& __Local__123 = (*(AccessPrivateProperty<USceneComponent*>((__Local__111), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__123 = __Local__117;
	auto& __Local__124 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__111), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__125 = CastChecked<UUxtBackPlateComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__126 = (*(AccessPrivateProperty<USceneComponent*>((__Local__125), USceneComponent::__PPO__AttachParent() )));
	__Local__126 = __Local__117;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__125), true, 0));
	__Local__124 = __Local__125;
	auto& __Local__127 = (*(AccessPrivateProperty<USceneComponent*>((__Local__111), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__128 = CastChecked<USceneComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__129 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__128), USceneComponent::__PPO__AttachParent() )));
	__Local__129 = __Local__119;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__128), false, 0));
	__Local__127 = __Local__128;
	auto& __Local__130 = (*(AccessPrivateProperty<USceneComponent*>((__Local__111), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__131 = CastChecked<USceneComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__132 = (*(AccessPrivateProperty<USceneComponent*>((__Local__131), USceneComponent::__PPO__AttachParent() )));
	__Local__132 = __Local__128;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__131), false, 0));
	__Local__130 = __Local__131;
	auto& __Local__133 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__111), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__134 = CastChecked<UStaticMeshComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__135 = (*(AccessPrivateProperty<USceneComponent*>((__Local__134), USceneComponent::__PPO__AttachParent() )));
	__Local__135 = __Local__131;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__134), true, 0));
	__Local__133 = __Local__134;
	auto& __Local__136 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__111), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__137 = CastChecked<UTextRenderComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__138 = (*(AccessPrivateProperty<USceneComponent*>((__Local__137), USceneComponent::__PPO__AttachParent() )));
	__Local__138 = __Local__131;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__137), false, 0));
	__Local__136 = __Local__137;
	auto& __Local__139 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__111), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__140 = CastChecked<UTextRenderComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__141 = (*(AccessPrivateProperty<USceneComponent*>((__Local__140), USceneComponent::__PPO__AttachParent() )));
	__Local__141 = __Local__131;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__140), false, 0));
	__Local__139 = __Local__140;
	auto& __Local__142 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__111), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__143 = CastChecked<UAudioComponent>(__Local__111->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__144 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__143), USceneComponent::__PPO__AttachParent() )));
	__Local__144 = __Local__119;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__143), false, 0));
	__Local__142 = __Local__143;
	auto& __Local__145 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__111), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__145 = __Local__119;
	auto& __Local__146 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__111), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__146 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__147 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__111), AActor::__PPO__RootComponent() )));
	__Local__147 = __Local__119;
	auto __Local__148 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("ChildActor_Toggle_Checklist_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__148);
	auto& __Local__149 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__148), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__150 = CastChecked<UUxtToggleStateComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__150), false, 0));
	__Local__149 = __Local__150;
	auto& __Local__151 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__148), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__152 = CastChecked<UUxtBackPlateComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__153 = (*(AccessPrivateProperty<USceneComponent*>((__Local__152), USceneComponent::__PPO__AttachParent() )));
	auto __Local__154 = CastChecked<USceneComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__155 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__154), USceneComponent::__PPO__AttachParent() )));
	auto __Local__156 = CastChecked<UUxtPressableButtonComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__156), false, 0));
	__Local__155 = __Local__156;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__154), false, 0));
	__Local__153 = __Local__154;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__152), true, 0));
	__Local__151 = __Local__152;
	auto& __Local__157 = (*(AccessPrivateProperty<bool >((__Local__148), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__157 = false;
	auto& __Local__158 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__148), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__158.Icon = FString(TEXT("E71D"));
	auto& __Local__159 = (*(AccessPrivateProperty<FText >((__Local__148), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__159 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[056774A34381B9E7A2C30E946D2E6F48]\", \"E6DD0F4A4E81775A2D396A966069835B\", \"Checklist\")")	);
	auto& __Local__160 = (*(AccessPrivateProperty<USceneComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__160 = __Local__154;
	auto& __Local__161 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__162 = CastChecked<UUxtBackPlateComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__163 = (*(AccessPrivateProperty<USceneComponent*>((__Local__162), USceneComponent::__PPO__AttachParent() )));
	__Local__163 = __Local__154;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__162), true, 0));
	__Local__161 = __Local__162;
	auto& __Local__164 = (*(AccessPrivateProperty<USceneComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__165 = CastChecked<USceneComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__166 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__165), USceneComponent::__PPO__AttachParent() )));
	__Local__166 = __Local__156;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__165), false, 0));
	__Local__164 = __Local__165;
	auto& __Local__167 = (*(AccessPrivateProperty<USceneComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__168 = CastChecked<USceneComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__169 = (*(AccessPrivateProperty<USceneComponent*>((__Local__168), USceneComponent::__PPO__AttachParent() )));
	__Local__169 = __Local__165;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__168), false, 0));
	__Local__167 = __Local__168;
	auto& __Local__170 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__171 = CastChecked<UStaticMeshComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__172 = (*(AccessPrivateProperty<USceneComponent*>((__Local__171), USceneComponent::__PPO__AttachParent() )));
	__Local__172 = __Local__168;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__171), true, 0));
	__Local__170 = __Local__171;
	auto& __Local__173 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__174 = CastChecked<UTextRenderComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__175 = (*(AccessPrivateProperty<USceneComponent*>((__Local__174), USceneComponent::__PPO__AttachParent() )));
	__Local__175 = __Local__168;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__174), false, 0));
	__Local__173 = __Local__174;
	auto& __Local__176 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__177 = CastChecked<UTextRenderComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__178 = (*(AccessPrivateProperty<USceneComponent*>((__Local__177), USceneComponent::__PPO__AttachParent() )));
	__Local__178 = __Local__168;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__177), false, 0));
	__Local__176 = __Local__177;
	auto& __Local__179 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__148), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__180 = CastChecked<UAudioComponent>(__Local__148->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__181 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__180), USceneComponent::__PPO__AttachParent() )));
	__Local__181 = __Local__156;
	(((FBoolProperty*)__Local__38)->SetPropertyValue_InContainer((__Local__180), false, 0));
	__Local__179 = __Local__180;
	auto& __Local__182 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__148), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__182 = __Local__156;
	auto& __Local__183 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__148), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__183 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__184 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__148), AActor::__PPO__RootComponent() )));
	__Local__184 = __Local__156;
	ABP_TabNumpad_C__pf3087176809::StaticClass()->GetDefaultObject();
	auto __Local__185 = NewObject<ABP_TabNumpad_C__pf3087176809>(InDynamicClass, ABP_TabNumpad_C__pf3087176809::StaticClass(), TEXT("ChildActor_GEN_VARIABLE_BP_NumpadTab_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__185);
	auto& __Local__186 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__185), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__186 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_TabMusic_C__pf3087176809::StaticClass()->GetDefaultObject();
	auto __Local__187 = NewObject<ABP_TabMusic_C__pf3087176809>(InDynamicClass, ABP_TabMusic_C__pf3087176809::StaticClass(), TEXT("ChildActor_Tab_Music_GEN_VARIABLE_BP_TabMusic_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__187);
	auto& __Local__188 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__187), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__188 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_TabCalender_C__pf3087176809::StaticClass()->GetDefaultObject();
	auto __Local__189 = NewObject<ABP_TabCalender_C__pf3087176809>(InDynamicClass, ABP_TabCalender_C__pf3087176809::StaticClass(), TEXT("ChildActor_Tab_Calendar_GEN_VARIABLE_BP_TabCalender_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__189);
	auto& __Local__190 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__189), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__190 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_TabChecklist_C__pf3087176809::StaticClass()->GetDefaultObject();
	auto __Local__191 = NewObject<ABP_TabChecklist_C__pf3087176809>(InDynamicClass, ABP_TabChecklist_C__pf3087176809::StaticClass(), TEXT("ChildActor_Tab_Checklist_GEN_VARIABLE_BP_TabChecklist_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__191);
	auto& __Local__192 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__191), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__192 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_TabbedMenu_C__pf3087176809::bpf__ExecuteUbergraph_BP_TabbedMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	UUxtToggleStateComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(4);
			}
		case 2:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(4, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__ChildActor_Toggle_Numpad__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__ChildActor_Toggle_Music__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__ChildActor_Toggle_Calendar__pf;
				b0l__K2Node_MakeArray_Array__pf[3] = bpv__ChildActor_Toggle_Checklist__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf) && ::IsValid((*(AccessPrivateProperty<AActor* >((b0l__CallFunc_Array_Get_Item__pf), UChildActorComponent::__PPO__ChildActor() )))))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<UUxtToggleStateComponent>((*(AccessPrivateProperty<AActor* >((b0l__CallFunc_Array_Get_Item__pf), UChildActorComponent::__PPO__ChildActor() )))->AActor::GetComponentByClass(UUxtToggleStateComponent::StaticClass()), ECastCheckedType::NullAllowed);
				}
				bpf__OnxTabxToggled__pfTT(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf);
			}
		case 3:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("On Tab Toggled")));
				b0l__K2Node_MakeArray_Array__pf.SetNum(4, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__ChildActor_Toggle_Numpad__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__ChildActor_Toggle_Music__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__ChildActor_Toggle_Calendar__pf;
				b0l__K2Node_MakeArray_Array__pf[3] = bpv__ChildActor_Toggle_Checklist__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf) && ::IsValid((*(AccessPrivateProperty<AActor* >((b0l__CallFunc_Array_Get_Item__pf), UChildActorComponent::__PPO__ChildActor() )))))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<UUxtToggleStateComponent>((*(AccessPrivateProperty<AActor* >((b0l__CallFunc_Array_Get_Item__pf), UChildActorComponent::__PPO__ChildActor() )))->AActor::GetComponentByClass(UUxtToggleStateComponent::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf->OnToggled.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 5:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(4, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__ChildActor_Toggle_Numpad__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__ChildActor_Toggle_Music__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__ChildActor_Toggle_Calendar__pf;
				b0l__K2Node_MakeArray_Array__pf[3] = bpv__ChildActor_Toggle_Checklist__pf;
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__K2Node_MakeArray_Array__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 1;
				break;
			}
		case 7:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 8:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 5;
				break;
			}
		case 9:
			{
				__CurrentState = 7;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_TabbedMenu_C__pf3087176809::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_TabbedMenu__pf_0(9);
}
void ABP_TabbedMenu_C__pf3087176809::bpf__OnxTabxToggled__pfTT(UUxtToggleStateComponent* bpp__ToggleState__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	TArray<UChildActorComponent*> bpfv__K2Node_MakeArray_Array__pf{};
	int32 bpfv__CallFunc_GetToggleStateIndex_ReturnValue__pf{};
	UChildActorComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	UUxtUIElementComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpp__ToggleState__pf))
				{
					bpfv__CallFunc_IsChecked_ReturnValue__pf = bpp__ToggleState__pf->UUxtToggleStateComponent::IsChecked();
				}
				if (!bpfv__CallFunc_IsChecked_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(4, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpv__ChildActor_Tab_Numpad__pf;
				bpfv__K2Node_MakeArray_Array__pf[1] = bpv__ChildActor_Tab_Music__pf;
				bpfv__K2Node_MakeArray_Array__pf[2] = bpv__ChildActor_Tab_Calendar__pf;
				bpfv__K2Node_MakeArray_Array__pf[3] = bpv__ChildActor_Tab_Checklist__pf;
				if(::IsValid(bpv__UxtToggleGroup__pf))
				{
					bpfv__CallFunc_GetToggleStateIndex_ReturnValue__pf = bpv__UxtToggleGroup__pf->UUxtToggleGroupComponent::GetToggleStateIndex(bpp__ToggleState__pf);
				}
				FCustomThunkTemplates::Array_Get(bpfv__K2Node_MakeArray_Array__pf, bpfv__CallFunc_GetToggleStateIndex_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf) && ::IsValid((*(AccessPrivateProperty<AActor* >((bpfv__CallFunc_Array_Get_Item__pf), UChildActorComponent::__PPO__ChildActor() )))))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<UUxtUIElementComponent>((*(AccessPrivateProperty<AActor* >((bpfv__CallFunc_Array_Get_Item__pf), UChildActorComponent::__PPO__ChildActor() )))->AActor::GetComponentByClass(UUxtUIElementComponent::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf->UUxtUIElementComponent::SetUIVisibility(EUxtUIElementVisibility::Show);
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(4, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpv__ChildActor_Tab_Numpad__pf;
				bpfv__K2Node_MakeArray_Array__pf[1] = bpv__ChildActor_Tab_Music__pf;
				bpfv__K2Node_MakeArray_Array__pf[2] = bpv__ChildActor_Tab_Calendar__pf;
				bpfv__K2Node_MakeArray_Array__pf[3] = bpv__ChildActor_Tab_Checklist__pf;
				if(::IsValid(bpv__UxtToggleGroup__pf))
				{
					bpfv__CallFunc_GetToggleStateIndex_ReturnValue__pf = bpv__UxtToggleGroup__pf->UUxtToggleGroupComponent::GetToggleStateIndex(bpp__ToggleState__pf);
				}
				FCustomThunkTemplates::Array_Get(bpfv__K2Node_MakeArray_Array__pf, bpfv__CallFunc_GetToggleStateIndex_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf) && ::IsValid((*(AccessPrivateProperty<AActor* >((bpfv__CallFunc_Array_Get_Item__pf), UChildActorComponent::__PPO__ChildActor() )))))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<UUxtUIElementComponent>((*(AccessPrivateProperty<AActor* >((bpfv__CallFunc_Array_Get_Item__pf), UChildActorComponent::__PPO__ChildActor() )))->AActor::GetComponentByClass(UUxtUIElementComponent::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue__pf->UUxtUIElementComponent::SetUIVisibility(EUxtUIElementVisibility::Hide);
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
void ABP_TabbedMenu_C__pf3087176809::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_SimpleLit_White.MI_SimpleLit_White 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_TabbedMenu_C__pf3087176809::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{165, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UXTools.UxtUIElementComponent 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBackPlateComponent 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_HoloLens2BackPlate.MI_HoloLens2BackPlate 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /UXTools/Models/SM_BackPlateRoundedThick_4.SM_BackPlateRoundedThick_4 
		{75, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{91, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{92, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableToggleButtonActor 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /UXTools/Fonts/Font_SegoeHoloMDL_Regular_42.Font_SegoeHoloMDL_Regular_42 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /UXTools/Fonts/M_DefaultFont.M_DefaultFont 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Semibold_42.Font_SegoeUI_Semibold_42 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /UXTools/Buttons/HoloLens2/MI_ButtonHoloLens2FrontPlate.MI_ButtonHoloLens2FrontPlate 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /UXTools/Models/SM_FrontPlate_PX.SM_FrontPlate_PX 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /UXTools/Buttons/HoloLens2/MI_ButtonHoloLens2FrontPlateLocalInputLeft.MI_ButtonHoloLens2FrontPlateLocalInputLeft 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /UXTools/Buttons/HoloLens2/MI_ButtonHoloLens2FrontPlateLocalInputRight.MI_ButtonHoloLens2FrontPlateLocalInputRight 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  CurveFloat /UXTools/Buttons/HoloLens2/FC_Hololens2IconFocus.FC_Hololens2IconFocus 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /UXTools/Buttons/HoloLens2/MI_ButtonHoloLens2BackPlateToggle.MI_ButtonHoloLens2BackPlateToggle 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /UXTools/Buttons/HoloLens2/S_ButtonPressed_Mono_01.S_ButtonPressed_Mono_01 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /UXTools/Buttons/HoloLens2/S_ButtonReleased_Mono_01.S_ButtonReleased_Mono_01 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{179, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UXTools.UxtToggleGroupComponent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/UXTools.UxtToggledDelegate__DelegateSignature 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UXTools.UxtToggleStateComponent 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UXTools.UxtPressableCheckButtonActor 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /UXTools/Fonts/Font_SegoeMDL2_Regular_42.Font_SegoeMDL2_Regular_42 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UXTools.UxtPressableRadioButtonActor 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Plane.Plane 
		{193, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /UXToolsExamples/Button/Blueprints/M_MusicArtwork.M_MusicArtwork 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UXTools.UxtTextRenderActor 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Bold_42.Font_SegoeUI_Bold_42 
		{85, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AudioComponent 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SoundWave /Engine/VREditor/Sounds/VR_WorldMoveLoop_02.VR_WorldMoveLoop_02 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SoundWave 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.OnAudioFinished__DelegateSignature 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/UXTools.UxtUIElementHideDelegate__DelegateSignature 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.OnAudioPlaybackPercent__DelegateSignature 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SoundBase 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{115, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TextRenderComponent 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UXTools.UxtPressableButtonActor 
		{201, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/Button/Blueprints/BP_TabNumpad.BP_TabNumpad_C 
		{202, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/Button/Blueprints/BP_TabMusic.BP_TabMusic_C 
		{203, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/Button/Blueprints/BP_TabCalender.BP_TabCalender_C 
		{204, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/Button/Blueprints/BP_TabChecklist.BP_TabChecklist_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_TabbedMenu_C__pf3087176809
{
	FRegisterHelper__ABP_TabbedMenu_C__pf3087176809()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/Button/Blueprints/BP_TabbedMenu"), &ABP_TabbedMenu_C__pf3087176809::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_TabbedMenu_C__pf3087176809 Instance;
};
FRegisterHelper__ABP_TabbedMenu_C__pf3087176809 FRegisterHelper__ABP_TabbedMenu_C__pf3087176809::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
