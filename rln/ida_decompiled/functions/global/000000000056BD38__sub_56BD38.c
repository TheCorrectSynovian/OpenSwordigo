/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BD38
 * Mangled: sub_56BD38
 * Demangled: sub_56BD38
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000056BD40 string=0x000000000056BD44 "C"
 *   insn=0x000000000056BD44 string=0x000000000056BD4C "c"
 *   insn=0x000000000056BD4C string=0x000000000056BD50 "_"
 *   insn=0x000000000056BD50 string=0x000000000056BD54 "@"
 *   insn=0x000000000056BD5C string=0x000000000056BD60 "?"
 *   insn=0x000000000056BD60 string=0x000000000056BD64 " "
 *   insn=0x000000000056BD70 string=0x000000000056BD74 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56BD38(__int64 *a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // x4
  __int64 result; // x0
  __int64 v5; // x3
  unsigned __int64 v6; // x3

  v3 = *a1;
  result = -1;
  v5 = *(_QWORD *)(v3 - 24);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( a3 > v6 )
      result = v6;
    else
      result = a3;
    while ( result != -1 && a2 != *(_DWORD *)(v3 + 4 * result) )
      --result;
  }
  return result;
}

