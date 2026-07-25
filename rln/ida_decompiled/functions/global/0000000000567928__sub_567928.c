/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567928
 * Mangled: sub_567928
 * Demangled: sub_567928
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000567928 string=0x000000000056792C "b"
 *   insn=0x0000000000567930 string=0x0000000000567934 """
 *   insn=0x0000000000567934 string=0x0000000000567938 "D"
 *   insn=0x0000000000567938 string=0x000000000056793C "D"
 *   insn=0x000000000056793C string=0x0000000000567940 "_"
 *   insn=0x0000000000567944 string=0x0000000000567948 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_567928(__int64 *result, __int64 *a2)
{
  __int64 v2; // x3
  __int64 v3; // x2

  v2 = *result;
  if ( (*(_DWORD *)(*result - 8) & 0x80000000) != 0 )
    *(_DWORD *)(v2 - 8) = 0;
  v3 = *a2;
  if ( (*(_DWORD *)(*a2 - 8) & 0x80000000) != 0 )
    *(_DWORD *)(v3 - 8) = 0;
  *result = v3;
  *a2 = v2;
  return result;
}

