/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053FBE8
 * Mangled: sub_53FBE8
 * Demangled: sub_53FBE8
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053FC7C  sub_53FC7C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000053FC14 string=0x000000000053FC18 "B`"
 *   insn=0x000000000053FC40 string=0x000000000053FC44 ")"
 *   insn=0x000000000053FC60 string=0x000000000053FC64 "!<E"
 *   insn=0x000000000053FC64 string=0x000000000053FC68 "!@"
 *   insn=0x000000000053FC6C string=0x000000000053FC70 "["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_53FBE8(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 1);
  sub_521E3C((__int64)(a1 + 1));
  *(_QWORD *)(v1 + 216) = 0;
  *(_BYTE *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 225) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = &off_6B7158;
  a1[1] = off_6B7180;
  return sub_5210E8(v1, 0);
}

