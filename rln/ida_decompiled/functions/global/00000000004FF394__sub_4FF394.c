/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FF394
 * Mangled: sub_4FF394
 * Demangled: sub_4FF394
 *
 * Callers: 2
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F2368  sub_4F2368
 *
 * Callees: 1
 *   0x00000000004FEB5C  sub_4FEB5C
 *
 * Referenced strings: 3
 *   insn=0x00000000004FF3A8 string=0x00000000004FF3AC "("
 *   insn=0x00000000004FF3AC string=0x00000000004FF3B0 "`"
 *   insn=0x00000000004FF3B0 string=0x00000000004FF3B4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FF394(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // x0

  result = sub_4FEB5C(a1, a3);
  a2[3] = result;
  *a2 = 9;
  return result;
}

