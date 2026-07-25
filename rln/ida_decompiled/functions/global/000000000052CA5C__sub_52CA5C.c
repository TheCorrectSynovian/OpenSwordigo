/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CA5C
 * Mangled: sub_52CA5C
 * Demangled: sub_52CA5C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000052CA5C string=0x000000000052CA60 "B"
 *   insn=0x000000000052CA60 string=0x000000000052CA64 """
 *   insn=0x000000000052CA6C string=0x000000000052CA70 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CA5C(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
  a2[1] = result;
  return result;
}

