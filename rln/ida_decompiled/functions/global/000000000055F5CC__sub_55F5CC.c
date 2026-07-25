/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F5CC
 * Mangled: sub_55F5CC
 * Demangled: sub_55F5CC
 *
 * Callers: 1
 *   0x000000000055F64C  sub_55F64C
 *
 * Callees: 4
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 17
 *   insn=0x000000000055F5E0 string=0x000000000055F5E8 "!@"
 *   insn=0x000000000055F5E8 string=0x000000000055F5EC "t"
 *   insn=0x000000000055F5EC string=0x000000000055F5F0 "`"
 *   insn=0x000000000055F5F4 string=0x000000000055F5FC "a\n"
 *   insn=0x000000000055F5FC string=0x000000000055F600 "`"
 *   insn=0x000000000055F600 string=0x000000000055F604 "`B"
 *   insn=0x000000000055F604 string=0x000000000055F608 "b"
 *   insn=0x000000000055F608 string=0x000000000055F60C "`"
 *   insn=0x000000000055F610 string=0x000000000055F614 "!"
 *   insn=0x000000000055F614 string=0x000000000055F618 "`""
 *   insn=0x000000000055F618 string=0x000000000055F61C "!$E"
 *   insn=0x000000000055F61C string=0x000000000055F620 "!@"
 *   insn=0x000000000055F620 string=0x000000000055F624 "a\n"
 *   insn=0x000000000055F628 string=0x000000000055F62C "!"
 *   insn=0x000000000055F630 string=0x000000000055F634 "!<E"
 *   insn=0x000000000055F634 string=0x000000000055F638 "!@"
 *   insn=0x000000000055F638 string=0x000000000055F63C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55F5CC(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)(a1 + 256);
  *(_QWORD *)a1 = off_6B7CC8;
  *(_QWORD *)(a1 + 16) = off_6DB410;
  *(_QWORD *)(a1 + 256) = off_6B7CF0;
  sub_55F390(a1 + 16);
  sub_51F468(a1 + 120);
  *(_QWORD *)(a1 + 16) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 72));
  *(_QWORD *)(a1 + 256) = off_6B6B30;
  return sub_5221DC(v2);
}

