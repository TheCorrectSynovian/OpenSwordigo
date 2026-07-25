/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF480
 * Mangled: ._ZN5Caver12BindingValue14ValueWithFloatEf
 * Demangled: Caver::BindingValue::ValueWithFloat(float)
 *
 * Callers: 50
 *   0x0000000000219E7C  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *   0x000000000021F2EC  Caver::BlendAnimationComponent::ValueForBindedProperty(int)
 *   0x0000000000220E74  Caver::KeyframeAnimationComponent::ValueForBindedProperty(int)
 *   0x0000000000222BE0  Caver::LightComponent::ValueForBindedProperty(int)
 *   0x00000000002258F4  Caver::ModelComponent::ValueForBindedProperty(int)
 *   0x0000000000227E54  Caver::ModelTransformControllerComponent::ValueForBindedProperty(int)
 *   0x000000000022DDC8  Caver::OverlayTextComponent::ValueForBindedProperty(int)
 *   0x0000000000235338  Caver::ShadowComponent::ValueForBindedProperty(int)
 *   0x0000000000235368  `non-virtual thunk to'Caver::ShadowComponent::ValueForBindedProperty(int)
 *   0x00000000002385C4  Caver::ShapeComponent::ValueForBindedProperty(int)
 *   0x000000000023A3B8  Caver::SoundEffectComponent::ValueForBindedProperty(int)
 *   0x000000000023A3E8  `non-virtual thunk to'Caver::SoundEffectComponent::ValueForBindedProperty(int)
 *   0x000000000023ECB8  Caver::TextureMappingComponent::ValueForBindedProperty(int)
 *   0x000000000023ED08  `non-virtual thunk to'Caver::TextureMappingComponent::ValueForBindedProperty(int)
 *   0x000000000023FA98  Caver::TouchableComponent::ValueForBindedProperty(int)
 *   0x000000000023FAB8  `non-virtual thunk to'Caver::TouchableComponent::ValueForBindedProperty(int)
 *   0x000000000025B494  Caver::CharControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002659DC  Caver::DamageComponent::ValueForBindedProperty(int)
 *   0x000000000026B284  Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002706D4  Caver::HealthComponent::ValueForBindedProperty(int)
 *   0x0000000000277B1C  Caver::ItemDropComponent::ValueForBindedProperty(int)
 *   0x000000000027F290  Caver::PhysicsObjectComponent::ValueForBindedProperty(int)
 *   0x00000000002812E4  Caver::PhysicsPlatformComponent::ValueForBindedProperty(int)
 *   0x0000000000284564  Caver::MagicBoltComponent::ValueForBindedProperty(int)
 *   0x0000000000284588  `non-virtual thunk to'Caver::MagicBoltComponent::ValueForBindedProperty(int)
 *   0x00000000002875D0  Caver::MagicExplosionComponent::ValueForBindedProperty(int)
 *   0x0000000000287604  `non-virtual thunk to'Caver::MagicExplosionComponent::ValueForBindedProperty(int)
 *   0x00000000002920E8  Caver::AttackComponent::ValueForBindedProperty(int)
 *   0x00000000002946A4  Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002946D4  `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000295D7C  Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000295DA0  `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x000000000029998C  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002999A0  `non-virtual thunk to'Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A2AF4  Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002A42E8  Caver::OrbitControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A4324  `non-virtual thunk to'Caver::OrbitControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A5528  Caver::ParticleComponent::ValueForBindedProperty(int)
 *   0x00000000002A5548  `non-virtual thunk to'Caver::ParticleComponent::ValueForBindedProperty(int)
 *   0x00000000002A99E4  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002B0850  Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *   0x00000000002B5D90  Caver::PressureTriggerComponent::ValueForBindedProperty(int)
 *   0x00000000002B5DD4  `non-virtual thunk to'Caver::PressureTriggerComponent::ValueForBindedProperty(int)
 *   0x00000000002BE2E0  Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *   0x00000000002BF8C4  Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *   0x00000000002C4DD8  Caver::SwingableWeaponComponent::ValueForBindedProperty(int)
 *   0x00000000002CA05C  Caver::SwingComponent::ValueForBindedProperty(int)
 *   0x00000000002CB13C  Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *   0x00000000004608A4  Caver::ObjectTemplate::ValueForBindedProperty(int)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callees: 1
 *   0x000000000021A054  Caver::BindingValue::ValueWithBool(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF488 string=0x00000000001FF48C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::BindingValue::ValueWithFloat(Caver::BindingValue *this, float a2)
{
  JUMPOUT(0x21A220);
}

