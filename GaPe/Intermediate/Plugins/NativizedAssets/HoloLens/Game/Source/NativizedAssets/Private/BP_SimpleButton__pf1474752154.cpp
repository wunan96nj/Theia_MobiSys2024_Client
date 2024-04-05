#include "NativizedAssets.h"
#include "BP_SimpleButton__pf1474752154.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
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
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtUIElementComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtNearPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtFarPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtCollectionObject.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_SimpleButton_C__pf1474752154::ABP_SimpleButton_C__pf1474752154(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto __Local__0 = CastChecked<UUxtPressableButtonComponent>(this->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'UxtPressableButton' //
		auto& __Local__1 = (*(AccessPrivateProperty<float >((__Local__0), UUxtPressableButtonComponent::__PPO__MaxPushDistance() )));
		__Local__1 = 2.000000f;
		static TWeakFieldPtr<FProperty> __Local__3{};
		const FProperty* __Local__2 = __Local__3.Get();
		if (nullptr == __Local__2)
		{
			__Local__2 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__2);
			__Local__3 = __Local__2;
		}
		(((FBoolProperty*)__Local__2)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'UxtPressableButton' //
	}
	bpv__Base__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));
	bpv__MovingVisuals__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MovingVisuals"));
	bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Base__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__4 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Base__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__4 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_SimpleButton_C__pf1474752154::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Base__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Base__pf->OverrideMaterials.Reserve(1);
	bpv__Base__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_SimpleButton_C__pf1474752154::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Base__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__Base__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__Base__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(-2.752139, 0.000005, 0.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__Base__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__6 = FVector(0.067316, 0.067316, 0.067316);
	static TWeakFieldPtr<FProperty> __Local__8{};
	const FProperty* __Local__7 = __Local__8.Get();
	if (nullptr == __Local__7)
	{
		__Local__7 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__7);
		__Local__8 = __Local__7;
	}
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__Base__pf), true, 0));
	bpv__MovingVisuals__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MovingVisuals__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__9 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__MovingVisuals__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__9 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_SimpleButton_C__pf1474752154::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__MovingVisuals__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__MovingVisuals__pf->OverrideMaterials.Reserve(1);
	bpv__MovingVisuals__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_SimpleButton_C__pf1474752154::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__MovingVisuals__pf->BodyInstance.MaxAngularVelocity = 3599.999756f;
	bpv__MovingVisuals__pf->SetCollisionProfileName(FName(TEXT("OverlapAll")));
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__MovingVisuals__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__10 = FVector(-2.752139, 0.000005, 0.000000);
	auto& __Local__11 = (*(AccessPrivateProperty<FRotator >((bpv__MovingVisuals__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__11 = FRotator(0.000000, -179.999969, 0.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__MovingVisuals__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__12 = FVector(0.067316, 0.067316, 0.067316);
	(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__MovingVisuals__pf), true, 0));
	bpv__BaseColor__pf = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	bpv__PressedSound__pf = CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_SimpleButton_C__pf1474752154::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__ReleasedSound__pf = CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_SimpleButton_C__pf1474752154::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	ButtonComponent = __Local__0;
	auto& __Local__13 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__13 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_SimpleButton_C__pf1474752154::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Base__pf)
	{
		bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MovingVisuals__pf)
	{
		bpv__MovingVisuals__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SimpleButton_C__pf1474752154::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__14 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__14);
	auto __Local__15 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__15);
	static TWeakFieldPtr<FProperty> __Local__17{};
	const FProperty* __Local__16 = __Local__17.Get();
	if (nullptr == __Local__16)
	{
		__Local__16 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__16);
		__Local__17 = __Local__16;
	}
	(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((__Local__14), false, 0));
	__Local__15->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__15->ComponentDelegateBindings.AddUninitialized(6);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__15->ComponentDelegateBindings.GetData(), 6);
	auto& __Local__18 = __Local__15->ComponentDelegateBindings[0];
	__Local__18.ComponentPropertyName = FName(TEXT("ButtonComponent"));
	__Local__18.DelegatePropertyName = FName(TEXT("OnButtonDisabled"));
	__Local__18.FunctionNameToBind = FName(TEXT("BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_5_UxtButtonDisabledDelegate__DelegateSignature"));
	auto& __Local__19 = __Local__15->ComponentDelegateBindings[1];
	__Local__19.ComponentPropertyName = FName(TEXT("ButtonComponent"));
	__Local__19.DelegatePropertyName = FName(TEXT("OnButtonEnabled"));
	__Local__19.FunctionNameToBind = FName(TEXT("BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_4_UxtButtonEnabledDelegate__DelegateSignature"));
	auto& __Local__20 = __Local__15->ComponentDelegateBindings[2];
	__Local__20.ComponentPropertyName = FName(TEXT("ButtonComponent"));
	__Local__20.DelegatePropertyName = FName(TEXT("OnEndFocus"));
	__Local__20.FunctionNameToBind = FName(TEXT("BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_3_UxtButtonEndFocusDelegate__DelegateSignature"));
	auto& __Local__21 = __Local__15->ComponentDelegateBindings[3];
	__Local__21.ComponentPropertyName = FName(TEXT("ButtonComponent"));
	__Local__21.DelegatePropertyName = FName(TEXT("OnBeginFocus"));
	__Local__21.FunctionNameToBind = FName(TEXT("BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_2_UxtButtonBeginFocusDelegate__DelegateSignature"));
	auto& __Local__22 = __Local__15->ComponentDelegateBindings[4];
	__Local__22.ComponentPropertyName = FName(TEXT("ButtonComponent"));
	__Local__22.DelegatePropertyName = FName(TEXT("OnButtonReleased"));
	__Local__22.FunctionNameToBind = FName(TEXT("BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonReleasedDelegate__DelegateSignature"));
	auto& __Local__23 = __Local__15->ComponentDelegateBindings[5];
	__Local__23.ComponentPropertyName = FName(TEXT("ButtonComponent"));
	__Local__23.DelegatePropertyName = FName(TEXT("OnButtonPressed"));
	__Local__23.FunctionNameToBind = FName(TEXT("BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_SimpleButton_C__pf1474752154::bpf__ExecuteUbergraph_BP_SimpleButton__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateButtonColor__pf();
	return; // KCST_GotoReturn
}
void ABP_SimpleButton_C__pf1474752154::bpf__ExecuteUbergraph_BP_SimpleButton__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 11:
			{
				bpf__UpdateButtonColor__pf();
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
				if (!b0l__K2Node_ComponentBoundEvent_bIsStillFocused__pf)
				{
					__CurrentState = 11;
					break;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_SimpleButton_C__pf1474752154::bpf__ExecuteUbergraph_BP_SimpleButton__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 10:
			{
				bpf__UpdateButtonColor__pf();
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				if (!b0l__K2Node_ComponentBoundEvent_bWasAlreadyFocused__pf)
				{
					__CurrentState = 10;
					break;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_SimpleButton_C__pf1474752154::bpf__ExecuteUbergraph_BP_SimpleButton__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::PlaySound2D(this, bpv__ReleasedSound__pf, 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
	return; // KCST_GotoReturn
}
void ABP_SimpleButton_C__pf1474752154::bpf__ExecuteUbergraph_BP_SimpleButton__pf_4(int32 bpp__EntryPoint__pf)
{
	UMaterialInterface* bpfv__CallFunc_GetMaterial_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	FLinearColor bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(ButtonComponent))
	{
		ButtonComponent->UUxtPressableButtonComponent::SetVisuals(bpv__MovingVisuals__pf);
	}
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MovingVisuals__pf))
	{
		bpfv__CallFunc_GetMaterial_ReturnValue__pf = bpv__MovingVisuals__pf->GetMaterial(0);
	}
	if(::IsValid(bpv__MovingVisuals__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__MovingVisuals__pf->CreateDynamicMaterialInstance(0, bpfv__CallFunc_GetMaterial_ReturnValue__pf, FName(TEXT("None")));
	}
	if(::IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
	{
		bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::K2_GetVectorParameterValue(FName(TEXT("Base Color")));
	}
	bpv__BaseColor__pf = bpfv__CallFunc_K2_GetVectorParameterValue_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void ABP_SimpleButton_C__pf1474752154::bpf__ExecuteUbergraph_BP_SimpleButton__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::PlaySound2D(this, bpv__PressedSound__pf, 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
	return; // KCST_GotoReturn
}
void ABP_SimpleButton_C__pf1474752154::bpf__ExecuteUbergraph_BP_SimpleButton__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpf__UpdateButtonColor__pf();
	return; // KCST_GotoReturn
}
void ABP_SimpleButton_C__pf1474752154::bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_5_UxtButtonDisabledDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf)
{
	b0l__K2Node_ComponentBoundEvent_Button__pf = bpp__Button__pf;
	bpf__ExecuteUbergraph_BP_SimpleButton__pf_6(1);
}
void ABP_SimpleButton_C__pf1474752154::bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_4_UxtButtonEnabledDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf)
{
	b0l__K2Node_ComponentBoundEvent_Button_1__pf = bpp__Button__pf;
	bpf__ExecuteUbergraph_BP_SimpleButton__pf_0(19);
}
void ABP_SimpleButton_C__pf1474752154::bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_3_UxtButtonEndFocusDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf, bool bpp__bIsStillFocused__pf)
{
	b0l__K2Node_ComponentBoundEvent_Button_2__pf = bpp__Button__pf;
	b0l__K2Node_ComponentBoundEvent_Pointer__pf = bpp__Pointer__pf;
	b0l__K2Node_ComponentBoundEvent_bIsStillFocused__pf = bpp__bIsStillFocused__pf;
	bpf__ExecuteUbergraph_BP_SimpleButton__pf_1(17);
}
void ABP_SimpleButton_C__pf1474752154::bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_2_UxtButtonBeginFocusDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf, bool bpp__bWasAlreadyFocused__pf)
{
	b0l__K2Node_ComponentBoundEvent_Button_3__pf = bpp__Button__pf;
	b0l__K2Node_ComponentBoundEvent_Pointer_1__pf = bpp__Pointer__pf;
	b0l__K2Node_ComponentBoundEvent_bWasAlreadyFocused__pf = bpp__bWasAlreadyFocused__pf;
	bpf__ExecuteUbergraph_BP_SimpleButton__pf_2(15);
}
void ABP_SimpleButton_C__pf1474752154::bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_1_UxtButtonReleasedDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf)
{
	b0l__K2Node_ComponentBoundEvent_Button_4__pf = bpp__Button__pf;
	b0l__K2Node_ComponentBoundEvent_Pointer_2__pf = bpp__Pointer__pf;
	bpf__ExecuteUbergraph_BP_SimpleButton__pf_3(14);
}
void ABP_SimpleButton_C__pf1474752154::bpf__BndEvt__ButtonComponent_K2Node_ComponentBoundEvent_0_UxtButtonPressedDelegate__DelegateSignature__pf(UUxtPressableButtonComponent* bpp__Button__pf, UUxtPointerComponent* bpp__Pointer__pf)
{
	b0l__K2Node_ComponentBoundEvent_Button_5__pf = bpp__Button__pf;
	b0l__K2Node_ComponentBoundEvent_Pointer_3__pf = bpp__Pointer__pf;
	bpf__ExecuteUbergraph_BP_SimpleButton__pf_5(13);
}
void ABP_SimpleButton_C__pf1474752154::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_SimpleButton__pf_4(8);
}
void ABP_SimpleButton_C__pf1474752154::bpf__UpdateButtonColor__pf()
{
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf(EForceInit::ForceInit);
	EUxtButtonState bpfv__CallFunc_GetState_ReturnValue__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	FLinearColor bpfv__CallFunc_Multiply_LinearColorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(ButtonComponent))
				{
					bpfv__CallFunc_GetState_ReturnValue__pf = ButtonComponent->UUxtPressableButtonComponent::GetState();
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetState_ReturnValue__pf), static_cast<uint8>(EUxtButtonState::Default));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetState_ReturnValue__pf), static_cast<uint8>(EUxtButtonState::Disabled));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetState_ReturnValue__pf), static_cast<uint8>(EUxtButtonState::Focused));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf = UKismetMathLibrary::Conv_LinearColorToVector(bpv__BaseColor__pf);
				if(::IsValid(bpv__MovingVisuals__pf))
				{
					bpv__MovingVisuals__pf->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Base Color")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_1__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_LinearColorToVector(FLinearColor(0.250000,0.250000,0.250000,1.000000));
				if(::IsValid(bpv__MovingVisuals__pf))
				{
					bpv__MovingVisuals__pf->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Base Color")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Multiply_LinearColorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_LinearColorFloat(bpv__BaseColor__pf, 2.000000);
				bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf = UKismetMathLibrary::Conv_LinearColorToVector(bpfv__CallFunc_Multiply_LinearColorFloat_ReturnValue__pf);
				if(::IsValid(bpv__MovingVisuals__pf))
				{
					bpv__MovingVisuals__pf->UMeshComponent::SetVectorParameterValueOnMaterials(FName(TEXT("Base Color")), bpfv__CallFunc_Conv_LinearColorToVector_ReturnValue_2__pf);
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
void ABP_SimpleButton_C__pf1474752154::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{211, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Buttons/Simple/SM_RoundButtonTube.SM_RoundButtonTube 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_SimpleLit_White.MI_SimpleLit_White 
		{212, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Buttons/Simple/SM_RoundButtonCylinder.SM_RoundButtonCylinder 
		{213, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_SimpleLit_Magenta.MI_SimpleLit_Magenta 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Buttons/HoloLens2/S_ButtonPressed_Mono_01.S_ButtonPressed_Mono_01 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Buttons/HoloLens2/S_ButtonReleased_Mono_01.S_ButtonReleased_Mono_01 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SimpleButton_C__pf1474752154::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{75, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonComponent 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPointerComponent 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{107, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBasePressableButtonActor 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UXTools.EUxtButtonState 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{214, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_SimpleButton_C__pf1474752154
{
	FRegisterHelper__ABP_SimpleButton_C__pf1474752154()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXTools/Buttons/Simple/BP_SimpleButton"), &ABP_SimpleButton_C__pf1474752154::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_SimpleButton_C__pf1474752154 Instance;
};
FRegisterHelper__ABP_SimpleButton_C__pf1474752154 FRegisterHelper__ABP_SimpleButton_C__pf1474752154::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
