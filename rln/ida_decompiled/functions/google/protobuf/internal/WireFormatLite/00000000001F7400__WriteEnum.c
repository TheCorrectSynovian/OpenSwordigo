/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7400
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite9WriteEnumEiiPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 20
 *   0x00000000002D2254  Caver::Proto::Texture_ConversionInfo::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D3160  Caver::Proto::Texture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DAE10  Caver::Proto::EditorViewState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DC39C  Caver::Proto::MapNode_Portal::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DD7F0  Caver::Proto::MapNode::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E04FC  Caver::Proto::Item::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E4B54  Caver::Proto::GuideTarget::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000309064  Caver::Proto::GroundMeshGeneratorComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030C5B0  Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030D37C  Caver::Proto::DamageComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030DDF8  Caver::Proto::HealthComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000310274  Caver::Proto::LightComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000315678  Caver::Proto::ElevatorControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000317384  Caver::Proto::ProgramComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003194A0  Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000319EF8  Caver::Proto::EntityControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031D85C  Caver::Proto::ParticleEmitter::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032E9F8  Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000337FF0  Caver::Proto::MeshData::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E3068  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7408 string=0x00000000001F740C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteEnum(
        google::protobuf::internal::WireFormatLite *this,
        int a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  return _ZN6google8protobuf8internal14WireFormatLite9WriteEnumEiiPNS0_2io17CodedOutputStreamE(this, a2, a3, a4);
}

