/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4540
 * Mangled: ._ZNK5Caver12BindingValue12ProgramValueEv
 * Demangled: Caver::BindingValue::ProgramValue(void)
 *
 * Callers: 16
 *   0x000000000021A3FC  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002324EC  Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002335DC  Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000023FADC  Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000255538  Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000262B50  Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002673D4  Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000272510  Caver::HeroEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000027BB28  Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028FEB4  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029215C  Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B5E1C  Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002BF910  Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000460B48  Caver::ObjectTemplate::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000004760BC  Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000487A0C  Caver::BindingValue::ProgramValue(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4548 string=0x00000000001F454C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BindingValue::ProgramValue(Caver::BindingValue *this)
{
  return _ZNK5Caver12BindingValue12ProgramValueEv(this);
}

