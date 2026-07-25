/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2ED4
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite12WriteFixed32EijPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001F7C80  google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 2
 *   0x00000000001F9290  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(uint)
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 2
 *   insn=0x00000000004E2EF4 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E2F08 string=0x00000000001F9290 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteFixed32(
        google::protobuf::internal::WireFormatLite *this,
        unsigned int a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, (8 * (_DWORD)this) | 5);
  return google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a3, a2);
}

