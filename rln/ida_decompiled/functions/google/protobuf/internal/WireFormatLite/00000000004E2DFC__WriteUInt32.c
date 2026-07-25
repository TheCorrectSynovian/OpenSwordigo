/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2DFC
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite11WriteUInt32EijPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001FA490  google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 2
 *   insn=0x00000000004E2E14 string=0x00000000004E2E18 "\nl"
 *   insn=0x00000000004E2E18 string=0x00000000001FDE40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteUInt32(
        google::protobuf::internal::WireFormatLite *this,
        unsigned int a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, 8 * (_DWORD)this);
  return google::protobuf::io::CodedOutputStream::WriteVarint32(a3, a2);
}

