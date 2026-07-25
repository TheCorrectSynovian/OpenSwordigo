/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CA40
 * Mangled: sub_52CA40
 * Demangled: sub_52CA40
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000052CA40 string=0x000000000052CA44 "B@"
 *   insn=0x000000000052CA44 string=0x000000000052CA48 """
 *   insn=0x000000000052CA50 string=0x000000000052CA54 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CA40(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  a2[1] = result;
  return result;
}

