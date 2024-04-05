#include "NativizedAssets.h"
#include "BP_SelectorMenu__pf1172471173.h"
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
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtTextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "BP_SelectorButton__pf1172471173.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBackPlateComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonComponent.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
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
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtToggleGroupComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Behaviors/UxtPalmUpConstraintComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Behaviors/UxtHandConstraintComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "BP_SmallHandMenu__pf1172471173.h"
#include "BP_MediumHandMenu__pf1172471173.h"
#include "BP_LargeHandMenu_LockOnGrab__pf1172471173.h"
#include "BP_LargeHandMenu_LockOnDrop__pf1172471173.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_SelectorMenu_C__pf1172471173::ABP_SelectorMenu_C__pf1172471173(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__SceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	bpv__Title__pf = CreateDefaultSubobject<UUxtTextRenderComponent>(TEXT("Title"));
	bpv__Button_SmallMenu__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_SmallMenu"));
	bpv__Button_MediumMenu__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_MediumMenu"));
	bpv__Button_LargeMenu_LockOnGrab__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_LargeMenu_LockOnGrab"));
	bpv__Button_LargeMenu_LockOnDrop__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_LargeMenu_LockOnDrop"));
	bpv__Button_ToggleFlatHand__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_ToggleFlatHand"));
	bpv__Button_ToggleGaze__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_ToggleGaze"));
	bpv__BackPlate__pf = CreateDefaultSubobject<UUxtBackPlateComponent>(TEXT("BackPlate"));
	RootComponent = bpv__SceneRoot__pf;
	bpv__UxtToggleGroup__pf = CreateDefaultSubobject<UUxtToggleGroupComponent>(TEXT("UxtToggleGroup"));
	bpv__SceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__SceneRoot__pf), false, 0));
	bpv__Title__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Title__pf->AttachToComponent(bpv__SceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Title__pf->Text = FText::AsCultureInvariant(
TEXT("Hand Menu Type Options")	);
	bpv__Title__pf->Font = CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_SelectorMenu_C__pf1172471173::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Title__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__Title__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__2 = FVector(0.100000, 0.000000, 3.250000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Title__pf), false, 0));
	bpv__Button_SmallMenu__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_SmallMenu__pf->AttachToComponent(bpv__SceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_SmallMenu__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__3 = ABP_SelectorButton_C__pf1172471173::StaticClass();
	auto& __Local__4 = (*(AccessPrivateProperty<AActor* >((bpv__Button_SmallMenu__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__4 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_SelectorMenu_C__pf1172471173::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__Button_SmallMenu__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(0.000000, 19.200001, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Button_SmallMenu__pf), false, 0));
	bpv__Button_MediumMenu__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_MediumMenu__pf->AttachToComponent(bpv__SceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_MediumMenu__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__6 = ABP_SelectorButton_C__pf1172471173::StaticClass();
	auto& __Local__7 = (*(AccessPrivateProperty<AActor* >((bpv__Button_MediumMenu__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__7 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_SelectorMenu_C__pf1172471173::StaticClass())->MiscConvertedSubobjects[1]);
	auto& __Local__8 = (*(AccessPrivateProperty<FVector >((bpv__Button_MediumMenu__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__8 = FVector(0.000000, 6.400000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Button_MediumMenu__pf), false, 0));
	bpv__Button_LargeMenu_LockOnGrab__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_LargeMenu_LockOnGrab__pf->AttachToComponent(bpv__SceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__9 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_LargeMenu_LockOnGrab__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__9 = ABP_SelectorButton_C__pf1172471173::StaticClass();
	auto& __Local__10 = (*(AccessPrivateProperty<AActor* >((bpv__Button_LargeMenu_LockOnGrab__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__10 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_SelectorMenu_C__pf1172471173::StaticClass())->MiscConvertedSubobjects[2]);
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__Button_LargeMenu_LockOnGrab__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__11 = FVector(0.000000, -6.400000, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Button_LargeMenu_LockOnGrab__pf), false, 0));
	bpv__Button_LargeMenu_LockOnDrop__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_LargeMenu_LockOnDrop__pf->AttachToComponent(bpv__SceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__12 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_LargeMenu_LockOnDrop__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__12 = ABP_SelectorButton_C__pf1172471173::StaticClass();
	auto& __Local__13 = (*(AccessPrivateProperty<AActor* >((bpv__Button_LargeMenu_LockOnDrop__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__13 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_SelectorMenu_C__pf1172471173::StaticClass())->MiscConvertedSubobjects[3]);
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__Button_LargeMenu_LockOnDrop__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(0.000000, -19.200001, 0.000000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Button_LargeMenu_LockOnDrop__pf), false, 0));
	bpv__Button_ToggleFlatHand__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_ToggleFlatHand__pf->AttachToComponent(bpv__SceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__15 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_ToggleFlatHand__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__15 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__16 = (*(AccessPrivateProperty<AActor* >((bpv__Button_ToggleFlatHand__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__16 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_SelectorMenu_C__pf1172471173::StaticClass())->MiscConvertedSubobjects[4]);
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__Button_ToggleFlatHand__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__17 = FVector(0.000099, 6.400000, -4.100000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Button_ToggleFlatHand__pf), false, 0));
	bpv__Button_ToggleGaze__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_ToggleGaze__pf->AttachToComponent(bpv__SceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_ToggleGaze__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__18 = AUxtPressableToggleButtonActor::StaticClass();
	auto& __Local__19 = (*(AccessPrivateProperty<AActor* >((bpv__Button_ToggleGaze__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__19 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_SelectorMenu_C__pf1172471173::StaticClass())->MiscConvertedSubobjects[5]);
	auto& __Local__20 = (*(AccessPrivateProperty<FVector >((bpv__Button_ToggleGaze__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__20 = FVector(0.000093, -6.400000, -4.100000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Button_ToggleGaze__pf), false, 0));
	bpv__BackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BackPlate__pf->AttachToComponent(bpv__SceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__BackPlate__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__BackPlate__pf->OverrideMaterials.Reserve(1);
	bpv__BackPlate__pf->OverrideMaterials.Add(nullptr);
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__BackPlate__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__21 = FVector(0.000008, 0.000000, -1.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__BackPlate__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__22 = FVector(1.600000, 52.200001, 10.500000);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__BackPlate__pf), true, 0));
	bpv__UxtToggleGroup__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<FComponentReference> >((bpv__UxtToggleGroup__pf), UUxtToggleGroupComponent::__PPO__ToggleReferences() )));
	__Local__23 = TArray<FComponentReference> ();
	__Local__23.AddUninitialized(4);
	FComponentReference::StaticStruct()->InitializeStruct(__Local__23.GetData(), 4);
	auto& __Local__24 = __Local__23[0];
	__Local__24.ComponentProperty = FName(TEXT("Button_SmallMenu"));
	auto& __Local__25 = __Local__23[1];
	__Local__25.ComponentProperty = FName(TEXT("Button_MediumMenu"));
	auto& __Local__26 = __Local__23[2];
	__Local__26.ComponentProperty = FName(TEXT("Button_LargeMenu_LockOnGrab"));
	auto& __Local__27 = __Local__23[3];
	__Local__27.ComponentProperty = FName(TEXT("Button_LargeMenu_LockOnDrop"));
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtToggleGroup__pf), false, 0));
	bpv__SmallMenu__pf = nullptr;
	bpv__MediumMenu__pf = nullptr;
	bpv__LargeMenu_LockOnGrab__pf = nullptr;
	bpv__LargeMenu_LockOnDrop__pf = nullptr;
	auto& __Local__28 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__28 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_SelectorMenu_C__pf1172471173::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SceneRoot__pf)
	{
		bpv__SceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Title__pf)
	{
		bpv__Title__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_SmallMenu__pf)
	{
		bpv__Button_SmallMenu__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_MediumMenu__pf)
	{
		bpv__Button_MediumMenu__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_LargeMenu_LockOnGrab__pf)
	{
		bpv__Button_LargeMenu_LockOnGrab__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_LargeMenu_LockOnDrop__pf)
	{
		bpv__Button_LargeMenu_LockOnDrop__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_ToggleFlatHand__pf)
	{
		bpv__Button_ToggleFlatHand__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_ToggleGaze__pf)
	{
		bpv__Button_ToggleGaze__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BackPlate__pf)
	{
		bpv__BackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtToggleGroup__pf)
	{
		bpv__UxtToggleGroup__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SelectorMenu_C__pf1172471173::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ABP_SelectorButton_C__pf1172471173::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_SmallHandMenu_C__pf1172471173::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_MediumHandMenu_C__pf1172471173::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_LargeHandMenu_LockOnGrab_C__pf1172471173::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_LargeHandMenu_LockOnDrop_C__pf1172471173::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	ABP_SelectorButton_C__pf1172471173::StaticClass()->GetDefaultObject();
	auto __Local__29 = NewObject<ABP_SelectorButton_C__pf1172471173>(InDynamicClass, ABP_SelectorButton_C__pf1172471173::StaticClass(), TEXT("Button_SmallMenu_GEN_VARIABLE_BP_SelectorButton_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__29);
	__Local__29->bpv__DescriptionText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"69A7C35440BB6B652CD77A9E77986B58\", \"Quick actions, short interaction time\")")	);
	auto& __Local__30 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__29), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__31 = CastChecked<UUxtToggleStateComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__33{};
	const FProperty* __Local__32 = __Local__33.Get();
	if (nullptr == __Local__32)
	{
		__Local__32 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__32);
		__Local__33 = __Local__32;
	}
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__31), false, 0));
	__Local__30 = __Local__31;
	auto& __Local__34 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__29), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__35 = CastChecked<UUxtBackPlateComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__36 = (*(AccessPrivateProperty<USceneComponent*>((__Local__35), USceneComponent::__PPO__AttachParent() )));
	auto __Local__37 = CastChecked<USceneComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__38 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__37), USceneComponent::__PPO__AttachParent() )));
	auto __Local__39 = CastChecked<UUxtPressableButtonComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__39), false, 0));
	__Local__38 = __Local__39;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__37), false, 0));
	__Local__36 = __Local__37;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__35), true, 0));
	__Local__34 = __Local__35;
	auto& __Local__40 = (*(AccessPrivateProperty<FText >((__Local__29), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__40 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"360996EE4BABEE01BF4CA1A64CF2A258\", \"Small<br>Show & Hide with Hand\")")	);
	auto& __Local__41 = (*(AccessPrivateProperty<USceneComponent*>((__Local__29), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__41 = __Local__37;
	auto& __Local__42 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__29), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__43 = CastChecked<UUxtBackPlateComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__44 = (*(AccessPrivateProperty<USceneComponent*>((__Local__43), USceneComponent::__PPO__AttachParent() )));
	__Local__44 = __Local__37;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__43), true, 0));
	__Local__42 = __Local__43;
	auto& __Local__45 = (*(AccessPrivateProperty<USceneComponent*>((__Local__29), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__46 = CastChecked<USceneComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__47 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__46), USceneComponent::__PPO__AttachParent() )));
	__Local__47 = __Local__39;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__46), false, 0));
	__Local__45 = __Local__46;
	auto& __Local__48 = (*(AccessPrivateProperty<USceneComponent*>((__Local__29), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__49 = CastChecked<USceneComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__50 = (*(AccessPrivateProperty<USceneComponent*>((__Local__49), USceneComponent::__PPO__AttachParent() )));
	__Local__50 = __Local__46;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__49), false, 0));
	__Local__48 = __Local__49;
	auto& __Local__51 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__29), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__52 = CastChecked<UStaticMeshComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__53 = (*(AccessPrivateProperty<USceneComponent*>((__Local__52), USceneComponent::__PPO__AttachParent() )));
	__Local__53 = __Local__49;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__52), true, 0));
	__Local__51 = __Local__52;
	auto& __Local__54 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__29), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__55 = CastChecked<UTextRenderComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__56 = (*(AccessPrivateProperty<USceneComponent*>((__Local__55), USceneComponent::__PPO__AttachParent() )));
	__Local__56 = __Local__49;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__55), false, 0));
	__Local__54 = __Local__55;
	auto& __Local__57 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__29), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__58 = CastChecked<UTextRenderComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__59 = (*(AccessPrivateProperty<USceneComponent*>((__Local__58), USceneComponent::__PPO__AttachParent() )));
	__Local__59 = __Local__49;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__58), false, 0));
	__Local__57 = __Local__58;
	auto& __Local__60 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__29), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__61 = CastChecked<UAudioComponent>(__Local__29->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__62 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__61), USceneComponent::__PPO__AttachParent() )));
	__Local__62 = __Local__39;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__61), false, 0));
	__Local__60 = __Local__61;
	auto& __Local__63 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__29), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__63 = __Local__39;
	auto& __Local__64 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__29), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__64 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__65 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__29), AActor::__PPO__RootComponent() )));
	__Local__65 = __Local__39;
	ABP_SelectorButton_C__pf1172471173::StaticClass()->GetDefaultObject();
	auto __Local__66 = NewObject<ABP_SelectorButton_C__pf1172471173>(InDynamicClass, ABP_SelectorButton_C__pf1172471173::StaticClass(), TEXT("Button_MediumMenu_GEN_VARIABLE_BP_SelectorButton_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__66);
	__Local__66->bpv__DescriptionText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"2C3234AC4FB21FC2BD9E1F9FD18A349D\", \"Quick actions, short interaction time\")")	);
	auto& __Local__67 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__66), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__68 = CastChecked<UUxtToggleStateComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__68), false, 0));
	__Local__67 = __Local__68;
	auto& __Local__69 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__66), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__70 = CastChecked<UUxtBackPlateComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__71 = (*(AccessPrivateProperty<USceneComponent*>((__Local__70), USceneComponent::__PPO__AttachParent() )));
	auto __Local__72 = CastChecked<USceneComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__73 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__72), USceneComponent::__PPO__AttachParent() )));
	auto __Local__74 = CastChecked<UUxtPressableButtonComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__74), false, 0));
	__Local__73 = __Local__74;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__72), false, 0));
	__Local__71 = __Local__72;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__70), true, 0));
	__Local__69 = __Local__70;
	auto& __Local__75 = (*(AccessPrivateProperty<FText >((__Local__66), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__75 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"D1257DC94CC34F809C9930AB911F973C\", \"Medium<br>Show & Hide with Hand\")")	);
	auto& __Local__76 = (*(AccessPrivateProperty<USceneComponent*>((__Local__66), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__76 = __Local__72;
	auto& __Local__77 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__66), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__78 = CastChecked<UUxtBackPlateComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__79 = (*(AccessPrivateProperty<USceneComponent*>((__Local__78), USceneComponent::__PPO__AttachParent() )));
	__Local__79 = __Local__72;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__78), true, 0));
	__Local__77 = __Local__78;
	auto& __Local__80 = (*(AccessPrivateProperty<USceneComponent*>((__Local__66), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__81 = CastChecked<USceneComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__82 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__81), USceneComponent::__PPO__AttachParent() )));
	__Local__82 = __Local__74;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__81), false, 0));
	__Local__80 = __Local__81;
	auto& __Local__83 = (*(AccessPrivateProperty<USceneComponent*>((__Local__66), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__84 = CastChecked<USceneComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__85 = (*(AccessPrivateProperty<USceneComponent*>((__Local__84), USceneComponent::__PPO__AttachParent() )));
	__Local__85 = __Local__81;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__84), false, 0));
	__Local__83 = __Local__84;
	auto& __Local__86 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__66), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__87 = CastChecked<UStaticMeshComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__88 = (*(AccessPrivateProperty<USceneComponent*>((__Local__87), USceneComponent::__PPO__AttachParent() )));
	__Local__88 = __Local__84;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__87), true, 0));
	__Local__86 = __Local__87;
	auto& __Local__89 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__66), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__90 = CastChecked<UTextRenderComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__91 = (*(AccessPrivateProperty<USceneComponent*>((__Local__90), USceneComponent::__PPO__AttachParent() )));
	__Local__91 = __Local__84;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__90), false, 0));
	__Local__89 = __Local__90;
	auto& __Local__92 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__66), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__93 = CastChecked<UTextRenderComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__94 = (*(AccessPrivateProperty<USceneComponent*>((__Local__93), USceneComponent::__PPO__AttachParent() )));
	__Local__94 = __Local__84;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__93), false, 0));
	__Local__92 = __Local__93;
	auto& __Local__95 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__66), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__96 = CastChecked<UAudioComponent>(__Local__66->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__97 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__96), USceneComponent::__PPO__AttachParent() )));
	__Local__97 = __Local__74;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__96), false, 0));
	__Local__95 = __Local__96;
	auto& __Local__98 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__66), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__98 = __Local__74;
	auto& __Local__99 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__66), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__99 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__100 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__66), AActor::__PPO__RootComponent() )));
	__Local__100 = __Local__74;
	ABP_SelectorButton_C__pf1172471173::StaticClass()->GetDefaultObject();
	auto __Local__101 = NewObject<ABP_SelectorButton_C__pf1172471173>(InDynamicClass, ABP_SelectorButton_C__pf1172471173::StaticClass(), TEXT("Button_LargeMenu_LockOnGrab_GEN_VARIABLE_BP_SelectorButton_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__101);
	__Local__101->bpv__DescriptionText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"455540BE40E9396DF946F79E489426A9\", \"Complex menus, longer interaction time<br>Close menu to re-attach\")")	);
	auto& __Local__102 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__101), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__103 = CastChecked<UUxtToggleStateComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__103), false, 0));
	__Local__102 = __Local__103;
	auto& __Local__104 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__101), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__105 = CastChecked<UUxtBackPlateComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__106 = (*(AccessPrivateProperty<USceneComponent*>((__Local__105), USceneComponent::__PPO__AttachParent() )));
	auto __Local__107 = CastChecked<USceneComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__108 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__107), USceneComponent::__PPO__AttachParent() )));
	auto __Local__109 = CastChecked<UUxtPressableButtonComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__109), false, 0));
	__Local__108 = __Local__109;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__107), false, 0));
	__Local__106 = __Local__107;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__105), true, 0));
	__Local__104 = __Local__105;
	auto& __Local__110 = (*(AccessPrivateProperty<FText >((__Local__101), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__110 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"C31DE3CD4CA90EE26786D1A0EE27C4B0\", \"Large<br>Show & Hide with Hand<br>World Lock on Grab and Pull\")")	);
	auto& __Local__111 = (*(AccessPrivateProperty<USceneComponent*>((__Local__101), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__111 = __Local__107;
	auto& __Local__112 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__101), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__113 = CastChecked<UUxtBackPlateComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__114 = (*(AccessPrivateProperty<USceneComponent*>((__Local__113), USceneComponent::__PPO__AttachParent() )));
	__Local__114 = __Local__107;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__113), true, 0));
	__Local__112 = __Local__113;
	auto& __Local__115 = (*(AccessPrivateProperty<USceneComponent*>((__Local__101), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__116 = CastChecked<USceneComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__117 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__116), USceneComponent::__PPO__AttachParent() )));
	__Local__117 = __Local__109;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__116), false, 0));
	__Local__115 = __Local__116;
	auto& __Local__118 = (*(AccessPrivateProperty<USceneComponent*>((__Local__101), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__119 = CastChecked<USceneComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__120 = (*(AccessPrivateProperty<USceneComponent*>((__Local__119), USceneComponent::__PPO__AttachParent() )));
	__Local__120 = __Local__116;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__119), false, 0));
	__Local__118 = __Local__119;
	auto& __Local__121 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__101), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__122 = CastChecked<UStaticMeshComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__123 = (*(AccessPrivateProperty<USceneComponent*>((__Local__122), USceneComponent::__PPO__AttachParent() )));
	__Local__123 = __Local__119;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__122), true, 0));
	__Local__121 = __Local__122;
	auto& __Local__124 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__101), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__125 = CastChecked<UTextRenderComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__126 = (*(AccessPrivateProperty<USceneComponent*>((__Local__125), USceneComponent::__PPO__AttachParent() )));
	__Local__126 = __Local__119;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__125), false, 0));
	__Local__124 = __Local__125;
	auto& __Local__127 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__101), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__128 = CastChecked<UTextRenderComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__129 = (*(AccessPrivateProperty<USceneComponent*>((__Local__128), USceneComponent::__PPO__AttachParent() )));
	__Local__129 = __Local__119;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__128), false, 0));
	__Local__127 = __Local__128;
	auto& __Local__130 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__101), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__131 = CastChecked<UAudioComponent>(__Local__101->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__132 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__131), USceneComponent::__PPO__AttachParent() )));
	__Local__132 = __Local__109;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__131), false, 0));
	__Local__130 = __Local__131;
	auto& __Local__133 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__101), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__133 = __Local__109;
	auto& __Local__134 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__101), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__134 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__135 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__101), AActor::__PPO__RootComponent() )));
	__Local__135 = __Local__109;
	ABP_SelectorButton_C__pf1172471173::StaticClass()->GetDefaultObject();
	auto __Local__136 = NewObject<ABP_SelectorButton_C__pf1172471173>(InDynamicClass, ABP_SelectorButton_C__pf1172471173::StaticClass(), TEXT("Button_LargeMenu_LockOnDrop_GEN_VARIABLE_BP_SelectorButton_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__136);
	__Local__136->bpv__DescriptionText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"C873018B4B4E20027A2691AD99D47EAA\", \"Complex menus, longer interation time<br>Flat palm required to re-attach\")")	);
	auto& __Local__137 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__136), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__138 = CastChecked<UUxtToggleStateComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__138), false, 0));
	__Local__137 = __Local__138;
	auto& __Local__139 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__136), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__140 = CastChecked<UUxtBackPlateComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__141 = (*(AccessPrivateProperty<USceneComponent*>((__Local__140), USceneComponent::__PPO__AttachParent() )));
	auto __Local__142 = CastChecked<USceneComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__143 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__142), USceneComponent::__PPO__AttachParent() )));
	auto __Local__144 = CastChecked<UUxtPressableButtonComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__144), false, 0));
	__Local__143 = __Local__144;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__142), false, 0));
	__Local__141 = __Local__142;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__140), true, 0));
	__Local__139 = __Local__140;
	auto& __Local__145 = (*(AccessPrivateProperty<FText >((__Local__136), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__145 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"391EAB9D494C5970DEF526AC9F1798AA\", \"Large<br>Auto World Lock on Hand Drop\")")	);
	auto& __Local__146 = (*(AccessPrivateProperty<USceneComponent*>((__Local__136), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__146 = __Local__142;
	auto& __Local__147 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__136), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__148 = CastChecked<UUxtBackPlateComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__149 = (*(AccessPrivateProperty<USceneComponent*>((__Local__148), USceneComponent::__PPO__AttachParent() )));
	__Local__149 = __Local__142;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__148), true, 0));
	__Local__147 = __Local__148;
	auto& __Local__150 = (*(AccessPrivateProperty<USceneComponent*>((__Local__136), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__151 = CastChecked<USceneComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__152 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__151), USceneComponent::__PPO__AttachParent() )));
	__Local__152 = __Local__144;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__151), false, 0));
	__Local__150 = __Local__151;
	auto& __Local__153 = (*(AccessPrivateProperty<USceneComponent*>((__Local__136), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__154 = CastChecked<USceneComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__155 = (*(AccessPrivateProperty<USceneComponent*>((__Local__154), USceneComponent::__PPO__AttachParent() )));
	__Local__155 = __Local__151;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__154), false, 0));
	__Local__153 = __Local__154;
	auto& __Local__156 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__136), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__157 = CastChecked<UStaticMeshComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__158 = (*(AccessPrivateProperty<USceneComponent*>((__Local__157), USceneComponent::__PPO__AttachParent() )));
	__Local__158 = __Local__154;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__157), true, 0));
	__Local__156 = __Local__157;
	auto& __Local__159 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__136), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__160 = CastChecked<UTextRenderComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__161 = (*(AccessPrivateProperty<USceneComponent*>((__Local__160), USceneComponent::__PPO__AttachParent() )));
	__Local__161 = __Local__154;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__160), false, 0));
	__Local__159 = __Local__160;
	auto& __Local__162 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__136), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__163 = CastChecked<UTextRenderComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__164 = (*(AccessPrivateProperty<USceneComponent*>((__Local__163), USceneComponent::__PPO__AttachParent() )));
	__Local__164 = __Local__154;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__163), false, 0));
	__Local__162 = __Local__163;
	auto& __Local__165 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__136), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__166 = CastChecked<UAudioComponent>(__Local__136->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__167 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__166), USceneComponent::__PPO__AttachParent() )));
	__Local__167 = __Local__144;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__166), false, 0));
	__Local__165 = __Local__166;
	auto& __Local__168 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__136), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__168 = __Local__144;
	auto& __Local__169 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__136), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__169 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__170 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__136), AActor::__PPO__RootComponent() )));
	__Local__170 = __Local__144;
	auto __Local__171 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("Button_ToggleFlatHand_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__171);
	auto& __Local__172 = (*(AccessPrivateProperty<bool >((__Local__171), AUxtPressableToggleButtonActor::__PPO__bIsInitiallyChecked() )));
	__Local__172 = true;
	auto& __Local__173 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__171), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__174 = CastChecked<UUxtToggleStateComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__174), false, 0));
	__Local__173 = __Local__174;
	auto& __Local__175 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__171), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__176 = CastChecked<UUxtBackPlateComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__177 = (*(AccessPrivateProperty<USceneComponent*>((__Local__176), USceneComponent::__PPO__AttachParent() )));
	auto __Local__178 = CastChecked<USceneComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__179 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__178), USceneComponent::__PPO__AttachParent() )));
	auto __Local__180 = CastChecked<UUxtPressableButtonComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__180), false, 0));
	__Local__179 = __Local__180;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__178), false, 0));
	__Local__177 = __Local__178;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__176), true, 0));
	__Local__175 = __Local__176;
	auto& __Local__181 = (*(AccessPrivateProperty<FVector >((__Local__171), AUxtPressableButtonActor::__PPO__MillimeterSize() )));
	__Local__181 = FVector(16.000000, 128.000000, 32.000000);
	auto& __Local__182 = (*(AccessPrivateProperty<bool >((__Local__171), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__182 = false;
	auto& __Local__183 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__171), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__183.Icon = FString(TEXT("E9EA"));
	__Local__183.TextBrush.RelativeLocation = FVector(0.000000, 2.500000, 0.000000);
	__Local__183.TextBrush.Size = 1.400000f;
	auto& __Local__184 = (*(AccessPrivateProperty<FText >((__Local__171), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__184 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"2141204A4057C565635EB5B7540AC5FF\", \"Require Flat Hand\")")	);
	auto& __Local__185 = (*(AccessPrivateProperty<FUxtTextBrush >((__Local__171), AUxtPressableButtonActor::__PPO__LabelTextBrush() )));
	__Local__185.RelativeLocation = FVector(0.000000, -1.000000, 0.000000);
	__Local__185.Size = 0.700000f;
	auto& __Local__186 = (*(AccessPrivateProperty<USceneComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__186 = __Local__178;
	auto& __Local__187 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__188 = CastChecked<UUxtBackPlateComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__189 = (*(AccessPrivateProperty<USceneComponent*>((__Local__188), USceneComponent::__PPO__AttachParent() )));
	__Local__189 = __Local__178;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__188), true, 0));
	__Local__187 = __Local__188;
	auto& __Local__190 = (*(AccessPrivateProperty<USceneComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__191 = CastChecked<USceneComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__192 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__191), USceneComponent::__PPO__AttachParent() )));
	__Local__192 = __Local__180;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__191), false, 0));
	__Local__190 = __Local__191;
	auto& __Local__193 = (*(AccessPrivateProperty<USceneComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__194 = CastChecked<USceneComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__195 = (*(AccessPrivateProperty<USceneComponent*>((__Local__194), USceneComponent::__PPO__AttachParent() )));
	__Local__195 = __Local__191;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__194), false, 0));
	__Local__193 = __Local__194;
	auto& __Local__196 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__197 = CastChecked<UStaticMeshComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__198 = (*(AccessPrivateProperty<USceneComponent*>((__Local__197), USceneComponent::__PPO__AttachParent() )));
	__Local__198 = __Local__194;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__197), true, 0));
	__Local__196 = __Local__197;
	auto& __Local__199 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__200 = CastChecked<UTextRenderComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__201 = (*(AccessPrivateProperty<USceneComponent*>((__Local__200), USceneComponent::__PPO__AttachParent() )));
	__Local__201 = __Local__194;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__200), false, 0));
	__Local__199 = __Local__200;
	auto& __Local__202 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__203 = CastChecked<UTextRenderComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__204 = (*(AccessPrivateProperty<USceneComponent*>((__Local__203), USceneComponent::__PPO__AttachParent() )));
	__Local__204 = __Local__194;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__203), false, 0));
	__Local__202 = __Local__203;
	auto& __Local__205 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__171), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__206 = CastChecked<UAudioComponent>(__Local__171->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__207 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__206), USceneComponent::__PPO__AttachParent() )));
	__Local__207 = __Local__180;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__206), false, 0));
	__Local__205 = __Local__206;
	auto& __Local__208 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__171), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__208 = __Local__180;
	auto& __Local__209 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__171), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__209 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__210 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__171), AActor::__PPO__RootComponent() )));
	__Local__210 = __Local__180;
	auto __Local__211 = NewObject<AUxtPressableToggleButtonActor>(InDynamicClass, AUxtPressableToggleButtonActor::StaticClass(), TEXT("Button_ToggleFlatHand1_GEN_VARIABLE_UxtPressableToggleButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__211);
	auto& __Local__212 = (*(AccessPrivateProperty<bool >((__Local__211), AUxtPressableToggleButtonActor::__PPO__bIsInitiallyChecked() )));
	__Local__212 = true;
	auto& __Local__213 = (*(AccessPrivateProperty<UUxtToggleStateComponent*>((__Local__211), AUxtPressableToggleButtonActor::__PPO__ToggleStateComponent() )));
	auto __Local__214 = CastChecked<UUxtToggleStateComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("UxtToggleState")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__214), false, 0));
	__Local__213 = __Local__214;
	auto& __Local__215 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__211), AUxtPressableToggleButtonActor::__PPO__TogglePlateComponent() )));
	auto __Local__216 = CastChecked<UUxtBackPlateComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("UxtToggleBackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__217 = (*(AccessPrivateProperty<USceneComponent*>((__Local__216), USceneComponent::__PPO__AttachParent() )));
	auto __Local__218 = CastChecked<USceneComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__219 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__218), USceneComponent::__PPO__AttachParent() )));
	auto __Local__220 = CastChecked<UUxtPressableButtonComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__220), false, 0));
	__Local__219 = __Local__220;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__218), false, 0));
	__Local__217 = __Local__218;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__216), true, 0));
	__Local__215 = __Local__216;
	auto& __Local__221 = (*(AccessPrivateProperty<FVector >((__Local__211), AUxtPressableButtonActor::__PPO__MillimeterSize() )));
	__Local__221 = FVector(16.000000, 128.000000, 32.000000);
	auto& __Local__222 = (*(AccessPrivateProperty<bool >((__Local__211), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__222 = false;
	auto& __Local__223 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__211), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__223.Icon = FString(TEXT("EC94"));
	__Local__223.TextBrush.RelativeLocation = FVector(0.000000, 2.500000, 0.000000);
	__Local__223.TextBrush.Size = 1.400000f;
	auto& __Local__224 = (*(AccessPrivateProperty<FText >((__Local__211), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__224 = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C6A8459A43542A70150887ACF94D5893]\", \"7C18125348ABE5B8958989811FFC4DC2\", \"Require Gaze\")")	);
	auto& __Local__225 = (*(AccessPrivateProperty<FUxtTextBrush >((__Local__211), AUxtPressableButtonActor::__PPO__LabelTextBrush() )));
	__Local__225.RelativeLocation = FVector(0.000000, -1.000000, 0.000000);
	__Local__225.Size = 0.700000f;
	auto& __Local__226 = (*(AccessPrivateProperty<USceneComponent*>((__Local__211), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	__Local__226 = __Local__218;
	auto& __Local__227 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__211), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__228 = CastChecked<UUxtBackPlateComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__229 = (*(AccessPrivateProperty<USceneComponent*>((__Local__228), USceneComponent::__PPO__AttachParent() )));
	__Local__229 = __Local__218;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__228), true, 0));
	__Local__227 = __Local__228;
	auto& __Local__230 = (*(AccessPrivateProperty<USceneComponent*>((__Local__211), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__231 = CastChecked<USceneComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__232 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__231), USceneComponent::__PPO__AttachParent() )));
	__Local__232 = __Local__220;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__231), false, 0));
	__Local__230 = __Local__231;
	auto& __Local__233 = (*(AccessPrivateProperty<USceneComponent*>((__Local__211), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__234 = CastChecked<USceneComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__235 = (*(AccessPrivateProperty<USceneComponent*>((__Local__234), USceneComponent::__PPO__AttachParent() )));
	__Local__235 = __Local__231;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__234), false, 0));
	__Local__233 = __Local__234;
	auto& __Local__236 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__211), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__237 = CastChecked<UStaticMeshComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__238 = (*(AccessPrivateProperty<USceneComponent*>((__Local__237), USceneComponent::__PPO__AttachParent() )));
	__Local__238 = __Local__234;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__237), true, 0));
	__Local__236 = __Local__237;
	auto& __Local__239 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__211), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__240 = CastChecked<UTextRenderComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__241 = (*(AccessPrivateProperty<USceneComponent*>((__Local__240), USceneComponent::__PPO__AttachParent() )));
	__Local__241 = __Local__234;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__240), false, 0));
	__Local__239 = __Local__240;
	auto& __Local__242 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__211), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__243 = CastChecked<UTextRenderComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__244 = (*(AccessPrivateProperty<USceneComponent*>((__Local__243), USceneComponent::__PPO__AttachParent() )));
	__Local__244 = __Local__234;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__243), false, 0));
	__Local__242 = __Local__243;
	auto& __Local__245 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__211), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__246 = CastChecked<UAudioComponent>(__Local__211->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__247 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__246), USceneComponent::__PPO__AttachParent() )));
	__Local__247 = __Local__220;
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__246), false, 0));
	__Local__245 = __Local__246;
	auto& __Local__248 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__211), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__248 = __Local__220;
	auto& __Local__249 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__211), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__249 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__250 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__211), AActor::__PPO__RootComponent() )));
	__Local__250 = __Local__220;
	auto __Local__251 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__251);
	auto __Local__252 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__252);
	(((FBoolProperty*)__Local__32)->SetPropertyValue_InContainer((__Local__251), false, 0));
	__Local__252->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__252->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__252->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__253 = __Local__252->ComponentDelegateBindings[0];
	__Local__253.ComponentPropertyName = FName(TEXT("UxtToggleGroup"));
	__Local__253.DelegatePropertyName = FName(TEXT("OnGroupSelectionChanged"));
	__Local__253.FunctionNameToBind = FName(TEXT("BndEvt__UxtToggleGroup_K2Node_ComponentBoundEvent_0_UxtToggleGroupSelectionChangedDelegate__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_SelectorMenu_C__pf1172471173::bpf__ExecuteUbergraph_BP_SelectorMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	UUxtPalmUpConstraintComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue_1__pf{};
	UUxtPalmUpConstraintComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue_7__pf{};
	UUxtPalmUpConstraintComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue_8__pf{};
	UUxtPalmUpConstraintComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue_9__pf{};
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(b0l__K2Node_CustomEvent_ToggleState__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue_1__pf = b0l__K2Node_CustomEvent_ToggleState__pf->UUxtToggleStateComponent::IsChecked();
	}
	if(::IsValid(bpv__SmallMenu__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_7__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__SmallMenu__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_7__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_7__pf->bRequireGaze = bpfv__CallFunc_IsChecked_ReturnValue_1__pf;
	}
	if(::IsValid(bpv__SmallMenu__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_7__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__SmallMenu__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	if(::IsValid(bpv__MediumMenu__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_8__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__MediumMenu__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	bool  __Local__254 = false;
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_8__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_8__pf->bRequireGaze = ((::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_7__pf)) ? (bpfv__CallFunc_GetComponentByClass_ReturnValue_7__pf->bRequireGaze) : (__Local__254));
	}
	if(::IsValid(bpv__MediumMenu__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_8__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__MediumMenu__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	if(::IsValid(bpv__LargeMenu_LockOnGrab__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_9__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__LargeMenu_LockOnGrab__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	bool  __Local__255 = false;
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_9__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_9__pf->bRequireGaze = ((::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_8__pf)) ? (bpfv__CallFunc_GetComponentByClass_ReturnValue_8__pf->bRequireGaze) : (__Local__255));
	}
	if(::IsValid(bpv__LargeMenu_LockOnDrop__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__LargeMenu_LockOnDrop__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	if(::IsValid(bpv__LargeMenu_LockOnGrab__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_9__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__LargeMenu_LockOnGrab__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	bool  __Local__256 = false;
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue__pf->bRequireGaze = ((::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_9__pf)) ? (bpfv__CallFunc_GetComponentByClass_ReturnValue_9__pf->bRequireGaze) : (__Local__256));
	}
	return; //KCST_EndOfThread
}
void ABP_SelectorMenu_C__pf1172471173::bpf__ExecuteUbergraph_BP_SelectorMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	UUxtPalmUpConstraintComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue_3__pf{};
	UUxtPalmUpConstraintComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue_4__pf{};
	UUxtPalmUpConstraintComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue_5__pf{};
	UUxtPalmUpConstraintComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue_6__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(b0l__K2Node_CustomEvent_ToggleState_1__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue__pf = b0l__K2Node_CustomEvent_ToggleState_1__pf->UUxtToggleStateComponent::IsChecked();
	}
	if(::IsValid(bpv__SmallMenu__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_3__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__SmallMenu__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_3__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_3__pf->bRequireFlatHand = bpfv__CallFunc_IsChecked_ReturnValue__pf;
	}
	if(::IsValid(bpv__SmallMenu__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_3__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__SmallMenu__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	if(::IsValid(bpv__MediumMenu__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_4__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__MediumMenu__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	bool  __Local__257 = false;
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_4__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_4__pf->bRequireFlatHand = ((::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_3__pf)) ? (bpfv__CallFunc_GetComponentByClass_ReturnValue_3__pf->bRequireFlatHand) : (__Local__257));
	}
	if(::IsValid(bpv__MediumMenu__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_4__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__MediumMenu__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	if(::IsValid(bpv__LargeMenu_LockOnGrab__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_5__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__LargeMenu_LockOnGrab__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	bool  __Local__258 = false;
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_5__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_5__pf->bRequireFlatHand = ((::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_4__pf)) ? (bpfv__CallFunc_GetComponentByClass_ReturnValue_4__pf->bRequireFlatHand) : (__Local__258));
	}
	if(::IsValid(bpv__LargeMenu_LockOnGrab__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_5__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__LargeMenu_LockOnGrab__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	if(::IsValid(bpv__LargeMenu_LockOnDrop__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_6__pf = CastChecked<UUxtPalmUpConstraintComponent>(bpv__LargeMenu_LockOnDrop__pf->AActor::GetComponentByClass(UUxtPalmUpConstraintComponent::StaticClass()), ECastCheckedType::NullAllowed);
	}
	bool  __Local__259 = false;
	if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_6__pf))
	{
		bpfv__CallFunc_GetComponentByClass_ReturnValue_6__pf->bRequireFlatHand = ((::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_5__pf)) ? (bpfv__CallFunc_GetComponentByClass_ReturnValue_5__pf->bRequireFlatHand) : (__Local__259));
	}
	return; //KCST_EndOfThread
}
void ABP_SelectorMenu_C__pf1172471173::bpf__ExecuteUbergraph_BP_SelectorMenu__pf_2(int32 bpp__EntryPoint__pf)
{
	UUxtToggleStateComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf{};
	UUxtToggleStateComponent* bpfv__CallFunc_GetComponentByClass_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 19:
			{
				__CurrentState = 20;
				break;
			}
		case 20:
			{
				__StateStack.Push(22);
			}
		case 21:
			{
				if(::IsValid(bpv__Button_ToggleFlatHand__pf) && ::IsValid((*(AccessPrivateProperty<AActor* >((bpv__Button_ToggleFlatHand__pf), UChildActorComponent::__PPO__ChildActor() )))))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf = CastChecked<UUxtToggleStateComponent>((*(AccessPrivateProperty<AActor* >((bpv__Button_ToggleFlatHand__pf), UChildActorComponent::__PPO__ChildActor() )))->AActor::GetComponentByClass(UUxtToggleStateComponent::StaticClass()), ECastCheckedType::NullAllowed);
				}
				b0l__K2Node_CreateDelegate_OutputDelegate_1__pf.BindUFunction(this,FName(TEXT("On Toggle Require Flat Hand")));
				if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue_1__pf->OnToggled.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("On Toggle Require Gaze")));
				if(::IsValid(bpv__Button_ToggleGaze__pf) && ::IsValid((*(AccessPrivateProperty<AActor* >((bpv__Button_ToggleGaze__pf), UChildActorComponent::__PPO__ChildActor() )))))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue_2__pf = CastChecked<UUxtToggleStateComponent>((*(AccessPrivateProperty<AActor* >((bpv__Button_ToggleGaze__pf), UChildActorComponent::__PPO__ChildActor() )))->AActor::GetComponentByClass(UUxtToggleStateComponent::StaticClass()), ECastCheckedType::NullAllowed);
				}
				if(::IsValid(bpfv__CallFunc_GetComponentByClass_ReturnValue_2__pf))
				{
					bpfv__CallFunc_GetComponentByClass_ReturnValue_2__pf->OnToggled.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
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
void ABP_SelectorMenu_C__pf1172471173::bpf__ExecuteUbergraph_BP_SelectorMenu__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				if(::IsValid(b0l__K2Node_ComponentBoundEvent_ToggleGroup__pf))
				{
					bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf = b0l__K2Node_ComponentBoundEvent_ToggleGroup__pf->UUxtToggleGroupComponent::GetSelectedIndex();
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 11;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_GetSelectedIndex_ReturnValue__pf, 3);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpv__SmallMenu__pf))
				{
					bpv__SmallMenu__pf->bpf__SetActive__pf(true);
				}
			}
		case 4:
			{
				if(::IsValid(bpv__MediumMenu__pf))
				{
					bpv__MediumMenu__pf->bpf__SetActive__pf(false);
				}
			}
		case 5:
			{
				if(::IsValid(bpv__LargeMenu_LockOnGrab__pf))
				{
					bpv__LargeMenu_LockOnGrab__pf->bpf__SetActive__pf(false);
				}
			}
		case 6:
			{
				if(::IsValid(bpv__LargeMenu_LockOnDrop__pf))
				{
					bpv__LargeMenu_LockOnDrop__pf->bpf__SetActive__pf(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(::IsValid(bpv__SmallMenu__pf))
				{
					bpv__SmallMenu__pf->bpf__SetActive__pf(false);
				}
			}
		case 8:
			{
				if(::IsValid(bpv__MediumMenu__pf))
				{
					bpv__MediumMenu__pf->bpf__SetActive__pf(true);
				}
			}
		case 9:
			{
				if(::IsValid(bpv__LargeMenu_LockOnGrab__pf))
				{
					bpv__LargeMenu_LockOnGrab__pf->bpf__SetActive__pf(false);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__LargeMenu_LockOnDrop__pf))
				{
					bpv__LargeMenu_LockOnDrop__pf->bpf__SetActive__pf(false);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(::IsValid(bpv__SmallMenu__pf))
				{
					bpv__SmallMenu__pf->bpf__SetActive__pf(false);
				}
			}
		case 12:
			{
				if(::IsValid(bpv__MediumMenu__pf))
				{
					bpv__MediumMenu__pf->bpf__SetActive__pf(false);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__LargeMenu_LockOnGrab__pf))
				{
					bpv__LargeMenu_LockOnGrab__pf->bpf__SetActive__pf(true);
				}
			}
		case 14:
			{
				if(::IsValid(bpv__LargeMenu_LockOnDrop__pf))
				{
					bpv__LargeMenu_LockOnDrop__pf->bpf__SetActive__pf(false);
				}
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				if(::IsValid(bpv__SmallMenu__pf))
				{
					bpv__SmallMenu__pf->bpf__SetActive__pf(false);
				}
			}
		case 16:
			{
				if(::IsValid(bpv__MediumMenu__pf))
				{
					bpv__MediumMenu__pf->bpf__SetActive__pf(false);
				}
			}
		case 17:
			{
				if(::IsValid(bpv__LargeMenu_LockOnGrab__pf))
				{
					bpv__LargeMenu_LockOnGrab__pf->bpf__SetActive__pf(false);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__LargeMenu_LockOnDrop__pf))
				{
					bpv__LargeMenu_LockOnDrop__pf->bpf__SetActive__pf(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_SelectorMenu_C__pf1172471173::bpf__OnxTogglexRequirexGaze__pfTTT(UUxtToggleStateComponent* bpp__ToggleState__pf)
{
	b0l__K2Node_CustomEvent_ToggleState__pf = bpp__ToggleState__pf;
	bpf__ExecuteUbergraph_BP_SelectorMenu__pf_0(28);
}
void ABP_SelectorMenu_C__pf1172471173::bpf__OnxTogglexRequirexFlatxHand__pfTTTT(UUxtToggleStateComponent* bpp__ToggleState__pf)
{
	b0l__K2Node_CustomEvent_ToggleState_1__pf = bpp__ToggleState__pf;
	bpf__ExecuteUbergraph_BP_SelectorMenu__pf_1(23);
}
void ABP_SelectorMenu_C__pf1172471173::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_SelectorMenu__pf_2(19);
}
void ABP_SelectorMenu_C__pf1172471173::bpf__BndEvt__UxtToggleGroup_K2Node_ComponentBoundEvent_0_UxtToggleGroupSelectionChangedDelegate__DelegateSignature__pf(UUxtToggleGroupComponent* bpp__ToggleGroup__pf)
{
	b0l__K2Node_ComponentBoundEvent_ToggleGroup__pf = bpp__ToggleGroup__pf;
	bpf__ExecuteUbergraph_BP_SelectorMenu__pf_3(1);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SelectorMenu_C__pf1172471173::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Bold_42.Font_SegoeUI_Bold_42 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SelectorMenu_C__pf1172471173::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{164, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UXTools.UxtTextRenderComponent 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /UXTools/Fonts/M_DefaultFont.M_DefaultFont 
		{91, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_HoloLens2BackPlate.MI_HoloLens2BackPlate 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /UXTools/Models/SM_BackPlateRoundedThick_4.SM_BackPlateRoundedThick_4 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /UXTools/Fonts/Font_SegoeHoloMDL_Regular_42.Font_SegoeHoloMDL_Regular_42 
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
		{92, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UXTools.UxtPressableToggleButtonActor 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Semibold_42.Font_SegoeUI_Semibold_42 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBackPlateComponent 
		{179, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtToggleGroupComponent 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPalmUpConstraintComponent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtToggledDelegate__DelegateSignature 
		{79, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtToggleStateComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtUIElementComponent 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonActor 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableSwitchButtonActor 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeMDL2_Regular_42.Font_SegoeMDL2_Regular_42 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Slider/Meshes/SM_Slider_Dot_geo.SM_Slider_Dot_geo 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /UXTools/Materials/M_SimpleLit_Color.M_SimpleLit_Color 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Slider/Meshes/SM_Slider_Track_Simple.SM_Slider_Track_Simple 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /UXTools/Slider/Audio/A_Slider_Grab_Cue.A_Slider_Grab_Cue 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /UXTools/Slider/Audio/A_Slider_Release_Cue.A_Slider_Release_Cue 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /UXTools/Slider/Audio/A_Slider_Pass_Notch_Cue.A_Slider_Pass_Notch_Cue 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /UXTools/Slider/Anim/Curve_SliderButtonScale_Float.Curve_SliderButtonScale_Float 
		{75, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Plane.Plane 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXToolsExamples/HandMenu/Blueprints/MI_GrabbableDots.MI_GrabbableDots 
		{115, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TextRenderComponent 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGenericManipulatorComponent 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtFaceUserConstraint 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtButtonReleasedDelegate__DelegateSignature 
		{84, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonComponent 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPointerComponent 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtGrabTargetComponent 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UXTools.UxtGrabPointerData 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorEnd_Mono_01.S_ManipulatorEnd_Mono_01 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBasePressableButtonActor 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Manipulator/S_ManipulatorStart_Mono_01.S_ManipulatorStart_Mono_01 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtHandConstraintComponent 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPinchSliderActor 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtButtonPressedDelegate__DelegateSignature 
		{180, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/HandMenu/Blueprints/BP_SelectorButton.BP_SelectorButton_C 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/HandMenu/Blueprints/BP_SmallHandMenu.BP_SmallHandMenu_C 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/HandMenu/Blueprints/BP_MediumHandMenu.BP_MediumHandMenu_C 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/HandMenu/Blueprints/BP_LargeHandMenu_LockOnGrab.BP_LargeHandMenu_LockOnGrab_C 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /UXToolsExamples/HandMenu/Blueprints/BP_LargeHandMenu_LockOnDrop.BP_LargeHandMenu_LockOnDrop_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_SelectorMenu_C__pf1172471173
{
	FRegisterHelper__ABP_SelectorMenu_C__pf1172471173()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/HandMenu/Blueprints/BP_SelectorMenu"), &ABP_SelectorMenu_C__pf1172471173::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_SelectorMenu_C__pf1172471173 Instance;
};
FRegisterHelper__ABP_SelectorMenu_C__pf1172471173 FRegisterHelper__ABP_SelectorMenu_C__pf1172471173::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
