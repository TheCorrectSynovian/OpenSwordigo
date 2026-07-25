/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9320
 * Mangled: ._ZN5Caver9Component25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 92
 *   0x000000000021C940  Caver::AnimationControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000021C95C  `non-virtual thunk to'Caver::AnimationControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000221048  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000222C50  Caver::LightComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000227ECC  Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000229DFC  Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022B97C  Caver::OverlayComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022B980  `non-virtual thunk to'Caver::OverlayComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000230128  Caver::PortalComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002324EC  Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002335DC  Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023539C  Caver::ShadowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023543C  `non-virtual thunk to'Caver::ShadowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023660C  Caver::ShadowVolumeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000236610  `non-virtual thunk to'Caver::ShadowVolumeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000238650  Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023A41C  Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023B8B4  Caver::SpawnPointComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023B93C  `non-virtual thunk to'Caver::SpawnPointComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023CD48  Caver::TextBubbleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023CD4C  `non-virtual thunk to'Caver::TextBubbleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023FADC  Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002403F8  Caver::TransformComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002403FC  `non-virtual thunk to'Caver::TransformComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002407B8  Caver::TransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002407BC  `non-virtual thunk to'Caver::TransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000255538  Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000025B4E8  Caver::CharControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000025B55C  `non-virtual thunk to'Caver::CharControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000262B50  Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000265C94  Caver::DamageComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002673D4  Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000268B70  Caver::EntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000268BD8  `non-virtual thunk to'Caver::EntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000026B40C  Caver::EntityControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000026B470  `non-virtual thunk to'Caver::EntityControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000026ED90  Caver::EntityInfoComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000027072C  Caver::HealthComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000270790  `non-virtual thunk to'Caver::HealthComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000277BEC  Caver::ItemDropComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000027AC20  Caver::ManaComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000027AC24  `non-virtual thunk to'Caver::ManaComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000027F310  Caver::PhysicsObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028133C  Caver::PhysicsPlatformComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002813AC  `non-virtual thunk to'Caver::PhysicsPlatformComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002819AC  Caver::DimensionObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002819B0  `non-virtual thunk to'Caver::DimensionObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028763C  Caver::MagicExplosionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002876D8  `non-virtual thunk to'Caver::MagicExplosionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028BA1C  Caver::MagicSpellCastComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028BA20  `non-virtual thunk to'Caver::MagicSpellCastComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028C09C  Caver::ObjectModifierComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028C0A0  `non-virtual thunk to'Caver::ObjectModifierComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028CB60  Caver::ProjectileControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028CB90  `non-virtual thunk to'Caver::ProjectileControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028E21C  Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028FEB4  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029215C  Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002999B8  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002999D4  `non-virtual thunk to'Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029A014  Caver::MonsterDeathControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029A018  `non-virtual thunk to'Caver::MonsterDeathControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A2B48  Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A3554  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A3558  `non-virtual thunk to'Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A4364  Caver::OrbitControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A4428  `non-virtual thunk to'Caver::OrbitControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A556C  Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AC774  Caver::ParticleFieldComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AC778  `non-virtual thunk to'Caver::ParticleFieldComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002ACC78  Caver::ParticleObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002ACC7C  `non-virtual thunk to'Caver::ParticleObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AF0FC  Caver::ShatterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AF100  `non-virtual thunk to'Caver::ShatterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B1904  Caver::BushControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B1908  `non-virtual thunk to'Caver::BushControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B2D2C  Caver::DoorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B2DF4  `non-virtual thunk to'Caver::DoorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B41AC  Caver::ElevatorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B41C8  `non-virtual thunk to'Caver::ElevatorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B5E1C  Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B87A0  Caver::GroundMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B8820  `non-virtual thunk to'Caver::GroundMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002BE350  Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002BF910  Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C278C  Caver::WaterMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C2B80  `non-virtual thunk to'Caver::WaterMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C4E2C  Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C8748  Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CA0A8  Caver::SwingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002CCE48  Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002432B0  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9324 string=0x00000000002432B0 "\n(@"
 *   insn=0x00000000001F9328 string=0x00000000001F932C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Component::SetValueForBindedProperty(
        Caver::Component *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver9Component25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

