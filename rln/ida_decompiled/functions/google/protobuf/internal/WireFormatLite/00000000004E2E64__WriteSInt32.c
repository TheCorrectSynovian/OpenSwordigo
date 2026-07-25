/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2E64
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite11WriteSInt32EiiPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteSInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001FA8E0  google::protobuf::internal::WireFormatLite::WriteSInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 1
 *   insn=0x00000000004E2E80 string=0x00000000001FDE40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteSInt32(
        google::protobuf::internal::WireFormatLite *this,
        int a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, 8 * (_DWORD)this);
  return google::protobuf::io::CodedOutputStream::WriteVarint32(a3, (2 * a2) ^ (unsigned int)(a2 >> 31));
}

