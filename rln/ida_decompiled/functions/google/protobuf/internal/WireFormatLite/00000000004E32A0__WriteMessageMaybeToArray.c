/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E32A0
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite24WriteMessageMaybeToArrayEiRKNS0_11MessageLiteEPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001FEF00  google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 9
 *   insn=0x00000000004E32C4 string=0x00000000004E32C8 "h"
 *   insn=0x00000000004E32C4 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E32CC string=0x00000000004E32D0 "1@"
 *   insn=0x00000000004E32E8 string=0x00000000004E32EC ""
 *   insn=0x00000000004E32EC string=0x00000000004E32F0 "K"
 *   insn=0x00000000004E32F0 string=0x00000000004E3318 "h"
 *   insn=0x00000000004E32F8 string=0x00000000004E32FC ")"
 *   insn=0x00000000004E3304 string=0x00000000004E3308 "h"
 *   insn=0x00000000004E3330 string=0x00000000004E3334 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        google::protobuf::internal::WireFormatLite *this,
        __int64 a2,
        const google::protobuf::MessageLite **a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  signed int v6; // w21
  int v7; // w8
  bool v8; // vf
  int v9; // w8
  const google::protobuf::MessageLite *v10; // x1
  __int64 v11; // x0
  __int64 (__fastcall *v12)(__int64, const google::protobuf::MessageLite *); // x2

  google::protobuf::io::CodedOutputStream::WriteVarint32(
    (google::protobuf::io::CodedOutputStream *)a3,
    (8 * (_DWORD)this) | 2);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
  google::protobuf::io::CodedOutputStream::WriteVarint32((google::protobuf::io::CodedOutputStream *)a3, v6);
  v7 = *((_DWORD *)a3 + 4);
  v8 = __OFSUB__(v7, v6);
  v9 = v7 - v6;
  if ( v9 < 0 != v8
    || (v10 = a3[1], *((_DWORD *)a3 + 4) = v9, a3[1] = (const google::protobuf::MessageLite *)((char *)v10 + v6), !v10) )
  {
    v11 = a2;
    v10 = (const google::protobuf::MessageLite *)a3;
    v12 = *(__int64 (__fastcall **)(__int64, const google::protobuf::MessageLite *))(*(_QWORD *)a2 + 80LL);
  }
  else
  {
    v11 = a2;
    v12 = *(__int64 (__fastcall **)(__int64, const google::protobuf::MessageLite *))(*(_QWORD *)a2 + 88LL);
  }
  return v12(v11, v10);
}

