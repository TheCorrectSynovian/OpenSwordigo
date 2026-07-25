/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BF4C
 * Mangled: sub_56BF4C
 * Demangled: sub_56BF4C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000056BF4C string=0x000000000056BF50 "d"
 *   insn=0x000000000056BF50 string=0x000000000056BF54 "_"
 *   insn=0x000000000056BF54 string=0x000000000056BF58 "b"
 *   insn=0x000000000056BF58 string=0x000000000056BF5C "exb"
 *   insn=0x000000000056BF64 string=0x000000000056BF68 "\t"
 *   insn=0x000000000056BF64 string=0x000000000056BF78 "B"
 *   insn=0x000000000056BF78 string=0x000000000056BF7C "_"
 *   insn=0x000000000056BF7C string=0x000000000056BF80 "c"
 *   insn=0x000000000056BF80 string=0x000000000056BF6C "`xb"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56BF4C(__int64 *a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // x3
  unsigned __int64 v4; // x4
  int v5; // w5

  v3 = *a1;
  v4 = *(_QWORD *)(*a1 - 24);
  if ( a3 >= v4 )
    return -1;
  v5 = *(_DWORD *)(v3 + 4 * a3);
  if ( v5 == a2 )
  {
    while ( ++a3 < v4 )
    {
      if ( *(_DWORD *)(v3 + 4 * a3) != v5 )
        return a3;
    }
    return -1;
  }
  return a3;
}

