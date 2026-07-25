/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5710
 * Mangled: ._ZN5Caver5Proto7Vector227MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 12
 *   0x00000000002CFDB0  Caver::Proto::Circle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D0568  Caver::Proto::Polygon::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002DD018  Caver::Proto::MapNode::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FE598  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003063B0  Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000309A5C  Caver::Proto::TextureMappingComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030DB18  Caver::Proto::HealthComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003185B0  Caver::Proto::PhysicsObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000321170  Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032215C  Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000331640  Caver::Proto::OverlayTextComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003342AC  Caver::Proto::SkillComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002CE318  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5718 string=0x00000000001F571C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Vector2::MergePartialFromCodedStream(
        Caver::Proto::Vector2 *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto7Vector227MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

