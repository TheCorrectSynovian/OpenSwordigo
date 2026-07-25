/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA490
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite11WriteUInt32EijPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 3
 *   0x000000000033AA0C  Caver::Proto::Mesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DF7D0  google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E2DFC  google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA498 string=0x00000000001FA49C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteUInt32(
        google::protobuf::internal::WireFormatLite *this,
        int a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  return _ZN6google8protobuf8internal14WireFormatLite11WriteUInt32EijPNS0_2io17CodedOutputStreamE(this, a2, a3, a4);
}

