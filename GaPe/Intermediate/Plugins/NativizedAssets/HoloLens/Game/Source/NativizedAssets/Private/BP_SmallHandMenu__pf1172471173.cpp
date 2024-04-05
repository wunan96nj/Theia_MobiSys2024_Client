#include "NativizedAssets.h"
#include "BP_SmallHandMenu__pf1172471173.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Controls/UxtUIElementComponent.h"
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
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Behaviors/UxtPalmUpConstraintComponent.h"
#include "../Plugins/Marketplace/UXTools/Source/UXTools/Public/Behaviors/UxtHandConstraintComponent.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_SmallHandMenu_C__pf1172471173::ABP_SmallHandMenu_C__pf1172471173(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__UxtUIElement__pf = CreateDefaultSubobject<UUxtUIElementComponent>(TEXT("UxtUIElement"));
	bpv__Button_1__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_1"));
	bpv__Button_2__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_2"));
	bpv__Button_3__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Button_3"));
	bpv__UxtBackPlate__pf = CreateDefaultSubobject<UUxtBackPlateComponent>(TEXT("UxtBackPlate"));
	RootComponent = bpv__UxtUIElement__pf;
	bpv__UxtPalmUpConstraint__pf = CreateDefaultSubobject<UUxtPalmUpConstraintComponent>(TEXT("UxtPalmUpConstraint"));
	bpv__UxtUIElement__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__0 = (*(AccessPrivateProperty<EUxtUIElementVisibility >((bpv__UxtUIElement__pf), UUxtUIElementComponent::__PPO__Visibility() )));
	__Local__0 = EUxtUIElementVisibility::Hide;
	static TWeakFieldPtr<FProperty> __Local__2{};
	const FProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__UxtUIElement__pf), false, 0));
	bpv__Button_1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_1__pf->AttachToComponent(bpv__UxtUIElement__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_1__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__3 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__4 = (*(AccessPrivateProperty<AActor* >((bpv__Button_1__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__4 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_SmallHandMenu_C__pf1172471173::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__Button_1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__5 = FVector(0.000000, 0.000000, 3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_1__pf), false, 0));
	bpv__Button_2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_2__pf->AttachToComponent(bpv__UxtUIElement__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__6 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_2__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__6 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__7 = (*(AccessPrivateProperty<AActor* >((bpv__Button_2__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__7 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_SmallHandMenu_C__pf1172471173::StaticClass())->MiscConvertedSubobjects[1]);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_2__pf), false, 0));
	bpv__Button_3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Button_3__pf->AttachToComponent(bpv__UxtUIElement__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__8 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Button_3__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__8 = AUxtPressableButtonActor::StaticClass();
	auto& __Local__9 = (*(AccessPrivateProperty<AActor* >((bpv__Button_3__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__9 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_SmallHandMenu_C__pf1172471173::StaticClass())->MiscConvertedSubobjects[2]);
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__Button_3__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__10 = FVector(0.000000, 0.000000, -3.200000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Button_3__pf), false, 0));
	bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtBackPlate__pf->AttachToComponent(bpv__UxtUIElement__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__UxtBackPlate__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__UxtBackPlate__pf->OverrideMaterials.Reserve(1);
	bpv__UxtBackPlate__pf->OverrideMaterials.Add(nullptr);
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__UxtBackPlate__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__11 = FVector(1.600000, 3.200000, 9.600000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__UxtBackPlate__pf), true, 0));
	bpv__UxtPalmUpConstraint__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__UxtPalmUpConstraint__pf->bRequireFlatHand = true;
	bpv__UxtPalmUpConstraint__pf->bRequireGaze = true;
	bpv__UxtPalmUpConstraint__pf->GoalMargin = 3.600000f;
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__UxtPalmUpConstraint__pf), false, 0));
	bpv__IsActive__pf = true;
	auto& __Local__12 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__12 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_SmallHandMenu_C__pf1172471173::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__UxtUIElement__pf)
	{
		bpv__UxtUIElement__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_1__pf)
	{
		bpv__Button_1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_2__pf)
	{
		bpv__Button_2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Button_3__pf)
	{
		bpv__Button_3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtBackPlate__pf)
	{
		bpv__UxtBackPlate__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__UxtPalmUpConstraint__pf)
	{
		bpv__UxtPalmUpConstraint__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SmallHandMenu_C__pf1172471173::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__13 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_1_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__13);
	auto& __Local__14 = (*(AccessPrivateProperty<bool >((__Local__13), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__14 = false;
	auto& __Local__15 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__13), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__15.Icon = FString(TEXT("EFA9"));
	auto& __Local__16 = (*(AccessPrivateProperty<FText >((__Local__13), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__16 = FText::AsCultureInvariant(
TEXT("Social")	);
	auto& __Local__17 = (*(AccessPrivateProperty<USceneComponent*>((__Local__13), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__18 = CastChecked<USceneComponent>(__Local__13->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__19 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__18), USceneComponent::__PPO__AttachParent() )));
	auto __Local__20 = CastChecked<UUxtPressableButtonComponent>(__Local__13->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> __Local__22{};
	const FProperty* __Local__21 = __Local__22.Get();
	if (nullptr == __Local__21)
	{
		__Local__21 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__21);
		__Local__22 = __Local__21;
	}
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__20), false, 0));
	__Local__19 = __Local__20;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__18), false, 0));
	__Local__17 = __Local__18;
	auto& __Local__23 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__13), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__24 = CastChecked<UUxtBackPlateComponent>(__Local__13->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__25 = (*(AccessPrivateProperty<USceneComponent*>((__Local__24), USceneComponent::__PPO__AttachParent() )));
	__Local__25 = __Local__18;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__24), true, 0));
	__Local__23 = __Local__24;
	auto& __Local__26 = (*(AccessPrivateProperty<USceneComponent*>((__Local__13), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__27 = CastChecked<USceneComponent>(__Local__13->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__28 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__27), USceneComponent::__PPO__AttachParent() )));
	__Local__28 = __Local__20;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__27), false, 0));
	__Local__26 = __Local__27;
	auto& __Local__29 = (*(AccessPrivateProperty<USceneComponent*>((__Local__13), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__30 = CastChecked<USceneComponent>(__Local__13->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__31 = (*(AccessPrivateProperty<USceneComponent*>((__Local__30), USceneComponent::__PPO__AttachParent() )));
	__Local__31 = __Local__27;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__30), false, 0));
	__Local__29 = __Local__30;
	auto& __Local__32 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__13), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__33 = CastChecked<UStaticMeshComponent>(__Local__13->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__34 = (*(AccessPrivateProperty<USceneComponent*>((__Local__33), USceneComponent::__PPO__AttachParent() )));
	__Local__34 = __Local__30;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__33), true, 0));
	__Local__32 = __Local__33;
	auto& __Local__35 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__13), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__36 = CastChecked<UTextRenderComponent>(__Local__13->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__37 = (*(AccessPrivateProperty<USceneComponent*>((__Local__36), USceneComponent::__PPO__AttachParent() )));
	__Local__37 = __Local__30;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__36), false, 0));
	__Local__35 = __Local__36;
	auto& __Local__38 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__13), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__39 = CastChecked<UTextRenderComponent>(__Local__13->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__40 = (*(AccessPrivateProperty<USceneComponent*>((__Local__39), USceneComponent::__PPO__AttachParent() )));
	__Local__40 = __Local__30;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__39), false, 0));
	__Local__38 = __Local__39;
	auto& __Local__41 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__13), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__42 = CastChecked<UAudioComponent>(__Local__13->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__43 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__42), USceneComponent::__PPO__AttachParent() )));
	__Local__43 = __Local__20;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__42), false, 0));
	__Local__41 = __Local__42;
	auto& __Local__44 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__13), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__44 = __Local__20;
	auto& __Local__45 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__13), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__45 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__46 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__13), AActor::__PPO__RootComponent() )));
	__Local__46 = __Local__20;
	auto __Local__47 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_2_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__47);
	auto& __Local__48 = (*(AccessPrivateProperty<bool >((__Local__47), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__48 = false;
	auto& __Local__49 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__47), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__49.Icon = FString(TEXT("E7A9"));
	auto& __Local__50 = (*(AccessPrivateProperty<FText >((__Local__47), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__50 = FText::AsCultureInvariant(
TEXT("Pictures")	);
	auto& __Local__51 = (*(AccessPrivateProperty<USceneComponent*>((__Local__47), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__52 = CastChecked<USceneComponent>(__Local__47->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__53 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__52), USceneComponent::__PPO__AttachParent() )));
	auto __Local__54 = CastChecked<UUxtPressableButtonComponent>(__Local__47->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__54), false, 0));
	__Local__53 = __Local__54;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__52), false, 0));
	__Local__51 = __Local__52;
	auto& __Local__55 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__47), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__56 = CastChecked<UUxtBackPlateComponent>(__Local__47->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__57 = (*(AccessPrivateProperty<USceneComponent*>((__Local__56), USceneComponent::__PPO__AttachParent() )));
	__Local__57 = __Local__52;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__56), true, 0));
	__Local__55 = __Local__56;
	auto& __Local__58 = (*(AccessPrivateProperty<USceneComponent*>((__Local__47), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__59 = CastChecked<USceneComponent>(__Local__47->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__60 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__59), USceneComponent::__PPO__AttachParent() )));
	__Local__60 = __Local__54;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__59), false, 0));
	__Local__58 = __Local__59;
	auto& __Local__61 = (*(AccessPrivateProperty<USceneComponent*>((__Local__47), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__62 = CastChecked<USceneComponent>(__Local__47->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__63 = (*(AccessPrivateProperty<USceneComponent*>((__Local__62), USceneComponent::__PPO__AttachParent() )));
	__Local__63 = __Local__59;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__62), false, 0));
	__Local__61 = __Local__62;
	auto& __Local__64 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__47), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__65 = CastChecked<UStaticMeshComponent>(__Local__47->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__66 = (*(AccessPrivateProperty<USceneComponent*>((__Local__65), USceneComponent::__PPO__AttachParent() )));
	__Local__66 = __Local__62;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__65), true, 0));
	__Local__64 = __Local__65;
	auto& __Local__67 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__47), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__68 = CastChecked<UTextRenderComponent>(__Local__47->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__69 = (*(AccessPrivateProperty<USceneComponent*>((__Local__68), USceneComponent::__PPO__AttachParent() )));
	__Local__69 = __Local__62;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__68), false, 0));
	__Local__67 = __Local__68;
	auto& __Local__70 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__47), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__71 = CastChecked<UTextRenderComponent>(__Local__47->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__72 = (*(AccessPrivateProperty<USceneComponent*>((__Local__71), USceneComponent::__PPO__AttachParent() )));
	__Local__72 = __Local__62;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__71), false, 0));
	__Local__70 = __Local__71;
	auto& __Local__73 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__47), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__74 = CastChecked<UAudioComponent>(__Local__47->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__75 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__74), USceneComponent::__PPO__AttachParent() )));
	__Local__75 = __Local__54;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__74), false, 0));
	__Local__73 = __Local__74;
	auto& __Local__76 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__47), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__76 = __Local__54;
	auto& __Local__77 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__47), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__77 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__78 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__47), AActor::__PPO__RootComponent() )));
	__Local__78 = __Local__54;
	auto __Local__79 = NewObject<AUxtPressableButtonActor>(InDynamicClass, AUxtPressableButtonActor::StaticClass(), TEXT("Button_3_GEN_VARIABLE_UxtPressableButtonActor_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__79);
	auto& __Local__80 = (*(AccessPrivateProperty<bool >((__Local__79), AUxtPressableButtonActor::__PPO__bIsPlated() )));
	__Local__80 = false;
	auto& __Local__81 = (*(AccessPrivateProperty<FUxtIconBrush >((__Local__79), AUxtPressableButtonActor::__PPO__IconBrush() )));
	__Local__81.Icon = FString(TEXT("E722"));
	auto& __Local__82 = (*(AccessPrivateProperty<FText >((__Local__79), AUxtPressableButtonActor::__PPO__Label() )));
	__Local__82 = FText::AsCultureInvariant(
TEXT("Camera")	);
	auto& __Local__83 = (*(AccessPrivateProperty<USceneComponent*>((__Local__79), AUxtPressableButtonActor::__PPO__BackPlatePivotComponent() )));
	auto __Local__84 = CastChecked<USceneComponent>(__Local__79->GetDefaultSubobjectByName(TEXT("BackPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__85 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__84), USceneComponent::__PPO__AttachParent() )));
	auto __Local__86 = CastChecked<UUxtPressableButtonComponent>(__Local__79->GetDefaultSubobjectByName(TEXT("UxtPressableButton")), ECastCheckedType::NullAllowed);
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__86), false, 0));
	__Local__85 = __Local__86;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__84), false, 0));
	__Local__83 = __Local__84;
	auto& __Local__87 = (*(AccessPrivateProperty<UUxtBackPlateComponent*>((__Local__79), AUxtPressableButtonActor::__PPO__BackPlateMeshComponent() )));
	auto __Local__88 = CastChecked<UUxtBackPlateComponent>(__Local__79->GetDefaultSubobjectByName(TEXT("BackPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__89 = (*(AccessPrivateProperty<USceneComponent*>((__Local__88), USceneComponent::__PPO__AttachParent() )));
	__Local__89 = __Local__84;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__88), true, 0));
	__Local__87 = __Local__88;
	auto& __Local__90 = (*(AccessPrivateProperty<USceneComponent*>((__Local__79), AUxtPressableButtonActor::__PPO__FrontPlatePivotComponent() )));
	auto __Local__91 = CastChecked<USceneComponent>(__Local__79->GetDefaultSubobjectByName(TEXT("FrontPlatePivot")), ECastCheckedType::NullAllowed);
	auto& __Local__92 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__91), USceneComponent::__PPO__AttachParent() )));
	__Local__92 = __Local__86;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__91), false, 0));
	__Local__90 = __Local__91;
	auto& __Local__93 = (*(AccessPrivateProperty<USceneComponent*>((__Local__79), AUxtPressableButtonActor::__PPO__FrontPlateCenterComponent() )));
	auto __Local__94 = CastChecked<USceneComponent>(__Local__79->GetDefaultSubobjectByName(TEXT("FrontPlateCenter")), ECastCheckedType::NullAllowed);
	auto& __Local__95 = (*(AccessPrivateProperty<USceneComponent*>((__Local__94), USceneComponent::__PPO__AttachParent() )));
	__Local__95 = __Local__91;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__94), false, 0));
	__Local__93 = __Local__94;
	auto& __Local__96 = (*(AccessPrivateProperty<UStaticMeshComponent*>((__Local__79), AUxtPressableButtonActor::__PPO__FrontPlateMeshComponent() )));
	auto __Local__97 = CastChecked<UStaticMeshComponent>(__Local__79->GetDefaultSubobjectByName(TEXT("FrontPlate")), ECastCheckedType::NullAllowed);
	auto& __Local__98 = (*(AccessPrivateProperty<USceneComponent*>((__Local__97), USceneComponent::__PPO__AttachParent() )));
	__Local__98 = __Local__94;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__97), true, 0));
	__Local__96 = __Local__97;
	auto& __Local__99 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__79), AUxtPressableButtonActor::__PPO__IconComponent() )));
	auto __Local__100 = CastChecked<UTextRenderComponent>(__Local__79->GetDefaultSubobjectByName(TEXT("Icon")), ECastCheckedType::NullAllowed);
	auto& __Local__101 = (*(AccessPrivateProperty<USceneComponent*>((__Local__100), USceneComponent::__PPO__AttachParent() )));
	__Local__101 = __Local__94;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__100), false, 0));
	__Local__99 = __Local__100;
	auto& __Local__102 = (*(AccessPrivateProperty<UTextRenderComponent*>((__Local__79), AUxtPressableButtonActor::__PPO__LabelComponent() )));
	auto __Local__103 = CastChecked<UTextRenderComponent>(__Local__79->GetDefaultSubobjectByName(TEXT("Label")), ECastCheckedType::NullAllowed);
	auto& __Local__104 = (*(AccessPrivateProperty<USceneComponent*>((__Local__103), USceneComponent::__PPO__AttachParent() )));
	__Local__104 = __Local__94;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__103), false, 0));
	__Local__102 = __Local__103;
	auto& __Local__105 = (*(AccessPrivateProperty<UAudioComponent*>((__Local__79), AUxtPressableButtonActor::__PPO__AudioComponent() )));
	auto __Local__106 = CastChecked<UAudioComponent>(__Local__79->GetDefaultSubobjectByName(TEXT("Audio")), ECastCheckedType::NullAllowed);
	auto& __Local__107 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__106), USceneComponent::__PPO__AttachParent() )));
	__Local__107 = __Local__86;
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__106), false, 0));
	__Local__105 = __Local__106;
	auto& __Local__108 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__79), AUxtBasePressableButtonActor::__PPO__ButtonComponent() )));
	__Local__108 = __Local__86;
	auto& __Local__109 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__79), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__109 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto& __Local__110 = (*(AccessPrivateProperty<UUxtPressableButtonComponent*>((__Local__79), AActor::__PPO__RootComponent() )));
	__Local__110 = __Local__86;
	auto __Local__111 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__111);
	auto __Local__112 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__112);
	(((FBoolProperty*)__Local__21)->SetPropertyValue_InContainer((__Local__111), false, 0));
	__Local__112->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__112->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__112->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__113 = __Local__112->ComponentDelegateBindings[0];
	__Local__113.ComponentPropertyName = FName(TEXT("UxtPalmUpConstraint"));
	__Local__113.DelegatePropertyName = FName(TEXT("OnConstraintDeactivated"));
	__Local__113.FunctionNameToBind = FName(TEXT("BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_1_UxtHandConstraintDeactivatedDelegate__DelegateSignature"));
	auto& __Local__114 = __Local__112->ComponentDelegateBindings[1];
	__Local__114.ComponentPropertyName = FName(TEXT("UxtPalmUpConstraint"));
	__Local__114.DelegatePropertyName = FName(TEXT("OnConstraintActivated"));
	__Local__114.FunctionNameToBind = FName(TEXT("BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_0_UxtHandConstraintActivatedDelegate__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_SmallHandMenu_C__pf1172471173::bpf__ExecuteUbergraph_BP_SmallHandMenu__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	if (!bpv__IsActive__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(bpv__UxtUIElement__pf))
	{
		bpv__UxtUIElement__pf->UUxtUIElementComponent::SetUIVisibility(EUxtUIElementVisibility::Show);
	}
	return; // KCST_GotoReturn
}
void ABP_SmallHandMenu_C__pf1172471173::bpf__ExecuteUbergraph_BP_SmallHandMenu__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__UxtUIElement__pf))
	{
		bpv__UxtUIElement__pf->UUxtUIElementComponent::SetUIVisibility(EUxtUIElementVisibility::Hide);
	}
	return; // KCST_GotoReturn
}
void ABP_SmallHandMenu_C__pf1172471173::bpf__BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_1_UxtHandConstraintDeactivatedDelegate__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_BP_SmallHandMenu__pf_1(5);
}
void ABP_SmallHandMenu_C__pf1172471173::bpf__BndEvt__UxtPalmUpConstraint_K2Node_ComponentBoundEvent_0_UxtHandConstraintActivatedDelegate__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_BP_SmallHandMenu__pf_0(2);
}
void ABP_SmallHandMenu_C__pf1172471173::bpf__SetActive__pf(bool bpp__NewActive__pf)
{
	bpv__IsActive__pf = bpp__NewActive__pf;
	if(::IsValid(bpv__UxtUIElement__pf))
	{
		bpv__UxtUIElement__pf->UUxtUIElementComponent::SetUIVisibility(EUxtUIElementVisibility::Hide);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SmallHandMenu_C__pf1172471173::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_SmallHandMenu_C__pf1172471173::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{165, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtUIElementComponent 
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
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtBackPlateComponent 
		{166, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UXTools.UxtPalmUpConstraintComponent 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_SmallHandMenu_C__pf1172471173
{
	FRegisterHelper__ABP_SmallHandMenu_C__pf1172471173()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/HandMenu/Blueprints/BP_SmallHandMenu"), &ABP_SmallHandMenu_C__pf1172471173::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_SmallHandMenu_C__pf1172471173 Instance;
};
FRegisterHelper__ABP_SmallHandMenu_C__pf1172471173 FRegisterHelper__ABP_SmallHandMenu_C__pf1172471173::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif