/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551FC4
 * Mangled: sub_551FC4
 * Demangled: sub_551FC4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000551BB0  sub_551BB0
 *
 * Referenced strings: 1
 *   insn=0x0000000000551FFC string=0x0000000000551BB0 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551FC4(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char *a6,
        unsigned __int64 a7,
        int *a8)
{
  __int64 result; // x0

  result = (char *)sub_551BB0(a6, a4, a2, a3, a7, a7 + 4LL * *a8) - a6;
  *a8 = result >> 2;
  return result;
}

