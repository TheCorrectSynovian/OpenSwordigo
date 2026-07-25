/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2FB4
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite10WriteFloatEifPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 2
 *   0x00000000001F9290  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(uint)
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 3
 *   insn=0x00000000004E2FD0 string=0x00000000004E2FD4 ""
 *   insn=0x00000000004E2FD8 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E2FF0 string=0x00000000001F9290 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteFloat(
        google::protobuf::internal::WireFormatLite *this,
        google::protobuf::io::CodedOutputStream *a2,
        float a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(a2, (8 * (_DWORD)this) | 5);
  return google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a2, LODWORD(a3));
}

