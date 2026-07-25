/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED720
 * Mangled: sub_4ED720
 * Demangled: sub_4ED720
 *
 * Callers: 1
 *   0x00000000004EDB10  sub_4EDB10
 *
 * Callees: 1
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 16
 *   insn=0x00000000004ED72C string=0x00000000004ED730 "hR"
 *   insn=0x00000000004ED730 string=0x00000000004ED734 "a"
 *   insn=0x00000000004ED744 string=0x00000000004ED748 "hZ"
 *   insn=0x00000000004ED748 string=0x00000000004ED74C "a"
 *   insn=0x00000000004ED75C string=0x00000000004ED760 "hN"
 *   insn=0x00000000004ED760 string=0x00000000004ED764 "a\n@"
 *   insn=0x00000000004ED774 string=0x00000000004ED778 "hV"
 *   insn=0x00000000004ED778 string=0x00000000004ED77C "a"
 *   insn=0x00000000004ED788 string=0x00000000004ED78C "z"
 *   insn=0x00000000004ED78C string=0x00000000004ED790 "h^"
 *   insn=0x00000000004ED790 string=0x00000000004ED794 "a"
 *   insn=0x00000000004ED7A0 string=0x00000000004ED7A4 "t"
 *   insn=0x00000000004ED7A4 string=0x00000000004ED7A8 "hJ"
 *   insn=0x00000000004ED7A8 string=0x00000000004ED7AC "a"
 *   insn=0x00000000004ED7B8 string=0x00000000004ED7BC "n"
 *   insn=0x00000000004ED7D4 string=0x00000000004ED7D8 "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED720(__int64 a1, __int64 a2)
{
  sub_4EED74(a1, *(_QWORD *)(a2 + 24), 4LL * *(int *)(a2 + 80), 0);
  sub_4EED74(a1, *(_QWORD *)(a2 + 32), 8LL * *(int *)(a2 + 88), 0);
  sub_4EED74(a1, *(_QWORD *)(a2 + 16), 16LL * *(int *)(a2 + 76), 0);
  sub_4EED74(a1, *(_QWORD *)(a2 + 40), 4LL * *(int *)(a2 + 84), 0);
  sub_4EED74(a1, *(_QWORD *)(a2 + 48), 16LL * *(int *)(a2 + 92), 0);
  sub_4EED74(a1, *(_QWORD *)(a2 + 56), 8LL * *(int *)(a2 + 72), 0);
  return sub_4EED74(a1, a2, 120, 0);
}

