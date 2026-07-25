/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA8E0
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite11WriteSInt32EiiPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteSInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E2E64  google::protobuf::internal::WireFormatLite::WriteSInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA8E8 string=0x00000000001FA8EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteSInt32(
        google::protobuf::internal::WireFormatLite *this,
        int a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  return _ZN6google8protobuf8internal14WireFormatLite11WriteSInt32EiiPNS0_2io17CodedOutputStreamE(this, a2, a3, a4);
}

