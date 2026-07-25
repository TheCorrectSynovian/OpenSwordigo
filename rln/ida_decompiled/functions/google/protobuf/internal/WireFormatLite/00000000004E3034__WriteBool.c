/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3034
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite9WriteBoolEibPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 3
 *   insn=0x00000000004E304C string=0x00000000004E3050 "|k"
 *   insn=0x00000000004E3050 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E3060 string=0x00000000004E3064 "wk"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteBool(
        google::protobuf::internal::WireFormatLite *this,
        char a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, 8 * (_DWORD)this);
  return google::protobuf::io::CodedOutputStream::WriteVarint32(a3, a2 & 1);
}

