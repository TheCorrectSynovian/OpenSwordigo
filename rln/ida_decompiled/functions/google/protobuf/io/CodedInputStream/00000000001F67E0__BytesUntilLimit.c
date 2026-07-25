/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F67E0
 * Mangled: ._ZN6google8protobuf2io16CodedInputStream15BytesUntilLimitEv
 * Demangled: google::protobuf::io::CodedInputStream::BytesUntilLimit(void)
 *
 * Callers: 6
 *   0x0000000000313AAC  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *   0x000000000031D6E0  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<float> *)
 *   0x000000000033BAB0  Caver::Proto::PackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *   0x00000000004E2BC8  google::protobuf::internal::WireFormatLite::ReadPackedEnumNoInline(google::protobuf::io::CodedInputStream *,bool (*)(int),google::protobuf::RepeatedField<int> *)
 *
 * Callees: 1
 *   0x00000000004E36AC  google::protobuf::io::CodedInputStream::BytesUntilLimit(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F67E4 string=0x00000000004E36AC "(@"
 *   insn=0x00000000001F67E8 string=0x00000000001F67EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedInputStream::BytesUntilLimit(
        google::protobuf::io::CodedInputStream *this)
{
  return _ZN6google8protobuf2io16CodedInputStream15BytesUntilLimitEv(this);
}

