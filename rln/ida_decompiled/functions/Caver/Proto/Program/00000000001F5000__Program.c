/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5000
 * Mangled: ._ZN5Caver5Proto7ProgramC2Ev
 * Demangled: Caver::Proto::Program::Program(void)
 *
 * Callers: 51
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
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *   0x00000000002FD4AC  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FE598  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000300304  Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup const&)
 *   0x00000000003009C8  Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *   0x0000000000301B2C  Caver::Proto::Scene::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *   0x00000000003063B0  Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030B6B4  Caver::Proto::CollisionShapeComponent::CollisionShapeComponent(Caver::Proto::CollisionShapeComponent const&)
 *   0x000000000030BCE0  Caver::Proto::CollisionShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003158A8  Caver::Proto::PressureTriggerComponent::PressureTriggerComponent(Caver::Proto::PressureTriggerComponent const&)
 *   0x0000000000315CD0  Caver::Proto::PressureTriggerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000316C78  Caver::Proto::ProgramComponent::ProgramComponent(Caver::Proto::ProgramComponent const&)
 *   0x0000000000317010  Caver::Proto::ProgramComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000317654  Caver::Proto::MonsterEntityComponent::MonsterEntityComponent(Caver::Proto::MonsterEntityComponent const&)
 *   0x0000000000317A70  Caver::Proto::MonsterEntityComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000318DB0  Caver::Proto::BreakableObjectComponent::BreakableObjectComponent(Caver::Proto::BreakableObjectComponent const&)
 *   0x0000000000319134  Caver::Proto::BreakableObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031A2E8  Caver::Proto::EntityActionComponent::EntityActionComponent(Caver::Proto::EntityActionComponent const&)
 *   0x000000000031A5F0  Caver::Proto::EntityActionComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031B71C  Caver::Proto::HeroEntityComponent::HeroEntityComponent(Caver::Proto::HeroEntityComponent const&)
 *   0x000000000031BA24  Caver::Proto::HeroEntityComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031C4F8  Caver::Proto::PropertiesComponent::PropertiesComponent(Caver::Proto::PropertiesComponent const&)
 *   0x000000000031C800  Caver::Proto::PropertiesComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000325670  Caver::Proto::AttackComponent::AttackComponent(Caver::Proto::AttackComponent const&)
 *   0x0000000000325B44  Caver::Proto::AttackComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032DFC8  Caver::Proto::CollectableItemComponent::CollectableItemComponent(Caver::Proto::CollectableItemComponent const&)
 *   0x000000000032E58C  Caver::Proto::CollectableItemComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032EDDC  Caver::Proto::TouchableComponent::TouchableComponent(Caver::Proto::TouchableComponent const&)
 *   0x000000000032F104  Caver::Proto::TouchableComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000336E24  Caver::Proto::SpellComponent::SpellComponent(Caver::Proto::SpellComponent const&)
 *   0x000000000033712C  Caver::Proto::SpellComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x00000000004752D4  Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *
 * Callees: 1
 *   0x00000000002D5534  Caver::Proto::Font::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5008 string=0x00000000001F500C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Program::Program(Caver::Proto::Program *this)
{
  JUMPOUT(0x2D558C);
}

