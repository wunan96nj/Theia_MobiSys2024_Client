#include "NativizedAssets.h"
#include "BP_ScrollingObjectCollection_SortByButtonLabel__pf3034317442.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBaseObjectCollection.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarTarget.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtPokeHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtNearPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtPointerComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Interactions/UxtFarHandler.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Input/UxtFarPointerComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtBasePressableButtonActor.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtPressableButtonComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtUIElementComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtCollectionObject.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtTextBrush.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtIconBrush.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtButtonBrush.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__UxtScrollingObjectCollection__pf = CreateDefaultSubobject<UUxtScrollingObjectCollection>(TEXT("UxtScrollingObjectCollection"));
	bpv__UxtBackPlate__pf = CreateDefaultSubobject<UUxtBackPlateComponent>(TEXT("UxtBackPlate"));
	RootComponent = bpv__UxtScrollingObjectCollection__pf;
	bpv__UxtScrollingObjectCollection__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__1{};
	const FProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtScrollingObjectCollection__pf), false, 0));
	bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtBackPlate__pf->AttachToComponent(bpv__UxtScrollingObjectCollection__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__UxtBackPlate__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__UxtBackPlate__pf->OverrideMaterials.Reserve(1);
	bpv__UxtBackPlate__pf->OverrideMaterials.Add(nullptr);
	(((FBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__UxtBackPlate__pf), true, 0));
	bpv__Icons__pf = TArray<UTextRenderComponent*> ();
	bpv__Labels__pf = TArray<UTextRenderComponent*> ();
	bpv__Frontpanels__pf = TArray<UStaticMeshComponent*> ();
	bpv__IconMIDs__pf = TArray<UMaterialInstanceDynamic*> ();
	bpv__LabelMIDs__pf = TArray<UMaterialInstanceDynamic*> ();
	bpv__FrontpanelMIDs__pf = TArray<UMaterialInstanceDynamic*> ();
	bpv__MenuBounds__pf = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	PrimaryActorTick.bCanEverTick = true;
	auto& __Local__2 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__2 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__UxtScrollingObjectCollection__pf)
	{
		bpv__UxtScrollingObjectCollection__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtBackPlate__pf)
	{
		bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__3 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__3);
	auto __Local__4 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__4);
	static TWeakFieldPtr<FProperty> __Local__6{};
	const FProperty* __Local__5 = __Local__6.Get();
	if (nullptr == __Local__5)
	{
		__Local__5 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__5);
		__Local__6 = __Local__5;
	}
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((__Local__3), false, 0));
	__Local__4->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__4->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__4->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__7 = __Local__4->ComponentDelegateBindings[0];
	__Local__7.ComponentPropertyName = FName(TEXT("UxtScrollingObjectCollection"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnCollectionUpdated"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__ExecuteUbergraph_BP_ScrollingObjectCollection_SortByButtonLabel__pf_0(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	FVector  __Local__8 = FVector(0.000000,0.000000,0.000000);
	UKismetMathLibrary::BreakVector(((::IsValid(bpv__UxtBackPlate__pf)) ? ((*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeLocation() )))) : (__Local__8)), /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
	UKismetMathLibrary::BreakVector(b0l__K2Node_ComponentBoundEvent_Properties__pf.Center, /*out*/ b0l__CallFunc_BreakVector_X_1__pf, /*out*/ b0l__CallFunc_BreakVector_Y_1__pf, /*out*/ b0l__CallFunc_BreakVector_Z_1__pf);
	bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X__pf, b0l__CallFunc_BreakVector_Y_1__pf, b0l__CallFunc_BreakVector_Z_1__pf);
	if(::IsValid(bpv__UxtBackPlate__pf))
	{
		bpv__UxtBackPlate__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(1.600000, b0l__K2Node_ComponentBoundEvent_Properties__pf.Height, b0l__K2Node_ComponentBoundEvent_Properties__pf.Width);
	if(::IsValid(bpv__UxtBackPlate__pf))
	{
		bpv__UxtBackPlate__pf->USceneComponent::SetRelativeScale3D(bpfv__CallFunc_MakeVector_ReturnValue__pf);
	}
	return; // KCST_GotoReturn
}
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__ExecuteUbergraph_BP_ScrollingObjectCollection_SortByButtonLabel__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpf__UpdatexButtonxMask__pfTT();
	return; // KCST_GotoReturn
}
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__ExecuteUbergraph_BP_ScrollingObjectCollection_SortByButtonLabel__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpf__SetxButtonxMask__pfTT();
	return; // KCST_GotoReturn
}
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__BndEvt__UxtScrollingObjectCollection_K2Node_ComponentBoundEvent_1_UxtScrollingObjectCollectionUpdated__DelegateSignature__pf(FScrollingCollectionProperties const& bpp__Properties__pf__const)
{
	typedef FScrollingCollectionProperties  T__Local__9;
	T__Local__9& bpp__Properties__pf = *const_cast<T__Local__9 *>(&bpp__Properties__pf__const);
	b0l__K2Node_ComponentBoundEvent_Properties__pf = bpp__Properties__pf;
	bpf__ExecuteUbergraph_BP_ScrollingObjectCollection_SortByButtonLabel__pf_0(5);
}
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_ScrollingObjectCollection_SortByButtonLabel__pf_1(3);
}
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_ScrollingObjectCollection_SortByButtonLabel__pf_2(1);
}
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__UserConstructionScript__pf()
{
	FUxtSortScrollingObjectCollectionDelegate bpfv__K2Node_CreateDelegate_OutputDelegate__pf{};
	if(::IsValid(bpv__UxtScrollingObjectCollection__pf))
	{
		bpv__UxtScrollingObjectCollection__pf->UUxtScrollingObjectCollection::SetBackPlate(((UUxtBackPlateComponent*)nullptr));
	}
	bpfv__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("CompareActorPairByLabel")));
	if(::IsValid(bpv__UxtScrollingObjectCollection__pf))
	{
		bpv__UxtScrollingObjectCollection__pf->UUxtBaseObjectCollection::SetSortCallback(bpfv__K2Node_CreateDelegate_OutputDelegate__pf);
	}
}
bool  ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__CompareActorPairByLabel__pf(const AActor* bpp__LHS__pf__const, const AActor* bpp__RHS__pf__const)
{
	typedef AActor*  T__Local__10;
	T__Local__10& bpp__LHS__pf = *const_cast<T__Local__10 *>(&bpp__LHS__pf__const);
	typedef AActor*  T__Local__11;
	T__Local__11& bpp__RHS__pf = *const_cast<T__Local__11 *>(&bpp__RHS__pf__const);
	bool bpp__ReturnValue__pf{};
	AUxtPressableButtonActor* bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AUxtPressableButtonActor* bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess_1__pf{};
	FText bpfv__CallFunc_GetLabel_ReturnValue__pf{};
	FText bpfv__CallFunc_GetLabel_ReturnValue_1__pf{};
	bool bpfv__CallFunc_CompareText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf = Cast<AUxtPressableButtonActor>(bpp__LHS__pf);
				bpfv__K2Node_DynamicCast_bSuccess_1__pf = (bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf = Cast<AUxtPressableButtonActor>(bpp__RHS__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf))
				{
					bpfv__CallFunc_GetLabel_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf->AUxtPressableButtonActor::GetLabel();
				}
				if(::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf))
				{
					bpfv__CallFunc_GetLabel_ReturnValue_1__pf = bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor_1__pf->AUxtPressableButtonActor::GetLabel();
				}
				bpfv__CallFunc_CompareText_ReturnValue__pf = UUxtBaseObjectCollection::CompareText(bpfv__CallFunc_GetLabel_ReturnValue__pf, bpfv__CallFunc_GetLabel_ReturnValue_1__pf);
				bpp__ReturnValue__pf = bpfv__CallFunc_CompareText_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpp__ReturnValue__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__SetxButtonxMask__pfTT()
{
	UStaticMeshComponent* bpfv__FrontPlate__pf{};
	UMaterialInstanceDynamic* bpfv__FrontPlateMID__pf{};
	UTextRenderComponent* bpfv__Icon__pf{};
	UTextRenderComponent* bpfv__Label__pf{};
	UMaterialInstanceDynamic* bpfv__IconMID__pf{};
	UMaterialInstanceDynamic* bpfv__LabelMID__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FTransform bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakVector_X_1__pf{};
	float bpfv__CallFunc_BreakVector_Y_1__pf{};
	float bpfv__CallFunc_BreakVector_Z_1__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Abs_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	FLinearColor bpfv__CallFunc_MakeColor_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue_2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf{};
	FLinearColor bpfv__CallFunc_MakeColor_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue_3__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_4__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue_5__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	EUxtScrollDirection bpfv__CallFunc_GetScrollDirection_ReturnValue__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_InvertTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_ComposeTransforms_ReturnValue__pf{};
	FTransform bpfv__CallFunc_ComposeTransforms_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location_2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_2__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_ComposeTransforms_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location_3__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_3__pf(EForceInit::ForceInit);
	TArray<AActor*> bpfv__CallFunc_GetAttachedActors_OutActors__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_2__pf(EForceInit::ForceInit);
	AUxtPressableButtonActor* bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				(bpfv__CallFunc_GetAttachedActors_OutActors__pf).Reset();
				AActor::GetAttachedActors(/*out*/ bpfv__CallFunc_GetAttachedActors_OutActors__pf, true);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAttachedActors_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(10);
			}
		case 6:
			{
				(bpfv__CallFunc_GetAttachedActors_OutActors__pf).Reset();
				AActor::GetAttachedActors(/*out*/ bpfv__CallFunc_GetAttachedActors_OutActors__pf, true);
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAttachedActors_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf = Cast<AUxtPressableButtonActor>(bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				__StateStack.Push(15);
				__StateStack.Push(13);
				__StateStack.Push(11);
			}
		case 8:
			{
				UTextRenderComponent*  __Local__12 = ((UTextRenderComponent*)nullptr);
				bpfv__Icon__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UTextRenderComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf), AUxtPressableButtonActor::__PPO__IconComponent() )))) : (__Local__12));
			}
		case 9:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_5__pf = FCustomThunkTemplates::Array_Add(bpv__Icons__pf, bpfv__Icon__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 11:
			{
				UTextRenderComponent*  __Local__13 = ((UTextRenderComponent*)nullptr);
				bpfv__Label__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UTextRenderComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf), AUxtPressableButtonActor::__PPO__LabelComponent() )))) : (__Local__13));
			}
		case 12:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_4__pf = FCustomThunkTemplates::Array_Add(bpv__Labels__pf, bpfv__Label__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				UStaticMeshComponent*  __Local__14 = ((UStaticMeshComponent*)nullptr);
				bpfv__FrontPlate__pf = ((::IsValid(bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf)) ? ((*(AccessPrivateProperty<UStaticMeshComponent* >((bpfv__K2Node_DynamicCast_AsUxt_Pressable_Button_Actor__pf), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )))) : (__Local__14));
			}
		case 14:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_3__pf = FCustomThunkTemplates::Array_Add(bpv__Frontpanels__pf, bpfv__FrontPlate__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				__StateStack.Push(35);
				__StateStack.Push(33);
				__StateStack.Push(20);
				__StateStack.Push(24);
				__StateStack.Push(25);
				__StateStack.Push(29);
			}
		case 16:
			{
				if(::IsValid(bpfv__Icon__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf = bpfv__Icon__pf->CreateDynamicMaterialInstance(0, ((UMaterialInterface*)nullptr), FName());
				}
			}
		case 17:
			{
				bpfv__IconMID__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_1__pf;
			}
		case 18:
			{
				if(::IsValid(bpfv__Icon__pf))
				{
					bpfv__Icon__pf->SetMaterial(0, bpfv__IconMID__pf);
				}
			}
		case 19:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_2__pf = FCustomThunkTemplates::Array_Add(bpv__IconMIDs__pf, bpfv__IconMID__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				if(::IsValid(bpfv__Label__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf = bpfv__Label__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				bpfv__CallFunc_InvertTransform_ReturnValue__pf = UKismetMathLibrary::InvertTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf);
				bpfv__CallFunc_ComposeTransforms_ReturnValue_1__pf = UKismetMathLibrary::ComposeTransforms(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf, bpfv__CallFunc_InvertTransform_ReturnValue__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_ComposeTransforms_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_2__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_BreakTransform_Location_2__pf);
				if(::IsValid(bpfv__LabelMID__pf))
				{
					bpfv__LabelMID__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MeshPosition")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf);
				}
			}
		case 21:
			{
				if(::IsValid(bpfv__Label__pf))
				{
					bpfv__Label__pf->UTextRenderComponent::SetTextMaterial(bpfv__LabelMID__pf);
				}
			}
		case 22:
			{
				if(::IsValid(bpfv__Label__pf))
				{
					bpfv__Label__pf->UTextRenderComponent::SetFont(CastChecked<UFont>(CastChecked<UDynamicClass>(ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
				}
			}
		case 23:
			{
				if(::IsValid(bpfv__Label__pf))
				{
					bpfv__Label__pf->UTextRenderComponent::SetWorldSize(0.450000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				if(::IsValid(bpfv__Icon__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf = bpfv__Icon__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				bpfv__CallFunc_InvertTransform_ReturnValue__pf = UKismetMathLibrary::InvertTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf);
				bpfv__CallFunc_ComposeTransforms_ReturnValue_2__pf = UKismetMathLibrary::ComposeTransforms(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf, bpfv__CallFunc_InvertTransform_ReturnValue__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_ComposeTransforms_ReturnValue_2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_3__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_BreakTransform_Location_3__pf, FVector(0.000000,0.000000,0.250000));
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf);
				if(::IsValid(bpfv__IconMID__pf))
				{
					bpfv__IconMID__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MeshPosition")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				if(::IsValid(bpfv__FrontPlate__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpfv__FrontPlate__pf->CreateDynamicMaterialInstance(0, ((UMaterialInterface*)nullptr), FName());
				}
			}
		case 26:
			{
				bpfv__FrontPlateMID__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
			}
		case 27:
			{
				if(::IsValid(bpfv__FrontPlate__pf))
				{
					bpfv__FrontPlate__pf->SetMaterial(0, bpfv__FrontPlateMID__pf);
				}
			}
		case 28:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__FrontpanelMIDs__pf, bpfv__FrontPlateMID__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				if(::IsValid(bpfv__Label__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf = bpfv__Label__pf->CreateDynamicMaterialInstance(0, ((UMaterialInterface*)nullptr), FName());
				}
			}
		case 30:
			{
				bpfv__LabelMID__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue_2__pf;
			}
		case 31:
			{
				if(::IsValid(bpfv__Label__pf))
				{
					bpfv__Label__pf->SetMaterial(0, bpfv__LabelMID__pf);
				}
			}
		case 32:
			{
				bpfv__CallFunc_Array_Add_ReturnValue_1__pf = FCustomThunkTemplates::Array_Add(bpv__LabelMIDs__pf, bpfv__LabelMID__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				if(::IsValid(bpfv__FrontPlate__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpfv__FrontPlate__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				bpfv__CallFunc_InvertTransform_ReturnValue__pf = UKismetMathLibrary::InvertTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf);
				bpfv__CallFunc_ComposeTransforms_ReturnValue__pf = UKismetMathLibrary::ComposeTransforms(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, bpfv__CallFunc_InvertTransform_ReturnValue__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_ComposeTransforms_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_1__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_BreakTransform_Location_1__pf);
				if(::IsValid(bpfv__FrontPlateMID__pf))
				{
					bpfv__FrontPlateMID__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MeshPosition")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
				}
			}
		case 34:
			{
				if(::IsValid(bpfv__FrontPlateMID__pf))
				{
					bpfv__FrontPlateMID__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("MeshScale")), 3.200000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				if(::IsValid(bpv__UxtScrollingObjectCollection__pf))
				{
					bpfv__CallFunc_GetScrollDirection_ReturnValue__pf = bpv__UxtScrollingObjectCollection__pf->UUxtScrollingObjectCollection::GetScrollDirection();
				}
			}
		case 36:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetScrollDirection_ReturnValue__pf), static_cast<uint8>(EUxtScrollDirection::UpAndDown));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 40;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetScrollDirection_ReturnValue__pf), static_cast<uint8>(EUxtScrollDirection::LeftAndRight));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 37;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				if(::IsValid(bpv__UxtBackPlate__pf))
				{
					bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf = bpv__UxtBackPlate__pf->USceneComponent::GetRelativeTransform();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Divide_VectorFloat(bpfv__CallFunc_BreakTransform_Scale__pf, 2.000000);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z_1__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_Abs_ReturnValue_1__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Y_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Y_1__pf, bpfv__CallFunc_BreakVector_Y__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue_1__pf, bpfv__CallFunc_BreakVector_Y__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf, 0.500000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf, -1.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 0.250000);
				bpfv__CallFunc_MakeColor_ReturnValue_1__pf = UKismetMathLibrary::MakeColor(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf);
				bpv__MenuBounds__pf = bpfv__CallFunc_MakeColor_ReturnValue_1__pf;
			}
		case 38:
			{
				if(::IsValid(bpfv__FrontPlateMID__pf))
				{
					bpfv__FrontPlateMID__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("InvertP")), -1.000000);
				}
			}
		case 39:
			{
				if(::IsValid(bpfv__IconMID__pf))
				{
					bpfv__IconMID__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MenuBounds")), bpv__MenuBounds__pf);
				}
				if(::IsValid(bpfv__LabelMID__pf))
				{
					bpfv__LabelMID__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MenuBounds")), bpv__MenuBounds__pf);
				}
				if(::IsValid(bpfv__FrontPlateMID__pf))
				{
					bpfv__FrontPlateMID__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MenuBounds")), bpv__MenuBounds__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				if(::IsValid(bpv__UxtBackPlate__pf))
				{
					bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf = bpv__UxtBackPlate__pf->USceneComponent::GetRelativeTransform();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetRelativeTransform_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Divide_VectorFloat(bpfv__CallFunc_BreakTransform_Scale__pf, 2.000000);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Y_1__pf, /*out*/ bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z_1__pf, bpfv__CallFunc_BreakVector_X__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 0.500000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.250000);
				bpfv__CallFunc_Abs_ReturnValue_1__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Y_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Y_1__pf, bpfv__CallFunc_BreakVector_Y__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue_1__pf, bpfv__CallFunc_BreakVector_Y__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf, -1.000000);
				bpfv__CallFunc_MakeColor_ReturnValue__pf = UKismetMathLibrary::MakeColor(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf);
				bpv__MenuBounds__pf = bpfv__CallFunc_MakeColor_ReturnValue__pf;
				__CurrentState = 39;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::bpf__UpdatexButtonxMask__pfTT()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_Array_Get_Item__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_Array_Get_Item_1__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_Array_Get_Item_2__pf{};
	UStaticMeshComponent* bpfv__CallFunc_Array_Get_Item_3__pf{};
	UTextRenderComponent* bpfv__CallFunc_Array_Get_Item_4__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	UTextRenderComponent* bpfv__CallFunc_Array_Get_Item_5__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FTransform bpfv__CallFunc_InvertTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_ComposeTransforms_ReturnValue__pf{};
	FTransform bpfv__CallFunc_ComposeTransforms_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location_1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_1__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_ComposeTransforms_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location_2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_2__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Icons__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(8);
			}
		case 6:
			{
				__StateStack.Push(10);
				__StateStack.Push(9);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__IconMIDs__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_2__pf);
				FCustomThunkTemplates::Array_Get(bpv__Icons__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_5__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_5__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf = bpfv__CallFunc_Array_Get_Item_5__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				bpfv__CallFunc_InvertTransform_ReturnValue__pf = UKismetMathLibrary::InvertTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf);
				bpfv__CallFunc_ComposeTransforms_ReturnValue_2__pf = UKismetMathLibrary::ComposeTransforms(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf, bpfv__CallFunc_InvertTransform_ReturnValue__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_ComposeTransforms_ReturnValue_2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_2__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_BreakTransform_Location_2__pf, FVector(0.000000,0.000000,0.250000));
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_2__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_2__pf))
				{
					bpfv__CallFunc_Array_Get_Item_2__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MeshPosition")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__LabelMIDs__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_1__pf);
				FCustomThunkTemplates::Array_Get(bpv__Labels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_4__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_4__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf = bpfv__CallFunc_Array_Get_Item_4__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				bpfv__CallFunc_InvertTransform_ReturnValue__pf = UKismetMathLibrary::InvertTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf);
				bpfv__CallFunc_ComposeTransforms_ReturnValue_1__pf = UKismetMathLibrary::ComposeTransforms(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf, bpfv__CallFunc_InvertTransform_ReturnValue__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_ComposeTransforms_ReturnValue_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation_1__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale_1__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_BreakTransform_Location_1__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_1__pf))
				{
					bpfv__CallFunc_Array_Get_Item_1__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MeshPosition")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue_1__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__FrontpanelMIDs__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				FCustomThunkTemplates::Array_Get(bpv__Frontpanels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item_3__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item_3__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item_3__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				bpfv__CallFunc_InvertTransform_ReturnValue__pf = UKismetMathLibrary::InvertTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf);
				bpfv__CallFunc_ComposeTransforms_ReturnValue__pf = UKismetMathLibrary::ComposeTransforms(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, bpfv__CallFunc_InvertTransform_ReturnValue__pf);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_ComposeTransforms_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_BreakTransform_Location__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("MeshPosition")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
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
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeHoloMDL_Regular_42.Font_SegoeHoloMDL_Regular_42 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{151, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtScrollingObjectCollection 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBackPlateComponent 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /UXTools/Materials/MI_HoloLens2BackPlate.MI_HoloLens2BackPlate 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /UXTools/Models/SM_BackPlateRoundedThick_4.SM_BackPlateRoundedThick_4 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{152, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UXTools.ScrollingCollectionProperties 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TextRenderComponent 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UXTools.EUxtScrollDirection 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPressableButtonActor 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBaseObjectCollection 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UXTools.UxtSortScrollingObjectCollectionDelegate__DelegateSignature 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442
{
	FRegisterHelper__ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/ScrollingObjectCollection/Blueprints/BP_ScrollingObjectCollection_SortByButtonLabel"), &ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442 Instance;
};
FRegisterHelper__ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442 FRegisterHelper__ABP_ScrollingObjectCollection_SortByButtonLabel_C__pf3034317442::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
