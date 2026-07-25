/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054ED98
 * Mangled: sub_54ED98
 * Demangled: sub_54ED98
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000054ED98 string=0x000000000054ED9C "B@"
 *   insn=0x000000000054ED9C string=0x000000000054EDA0 """
 *   insn=0x000000000054EDA8 string=0x000000000054EDAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54ED98(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  a2[1] = result;
  return result;
}

