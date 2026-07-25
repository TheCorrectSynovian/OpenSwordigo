/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3204
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite22WriteGroupMaybeToArrayEiRKNS0_11MessageLiteEPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteGroupMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Referenced strings: 11
 *   insn=0x00000000004E322C string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004E3234 string=0x00000000004E3238 "1@"
 *   insn=0x00000000004E323C string=0x00000000004E3240 "h"
 *   insn=0x00000000004E3240 string=0x00000000004E3244 ""
 *   insn=0x00000000004E3244 string=0x00000000004E3248 "k"
 *   insn=0x00000000004E3248 string=0x00000000004E324C "a"
 *   insn=0x00000000004E324C string=0x00000000004E3250 "h"
 *   insn=0x00000000004E3250 string=0x00000000004E3254 ")"
 *   insn=0x00000000004E3254 string=0x00000000004E3258 "i"
 *   insn=0x00000000004E3264 string=0x00000000004E3268 "-@"
 *   insn=0x00000000004E327C string=0x00000000004E3280 ")@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteGroupMaybeToArray(
        google::protobuf::internal::WireFormatLite *this,
        __int64 a2,
        const google::protobuf::MessageLite *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  int v6; // w21
  int v7; // w0
  int v8; // w8
  bool v9; // vf
  int v10; // w8
  __int64 v11; // x1

  v6 = 8 * (_DWORD)this;
  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, (8 * (_DWORD)this) | 3);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
  v8 = *((_DWORD *)a3 + 4);
  v9 = __OFSUB__(v8, v7);
  v10 = v8 - v7;
  if ( v10 < 0 != v9 || (v11 = *((_QWORD *)a3 + 1), *((_DWORD *)a3 + 4) = v10, *((_QWORD *)a3 + 1) = v11 + v7, !v11) )
    (*(void (__fastcall **)(__int64, const google::protobuf::MessageLite *))(*(_QWORD *)a2 + 80LL))(a2, a3);
  else
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
  return google::protobuf::io::CodedOutputStream::WriteVarint32(a3, v6 | 4u);
}

