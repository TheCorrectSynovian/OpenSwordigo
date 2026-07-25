/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547FBC
 * Mangled: sub_547FBC
 * Demangled: sub_547FBC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 3
 *   insn=0x0000000000547FDC string=0x0000000000547FE0 "b&@"
 *   insn=0x0000000000547FE4 string=0x0000000000547FE8 "`""
 *   insn=0x0000000000547FEC string=0x0000000000547FF0 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_547FBC(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a2 && (a3 & 0x8000000000000000LL) == 0 )
  {
    sub_56C650(a1 + 72, 0, *(_QWORD *)(*(_QWORD *)(a1 + 72) - 24LL), 0);
    sub_547EA4(a1, a2, a3, 0);
  }
  return a1;
}

