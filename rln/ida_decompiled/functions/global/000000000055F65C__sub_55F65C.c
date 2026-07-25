/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F65C
 * Mangled: sub_55F65C
 * Demangled: sub_55F65C
 *
 * Callers: 1
 *   0x000000000055F6E4  sub_55F6E4
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 19
 *   insn=0x000000000055F670 string=0x000000000055F678 "!@"
 *   insn=0x000000000055F678 string=0x000000000055F67C "t"
 *   insn=0x000000000055F67C string=0x000000000055F680 "`"
 *   insn=0x000000000055F684 string=0x000000000055F68C "a\n"
 *   insn=0x000000000055F68C string=0x000000000055F690 "`"
 *   insn=0x000000000055F690 string=0x000000000055F694 "`B"
 *   insn=0x000000000055F694 string=0x000000000055F698 ">"
 *   insn=0x000000000055F698 string=0x000000000055F69C "`"
 *   insn=0x000000000055F69C string=0x000000000055F6A0 "r"
 *   insn=0x000000000055F6A0 string=0x000000000055F6A4 "!"
 *   insn=0x000000000055F6A4 string=0x000000000055F6A8 "`""
 *   insn=0x000000000055F6A8 string=0x000000000055F6AC "!$E"
 *   insn=0x000000000055F6AC string=0x000000000055F6B0 "!@"
 *   insn=0x000000000055F6B0 string=0x000000000055F6B4 "a\n"
 *   insn=0x000000000055F6B8 string=0x000000000055F6BC "!"
 *   insn=0x000000000055F6C0 string=0x000000000055F6C4 "!<E"
 *   insn=0x000000000055F6C4 string=0x000000000055F6C8 "!@"
 *   insn=0x000000000055F6C8 string=0x000000000055F6CC "a"
 *   insn=0x000000000055F6E0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_55F65C(char *a1)
{
  _QWORD *v2; // x20

  v2 = a1 + 256;
  *(_QWORD *)a1 = off_6B7CC8;
  *((_QWORD *)a1 + 2) = off_6DB410;
  *((_QWORD *)a1 + 32) = off_6B7CF0;
  sub_55F390((__int64)(a1 + 16));
  sub_51F468((__int64)(a1 + 120));
  *((_QWORD *)a1 + 2) = off_6B7710;
  sub_53C0C8((unsigned int **)a1 + 9);
  *((_QWORD *)a1 + 32) = off_6B6B30;
  sub_5221DC(v2);
  operator delete(a1);
}

