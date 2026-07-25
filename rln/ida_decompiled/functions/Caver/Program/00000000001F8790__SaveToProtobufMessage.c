/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8790
 * Mangled: ._ZNK5Caver7Program21SaveToProtobufMessageEPNS_5Proto7ProgramE
 * Demangled: Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *
 * Callers: 17
 *   0x0000000000217DC4  Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000231738  Caver::ProgramComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000233298  Caver::PropertiesComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023F59C  Caver::TouchableComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000254730  Caver::BreakableObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000261B10  Caver::CollectableItemComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000267090  Caver::EntityActionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000272194  Caver::HeroEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027B1EC  Caver::MonsterEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028FB40  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000290EE0  Caver::AttackComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B54AC  Caver::PressureTriggerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002BEF94  Caver::GroundPolygonComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x00000000004752D4  Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *
 * Callees: 1
 *   0x00000000004C0B40  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8798 string=0x00000000001F879C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Program::SaveToProtobufMessage(Caver::Program *this, Caver::Proto::Program *a2)
{
  return _ZNK5Caver7Program21SaveToProtobufMessageEPNS_5Proto7ProgramE(this, a2);
}

