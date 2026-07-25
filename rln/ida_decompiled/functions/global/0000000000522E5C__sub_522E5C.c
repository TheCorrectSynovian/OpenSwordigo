/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522E5C
 * Mangled: sub_522E5C
 * Demangled: sub_522E5C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000522E8C string=0x0000000000522E90 "B"
 *   insn=0x0000000000522EB0 string=0x0000000000522EB4 "B@/"
 *   insn=0x0000000000522EDC string=0x0000000000522EE0 "!<E"
 *   insn=0x0000000000522EE0 string=0x0000000000522EE4 "!@"
 *   insn=0x0000000000522EF0 string=0x0000000000522EF4 "tz"
 *   insn=0x0000000000522EF4 string=0x0000000000522EF8 """
 *   insn=0x0000000000522EFC string=0x0000000000522F00 "B"
 *   insn=0x0000000000522F00 string=0x0000000000522F04 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_522E5C(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x19

  v2 = (__int64)(a1 + 2);
  sub_521E3C((__int64)(a1 + 2));
  *(_QWORD *)(v2 + 216) = 0;
  *(_BYTE *)(v2 + 224) = 0;
  *(_BYTE *)(v2 + 225) = 0;
  *(_QWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *a1 = off_6B6BA8;
  a1[1] = 0;
  a1[2] = off_6B6BD0;
  return sub_5210E8(v2, a2);
}

