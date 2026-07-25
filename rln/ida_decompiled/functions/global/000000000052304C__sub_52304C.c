/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052304C
 * Mangled: sub_52304C
 * Demangled: sub_52304C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x00000000005230E4  sub_5230E4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000523064 string=0x0000000000523068 "u"
 *   insn=0x0000000000523078 string=0x000000000052307C "B"
 *   insn=0x00000000005230C8 string=0x00000000005230CC "!<E"
 *   insn=0x00000000005230CC string=0x00000000005230D0 "!@"
 *   insn=0x00000000005230D4 string=0x00000000005230D8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_52304C(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 2);
  sub_521E3C((__int64)(a1 + 2));
  *(_QWORD *)(v1 + 216) = 0;
  *(_BYTE *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 225) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = off_6B6BA8;
  a1[1] = 0;
  a1[2] = off_6B6BD0;
  return sub_5210E8(v1, 0);
}

