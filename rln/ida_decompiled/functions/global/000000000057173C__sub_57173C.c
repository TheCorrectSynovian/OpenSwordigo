/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057173C
 * Mangled: sub_57173C
 * Demangled: sub_57173C
 *
 * Callers: 2
 *   0x0000000000571758  sub_571758
 *   0x0000000000571760  sub_571760
 *
 * Callees: 1
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 3
 *   insn=0x0000000000571744 string=0x0000000000571748 "!$E"
 *   insn=0x0000000000571748 string=0x000000000057174C "!@"
 *   insn=0x000000000057174C string=0x0000000000571750 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57173C(__int64 a1)
{
  *(_QWORD *)(a1 + 24) = off_6B6B50;
  return sub_5221DC((_QWORD *)(a1 + 24));
}

