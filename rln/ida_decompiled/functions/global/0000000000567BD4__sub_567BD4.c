/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567BD4
 * Mangled: sub_567BD4
 * Demangled: sub_567BD4
 *
 * Callers: 5
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000545DD0  sub_545DD0
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000567BD4 string=0x0000000000567BD8 "b"
 *   insn=0x0000000000567BDC string=0x0000000000567BE0 """
 *   insn=0x0000000000567BE0 string=0x0000000000567BE4 "D"
 *   insn=0x0000000000567BE4 string=0x0000000000567BE8 "D"
 *   insn=0x0000000000567BE8 string=0x0000000000567BEC "_"
 *   insn=0x0000000000567BF0 string=0x0000000000567BF4 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_567BD4(__int64 *result, __int64 *a2)
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

