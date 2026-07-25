/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002035C0
 * Mangled: ._ZN5Caver5Proto7Vector29MergeFromERKS1_
 * Demangled: Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *
 * Callers: 15
 *   0x00000000002CE110  Caver::Proto::Vector2::Vector2(Caver::Proto::Vector2 const&)
 *   0x00000000002CE510  Caver::Proto::Vector2::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002CE514  Caver::Proto::Vector2::CopyFrom(Caver::Proto::Vector2 const&)
 *   0x00000000002CFA80  Caver::Proto::Circle::Circle(Caver::Proto::Circle const&)
 *   0x00000000002D09C4  google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Vector2> const&)
 *   0x00000000002DC700  Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&)
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *   0x000000000030955C  Caver::Proto::TextureMappingComponent::TextureMappingComponent(Caver::Proto::TextureMappingComponent const&)
 *   0x000000000030D7C0  Caver::Proto::HealthComponent::HealthComponent(Caver::Proto::HealthComponent const&)
 *   0x000000000031817C  Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent(Caver::Proto::PhysicsObjectComponent const&)
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *   0x0000000000321CCC  Caver::Proto::SimpleGlowComponent::SimpleGlowComponent(Caver::Proto::SimpleGlowComponent const&)
 *   0x0000000000331088  Caver::Proto::OverlayTextComponent::OverlayTextComponent(Caver::Proto::OverlayTextComponent const&)
 *   0x0000000000333DBC  Caver::Proto::SkillComponent::SkillComponent(Caver::Proto::SkillComponent const&)
 *
 * Callees: 1
 *   0x00000000002CE110  Caver::Proto::Vector2::Vector2(Caver::Proto::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002035C8 string=0x00000000002035CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 *this, const Caver::Proto::Vector2 *a2)
{
  JUMPOUT(0x2CE15C);
}

