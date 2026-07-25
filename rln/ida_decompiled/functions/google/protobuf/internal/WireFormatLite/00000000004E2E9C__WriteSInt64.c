/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2E9C
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite11WriteSInt64EilPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteSInt64(int,long,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001F9540  google::protobuf::internal::WireFormatLite::WriteSInt64(int,long,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 2
 *   0x00000000001F6D10  google::protobuf::io::CodedOutputStream::WriteVarint64(ulong)
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 2
 *   insn=0x00000000004E2EB8 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E2ED0 string=0x00000000001F6D10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteSInt64(
        google::protobuf::internal::WireFormatLite *this,
        __int64 a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, 8 * (_DWORD)this);
  return google::protobuf::io::CodedOutputStream::WriteVarint64(a3, (2 * a2) ^ (a2 >> 63));
}

