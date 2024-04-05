#include "NativizedAssets.h"
#include "BP_DescriptionPanel__pf3670844252.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBackPlateComponent.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "../Plugins/UXToolsExamples/Source/UXToolsExamples/Private/UxtExamplesInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_DescriptionPanel_C__pf3670844252::ABP_DescriptionPanel_C__pf3670844252(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Logo__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Logo"));
	bpv__Divider__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Divider"));
	bpv__TitleText__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TitleText"));
	bpv__BodyText__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("BodyText"));
	bpv__UxtBackPlate__pf = CreateDefaultSubobject<UUxtBackPlateComponent>(TEXT("UxtBackPlate"));
	bpv__WarningBodyText__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("WarningBodyText"));
	bpv__WarningTitleText__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("WarningTitleText"));
	bpv__VersionText__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("VersionText"));
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
	bpv__Logo__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Logo__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Logo__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Logo__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Logo__pf->OverrideMaterials.Reserve(1);
	bpv__Logo__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Logo__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__Logo__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__3 = FVector(0.000000, 10.000000, 8.000000);
	auto& __Local__4 = (*(AccessPrivateProperty<FRotator >((bpv__Logo__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__4 = FRotator(0.000000, -90.000000, 90.000000);
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__Logo__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__5 = FVector(0.200000, 0.050000, 1.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Logo__pf), true, 0));
	bpv__Divider__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Divider__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Divider__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__6 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Divider__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Divider__pf->OverrideMaterials.Reserve(1);
	bpv__Divider__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__Divider__pf->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& __Local__7 = (*(AccessPrivateProperty<FVector >((bpv__Divider__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__7 = FVector(0.000000, -0.000000, 4.500000);
	auto& __Local__8 = (*(AccessPrivateProperty<FRotator >((bpv__Divider__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__8 = FRotator(0.000000, -90.000000, 90.000000);
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__Divider__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__9 = FVector(0.380000, 0.002500, 0.002500);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Divider__pf), true, 0));
	bpv__TitleText__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TitleText__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TitleText__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0BCED1424E92C7FEE05B2FABE705F9D4]\", \"772F2BC54540DA917F836DAA5D2EDDDE\", \"Title Example\")")	);
	bpv__TitleText__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__TitleText__pf->Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__TitleText__pf->XScale = 0.005000f;
	bpv__TitleText__pf->YScale = 0.005000f;
	bpv__TitleText__pf->WorldSize = 256.000000f;
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__TitleText__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__10 = FVector(-0.000005, 19.000000, 1.400000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__TitleText__pf), false, 0));
	bpv__BodyText__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BodyText__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__BodyText__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0BCED1424E92C7FEE05B2FABE705F9D4]\", \"D35433E54F374012A91FEDBFED718A1D\", \"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor <br>incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis <br>nost")
		TEXT("rud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. <br>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu <br>fugiat nulla pariatur.\")")	);
	bpv__BodyText__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__BodyText__pf->Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__BodyText__pf->VerticalAlignment = EVerticalTextAligment::EVRTA_TextTop;
	bpv__BodyText__pf->XScale = 0.005000f;
	bpv__BodyText__pf->YScale = 0.005000f;
	bpv__BodyText__pf->WorldSize = 128.000000f;
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__BodyText__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__11 = FVector(-0.000005, 19.000000, 1.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__BodyText__pf), false, 0));
	bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtBackPlate__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__UxtBackPlate__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__UxtBackPlate__pf->OverrideMaterials.Reserve(1);
	bpv__UxtBackPlate__pf->OverrideMaterials.Add(LoadObject<UMaterialInterface>(nullptr, TEXT("/Temp/__TEMP_BP__/UXToolsExamples/Common/DescriptionPanel/BP_DescriptionPanel.BP_DescriptionPanel_C:UxtBackPlate_GEN_VARIABLE.MaterialInstanceDynamic_0")));
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(-0.110000, 0.000000, 0.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__13 = FVector(1.600000, 40.000000, 23.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtBackPlate__pf), true, 0));
	bpv__WarningBodyText__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WarningBodyText__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__WarningBodyText__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0BCED1424E92C7FEE05B2FABE705F9D4]\", \"382CFA1A43B48FD1E3F4468CD2647A34\", \"This example level demonstrates usage of<br>experimental features which are subject to change.\")")	);
	bpv__WarningBodyText__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__WarningBodyText__pf->Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__WarningBodyText__pf->VerticalAlignment = EVerticalTextAligment::EVRTA_TextTop;
	bpv__WarningBodyText__pf->XScale = 0.005000f;
	bpv__WarningBodyText__pf->YScale = 0.005000f;
	bpv__WarningBodyText__pf->WorldSize = 90.000000f;
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__WarningBodyText__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(0.000072, -0.242689, 8.376030);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WarningBodyText__pf), false, 0));
	bpv__WarningTitleText__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WarningTitleText__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__WarningTitleText__pf->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0BCED1424E92C7FEE05B2FABE705F9D4]\", \"273F655B4F088CE9B9EE68B3760AD3C6\", \"Warning: Experimental Features\")")	);
	bpv__WarningTitleText__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__WarningTitleText__pf->Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__WarningTitleText__pf->TextRenderColor = FColor(255, 255, 0, 255);
	bpv__WarningTitleText__pf->XScale = 0.005000f;
	bpv__WarningTitleText__pf->YScale = 0.005000f;
	bpv__WarningTitleText__pf->WorldSize = 128.000000f;
	auto& __Local__15 = (*(AccessPrivateProperty<FVector >((bpv__WarningTitleText__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__15 = FVector(0.000059, -0.253666, 8.464493);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__WarningTitleText__pf), false, 0));
	bpv__VersionText__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VersionText__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__VersionText__pf->Text = FText::GetEmpty();
	bpv__VersionText__pf->TextMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__VersionText__pf->Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_DescriptionPanel_C__pf3670844252::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__VersionText__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__VersionText__pf->XScale = 0.005000f;
	bpv__VersionText__pf->YScale = 0.005000f;
	bpv__VersionText__pf->WorldSize = 128.000000f;
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__VersionText__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(0.000000, 0.000000, -10.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__VersionText__pf), false, 0));
	bpv__ShowExperimentalWarning__pf = false;
	bpv__VersionTextFormat__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[0BCED1424E92C7FEE05B2FABE705F9D4]\", \"42B8ADF8469E579963AC39A95872094C\", \"Git Commit: {0}\")")	);
	auto& __Local__17 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__17 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	AutoReceiveInput = EAutoReceiveInput::Type::Player0;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_DescriptionPanel_C__pf3670844252::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Logo__pf)
	{
		bpv__Logo__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Divider__pf)
	{
		bpv__Divider__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TitleText__pf)
	{
		bpv__TitleText__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BodyText__pf)
	{
		bpv__BodyText__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtBackPlate__pf)
	{
		bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WarningBodyText__pf)
	{
		bpv__WarningBodyText__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WarningTitleText__pf)
	{
		bpv__WarningTitleText__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__VersionText__pf)
	{
		bpv__VersionText__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_DescriptionPanel_C__pf3670844252::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__18 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__18);
	__Local__18->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__18->InputActionDelegateBindings.AddUninitialized(1);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__18->InputActionDelegateBindings.GetData(), 1);
	auto& __Local__19 = __Local__18->InputActionDelegateBindings[0];
	__Local__19.InputActionName = FName(TEXT("RepositionWord"));
	__Local__19.FunctionNameToBind = FName(TEXT("InpActEvt_RepositionWord_K2Node_InputActionEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_DescriptionPanel_C__pf3670844252::bpf__ExecuteUbergraph_BP_DescriptionPanel__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(0.000000, EOrientPositionSelector::OrientationAndPosition);
	return; // KCST_GotoReturn
}
void ABP_DescriptionPanel_C__pf3670844252::bpf__ExecuteUbergraph_BP_DescriptionPanel__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpf__ShowCommitSHA__pf();
	return; // KCST_GotoReturn
}
void ABP_DescriptionPanel_C__pf3670844252::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_DescriptionPanel__pf_1(2);
}
void ABP_DescriptionPanel_C__pf3670844252::bpf__InpActEvt_RepositionWord_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_DescriptionPanel__pf_0(4);
}
void ABP_DescriptionPanel_C__pf3670844252::bpf__UserConstructionScript__pf()
{
	if(::IsValid(bpv__WarningBodyText__pf))
	{
		bpv__WarningBodyText__pf->USceneComponent::SetVisibility(bpv__ShowExperimentalWarning__pf, false);
	}
	if(::IsValid(bpv__WarningTitleText__pf))
	{
		bpv__WarningTitleText__pf->USceneComponent::SetVisibility(bpv__ShowExperimentalWarning__pf, false);
	}
}
void ABP_DescriptionPanel_C__pf3670844252::bpf__ShowCommitSHA__pf()
{
	FText bpfv__CallFunc_CommitSHA_ReturnValue__pf{};
	bool bpfv__CallFunc_TextIsEmpty_ReturnValue__pf{};
	FFormatArgumentData bpfv__K2Node_MakeStruct_FormatArgumentData__pf{};
	TArray<FFormatArgumentData> bpfv__K2Node_MakeArray_Array__pf{};
	FText bpfv__CallFunc_Format_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_CommitSHA_ReturnValue__pf = UUxtExamplesInfo::CommitSHA(this);
			}
		case 2:
			{
				bpfv__CallFunc_TextIsEmpty_ReturnValue__pf = UKismetTextLibrary::TextIsEmpty(bpfv__CallFunc_CommitSHA_ReturnValue__pf);
				if (!bpfv__CallFunc_TextIsEmpty_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentName = FString(TEXT("0"));
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueType = EFormatArgumentType::Text;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValue = bpfv__CallFunc_CommitSHA_ReturnValue__pf;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueInt = 0;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueFloat = 0.000000;
				bpfv__K2Node_MakeStruct_FormatArgumentData__pf.ArgumentValueGender = ETextGender::Masculine;
				bpfv__K2Node_MakeArray_Array__pf.SetNum(1, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = bpfv__K2Node_MakeStruct_FormatArgumentData__pf;
				bpfv__CallFunc_Format_ReturnValue__pf = UKismetTextLibrary::Format(bpv__VersionTextFormat__pf, bpfv__K2Node_MakeArray_Array__pf);
				if(::IsValid(bpv__VersionText__pf))
				{
					bpv__VersionText__pf->UTextRenderComponent::K2_SetText(bpfv__CallFunc_Format_ReturnValue__pf);
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
void ABP_DescriptionPanel_C__pf3670844252::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Plane.Plane 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXToolsExamples/Common/DescriptionPanel/M_MRTKUnrealLogo.M_MRTKUnrealLogo 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_SimpleLit_DarkGray.MI_SimpleLit_DarkGray 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXTools/Fonts/M_DefaultFont.M_DefaultFont 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Semibold_42.Font_SegoeUI_Semibold_42 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Bold_42.Font_SegoeUI_Bold_42 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeMDL2_Regular_42.Font_SegoeMDL2_Regular_42 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_DescriptionPanel_C__pf3670844252::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{75, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{115, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBackPlateComponent 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_HoloLens2BackPlate.MI_HoloLens2BackPlate 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Models/SM_BackPlateRoundedThick_4.SM_BackPlateRoundedThick_4 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /UXTools/Textures/T_IridescenceRamp_01_D.T_IridescenceRamp_01_D 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /UXTools/Textures/T_FingerBlob_03_D.T_FingerBlob_03_D 
		{118, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXToolsExamples.UxtExamplesInfo 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETextGender 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_DescriptionPanel_C__pf3670844252
{
	FRegisterHelper__ABP_DescriptionPanel_C__pf3670844252()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/Common/DescriptionPanel/BP_DescriptionPanel"), &ABP_DescriptionPanel_C__pf3670844252::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_DescriptionPanel_C__pf3670844252 Instance;
};
FRegisterHelper__ABP_DescriptionPanel_C__pf3670844252 FRegisterHelper__ABP_DescriptionPanel_C__pf3670844252::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
