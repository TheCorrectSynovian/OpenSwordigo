/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2F0C
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite12WriteFixed64EimPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteFixed64(int,ulong,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001F9B50  google::protobuf::internal::WireFormatLite::WriteFixed64(int,ulong,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 2
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *   0x00000000001FFB00  google::protobuf::io::CodedOutputStream::WriteLittleEndian64(ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000004E2F2C string=0x00000000001FDE40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteFixed64(
        google::protobuf::internal::WireFormatLite *this,
        unsigned __int64 a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, (8 * (_DWORD)this) | 1);
  return google::protobuf::io::CodedOutputStream::WriteLittleEndian64(a3, a2);
}

