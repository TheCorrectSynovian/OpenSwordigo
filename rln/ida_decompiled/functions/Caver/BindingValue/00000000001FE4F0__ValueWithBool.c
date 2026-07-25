/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE4F0
 * Mangled: ._ZN5Caver12BindingValue13ValueWithBoolEb
 * Demangled: Caver::BindingValue::ValueWithBool(bool)
 *
 * Callers: 29
 *   0x0000000000219E7C  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *   0x000000000021C914  Caver::AnimationControllerComponent::ValueForBindedProperty(int)
 *   0x000000000021C928  `non-virtual thunk to'Caver::AnimationControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000220E74  Caver::KeyframeAnimationComponent::ValueForBindedProperty(int)
 *   0x00000000002258F4  Caver::ModelComponent::ValueForBindedProperty(int)
 *   0x00000000002300BC  Caver::PortalComponent::ValueForBindedProperty(int)
 *   0x00000000002300F0  `non-virtual thunk to'Caver::PortalComponent::ValueForBindedProperty(int)
 *   0x0000000000232370  Caver::ProgramComponent::ValueForBindedProperty(int)
 *   0x00000000002553A0  Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *   0x0000000000262AE8  Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *   0x00000000002659DC  Caver::DamageComponent::ValueForBindedProperty(int)
 *   0x00000000002688A4  Caver::EntityComponent::ValueForBindedProperty(int)
 *   0x0000000000277B1C  Caver::ItemDropComponent::ValueForBindedProperty(int)
 *   0x000000000027BADC  Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *   0x000000000027F290  Caver::PhysicsObjectComponent::ValueForBindedProperty(int)
 *   0x000000000028CB1C  Caver::ProjectileControllerComponent::ValueForBindedProperty(int)
 *   0x000000000028CB3C  `non-virtual thunk to'Caver::ProjectileControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A99E4  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002B2D00  Caver::DoorControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002B2D14  `non-virtual thunk to'Caver::DoorControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002B5D90  Caver::PressureTriggerComponent::ValueForBindedProperty(int)
 *   0x00000000002B5DD4  `non-virtual thunk to'Caver::PressureTriggerComponent::ValueForBindedProperty(int)
 *   0x00000000002B875C  Caver::GroundMeshComponent::ValueForBindedProperty(int)
 *   0x00000000002B877C  `non-virtual thunk to'Caver::GroundMeshComponent::ValueForBindedProperty(int)
 *   0x00000000002BF8C4  Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *   0x00000000002CA05C  Caver::SwingComponent::ValueForBindedProperty(int)
 *   0x0000000000472358  Caver::SceneObject::ValueForBindedProperty(int)
 *   0x0000000000475F6C  Caver::SceneObjectGroup::ValueForBindedProperty(int)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callees: 1
 *   0x000000000021A054  Caver::BindingValue::ValueWithBool(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE4F8 string=0x00000000001FE4FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BindingValue::ValueWithBool(Caver::BindingValue *this, bool a2)
{
  return _ZN5Caver12BindingValue13ValueWithBoolEb(this, a2);
}

