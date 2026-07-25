/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2420
 * Mangled: _ZNK6google8protobuf11MessageLite16SerializeToArrayEPvi
 * Demangled: google::protobuf::MessageLite::SerializeToArray(void *,int)
 *
 * Callers: 1
 *   0x00000000001F89B0  google::protobuf::MessageLite::SerializeToArray(void *,int)
 *
 * Callees: 1
 *   0x00000000004E2050  sub_4E2050
 *
 * Referenced strings: 8
 *   insn=0x00000000004E2430 string=0x00000000004E2434 "h"
 *   insn=0x00000000004E243C string=0x00000000004E2440 "%@"
 *   insn=0x00000000004E244C string=0x00000000004E2450 "m"
 *   insn=0x00000000004E2450 string=0x00000000004E245C "h"
 *   insn=0x00000000004E2464 string=0x00000000004E2468 "-@"
 *   insn=0x00000000004E2474 string=0x00000000004E2478 " "
 *   insn=0x00000000004E2478 string=0x00000000004E247C "h"
 *   insn=0x00000000004E2480 string=0x00000000004E2484 "%@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::MessageLite::SerializeToArray(
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

