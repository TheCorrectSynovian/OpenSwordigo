/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F81C
 * Mangled: sub_55F81C
 * Demangled: sub_55F81C
 *
 * Callers: 2
 *   0x000000000055F8A8  sub_55F8A8
 *   0x000000000055F8B0  sub_55F8B0
 *
 * Callees: 4
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 19
 *   insn=0x000000000055F830 string=0x000000000055F838 "!"
 *   insn=0x000000000055F838 string=0x000000000055F83C "t""
 *   insn=0x000000000055F83C string=0x000000000055F840 "`"
 *   insn=0x000000000055F844 string=0x000000000055F848 "a\n"
 *   insn=0x000000000055F850 string=0x000000000055F854 "`"
 *   insn=0x000000000055F854 string=0x000000000055F858 "!@"
 *   insn=0x000000000055F858 string=0x000000000055F85C "`b"
 *   insn=0x000000000055F85C string=0x000000000055F860 "a"
 *   insn=0x000000000055F864 string=0x000000000055F868 "`"
 *   insn=0x000000000055F86C string=0x000000000055F870 "!"
 *   insn=0x000000000055F870 string=0x000000000055F874 "`B"
 *   insn=0x000000000055F874 string=0x000000000055F878 "!$E"
 *   insn=0x000000000055F878 string=0x000000000055F87C "!@"
 *   insn=0x000000000055F87C string=0x000000000055F880 "a"
 *   insn=0x000000000055F884 string=0x000000000055F888 "!"
 *   insn=0x000000000055F88C string=0x000000000055F890 "!<E"
 *   insn=0x000000000055F890 string=0x000000000055F894 "!@"
 *   insn=0x000000000055F894 string=0x000000000055F898 "a"
 *   insn=0x000000000055F8A0 string=0x000000000055F8A4 "N\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55F81C(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)(a1 + 264);
  *(_QWORD *)a1 = off_6B7DD8;
  *(_QWORD *)(a1 + 16) = off_6B7E00;
  *(_QWORD *)(a1 + 264) = off_6B7E28;
  *(_QWORD *)(a1 + 24) = off_6DB410;
  sub_55F390(a1 + 24);
  sub_51F468(a1 + 128);
  *(_QWORD *)(a1 + 24) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 80));
  *(_QWORD *)(a1 + 264) = off_6B6B30;
  return sub_5221DC(v2);
}

