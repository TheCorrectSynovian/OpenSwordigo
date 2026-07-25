/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED6C8
 * Mangled: sub_4ED6C8
 * Demangled: sub_4ED6C8
 *
 * Callers: 2
 *   0x00000000004EF720  sub_4EF720
 *   0x00000000004F5064  sub_4F5064
 *
 * Callees: 3
 *   0x00000000001FBC40  .memset
 *   0x00000000004EE48C  sub_4EE48C
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 5
 *   insn=0x00000000004ED6E8 string=0x00000000004ED6EC """
 *   insn=0x00000000004ED6F4 string=0x00000000004ED6F8 "e"
 *   insn=0x00000000004ED6F8 string=0x00000000004EE48C ""
 *   insn=0x00000000004ED704 string=0x00000000004ED708 "N9"
 *   insn=0x00000000004ED708 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED6C8(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_4EED74(a1, 0, 0, 120);
  sub_4EE48C(a1, v2, 9);
  memset((void *)(v2 + 16), 0, 0x58u);
  *(_DWORD *)(v2 + 112) = 0;
  return v2;
}

