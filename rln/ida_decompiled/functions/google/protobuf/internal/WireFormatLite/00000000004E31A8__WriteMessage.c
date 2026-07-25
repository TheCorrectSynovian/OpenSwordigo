/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E31A8
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite12WriteMessageEiRKNS0_11MessageLiteEPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 3
 *   insn=0x00000000004E31C8 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E31D0 string=0x00000000004E31D4 "1@"
 *   insn=0x00000000004E31FC string=0x00000000004E3200 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteMessage(
        google::protobuf::internal::WireFormatLite *this,
        __int64 a2,
        const google::protobuf::MessageLite *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  unsigned int v6; // w0

  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, (8 * (_DWORD)this) | 2);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, v6);
  return (*(__int64 (__fastcall **)(__int64, const google::protobuf::MessageLite *))(*(_QWORD *)a2 + 80LL))(a2, a3);
}

