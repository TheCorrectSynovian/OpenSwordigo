/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054EE64
 * Mangled: sub_54EE64
 * Demangled: sub_54EE64
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000054EE64 string=0x000000000054EE68 "BH@"
 *   insn=0x000000000054EE68 string=0x000000000054EE6C """
 *   insn=0x000000000054EE70 string=0x000000000054EE74 "BL@"
 *   insn=0x000000000054EE74 string=0x000000000054EE78 """
 *   insn=0x000000000054EE7C string=0x000000000054EE80 "BP@"
 *   insn=0x000000000054EE80 string=0x000000000054EE84 """
 *   insn=0x000000000054EE88 string=0x000000000054EE8C "BT@"
 *   insn=0x000000000054EE8C string=0x000000000054EE90 """
 *   insn=0x000000000054EE94 string=0x000000000054EE98 "BX@"
 *   insn=0x000000000054EE98 string=0x000000000054EE9C """
 *   insn=0x000000000054EEA0 string=0x000000000054EEA4 "B\@"
 *   insn=0x000000000054EEA4 string=0x000000000054EEA8 """
 *   insn=0x000000000054EEB0 string=0x000000000054EEB4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54EE64(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL);
  a2[1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  a2[2] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 160LL);
  a2[3] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 168LL);
  a2[4] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 176LL);
  a2[5] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 184LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL);
  a2[6] = result;
  return result;
}

