/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7A00
 * Mangled: ._ZN5Caver12ProgramState15RegisterLibraryERKSsPKNS_11LibFunctionE
 * Demangled: Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *
 * Callers: 33
 *   0x000000000021A8A8  Caver::CollisionShapeComponent::RegisterLibrary(void)
 *   0x000000000021C984  Caver::AnimationControllerComponent::Prepare(void)
 *   0x000000000021FFEC  Caver::KeyframeAnimationComponent::RegisterLibrary(void)
 *   0x0000000000221B88  Caver::LightComponent::RegisterLibrary(void)
 *   0x0000000000228040  Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000022E0E0  Caver::OverlayTextComponent::RegisterLibrary(void)
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x0000000000232984  Caver::ProgramComponent::RegisterLibrary(void)
 *   0x0000000000233744  Caver::PropertiesComponent::RegisterLibrary(void)
 *   0x000000000023CD60  Caver::TextBubbleComponent::RegisterLibrary(void)
 *   0x000000000023FC5C  Caver::TouchableComponent::RegisterLibrary(void)
 *   0x00000000002407D0  Caver::TransformControllerComponent::RegisterLibrary(void)
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x0000000000262EE4  Caver::CollectableItemComponent::RegisterLibrary(void)
 *   0x0000000000265D68  Caver::DamageComponent::RegisterLibrary(void)
 *   0x0000000000268CD8  Caver::EntityComponent::RegisterLibrary(void)
 *   0x000000000026B4E0  Caver::EntityControllerComponent::Prepare(void)
 *   0x0000000000270874  Caver::HealthComponent::RegisterLibrary(void)
 *   0x0000000000278138  Caver::ItemDropComponent::RegisterLibrary(void)
 *   0x000000000027F4C8  Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *   0x000000000028E388  Caver::SkillComponent::RegisterLibrary(void)
 *   0x000000000029001C  Caver::SpellComponent::RegisterLibrary(void)
 *   0x000000000029F524  Caver::SnappingMonsterControllerComponent::RegisterLibrary(void)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000002B2E18  Caver::DoorControllerComponent::Prepare(void)
 *   0x00000000002B4318  Caver::ElevatorControllerComponent::RegisterLibrary(void)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x00000000004866A8  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x00000000004D5CF4  sub_4D5CF4
 *
 * Callees: 1
 *   0x00000000004C1B58  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7A08 string=0x00000000001F7A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProgramState::RegisterLibrary()
{
  return _ZN5Caver12ProgramState15RegisterLibraryERKSsPKNS_11LibFunctionE();
}

