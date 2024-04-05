#include "NativizedAssets.h"
#include "Widget_OtherUMGControls__pf2571737276.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/ComboBoxString.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/CheckBox.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/Slider.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
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
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
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
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
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
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
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
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
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
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
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
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
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
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
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
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UWidget_OtherUMGControls_C__pf2571737276::UWidget_OtherUMGControls_C__pf2571737276(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Button_81__pf = nullptr;
	bpv__CheckBox_130__pf = nullptr;
	bpv__ComboBoxString_144__pf = nullptr;
	bpv__Slider_108__pf = nullptr;
	bpv__TextBlock_356__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWidget_OtherUMGControls_C__pf2571737276::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWidget_OtherUMGControls_C__pf2571737276::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(6);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 6);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Button_81"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Button_81_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Button_81"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Slider_108"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnMouseCaptureBegin"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Slider_108_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Slider_108"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnMouseCaptureEnd"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Slider_108_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Slider_108"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnControllerCaptureEnd"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Slider_108_K2Node_ComponentBoundEvent_6_OnControllerCaptureEndEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Slider_108"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnControllerCaptureBegin"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Slider_108_K2Node_ComponentBoundEvent_1_OnControllerCaptureBeginEvent__DelegateSignature"));
	auto __Local__8 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(8);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Right = 539.000000f;
	__Local__10->LayoutData.Offsets.Bottom = 291.000000f;
	__Local__10->ZOrder = -1;
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UBorder>(__Local__1, TEXT("Border_50"), (EObjectFlags)0x00280008);
	auto& __Local__12 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__11->Background.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__12 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	auto __Local__13 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__13->LayoutData.Offsets.Left = 12.000000f;
	__Local__13->LayoutData.Offsets.Top = 8.000000f;
	__Local__13->LayoutData.Offsets.Right = 307.956970f;
	__Local__13->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__13->Parent = __Local__8;
	auto __Local__14 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_84"), (EObjectFlags)0x00280008);
	__Local__14->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C3DA02C349888C5E69F1E39A4C69DF8E]\", \"DBFAA8354382E30EBB8F73A177C7B364\", \"Other UMG Controls\")")	);
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__9.Add(__Local__13);
	auto __Local__15 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_3"), (EObjectFlags)0x00280008);
	__Local__15->LayoutData.Offsets.Left = 24.000000f;
	__Local__15->LayoutData.Offsets.Top = 112.000000f;
	__Local__15->LayoutData.Offsets.Right = 236.936935f;
	__Local__15->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__15->Parent = __Local__8;
	auto __Local__16 = NewObject<UComboBoxString>(__Local__1, TEXT("ComboBoxString_144"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<FString> >((__Local__16), UComboBoxString::__PPO__DefaultOptions() )));
	__Local__17 = TArray<FString> ();
	__Local__17.Reserve(3);
	__Local__17.Add(FString(TEXT("Dropdown 1")));
	__Local__17.Add(FString(TEXT("Dropdown 2")));
	__Local__17.Add(FString(TEXT("Dropdown 3")));
	auto& __Local__18 = (*(AccessPrivateProperty<FString >((__Local__16), UComboBoxString::__PPO__SelectedOption() )));
	__Local__18 = FString(TEXT("Dropdown 1"));
	auto& __Local__19 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__16->WidgetStyle.ComboButtonStyle.ButtonStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__19 = FLinearColor(0.400000, 0.400000, 0.400000, 1.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__16->WidgetStyle.ComboButtonStyle.ButtonStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__20 = FLinearColor(0.400000, 0.400000, 0.400000, 1.000000);
	auto& __Local__21 = (*(AccessPrivateProperty<UObject* >(&(__Local__16->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__21 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__22 = (*(AccessPrivateProperty<UObject* >(&(__Local__16->WidgetStyle.SelectionChangeSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__16->MaxListHeight = 1498.595093f;
	__Local__16->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__16->Font.TypefaceFontName = FName(TEXT("Font"));
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__9.Add(__Local__15);
	auto __Local__23 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__23->LayoutData.Offsets.Left = 324.000000f;
	__Local__23->LayoutData.Offsets.Top = 104.000000f;
	__Local__23->LayoutData.Offsets.Right = 189.232086f;
	__Local__23->LayoutData.Offsets.Bottom = 53.104015f;
	__Local__23->Parent = __Local__8;
	auto __Local__24 = NewObject<UButton>(__Local__1, TEXT("Button_81"), (EObjectFlags)0x00280008);
	auto& __Local__25 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__24->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__25 = FLinearColor(0.400000, 0.400000, 0.400000, 1.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__24->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(0.800000, 0.800000, 0.800000, 1.000000);
	__Local__24->WidgetStyle.PressedPadding.Top = 4.000000f;
	__Local__24->WidgetStyle.PressedPadding.Right = 3.000000f;
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__24), UPanelWidget::__PPO__Slots() )));
	__Local__27 = TArray<UPanelSlot*> ();
	__Local__27.Reserve(1);
	auto __Local__28 = NewObject<UButtonSlot>(__Local__24, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__28->Parent = __Local__24;
	auto __Local__29 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_198"), (EObjectFlags)0x00280008);
	__Local__29->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C3DA02C349888C5E69F1E39A4C69DF8E]\", \"16E2DFCE4D00AD664DCB74B8A36B324F\", \"Button\")")	);
	auto& __Local__30 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__29->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__30 = FLinearColor(0.038542, 0.035450, 0.035450, 1.000000);
	__Local__29->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__29->Font.TypefaceFontName = FName(TEXT("Font"));
	auto& __Local__31 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__29), UTextLayoutWidget::__PPO__Justification() )));
	__Local__31 = ETextJustify::Type::Center;
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__27.Add(__Local__28);
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__9.Add(__Local__23);
	auto __Local__32 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__32->LayoutData.Offsets.Left = 376.000000f;
	__Local__32->LayoutData.Offsets.Top = 232.000000f;
	__Local__32->LayoutData.Offsets.Right = 105.504074f;
	__Local__32->LayoutData.Offsets.Bottom = 34.000000f;
	__Local__32->Parent = __Local__8;
	auto __Local__33 = NewObject<UCheckBox>(__Local__1, TEXT("CheckBox_130"), (EObjectFlags)0x00280008);
	auto& __Local__34 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__33->WidgetStyle.ForegroundColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__34 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(__Local__33->WidgetStyle.BorderBackgroundColor), FSlateColor::__PPO__ColorUseRule() )));
	__Local__35 = ESlateColorStylingMode::Type::UseColor_Foreground;
	auto& __Local__36 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->WidgetStyle.CheckedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__36 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__37 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->WidgetStyle.UncheckedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__37 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__33), UPanelWidget::__PPO__Slots() )));
	__Local__38 = TArray<UPanelSlot*> ();
	__Local__38.Reserve(1);
	auto __Local__39 = NewObject<UPanelSlot>(__Local__33, TEXT("PanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__39->Parent = __Local__33;
	auto __Local__40 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_356"), (EObjectFlags)0x00280008);
	__Local__40->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C3DA02C349888C5E69F1E39A4C69DF8E]\", \"D7E2F6A744771AD0D30A2EAE2A3F8863\", \"Check Box\")")	);
	__Local__40->Slot = __Local__39;
	__Local__40->RenderTransform.Scale = FVector2D(0.500000, 0.500000);
	__Local__40->RenderTransformPivot = FVector2D(0.000000, 0.500000);
	__Local__39->Content = __Local__40;
	__Local__38.Add(__Local__39);
	__Local__33->Slot = __Local__32;
	__Local__33->RenderTransform.Scale = FVector2D(2.000000, 2.000000);
	__Local__32->Content = __Local__33;
	__Local__9.Add(__Local__32);
	auto __Local__41 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__41->LayoutData.Offsets.Left = 28.000000f;
	__Local__41->LayoutData.Offsets.Top = 72.000000f;
	__Local__41->LayoutData.Offsets.Right = 151.000000f;
	__Local__41->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__41->Parent = __Local__8;
	auto __Local__42 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_539"), (EObjectFlags)0x00280008);
	__Local__42->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C3DA02C349888C5E69F1E39A4C69DF8E]\", \"36C430EB4C40DDB699213FBE3CA2D66C\", \"Spin Box\")")	);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__9.Add(__Local__41);
	auto __Local__43 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__43->LayoutData.Offsets.Left = 24.000000f;
	__Local__43->LayoutData.Offsets.Top = 184.000000f;
	__Local__43->LayoutData.Offsets.Right = 151.000000f;
	__Local__43->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__43->Parent = __Local__8;
	auto __Local__44 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_698"), (EObjectFlags)0x00280008);
	__Local__44->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[C3DA02C349888C5E69F1E39A4C69DF8E]\", \"7CB4E7DE4A237FD8B2A032B196F7FB81\", \"Slider\")")	);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__9.Add(__Local__43);
	auto __Local__45 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__45->LayoutData.Offsets.Left = 28.000000f;
	__Local__45->LayoutData.Offsets.Top = 232.000000f;
	__Local__45->LayoutData.Offsets.Right = 237.280136f;
	__Local__45->LayoutData.Offsets.Bottom = 42.721149f;
	__Local__45->Parent = __Local__8;
	auto __Local__46 = NewObject<USlider>(__Local__1, TEXT("Slider_108"), (EObjectFlags)0x00280008);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->WidgetStyle.HoveredBarImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(0.400000, 0.400000, 0.400000, 1.000000);
	__Local__46->WidgetStyle.NormalThumbImage.ImageSize = FVector2D(20.000000, 20.000000);
	__Local__46->WidgetStyle.HoveredThumbImage.ImageSize = FVector2D(30.000000, 30.000000);
	auto& __Local__48 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->WidgetStyle.HoveredThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__48 = FLinearColor(0.000000, 0.509804, 0.847059, 1.000000);
	__Local__46->WidgetStyle.BarThickness = 10.000000f;
	__Local__46->SliderHandleColor = FLinearColor(0.800000, 0.800000, 0.800000, 1.000000);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__9.Add(__Local__45);
	__Local__1->RootWidget = __Local__8;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWidget_OtherUMGControls_C__pf2571737276::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__49;
	SlotNames.Append(__Local__49);
}
void UWidget_OtherUMGControls_C__pf2571737276::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__50;
	TArray<FDelegateRuntimeBinding>  __Local__51;
	__Local__51.AddUninitialized(1);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__51.GetData(), 1);
	auto& __Local__52 = __Local__51[0];
	__Local__52.ObjectName = FString(TEXT("TextBlock_356"));
	__Local__52.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__52.FunctionName = FName(TEXT("GetColorAndOpacity_0"));
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__52.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__53 = TArray<FPropertyPathSegment> ();
	__Local__53.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__53.GetData(), 1);
	auto& __Local__54 = __Local__53[0];
	__Local__54.Name = FName(TEXT("GetCheckBoxTextColor"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->MiscConvertedSubobjects[0]), __Local__50, __Local__51);
}
void UWidget_OtherUMGControls_C__pf2571737276::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
	return; // KCST_GotoReturn
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
	return; // KCST_GotoReturn
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(UWidget_OtherUMGControls_C__pf2571737276::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				__CurrentState = 4;
				break;
			}
		case 6:
			{
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__BndEvt__Button_81_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_0(10);
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_1(8);
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__BndEvt__Slider_108_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_2(7);
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__BndEvt__Slider_108_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_3(6);
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__BndEvt__Slider_108_K2Node_ComponentBoundEvent_6_OnControllerCaptureEndEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_3(5);
}
void UWidget_OtherUMGControls_C__pf2571737276::bpf__BndEvt__Slider_108_K2Node_ComponentBoundEvent_1_OnControllerCaptureBeginEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Widget_OtherUMGControls__pf_2(2);
}
FSlateColor  UWidget_OtherUMGControls_C__pf2571737276::bpf__GetCheckBoxTextColor__pf()
{
	FSlateColor bpp__ReturnValue__pf{};
	FSlateColor bpfv__Color__pf{};
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor__pf{};
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor_1__pf{};
	bool bpfv__CallFunc_IsHovered_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__CheckBox_130__pf))
				{
					bpfv__CallFunc_IsHovered_ReturnValue__pf = bpv__CheckBox_130__pf->IsHovered();
				}
				if (!bpfv__CallFunc_IsHovered_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.400000,0.400000,0.400000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpfv__Color__pf = bpfv__K2Node_MakeStruct_SlateColor_1__pf;
			}
		case 3:
			{
				bpp__ReturnValue__pf = bpfv__Color__pf;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpfv__Color__pf = bpfv__K2Node_MakeStruct_SlateColor__pf;
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UWidget_OtherUMGControls_C__pf2571737276::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Buttons/HoloLens2/S_ButtonPressed_Mono_01.S_ButtonPressed_Mono_01 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /UXTools/Fonts/Font_SegoeUI_Semibold_Dynamic.Font_SegoeUI_Semibold_Dynamic 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Buttons/HoloLens2/S_ButtonReleased_Mono_01.S_ButtonReleased_Mono_01 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Slider/Audio/A_Slider_Grab.A_Slider_Grab 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /UXTools/Slider/Audio/A_Slider_Release.A_Slider_Release 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UWidget_OtherUMGControls_C__pf2571737276::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{48, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CheckBox 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{49, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{68, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ComboBoxString 
		{69, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{50, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UWidget_OtherUMGControls_C__pf2571737276
{
	FRegisterHelper__UWidget_OtherUMGControls_C__pf2571737276()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/UXToolsExamples/Widget/Blueprints/Widget_OtherUMGControls"), &UWidget_OtherUMGControls_C__pf2571737276::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UWidget_OtherUMGControls_C__pf2571737276 Instance;
};
FRegisterHelper__UWidget_OtherUMGControls_C__pf2571737276 FRegisterHelper__UWidget_OtherUMGControls_C__pf2571737276::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
