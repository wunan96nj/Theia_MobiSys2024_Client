#include "NativizedAssets.h"
#include "HandAnimBlueprint__pf1627489016.h"
#include "GeneratedCodeHelpers.h"
#include "Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseHandler.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
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
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
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
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
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
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
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
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "../Plugins/Marketplace/UXTools/Source/XRSimulation/Public/XRSimulationActor.h"
#include "../Plugins/Marketplace/UXTools/Source/XRSimulation/Public/XRSimulationHeadMovementComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
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
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UHandAnimBlueprint_C__pf1627489016::UHandAnimBlueprint_C__pf1627489016(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	__InitAllAnimNodes();
	bpv__BlendTime__pf = 0.100000f;
	bpv__BlendAlpha__pf = 0.000000f;
	bpv__TargetPose__pf = FName();
	bpv__Hand__pf = EControllerHand::Left;
	bpv__bIsAnimatedTransform__pf = false;
	bpv__InitialTransform__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__TransformBlendAlpha__pf = 0.000000f;
}
PRAGMA_ENABLE_OPTIMIZATION
void UHandAnimBlueprint_C__pf1627489016::__InitAllAnimNodes()
{
	__InitAnimNode__AnimGraphNode_Root();
	__InitAnimNode__AnimGraphNode_TwoWayBlend();
	__InitAnimNode__AnimGraphNode_PoseSnapshot();
	__InitAnimNode__AnimGraphNode_PoseByName();
}
void UHandAnimBlueprint_C__pf1627489016::__InitAnimNode__AnimGraphNode_Root()
{
	bpv__AnimGraphNode_Root__pf.Result.LinkID = 1;
	bpv__AnimGraphNode_Root__pf.Name = FName(TEXT("AnimGraph"));
}
void UHandAnimBlueprint_C__pf1627489016::__InitAnimNode__AnimGraphNode_TwoWayBlend()
{
	bpv__AnimGraphNode_TwoWayBlend__pf.A.LinkID = 2;
	bpv__AnimGraphNode_TwoWayBlend__pf.B.LinkID = 3;
	bpv__AnimGraphNode_TwoWayBlend__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UHandAnimBlueprint_C__pf1627489016::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[1]);
}
void UHandAnimBlueprint_C__pf1627489016::__InitAnimNode__AnimGraphNode_PoseSnapshot()
{
	bpv__AnimGraphNode_PoseSnapshot__pf.SnapshotName = FName(TEXT("Start"));
}
void UHandAnimBlueprint_C__pf1627489016::__InitAnimNode__AnimGraphNode_PoseByName()
{
	bpv__AnimGraphNode_PoseByName__pf.PoseAsset = CastChecked<UPoseAsset>(CastChecked<UDynamicClass>(UHandAnimBlueprint_C__pf1627489016::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_PoseByName__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UHandAnimBlueprint_C__pf1627489016::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[0]);
}
void UHandAnimBlueprint_C__pf1627489016::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UHandAnimBlueprint_C__pf1627489016::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	UAnimClassData* __Local__0 = NewObject<UAnimClassData>(InDynamicClass, TEXT("AnimClassData"));
	__Local__0->TargetSkeleton = CastChecked<USkeleton>(CastChecked<UDynamicClass>(UHandAnimBlueprint_C__pf1627489016::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__0->OrderedSavedPoseIndicesMap = {};
	__Local__0->OrderedSavedPoseIndicesMap.Reserve(1);
	static TWeakFieldPtr<FProperty> __Local__3{};
	const FProperty* __Local__2 = __Local__3.Get();
	if (nullptr == __Local__2)
	{
		__Local__2 = (UAnimClassData::StaticClass())->FindPropertyByName(FName(TEXT("OrderedSavedPoseIndicesMap")));
		check(__Local__2);
		__Local__3 = __Local__2;
	}
	FScriptMapHelper __Local__1(CastFieldChecked<FMapProperty>(__Local__2), &__Local__0->OrderedSavedPoseIndicesMap);
	TMap<FName,FCachedPoseIndices>::ElementType& __Local__4 = *(TMap<FName,FCachedPoseIndices>::ElementType*)__Local__1.GetPairPtr(__Local__1.AddDefaultValue_Invalid_NeedsRehash());
	__Local__4.Key = FName(TEXT("AnimGraph"));
	__Local__1.Rehash();
	__Local__0->AnimBlueprintFunctions = TArray<FAnimBlueprintFunction> ();
	__Local__0->AnimBlueprintFunctions.AddUninitialized(1);
	FAnimBlueprintFunction::StaticStruct()->InitializeStruct(__Local__0->AnimBlueprintFunctions.GetData(), 1);
	auto& __Local__5 = __Local__0->AnimBlueprintFunctions[0];
	__Local__5.Name = FName(TEXT("AnimGraph"));
	__Local__5.OutputPoseNodeIndex = 0;
	__Local__5.bImplemented = true;
	__Local__0->AnimBlueprintFunctionData = TArray<FAnimBlueprintFunctionData> ();
	__Local__0->AnimBlueprintFunctionData.AddUninitialized(1);
	FAnimBlueprintFunctionData::StaticStruct()->InitializeStruct(__Local__0->AnimBlueprintFunctionData.GetData(), 1);
	auto& __Local__6 = __Local__0->AnimBlueprintFunctionData[0];
	__Local__6.OutputPoseNodeProperty = TEXT("/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C:AnimGraphNode_Root");
	__Local__0->AnimNodeProperties = TArray<TFieldPath<FStructProperty> > ();
	__Local__0->AnimNodeProperties.Reserve(4);
	__Local__0->AnimNodeProperties.Add(TEXT("/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C:AnimGraphNode_Root"));
	__Local__0->AnimNodeProperties.Add(TEXT("/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C:AnimGraphNode_TwoWayBlend"));
	__Local__0->AnimNodeProperties.Add(TEXT("/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C:AnimGraphNode_PoseSnapshot"));
	__Local__0->AnimNodeProperties.Add(TEXT("/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C:AnimGraphNode_PoseByName"));
	__Local__0->PreUpdateNodeProperties = TArray<TFieldPath<FStructProperty> > ();
	__Local__0->PreUpdateNodeProperties.Reserve(1);
	__Local__0->PreUpdateNodeProperties.Add(TEXT("/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C:AnimGraphNode_PoseSnapshot"));
	__Local__0->EvaluateGraphExposedInputs = TArray<FExposedValueHandler> ();
	__Local__0->EvaluateGraphExposedInputs.AddUninitialized(2);
	FExposedValueHandler::StaticStruct()->InitializeStruct(__Local__0->EvaluateGraphExposedInputs.GetData(), 2);
	auto& __Local__7 = __Local__0->EvaluateGraphExposedInputs[0];
	__Local__7.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA"));
	__Local__7.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA"));
	__Local__7.ValueHandlerNodeProperty = TEXT("/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C:AnimGraphNode_PoseByName");
	auto& __Local__8 = __Local__0->EvaluateGraphExposedInputs[1];
	__Local__8.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186"));
	__Local__8.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186"));
	__Local__8.ValueHandlerNodeProperty = TEXT("/UXTools/XRSimulation/HandAnimBlueprint.HandAnimBlueprint_C:AnimGraphNode_TwoWayBlend");
	InDynamicClass->AnimClassImplementation = __Local__0;
	__Local__0->DynamicClassInitialization(InDynamicClass);
}
PRAGMA_ENABLE_OPTIMIZATION
void UHandAnimBlueprint_C__pf1627489016::bpf__ExecuteUbergraph_HandAnimBlueprint__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	bpf__InitHand__pf();
	return; // KCST_GotoReturn
}
void UHandAnimBlueprint_C__pf1627489016::bpf__ExecuteUbergraph_HandAnimBlueprint__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	bpf__IncrementBlendAlpha__pf(b0l__K2Node_Event_DeltaTimeX__pf);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateTargetPose__pf();
	return; // KCST_GotoReturn
}
void UHandAnimBlueprint_C__pf1627489016::bpf__ExecuteUbergraph_HandAnimBlueprint__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpv__AnimGraphNode_PoseByName__pf.PoseName = bpv__TargetPose__pf;
	return; // KCST_GotoReturn
}
void UHandAnimBlueprint_C__pf1627489016::bpf__ExecuteUbergraph_HandAnimBlueprint__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpv__AnimGraphNode_TwoWayBlend__pf.Alpha = bpv__BlendAlpha__pf;
	return; // KCST_GotoReturn
}
void UHandAnimBlueprint_C__pf1627489016::bpf__BlueprintBeginPlay__pf()
{
	bpf__ExecuteUbergraph_HandAnimBlueprint__pf_0(8);
}
void UHandAnimBlueprint_C__pf1627489016::bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
{
	b0l__K2Node_Event_DeltaTimeX__pf = bpp__DeltaTimeX__pf;
	bpf__ExecuteUbergraph_HandAnimBlueprint__pf_1(6);
}
void UHandAnimBlueprint_C__pf1627489016::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_TwoWayBlend_AA4A0C264E069261A047A4B3D4213186__pf()
{
	bpf__ExecuteUbergraph_HandAnimBlueprint__pf_3(4);
}
void UHandAnimBlueprint_C__pf1627489016::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_HandAnimBlueprint_AnimGraphNode_PoseByName_06F49AFC4AFA3E5A6E5370BC90B43CEA__pf()
{
	bpf__ExecuteUbergraph_HandAnimBlueprint__pf_2(2);
}
void UHandAnimBlueprint_C__pf1627489016::bpf__SetTargetPose__pf(FName bpp__Name__pf, bool bpp__AnimatedTransform__pf)
{
	USkeletalMeshComponent* bpfv__CallFunc_GetOwningComponent_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_NameName_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_NotEqual_NameName_ReturnValue__pf = UKismetMathLibrary::NotEqual_NameName(bpp__Name__pf, bpv__TargetPose__pf);
				if (!bpfv__CallFunc_NotEqual_NameName_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				__StateStack.Push(9);
				__StateStack.Push(6);
			}
		case 3:
			{
				bpv__TargetPose__pf = bpp__Name__pf;
			}
		case 4:
			{
				SavePoseSnapshot(FName(TEXT("Start")));
			}
		case 5:
			{
				bpv__BlendAlpha__pf = 0.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpp__AnimatedTransform__pf, bpv__bIsAnimatedTransform__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				bpfv__CallFunc_GetOwningComponent_ReturnValue__pf = UAnimInstance::GetOwningComponent();
				if(::IsValid(bpfv__CallFunc_GetOwningComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf = bpfv__CallFunc_GetOwningComponent_ReturnValue__pf->USceneComponent::GetRelativeTransform();
				}
				bpv__InitialTransform__pf = bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf;
			}
		case 8:
			{
				bpv__TransformBlendAlpha__pf = 0.000000;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpv__bIsAnimatedTransform__pf = bpp__AnimatedTransform__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UHandAnimBlueprint_C__pf1627489016::bpf__IncrementBlendAlpha__pf(float bpp__DeltaSeconds__pf)
{
	float bpfv__CallFunc_SafeDivide_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue_1__pf{};
	bpfv__CallFunc_SafeDivide_ReturnValue__pf = UKismetMathLibrary::SafeDivide(bpp__DeltaSeconds__pf, bpv__BlendTime__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__BlendAlpha__pf, bpfv__CallFunc_SafeDivide_ReturnValue__pf);
	bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 1.000000);
	bpv__BlendAlpha__pf = bpfv__CallFunc_FClamp_ReturnValue__pf;
	bpfv__CallFunc_SafeDivide_ReturnValue__pf = UKismetMathLibrary::SafeDivide(bpp__DeltaSeconds__pf, bpv__BlendTime__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpv__TransformBlendAlpha__pf, bpfv__CallFunc_SafeDivide_ReturnValue__pf);
	bpfv__CallFunc_FClamp_ReturnValue_1__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 0.000000, 1.000000);
	bpv__TransformBlendAlpha__pf = bpfv__CallFunc_FClamp_ReturnValue_1__pf;
}
void UHandAnimBlueprint_C__pf1627489016::bpf__UpdateTargetPose__pf()
{
	FName bpfv__CallFunc_GetTargetHandPose_TargetPose__pf{};
	FTransform bpfv__CallFunc_GetTargetHandPose_TargetTransform__pf{};
	bool bpfv__CallFunc_GetTargetHandPose_bAnimateTransform__pf{};
	USkeletalMeshComponent* bpfv__CallFunc_GetOwningComponent_ReturnValue__pf{};
	FTransform bpfv__CallFunc_TLerp_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf{};
	bpf__GetTargetHandPose__pf(/*out*/ bpfv__CallFunc_GetTargetHandPose_TargetPose__pf, /*out*/ bpfv__CallFunc_GetTargetHandPose_TargetTransform__pf, /*out*/ bpfv__CallFunc_GetTargetHandPose_bAnimateTransform__pf);
	bpf__SetTargetPose__pf(bpfv__CallFunc_GetTargetHandPose_TargetPose__pf, bpfv__CallFunc_GetTargetHandPose_bAnimateTransform__pf);
	bpfv__CallFunc_GetOwningComponent_ReturnValue__pf = UAnimInstance::GetOwningComponent();
	bpfv__CallFunc_TLerp_ReturnValue__pf = UKismetMathLibrary::TLerp(bpv__InitialTransform__pf, bpfv__CallFunc_GetTargetHandPose_TargetTransform__pf, bpv__TransformBlendAlpha__pf, ELerpInterpolationMode::QuatInterp);
	if(::IsValid(bpfv__CallFunc_GetOwningComponent_ReturnValue__pf))
	{
		bpfv__CallFunc_GetOwningComponent_ReturnValue__pf->USceneComponent::K2_SetRelativeTransform(bpfv__CallFunc_TLerp_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf, false);
	}
}
void UHandAnimBlueprint_C__pf1627489016::bpf__InitHand__pf()
{
	bool bpfv__Temp_bool_Variable__pf{};
	EControllerHand bpfv__Temp_byte_Variable__pf{};
	bool bpfv__Temp_bool_Variable_1__pf{};
	EControllerHand bpfv__Temp_byte_Variable_1__pf{};
	EControllerHand bpfv__Temp_byte_Variable_2__pf{};
	USkeletalMeshComponent* bpfv__CallFunc_GetOwningComponent_ReturnValue__pf{};
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue__pf{};
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue_1__pf{};
	EControllerHand bpfv__K2Node_Select_Default__pf{};
	EControllerHand bpfv__K2Node_Select_Default_1__pf{};
	bpfv__Temp_byte_Variable__pf = EControllerHand::Left;
	bpfv__Temp_byte_Variable_1__pf = EControllerHand::Right;
	bpfv__Temp_byte_Variable_2__pf = EControllerHand::AnyHand;
	bpfv__CallFunc_GetOwningComponent_ReturnValue__pf = UAnimInstance::GetOwningComponent();
	if(::IsValid(bpfv__CallFunc_GetOwningComponent_ReturnValue__pf))
	{
		bpfv__CallFunc_ComponentHasTag_ReturnValue__pf = bpfv__CallFunc_GetOwningComponent_ReturnValue__pf->UActorComponent::ComponentHasTag(FName(TEXT("Left")));
	}
	if(::IsValid(bpfv__CallFunc_GetOwningComponent_ReturnValue__pf))
	{
		bpfv__CallFunc_ComponentHasTag_ReturnValue_1__pf = bpfv__CallFunc_GetOwningComponent_ReturnValue__pf->UActorComponent::ComponentHasTag(FName(TEXT("Right")));
	}
	bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_ComponentHasTag_ReturnValue__pf;
	bpfv__Temp_bool_Variable_1__pf = bpfv__CallFunc_ComponentHasTag_ReturnValue_1__pf;
	bpv__Hand__pf = TSwitchValue<bool , EControllerHand >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , EControllerHand >(false, TSwitchValue<bool , EControllerHand >(bpfv__Temp_bool_Variable_1__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , EControllerHand >(false, bpfv__Temp_byte_Variable_2__pf), TSwitchPair<bool , EControllerHand >(true, bpfv__Temp_byte_Variable_1__pf))), TSwitchPair<bool , EControllerHand >(true, bpfv__Temp_byte_Variable__pf));
}
void UHandAnimBlueprint_C__pf1627489016::bpf__GetTargetHandPose__pf(/*out*/ FName& bpp__TargetPose__pf, /*out*/ FTransform& bpp__TargetTransform__pf, /*out*/ bool& bpp__bAnimateTransform__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_HasBegunPlay_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetOwningActor_ReturnValue__pf{};
	AXRSimulationActor* bpfv__K2Node_DynamicCast_AsXRSimulation_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FName bpfv__CallFunc_GetTargetHandPose_TargetPose__pf{};
	FTransform bpfv__CallFunc_GetTargetHandPose_TargetTransform__pf{};
	bool bpfv__CallFunc_GetTargetHandPose_bAnimateTransform__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetOwningActor_ReturnValue__pf = UAnimInstance::GetOwningActor();
				bpfv__K2Node_DynamicCast_AsXRSimulation_Actor__pf = Cast<AXRSimulationActor>(bpfv__CallFunc_GetOwningActor_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsXRSimulation_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsXRSimulation_Actor__pf))
				{
					bpfv__K2Node_DynamicCast_AsXRSimulation_Actor__pf->AXRSimulationActor::GetTargetHandPose(this, bpv__Hand__pf, /*out*/ bpfv__CallFunc_GetTargetHandPose_TargetPose__pf, /*out*/ bpfv__CallFunc_GetTargetHandPose_TargetTransform__pf, /*out*/ bpfv__CallFunc_GetTargetHandPose_bAnimateTransform__pf);
				}
				bpp__TargetPose__pf = bpfv__CallFunc_GetTargetHandPose_TargetPose__pf;
				bpp__TargetTransform__pf = bpfv__CallFunc_GetTargetHandPose_TargetTransform__pf;
				bpp__bAnimateTransform__pf = bpfv__CallFunc_GetTargetHandPose_bAnimateTransform__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				if(::IsValid(bpfv__CallFunc_GetGameState_ReturnValue__pf))
				{
					bpfv__CallFunc_HasBegunPlay_ReturnValue__pf = bpfv__CallFunc_GetGameState_ReturnValue__pf->HasBegunPlay();
				}
				if (!bpfv__CallFunc_HasBegunPlay_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Input Sim hand animation blueprint should be used with XRInputSimulationActor")), true, true, FLinearColor(1.000000,0.087783,0.187472,1.000000), 2.000000);
			}
		case 6:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpp__TargetPose__pf = FName(TEXT("None"));
				bpp__TargetTransform__pf = bpfv__CallFunc_MakeTransform_ReturnValue__pf;
				bpp__bAnimateTransform__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UHandAnimBlueprint_C__pf1627489016::bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf)
{
	auto __Local__9 = FPoseLink{};
	bpp__AnimGraph__pf = __Local__9;
}
PRAGMA_DISABLE_OPTIMIZATION
void UHandAnimBlueprint_C__pf1627489016::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PoseAsset /UXTools/XRSimulation/HandPoses.HandPoses 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /UXTools/XRSimulation/Hand_Skeleton.Hand_Skeleton 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UHandAnimBlueprint_C__pf1627489016::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseByName 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/XRSimulation.XRSimulationActor 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{19, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UHandAnimBlueprint_C__pf1627489016
{
	FRegisterHelper__UHandAnimBlueprint_C__pf1627489016()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXTools/XRSimulation/HandAnimBlueprint"), &UHandAnimBlueprint_C__pf1627489016::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UHandAnimBlueprint_C__pf1627489016 Instance;
};
FRegisterHelper__UHandAnimBlueprint_C__pf1627489016 FRegisterHelper__UHandAnimBlueprint_C__pf1627489016::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
