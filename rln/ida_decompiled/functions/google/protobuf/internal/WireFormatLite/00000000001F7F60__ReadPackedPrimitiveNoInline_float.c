/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7F60
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite27ReadPackedPrimitiveNoInlineIfLNS2_9FieldTypeE2EEEbPNS0_2io16CodedInputStreamEPNS0_13RepeatedFieldIT_EE
 * Demangled: google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<float> *)
 *
 * Callers: 2
 *   0x000000000031D0F4  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000033CE1C  Caver::Proto::UnpackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x000000000031D6E0  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<float> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7F68 string=0x00000000001F7F6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(
        google::protobuf::io::CodedInputStream *this)
{
  return _ZN6google8protobuf8internal14WireFormatLite27ReadPackedPrimitiveNoInlineIfLNS2_9FieldTypeE2EEEbPNS0_2io16CodedInputStreamEPNS0_13RepeatedFieldIT_EE(this);
}

