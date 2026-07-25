/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056839C
 * Mangled: sub_56839C
 * Demangled: sub_56839C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000056839C string=0x00000000005683A0 "!"
 *   insn=0x00000000005683A8 string=0x00000000005683AC "C"
 *   insn=0x00000000005683AC string=0x00000000005683B4 "c"
 *   insn=0x00000000005683B4 string=0x00000000005683B8 "_"
 *   insn=0x00000000005683B8 string=0x00000000005683BC "@"
 *   insn=0x00000000005683C8 string=0x00000000005683CC " "
 *   insn=0x00000000005683D8 string=0x00000000005683DC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56839C(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3)
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
    while ( result != -1 && *(unsigned __int8 *)(v3 + result) != a2 )
      --result;
  }
  return result;
}

