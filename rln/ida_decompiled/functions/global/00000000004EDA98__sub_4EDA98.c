/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EDA98
 * Mangled: sub_4EDA98
 * Demangled: sub_4EDA98
 *
 * Callers: 1
 *   0x00000000004F3344  sub_4F3344
 *
 * Callees: 1
 *   0x00000000004EDB10  sub_4EDB10
 *
 * Referenced strings: 3
 *   insn=0x00000000004EDAA8 string=0x00000000004EDAAC "t"
 *   insn=0x00000000004EDAAC string=0x00000000004EDAB0 "h"
 *   insn=0x00000000004EDAE4 string=0x00000000004EDAE8 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EDA98(__int64 a1)
{
  __int64 v2; // x20
  __int64 result; // x0
  __int64 v4; // x21
  __int64 v5; // x22

  v2 = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(v2 + 32) = 67;
  result = ((__int64 (*)(void))sub_4EDB10)();
  if ( *(int *)(v2 + 12) >= 1 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      result = sub_4EDB10(a1, *(_QWORD *)v2 + v4, -3);
      ++v5;
      v4 += 8;
    }
    while ( v5 < *(int *)(v2 + 12) );
  }
  return result;
}

