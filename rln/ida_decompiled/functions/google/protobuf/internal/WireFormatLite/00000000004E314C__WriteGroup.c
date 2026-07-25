/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E314C
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite10WriteGroupEiRKNS0_11MessageLiteEPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteGroup(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001F8D50  google::protobuf::internal::WireFormatLite::WriteGroup(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 4
 *   insn=0x00000000004E3170 string=0x00000000004E3174 "3k"
 *   insn=0x00000000004E3174 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E3180 string=0x00000000004E3184 ")@"
 *   insn=0x00000000004E31A0 string=0x00000000004E31A4 "'k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteGroup(
        google::protobuf::internal::WireFormatLite *this,
        __int64 a2,
        const google::protobuf::MessageLite *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  int v6; // w21

  v6 = (int)this;
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, (8 * (_DWORD)this) | 3);
  (*(void (__fastcall **)(__int64, const google::protobuf::MessageLite *))(*(_QWORD *)a2 + 80LL))(a2, a3);
  return google::protobuf::io::CodedOutputStream::WriteVarint32(a3, (8 * v6) | 4u);
}

