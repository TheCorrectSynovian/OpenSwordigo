/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED4B4
 * Mangled: sub_4ED4B4
 * Demangled: sub_4ED4B4
 *
 * Callers: 1
 *   0x00000000004ECC2C  sub_4ECC2C
 *
 * Callees: 2
 *   0x00000000004EE48C  sub_4EE48C
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 3
 *   insn=0x00000000004ED4CC string=0x00000000004ED4D0 ")"
 *   insn=0x00000000004ED4D4 string=0x00000000004ED4D8 "B"
 *   insn=0x00000000004ED4E4 string=0x00000000004EE48C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED4B4(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_4EED74(a1, 0, 0, 40);
  sub_4EE48C(a1, v2, 10);
  *(_QWORD *)(v2 + 16) = v2 + 24;
  *(_DWORD *)(v2 + 32) = 0;
  return v2;
}

