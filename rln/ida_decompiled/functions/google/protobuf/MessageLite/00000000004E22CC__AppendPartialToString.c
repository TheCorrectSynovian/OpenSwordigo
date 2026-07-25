/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E22CC
 * Mangled: _ZNK6google8protobuf11MessageLite21AppendPartialToStringEPSs
 * Demangled: google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *
 * Callers: 1
 *   0x00000000001F55F0  google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *
 * Callees: 3
 *   0x00000000004E2050  sub_4E2050
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000569650  sub_569650
 *
 * Referenced strings: 11
 *   insn=0x00000000004E22E4 string=0x00000000004E22E8 "i"
 *   insn=0x00000000004E22EC string=0x00000000004E22F0 "(%@"
 *   insn=0x00000000004E2310 string=0x00000000004E2314 "\t"
 *   insn=0x00000000004E2318 string=0x00000000004E231C "\t"
 *   insn=0x00000000004E2320 string=0x00000000004E2338 "i"
 *   insn=0x00000000004E2344 string=0x00000000004E2348 ")-@"
 *   insn=0x00000000004E2348 string=0x00000000004E234C " "
 *   insn=0x00000000004E2354 string=0x00000000004E2358 " "
 *   insn=0x00000000004E2358 string=0x00000000004E235C "h"
 *   insn=0x00000000004E2360 string=0x00000000004E2364 "%@"
 *   insn=0x00000000004E2374 string=0x00000000004E2378 "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::MessageLite::AppendPartialToString(__int64 a1, __int64 *a2)
{
  __int64 v4; // x22
  int v5; // w20
  __int64 v6; // x8
  __int64 v7; // x21
  int v8; // w0

  v4 = *(_QWORD *)(*a2 - 24);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  sub_569650(a2, v5 + (int)v4, 0);
  v6 = *a2;
  if ( *(_QWORD *)(*a2 - 24) )
  {
    if ( (*(_DWORD *)(v6 - 8) & 0x80000000) == 0 )
    {
      sub_568EA8(a2);
      v6 = *a2;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, v6 + (int)v4) - (v6 + (int)v4);
  if ( v7 != v5 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
    sub_4E2050(v5, v8, v7);
  }
  return 1;
}

