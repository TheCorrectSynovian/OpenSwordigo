/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED5C8
 * Mangled: sub_4ED5C8
 * Demangled: sub_4ED5C8
 *
 * Callers: 1
 *   0x00000000004EDB10  sub_4EDB10
 *
 * Callees: 1
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 5
 *   insn=0x00000000004ED5C8 string=0x00000000004ED5CC ")`"
 *   insn=0x00000000004ED5D4 string=0x00000000004ED5D8 "("
 *   insn=0x00000000004ED5D8 string=0x00000000004ED5DC "("
 *   insn=0x00000000004ED5DC string=0x00000000004ED5E0 "("
 *   insn=0x00000000004ED5E0 string=0x00000000004ED5E4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED5C8(__int64 a1, _QWORD *a2)
{
  if ( (_QWORD *)a2[2] != a2 + 3 )
  {
    *(_QWORD *)(a2[4] + 24LL) = a2[3];
    *(_QWORD *)(a2[3] + 32LL) = a2[4];
  }
  return sub_4EED74(a1, a2, 40, 0);
}

