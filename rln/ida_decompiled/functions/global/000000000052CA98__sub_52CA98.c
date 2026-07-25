/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CA98
 * Mangled: sub_52CA98
 * Demangled: sub_52CA98
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000052CA98 string=0x000000000052CA9C "B @"
 *   insn=0x000000000052CA9C string=0x000000000052CAA0 """
 *   insn=0x000000000052CAA8 string=0x000000000052CAAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CA98(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  a2[1] = result;
  return result;
}

