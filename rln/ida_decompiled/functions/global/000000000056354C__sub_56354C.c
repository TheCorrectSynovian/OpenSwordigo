/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056354C
 * Mangled: sub_56354C
 * Demangled: sub_56354C
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x000000000051F468  sub_51F468
 *   0x00000000005219C8  sub_5219C8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562010  sub_562010
 *   0x0000000000562F10  sub_562F10
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000563564 string=0x0000000000563568 "5"
 *   insn=0x0000000000563578 string=0x000000000056357C "B"
 *   insn=0x00000000005635A4 string=0x00000000005635A8 ""
 *   insn=0x00000000005635EC string=0x00000000005635F0 "5"
 *   insn=0x0000000000563614 string=0x0000000000563618 "!@"
 *   insn=0x0000000000563620 string=0x0000000000563624 ";"
 *   insn=0x0000000000563634 string=0x0000000000563638 "!"
 *   insn=0x0000000000563638 string=0x000000000056363C "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_56354C(_QWORD *a1)
{
  __int64 v1; // x19

  v1 = (__int64)(a1 + 31);
  sub_521E3C((__int64)(a1 + 31));
  *(_QWORD *)(v1 + 216) = 0;
  *(_DWORD *)(v1 + 224) = 0;
  *(_BYTE *)(v1 + 228) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *a1 = &unk_6DB728;
  a1[31] = &unk_6DB750;
  sub_5219C8(v1, 0);
  *a1 = off_6B7EE8;
  a1[31] = off_6B7F10;
  sub_562010((__int64)(a1 + 1));
  return sub_5219C8(v1, (__int64)(a1 + 1));
}

