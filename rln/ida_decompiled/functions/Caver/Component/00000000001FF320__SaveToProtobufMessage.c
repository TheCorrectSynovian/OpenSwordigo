/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF320
 * Mangled: ._ZNK5Caver9Component21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 66
 *   0x000000000021C604  Caver::AnimationControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021E6EC  Caver::BlendAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002201E8  Caver::KeyframeAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000221DE0  Caver::LightComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002247DC  Caver::ModelComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000226D64  Caver::ModelTransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000228C7C  Caver::ObjectLinkControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000022B954  Caver::OverlayComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000022F984  Caver::PortalComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000231738  Caver::ProgramComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000233298  Caver::PropertiesComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000234C58  Caver::ShadowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002365E4  Caver::ShadowVolumeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000239BE0  Caver::SoundEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023AB7C  Caver::SpawnPointComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023C100  Caver::SpriteComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023CD20  Caver::TextBubbleComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023E2D4  Caver::TextureMappingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023F59C  Caver::TouchableComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002403D0  Caver::TransformComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000240790  Caver::TransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000254730  Caver::BreakableObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000025A740  Caver::CharControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000261B10  Caver::CollectableItemComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000263F90  Caver::DamageComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000267090  Caver::EntityActionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000267D30  Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000026A4E0  Caver::EntityControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000026EA50  Caver::EntityInfoComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000026FB18  Caver::HealthComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000276128  Caver::ItemDropComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027ABF8  Caver::ManaComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027E034  Caver::PhysicsObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000280A84  Caver::PhysicsPlatformComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000281984  Caver::DimensionObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000286ED8  Caver::MagicExplosionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028B980  Caver::MagicSpellCastComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028C074  Caver::ObjectModifierComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028C654  Caver::ProjectileControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028DC80  Caver::SkillComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028FB40  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000290EE0  Caver::AttackComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000299678  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000299F88  Caver::MonsterDeathControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A1FD0  Caver::FireEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A352C  Caver::GlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A3BFC  Caver::OrbitControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A4EA0  Caver::ParticleComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002AC74C  Caver::ParticleFieldComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002ACBEC  Caver::ParticleObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002AF0D4  Caver::ShatterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B1858  Caver::BushControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B29D8  Caver::DoorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B3B78  Caver::ElevatorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B54AC  Caver::PressureTriggerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BC374  Caver::GroundMeshGeneratorComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002BEF94  Caver::GroundPolygonComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C21F8  Caver::WaterMeshComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C42CC  Caver::SwingableWeaponComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C7DAC  Caver::SwingableWeaponControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C97A4  Caver::SwingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002CCB04  Caver::WeaponTrailComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x0000000000241EB0  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF328 string=0x00000000001FF32C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Component::SaveToProtobufMessage(Caver::Component *this, Caver::Proto::Component *a2)
{
  return _ZNK5Caver9Component21SaveToProtobufMessageEPNS_5Proto9ComponentE(this, a2);
}

