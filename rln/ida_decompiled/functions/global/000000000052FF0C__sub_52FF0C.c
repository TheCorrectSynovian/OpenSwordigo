/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052FF0C
 * Mangled: sub_52FF0C
 * Demangled: sub_52FF0C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000052F63C  sub_52F63C
 *
 * Referenced strings: 1
 *   insn=0x000000000052FF44 string=0x000000000052F63C "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52FF0C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        int *a8)
{
  __int64 result; // x0

  result = sub_52F63C(a6, a4, a2, a3, a7, (_OWORD *)(a7 + *a8)) - a6;
  *a8 = result;
  return result;
}

