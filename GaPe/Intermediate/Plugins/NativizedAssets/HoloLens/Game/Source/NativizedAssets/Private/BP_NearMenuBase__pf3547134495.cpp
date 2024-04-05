#include "NativizedAssets.h"
#include "BP_NearMenuBase__pf3547134495.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
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
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBackPlateComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Behaviors/UxtFollowComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGenericManipulatorComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtManipulatorComponentBase.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtManipulatorComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtManipulationFlags.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtNearPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtFarPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtGrabHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/Constraints/UxtFaceUserConstraint.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/Constraints/UxtTransformConstraint.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtUIElementComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtCollectionObject.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
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
ABP_NearMenuBase_C__pf3547134495::ABP_NearMenuBase_C__pf3547134495(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__BackPlate__pf = CreateDefaultSubobject<USceneComponent>(TEXT("BackPlate"));
	bpv__UxtBackPlate__pf = CreateDefaultSubobject<UUxtBackPlateComponent>(TEXT("UxtBackPlate"));
	bpv__GrabDots_Left__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrabDots_Left"));
	bpv__GrabDots_Right__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrabDots_Right"));
	bpv__GrabDots_Top__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrabDots_Top"));
	bpv__GrabDots_Bottom__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrabDots_Bottom"));
	RootComponent = bpv__Scene__pf;
	bpv__UxtFollow__pf = CreateDefaultSubobject<UUxtFollowComponent>(TEXT("UxtFollow"));
	bpv__UxtGenericManipulator__pf = CreateDefaultSubobject<UUxtGenericManipulatorComponent>(TEXT("UxtGenericManipulator"));
	bpv__UxtFaceUserConstraint__pf = CreateDefaultSubobject<UUxtFaceUserConstraint>(TEXT("UxtFaceUserConstraint"));
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Scene__pf), false, 0));
	bpv__BackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BackPlate__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__BackPlate__pf), false, 0));
	bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtBackPlate__pf->AttachToComponent(bpv__BackPlate__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtBackPlate__pf), true, 0));
	bpv__GrabDots_Left__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GrabDots_Left__pf->AttachToComponent(bpv__BackPlate__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__GrabDots_Left__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__GrabDots_Left__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__GrabDots_Left__pf->OverrideMaterials.Reserve(1);
	bpv__GrabDots_Left__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Left__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__3 = FVector(0.001000, 0.000000, 0.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FRotator >((bpv__GrabDots_Left__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__4 = FRotator(0.000000, 180.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__GrabDots_Left__pf), true, 0));
	bpv__GrabDots_Right__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GrabDots_Right__pf->AttachToComponent(bpv__BackPlate__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__GrabDots_Right__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__5 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__GrabDots_Right__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__GrabDots_Right__pf->OverrideMaterials.Reserve(1);
	bpv__GrabDots_Right__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Right__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__6 = FVector(0.001000, 0.000000, 0.000000);
	auto& __Local__7 = (*(AccessPrivateProperty<FRotator >((bpv__GrabDots_Right__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__7 = FRotator(0.000000, 180.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__GrabDots_Right__pf), true, 0));
	bpv__GrabDots_Top__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GrabDots_Top__pf->AttachToComponent(bpv__BackPlate__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__GrabDots_Top__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__8 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__GrabDots_Top__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__GrabDots_Top__pf->OverrideMaterials.Reserve(1);
	bpv__GrabDots_Top__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Top__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__9 = FVector(0.001000, 0.000000, 0.000000);
	auto& __Local__10 = (*(AccessPrivateProperty<FRotator >((bpv__GrabDots_Top__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__10 = FRotator(0.000000, 180.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__GrabDots_Top__pf), true, 0));
	bpv__GrabDots_Bottom__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GrabDots_Bottom__pf->AttachToComponent(bpv__BackPlate__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__11 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__GrabDots_Bottom__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__11 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__GrabDots_Bottom__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__GrabDots_Bottom__pf->OverrideMaterials.Reserve(1);
	bpv__GrabDots_Bottom__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__GrabDots_Bottom__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(0.001000, 0.000000, 0.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<FRotator >((bpv__GrabDots_Bottom__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__13 = FRotator(0.000000, 180.000000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__GrabDots_Bottom__pf), true, 0));
	bpv__UxtFollow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtFollow__pf->MinimumDistance = 40.000000f;
	bpv__UxtFollow__pf->MaximumDistance = 60.000000f;
	bpv__UxtFollow__pf->DefaultDistance = 50.000000f;
	bpv__UxtFollow__pf->bUseFixedVerticalOffset = true;
	bpv__UxtFollow__pf->FixedVerticalOffset = -80.000000f;
	bpv__UxtFollow__pf->MaxViewHorizontalDegrees = 20.000000f;
	bpv__UxtFollow__pf->MaxViewVerticalDegrees = 180.000000f;
	bpv__UxtFollow__pf->LerpTime = 0.500000f;
	bpv__UxtFollow__pf->bAutoActivate = false;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtFollow__pf), false, 0));
	bpv__UxtGenericManipulator__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtGenericManipulator__pf->TwoHandTransformModes = 1;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtGenericManipulator__pf), false, 0));
	bpv__UxtFaceUserConstraint__pf->CreationMethod = EComponentCreationMethod::Native;
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtFaceUserConstraint__pf), false, 0));
	bpv__ShouldAutoFollow__pf = false;
	bpv__AutoFollowRadius__pf = 200.000000f;
	bpv__PinButton__pf = nullptr;
	bpv__PinButtonState__pf = nullptr;
	bpv__HorizontalGrabDotsCount__pf = 25.000000f;
	bpv__VerticalGrabDotsCount__pf = 33.000000f;
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__14 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__14 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_NearMenuBase_C__pf3547134495::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BackPlate__pf)
	{
		bpv__BackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtBackPlate__pf)
	{
		bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GrabDots_Left__pf)
	{
		bpv__GrabDots_Left__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GrabDots_Right__pf)
	{
		bpv__GrabDots_Right__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GrabDots_Top__pf)
	{
		bpv__GrabDots_Top__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GrabDots_Bottom__pf)
	{
		bpv__GrabDots_Bottom__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtFollow__pf)
	{
		bpv__UxtFollow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtGenericManipulator__pf)
	{
		bpv__UxtGenericManipulator__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtFaceUserConstraint__pf)
	{
		bpv__UxtFaceUserConstraint__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenuBase_C__pf3547134495::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__15 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__15);
	auto __Local__16 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__16);
	static TWeakFieldPtr<FProperty> __Local__18{};
	const FProperty* __Local__17 = __Local__18.Get();
	if (nullptr == __Local__17)
	{
		__Local__17 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__17);
		__Local__18 = __Local__17;
	}
	(((FBoolProperty*)__Local__17)->SetPropertyValue_InContainer((__Local__15), false, 0));
	__Local__16->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__16->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__16->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__19 = __Local__16->ComponentDelegateBindings[0];
	__Local__19.ComponentPropertyName = FName(TEXT("UxtGenericManipulator"));
	__Local__19.DelegatePropertyName = FName(TEXT("OnEndGrab"));
	__Local__19.FunctionNameToBind = FName(TEXT("BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature"));
	auto& __Local__20 = __Local__16->ComponentDelegateBindings[1];
	__Local__20.ComponentPropertyName = FName(TEXT("UxtGenericManipulator"));
	__Local__20.DelegatePropertyName = FName(TEXT("OnBeginGrab"));
	__Local__20.FunctionNameToBind = FName(TEXT("BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_NearMenuBase_C__pf3547134495::bpf__ExecuteUbergraph_BP_NearMenuBase__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	bpf__OnBeginGrab__pf();
	return; // KCST_GotoReturn
}
void ABP_NearMenuBase_C__pf3547134495::bpf__ExecuteUbergraph_BP_NearMenuBase__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpf__OnEndGrab__pf();
	return; // KCST_GotoReturn
}
void ABP_NearMenuBase_C__pf3547134495::bpf__ExecuteUbergraph_BP_NearMenuBase__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue_1__pf{};
	EUxtButtonState bpfv__CallFunc_GetState_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__PinButtonState__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue_1__pf = bpv__PinButtonState__pf->UUxtToggleStateComponent::IsChecked();
	}
	bpf__ShouldStartAutoFollow__pf(/*out*/ b0l__CallFunc_ShouldStartAutoFollow_ShouldStartFollow__pf);
	if(::IsValid(bpv__PinButton__pf))
	{
		bpfv__CallFunc_GetState_ReturnValue__pf = bpv__PinButton__pf->UUxtPressableButtonComponent::GetState();
	}
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__ShouldAutoFollow__pf, b0l__CallFunc_ShouldStartAutoFollow_ShouldStartFollow__pf);
	bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetState_ReturnValue__pf), static_cast<uint8>(EUxtButtonState::Disabled));
	bpfv__CallFunc_BooleanAND_ReturnValue_1__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue__pf, bpfv__CallFunc_IsChecked_ReturnValue_1__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue_2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue_1__pf, bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue_2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(bpv__PinButtonState__pf))
	{
		bpv__PinButtonState__pf->UUxtToggleStateComponent::SetIsChecked(false);
	}
	return; // KCST_GotoReturn
}
void ABP_NearMenuBase_C__pf3547134495::bpf__ExecuteUbergraph_BP_NearMenuBase__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("Event PinToggled")));
	if(::IsValid(bpv__PinButtonState__pf))
	{
		bpv__PinButtonState__pf->OnToggled.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	return; // KCST_GotoReturn
}
void ABP_NearMenuBase_C__pf3547134495::bpf__ExecuteUbergraph_BP_NearMenuBase__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(b0l__K2Node_CustomEvent_ToggleState__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue__pf = b0l__K2Node_CustomEvent_ToggleState__pf->UUxtToggleStateComponent::IsChecked();
	}
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsChecked_ReturnValue__pf);
	if(::IsValid(bpv__UxtFollow__pf))
	{
		bpv__UxtFollow__pf->SetActive(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, false);
	}
	return; // KCST_GotoReturn
}
void ABP_NearMenuBase_C__pf3547134495::bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_1_UxtEndGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf)
{
	b0l__K2Node_ComponentBoundEvent_Grabbable__pf = bpp__Grabbable__pf;
	b0l__K2Node_ComponentBoundEvent_GrabPointer__pf = bpp__GrabPointer__pf;
	bpf__ExecuteUbergraph_BP_NearMenuBase__pf_1(11);
}
void ABP_NearMenuBase_C__pf3547134495::bpf__BndEvt__UxtGenericManipulator_K2Node_ComponentBoundEvent_0_UxtBeginGrabDelegate__DelegateSignature__pf(UUxtGrabTargetComponent* bpp__Grabbable__pf, FUxtGrabPointerData bpp__GrabPointer__pf)
{
	b0l__K2Node_ComponentBoundEvent_Grabbable_1__pf = bpp__Grabbable__pf;
	b0l__K2Node_ComponentBoundEvent_GrabPointer_1__pf = bpp__GrabPointer__pf;
	bpf__ExecuteUbergraph_BP_NearMenuBase__pf_0(9);
}
void ABP_NearMenuBase_C__pf3547134495::bpf__EventxPinToggled__pfT(UUxtToggleStateComponent* bpp__ToggleState__pf)
{
	b0l__K2Node_CustomEvent_ToggleState__pf = bpp__ToggleState__pf;
	bpf__ExecuteUbergraph_BP_NearMenuBase__pf_4(7);
}
void ABP_NearMenuBase_C__pf3547134495::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_NearMenuBase__pf_2(4);
}
void ABP_NearMenuBase_C__pf3547134495::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_NearMenuBase__pf_3(2);
}
void ABP_NearMenuBase_C__pf3547134495::bpf__UserConstructionScript__pf()
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateGrabMaterial_Material__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateGrabMaterial_Material_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
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
				bpf__CreateGrabMaterial__pf(bpv__HorizontalGrabDotsCount__pf, 2.000000, /*out*/ bpfv__CallFunc_CreateGrabMaterial_Material__pf);
				if(::IsValid(bpv__GrabDots_Left__pf))
				{
					bpv__GrabDots_Left__pf->SetMaterial(0, bpfv__CallFunc_CreateGrabMaterial_Material__pf);
				}
			}
		case 3:
			{
				bpf__CreateGrabMaterial__pf(bpv__HorizontalGrabDotsCount__pf, 2.000000, /*out*/ bpfv__CallFunc_CreateGrabMaterial_Material__pf);
				if(::IsValid(bpv__GrabDots_Right__pf))
				{
					bpv__GrabDots_Right__pf->SetMaterial(0, bpfv__CallFunc_CreateGrabMaterial_Material__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpf__CreateGrabMaterial__pf(2.000000, bpv__VerticalGrabDotsCount__pf, /*out*/ bpfv__CallFunc_CreateGrabMaterial_Material_1__pf);
				if(::IsValid(bpv__GrabDots_Top__pf))
				{
					bpv__GrabDots_Top__pf->SetMaterial(0, bpfv__CallFunc_CreateGrabMaterial_Material_1__pf);
				}
			}
		case 5:
			{
				bpf__CreateGrabMaterial__pf(2.000000, bpv__VerticalGrabDotsCount__pf, /*out*/ bpfv__CallFunc_CreateGrabMaterial_Material_1__pf);
				if(::IsValid(bpv__GrabDots_Bottom__pf))
				{
					bpv__GrabDots_Bottom__pf->SetMaterial(0, bpfv__CallFunc_CreateGrabMaterial_Material_1__pf);
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
void ABP_NearMenuBase_C__pf3547134495::bpf__CreateGrabMaterial__pf(float bpp__U__pf, float bpp__V__pf, /*out*/ UMaterialInstanceDynamic*& bpp__Material__pf)
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), FName(TEXT("None")), EMIDCreationFlags::None);
	if(::IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("U")), bpp__U__pf);
	}
	if(::IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("V")), bpp__V__pf);
	}
	bpp__Material__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
}
void ABP_NearMenuBase_C__pf3547134495::bpf__ShouldStartAutoFollow__pf(/*out*/ bool& bpp__ShouldStartFollow__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetHeadPose_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Vector_DistanceSquared_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__AutoFollowRadius__pf, bpv__AutoFollowRadius__pf);
	bpfv__CallFunc_GetHeadPose_ReturnValue__pf = UUxtFunctionLibrary::GetHeadPose(this);
	UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetHeadPose_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
	bpfv__CallFunc_Vector_DistanceSquared_ReturnValue__pf = UKismetMathLibrary::Vector_DistanceSquared(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_BreakTransform_Location__pf);
	bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Vector_DistanceSquared_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpp__ShouldStartFollow__pf = bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf;
}
void ABP_NearMenuBase_C__pf3547134495::bpf__OnBeginGrab__pf()
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	TArray<FUxtGrabPointerData> bpfv__CallFunc_GetGrabPointers_ReturnValue__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf = UGameplayStatics::SpawnSoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), true);
			}
		case 2:
			{
				if(::IsValid(bpv__UxtGenericManipulator__pf))
				{
					bpfv__CallFunc_GetGrabPointers_ReturnValue__pf = bpv__UxtGenericManipulator__pf->UUxtGrabTargetComponent::GetGrabPointers();
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetGrabPointers_ReturnValue__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__PinButtonState__pf))
				{
					bpv__PinButtonState__pf->UUxtToggleStateComponent::SetIsChecked(true);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__PinButton__pf))
				{
					bpv__PinButton__pf->UUxtPressableButtonComponent::SetEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_NearMenuBase_C__pf3547134495::bpf__OnEndGrab__pf()
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	TArray<FUxtGrabPointerData> bpfv__CallFunc_GetGrabPointers_ReturnValue__pf{};
	UAudioComponent* bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpfv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf = UGameplayStatics::SpawnSoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_NearMenuBase_C__pf3547134495::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr), true);
			}
		case 2:
			{
				if(::IsValid(bpv__UxtGenericManipulator__pf))
				{
					bpfv__CallFunc_GetGrabPointers_ReturnValue__pf = bpv__UxtGenericManipulator__pf->UUxtGrabTargetComponent::GetGrabPointers();
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetGrabPointers_ReturnValue__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__PinButton__pf))
				{
					bpv__PinButton__pf->UUxtPressableButtonComponent::SetEnabled(true);
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
void ABP_NearMenuBase_C__pf3547134495::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Pointers/Meshes/SM_UnitQuad.SM_UnitQuad 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXTools/Materials/M_GrabbableDots.M_GrabbableDots 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorStart_Mono_01.S_ManipulatorStart_Mono_01 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorEnd_Mono_01.S_ManipulatorEnd_Mono_01 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_NearMenuBase_C__pf3547134495::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBackPlateComponent 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_HoloLens2BackPlate.MI_HoloLens2BackPlate 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Models/SM_BackPlateRoundedThick_4.SM_BackPlateRoundedThick_4 
		{75, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{76, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFollowComponent 
		{77, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGenericManipulatorComponent 
		{78, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFaceUserConstraint 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtToggleStateComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UXTools.EUxtButtonState 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtToggledDelegate__DelegateSignature 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGrabTargetComponent 
		{83, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UXTools.UxtGrabPointerData 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AudioComponent 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFunctionLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMaterialLibrary 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_NearMenuBase_C__pf3547134495
{
	FRegisterHelper__ABP_NearMenuBase_C__pf3547134495()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/Common/ToggleFeaturesPanel/BP_NearMenuBase"), &ABP_NearMenuBase_C__pf3547134495::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_NearMenuBase_C__pf3547134495 Instance;
};
FRegisterHelper__ABP_NearMenuBase_C__pf3547134495 FRegisterHelper__ABP_NearMenuBase_C__pf3547134495::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
