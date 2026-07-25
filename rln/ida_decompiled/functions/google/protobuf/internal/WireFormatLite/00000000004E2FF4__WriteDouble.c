/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2FF4
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite11WriteDoubleEidPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteDouble(int,double,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001F4260  google::protobuf::internal::WireFormatLite::WriteDouble(int,double,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 2
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *   0x00000000001FFB00  google::protobuf::io::CodedOutputStream::WriteLittleEndian64(ulong)
 *
 * Referenced strings: 2
 *   insn=0x00000000004E3010 string=0x00000000004E3014 ""
 *   insn=0x00000000004E3018 string=0x00000000001FDE40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteDouble(
        google::protobuf::internal::WireFormatLite *this,
        google::protobuf::io::CodedOutputStream *a2,
        double a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(a2, (8 * (_DWORD)this) | 1);
  return google::protobuf::io::CodedOutputStream::WriteLittleEndian64(a2, *(unsigned __int64 *)&a3);
}

