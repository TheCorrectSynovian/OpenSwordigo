/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8840
 * Mangled: ._ZN6google8protobuf2io16CodedInputStream4SkipEi
 * Demangled: google::protobuf::io::CodedInputStream::Skip(int)
 *
 * Callers: 4
 *   0x000000000031D0F4  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000033C068  google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(int,uint,google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *   0x000000000033CE1C  Caver::Proto::UnpackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000004E2900  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Callees: 1
 *   0x00000000004E3744  google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8848 string=0x00000000001F884C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::CodedInputStream::Skip(google::protobuf::io::CodedInputStream *this)
{
  JUMPOUT(0x4E37F0);
}

