/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAD40
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite29ReadRepeatedPrimitiveNoInlineIiLNS2_9FieldTypeE15EEEbijPNS0_2io16CodedInputStreamEPNS0_13RepeatedFieldIT_EE
 * Demangled: google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(int,uint,google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Callers: 1
 *   0x000000000033BAB0  Caver::Proto::PackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x000000000033C068  google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(int,uint,google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAD48 string=0x00000000001FAD4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(
        int a1,
        int a2,
        google::protobuf::io::CodedInputStream *this)
{
  return _ZN6google8protobuf8internal14WireFormatLite29ReadRepeatedPrimitiveNoInlineIiLNS2_9FieldTypeE15EEEbijPNS0_2io16CodedInputStreamEPNS0_13RepeatedFieldIT_EE(
           a1,
           a2,
           this);
}

