/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CB0C
 * Mangled: sub_52CB0C
 * Demangled: sub_52CB0C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000052CB0C string=0x000000000052CB10 "BH@"
 *   insn=0x000000000052CB10 string=0x000000000052CB14 """
 *   insn=0x000000000052CB18 string=0x000000000052CB1C "BL@"
 *   insn=0x000000000052CB1C string=0x000000000052CB20 """
 *   insn=0x000000000052CB24 string=0x000000000052CB28 "BP@"
 *   insn=0x000000000052CB28 string=0x000000000052CB2C """
 *   insn=0x000000000052CB30 string=0x000000000052CB34 "BT@"
 *   insn=0x000000000052CB34 string=0x000000000052CB38 """
 *   insn=0x000000000052CB3C string=0x000000000052CB40 "BX@"
 *   insn=0x000000000052CB40 string=0x000000000052CB44 """
 *   insn=0x000000000052CB48 string=0x000000000052CB4C "B\@"
 *   insn=0x000000000052CB4C string=0x000000000052CB50 """
 *   insn=0x000000000052CB58 string=0x000000000052CB5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CB0C(__int64 a1, _QWORD *a2)
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

