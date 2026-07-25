/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9860
 * Mangled: ._ZN5Caver5Proto9Rectangle27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 7
 *   0x00000000002D17CC  Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D3AB8  Caver::Proto::Font_Glyph::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D4A18  Caver::Proto::Font::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FE598  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000301B2C  Caver::Proto::Scene::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003078F0  Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030AF94  Caver::Proto::ShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002CEE54  Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9868 string=0x00000000001F986C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Rectangle::MergePartialFromCodedStream(
        Caver::Proto::Rectangle *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto9Rectangle27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

