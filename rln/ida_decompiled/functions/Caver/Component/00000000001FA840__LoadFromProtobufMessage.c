/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA840
 * Mangled: ._ZN5Caver9Component23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 66
 *   0x000000000021C504  Caver::AnimationControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021E674  Caver::BlendAnimationComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021FFEC  Caver::KeyframeAnimationComponent::RegisterLibrary(void)
 *   0x0000000000221B88  Caver::LightComponent::RegisterLibrary(void)
 *   0x0000000000224688  Caver::ModelComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000226C70  Caver::ModelTransformControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000228BB4  Caver::ObjectLinkControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000022B950  Caver::OverlayComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000022F8A8  Caver::PortalComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000231690  Caver::ProgramComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023323C  Caver::PropertiesComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000234BE8  Caver::ShadowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002365E0  Caver::ShadowVolumeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000239B8C  Caver::SoundEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023AB0C  Caver::SpawnPointComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023C0BC  Caver::SpriteComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023CD1C  Caver::TextBubbleComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023E23C  Caver::TextureMappingComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023F538  Caver::TouchableComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002403CC  Caver::TransformComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000024078C  Caver::TransformControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002546AC  Caver::BreakableObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000025A218  Caver::CharControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000261A70  Caver::CollectableItemComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000263ED8  Caver::DamageComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000267034  Caver::EntityActionComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000267CE4  Caver::EntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000026A308  Caver::EntityControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000026EA0C  Caver::EntityInfoComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000026FA90  Caver::HealthComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000275BF8  Caver::ItemDropComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000027ABF4  Caver::ManaComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000027DF4C  Caver::PhysicsObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000280A04  Caver::PhysicsPlatformComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000281980  Caver::DimensionObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000286D94  Caver::MagicExplosionComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028B8C0  Caver::MagicSpellCastComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028C070  Caver::ObjectModifierComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028C5FC  Caver::ProjectileControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028DBD4  Caver::SkillComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028FAE4  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000290D6C  Caver::AttackComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000029957C  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000299F08  Caver::MonsterDeathControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A1DBC  Caver::FireEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A3528  Caver::GlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A3B8C  Caver::OrbitControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A4E4C  Caver::ParticleComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002AC748  Caver::ParticleFieldComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002ACB6C  Caver::ParticleObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002AF0D0  Caver::ShatterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B175C  Caver::BushControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B28A0  Caver::DoorControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B3AD4  Caver::ElevatorControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B53F0  Caver::PressureTriggerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BC1E4  Caver::GroundMeshGeneratorComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C20C0  Caver::WaterMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C3FBC  Caver::SwingableWeaponComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C7D10  Caver::SwingableWeaponControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C9710  Caver::SwingComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002CC9EC  Caver::WeaponTrailComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x0000000000241E84  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA844 string=0x0000000000241E84 "($@"
 *   insn=0x00000000001FA848 string=0x00000000001FA84C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Component::LoadFromProtobufMessage(Caver::Component *this, const Caver::Proto::Component *a2)
{
  return _ZN5Caver9Component23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}

