/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA5F0
 * Mangled: ._ZN5Caver12BindingValue16ValueWithProgramERKNS_7ProgramE
 * Demangled: Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *
 * Callers: 23
 *   0x0000000000219E7C  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *   0x0000000000232370  Caver::ProgramComponent::ValueForBindedProperty(int)
 *   0x00000000002335B8  Caver::PropertiesComponent::ValueForBindedProperty(int)
 *   0x00000000002335C8  `non-virtual thunk to'Caver::PropertiesComponent::ValueForBindedProperty(int)
 *   0x000000000023FA98  Caver::TouchableComponent::ValueForBindedProperty(int)
 *   0x000000000023FAB8  `non-virtual thunk to'Caver::TouchableComponent::ValueForBindedProperty(int)
 *   0x00000000002553A0  Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *   0x0000000000262AE8  Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *   0x00000000002673B0  Caver::EntityActionComponent::ValueForBindedProperty(int)
 *   0x00000000002673C0  `non-virtual thunk to'Caver::EntityActionComponent::ValueForBindedProperty(int)
 *   0x00000000002724E4  Caver::HeroEntityComponent::ValueForBindedProperty(int)
 *   0x00000000002724F8  `non-virtual thunk to'Caver::HeroEntityComponent::ValueForBindedProperty(int)
 *   0x000000000027BADC  Caver::MonsterEntityComponent::ValueForBindedProperty(int)
 *   0x000000000028FE90  Caver::SpellComponent::ValueForBindedProperty(int)
 *   0x000000000028FEA0  `non-virtual thunk to'Caver::SpellComponent::ValueForBindedProperty(int)
 *   0x00000000002920E8  Caver::AttackComponent::ValueForBindedProperty(int)
 *   0x00000000002B5D90  Caver::PressureTriggerComponent::ValueForBindedProperty(int)
 *   0x00000000002B5DD4  `non-virtual thunk to'Caver::PressureTriggerComponent::ValueForBindedProperty(int)
 *   0x00000000002BF8C4  Caver::GroundPolygonComponent::ValueForBindedProperty(int)
 *   0x00000000004608A4  Caver::ObjectTemplate::ValueForBindedProperty(int)
 *   0x0000000000472358  Caver::SceneObject::ValueForBindedProperty(int)
 *   0x0000000000475F6C  Caver::SceneObjectGroup::ValueForBindedProperty(int)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callees: 1
 *   0x0000000000487824  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA5F8 string=0x00000000001FA5FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BindingValue::ValueWithProgram(Caver::BindingValue *this, const Caver::Program *a2)
{
  return _ZN5Caver12BindingValue16ValueWithProgramERKNS_7ProgramE(this, a2);
}

