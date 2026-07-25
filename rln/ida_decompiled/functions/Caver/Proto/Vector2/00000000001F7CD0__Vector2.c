/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7CD0
 * Mangled: ._ZN5Caver5Proto7Vector2C2Ev
 * Demangled: Caver::Proto::Vector2::Vector2(void)
 *
 * Callers: 30
 *   0x000000000022D0C0  Caver::OverlayTextComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023E2D4  Caver::TextureMappingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000026FB18  Caver::HealthComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027E034  Caver::PhysicsObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028DC80  Caver::SkillComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002AF810  Caver::SimpleGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002DC700  Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&)
 *   0x00000000002DD018  Caver::Proto::MapNode::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x00000000002FE598  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *   0x00000000003063B0  Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030955C  Caver::Proto::TextureMappingComponent::TextureMappingComponent(Caver::Proto::TextureMappingComponent const&)
 *   0x0000000000309A5C  Caver::Proto::TextureMappingComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030D7C0  Caver::Proto::HealthComponent::HealthComponent(Caver::Proto::HealthComponent const&)
 *   0x000000000030DB18  Caver::Proto::HealthComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031817C  Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent(Caver::Proto::PhysicsObjectComponent const&)
 *   0x00000000003185B0  Caver::Proto::PhysicsObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *   0x0000000000321170  Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000321CCC  Caver::Proto::SimpleGlowComponent::SimpleGlowComponent(Caver::Proto::SimpleGlowComponent const&)
 *   0x000000000032215C  Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000331088  Caver::Proto::OverlayTextComponent::OverlayTextComponent(Caver::Proto::OverlayTextComponent const&)
 *   0x0000000000331640  Caver::Proto::OverlayTextComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000333DBC  Caver::Proto::SkillComponent::SkillComponent(Caver::Proto::SkillComponent const&)
 *   0x00000000003342AC  Caver::Proto::SkillComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003BEE30  Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x0000000000489E98  Caver::SavePolygonToProtobufMessage(Caver::Polygon const&,Caver::Proto::Polygon *)
 *
 * Callees: 1
 *   0x00000000002CE098  Caver::Proto::DateTime::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7CD8 string=0x00000000001F7CDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Vector2::Vector2(Caver::Proto::Vector2 *this)
{
  JUMPOUT(0x2CE0F0);
}

