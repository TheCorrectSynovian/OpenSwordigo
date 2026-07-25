/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054EE0C
 * Mangled: sub_54EE0C
 * Demangled: sub_54EE0C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000054EE0C string=0x000000000054EE10 "B,@"
 *   insn=0x000000000054EE10 string=0x000000000054EE14 """
 *   insn=0x000000000054EE18 string=0x000000000054EE1C "B0@"
 *   insn=0x000000000054EE1C string=0x000000000054EE20 """
 *   insn=0x000000000054EE24 string=0x000000000054EE28 "B4@"
 *   insn=0x000000000054EE28 string=0x000000000054EE2C """
 *   insn=0x000000000054EE30 string=0x000000000054EE34 "B8@"
 *   insn=0x000000000054EE34 string=0x000000000054EE38 """
 *   insn=0x000000000054EE3C string=0x000000000054EE40 "B<@"
 *   insn=0x000000000054EE40 string=0x000000000054EE44 """
 *   insn=0x000000000054EE48 string=0x000000000054EE4C "B@@"
 *   insn=0x000000000054EE4C string=0x000000000054EE50 """
 *   insn=0x000000000054EE58 string=0x000000000054EE5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54EE0C(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
  a2[1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL);
  a2[2] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL);
  a2[3] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  a2[4] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
  a2[5] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  a2[6] = result;
  return result;
}

