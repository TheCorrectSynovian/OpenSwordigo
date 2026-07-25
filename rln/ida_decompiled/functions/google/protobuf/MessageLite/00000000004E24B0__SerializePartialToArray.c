/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E24B0
 * Mangled: _ZNK6google8protobuf11MessageLite23SerializePartialToArrayEPvi
 * Demangled: google::protobuf::MessageLite::SerializePartialToArray(void *,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004E2050  sub_4E2050
 *
 * Referenced strings: 8
 *   insn=0x00000000004E24C0 string=0x00000000004E24C4 "h"
 *   insn=0x00000000004E24CC string=0x00000000004E24D0 "%@"
 *   insn=0x00000000004E24DC string=0x00000000004E24E0 "m"
 *   insn=0x00000000004E24E0 string=0x00000000004E24EC "h"
 *   insn=0x00000000004E24F4 string=0x00000000004E24F8 "-@"
 *   insn=0x00000000004E2504 string=0x00000000004E2508 " "
 *   insn=0x00000000004E2508 string=0x00000000004E250C "h"
 *   insn=0x00000000004E2510 string=0x00000000004E2514 "%@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::MessageLite::SerializePartialToArray(
        google::protobuf::MessageLite *this,
        void *a2,
        int a3)
{
  int v6; // w20
  __int64 v8; // x21
  int v9; // w0

  v6 = (*(__int64 (__fastcall **)(google::protobuf::MessageLite *))(*(_QWORD *)this + 72LL))(this);
  if ( v6 > a3 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(google::protobuf::MessageLite *, void *))(*(_QWORD *)this + 88LL))(this, a2)
     - (_QWORD)a2;
  if ( v8 != v6 )
  {
    v9 = (*(__int64 (__fastcall **)(google::protobuf::MessageLite *))(*(_QWORD *)this + 72LL))(this);
    sub_4E2050(v6, v9, v8);
  }
  return 1;
}

