/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005636CC
 * Mangled: sub_5636CC
 * Demangled: sub_5636CC
 *
 * Callers: 1
 *   0x000000000056374C  sub_56374C
 *
 * Callees: 4
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 15
 *   insn=0x00000000005636E4 string=0x00000000005636E8 "!@<"
 *   insn=0x00000000005636F0 string=0x00000000005636F4 "`""
 *   insn=0x00000000005636F4 string=0x00000000005636F8 "a~"
 *   insn=0x00000000005636FC string=0x0000000000563704 "a"
 *   insn=0x0000000000563708 string=0x000000000056370C "`"
 *   insn=0x000000000056370C string=0x0000000000563710 "V"
 *   insn=0x0000000000563714 string=0x0000000000563718 "`"
 *   insn=0x0000000000563718 string=0x000000000056371C "!"
 *   insn=0x000000000056371C string=0x0000000000563720 "!@"
 *   insn=0x0000000000563720 string=0x0000000000563724 "a"
 *   insn=0x0000000000563724 string=0x0000000000563728 "hb"
 *   insn=0x0000000000563728 string=0x000000000056372C "!"
 *   insn=0x0000000000563730 string=0x0000000000563734 "!$E"
 *   insn=0x0000000000563734 string=0x0000000000563738 "!@"
 *   insn=0x0000000000563738 string=0x000000000056373C "a~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5636CC(__int64 a1)
{
  _QWORD *v2; // x20

  *(_QWORD *)a1 = off_6B7EE8;
  v2 = (_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = off_6B7F10;
  *(_QWORD *)(a1 + 8) = off_6DB650;
  sub_562F10(a1 + 8);
  sub_51F468(a1 + 112);
  *(_QWORD *)(a1 + 8) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 64));
  *(_QWORD *)(a1 + 248) = off_6B6B50;
  return sub_5221DC(v2);
}

