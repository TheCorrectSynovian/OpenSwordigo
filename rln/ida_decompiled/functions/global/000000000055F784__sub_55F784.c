/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F784
 * Mangled: sub_55F784
 * Demangled: sub_55F784
 *
 * Callers: 1
 *   0x000000000055F80C  sub_55F80C
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 18
 *   insn=0x000000000055F79C string=0x000000000055F7A0 "!"
 *   insn=0x000000000055F7A8 string=0x000000000055F7AC "`""
 *   insn=0x000000000055F7AC string=0x000000000055F7B0 "a~"
 *   insn=0x000000000055F7B4 string=0x000000000055F7BC "a"
 *   insn=0x000000000055F7C0 string=0x000000000055F7C4 "`"
 *   insn=0x000000000055F7C4 string=0x000000000055F7C8 "("
 *   insn=0x000000000055F7C8 string=0x000000000055F7CC "!"
 *   insn=0x000000000055F7CC string=0x000000000055F7D0 "`"
 *   insn=0x000000000055F7D0 string=0x000000000055F7D4 "!$E"
 *   insn=0x000000000055F7D4 string=0x000000000055F7D8 "!@"
 *   insn=0x000000000055F7D8 string=0x000000000055F7DC "a"
 *   insn=0x000000000055F7DC string=0x000000000055F7E0 ":r"
 *   insn=0x000000000055F7E0 string=0x000000000055F7E4 "!"
 *   insn=0x000000000055F7E8 string=0x000000000055F7EC "!<E"
 *   insn=0x000000000055F7EC string=0x000000000055F7F0 "!@"
 *   insn=0x000000000055F7F0 string=0x000000000055F7F4 "a~"
 *   insn=0x000000000055F7F4 string=0x000000000055F7F8 "y\n"
 *   insn=0x000000000055F808 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_55F784(char *a1)
{
  _QWORD *v2; // x20

  *(_QWORD *)a1 = off_6B7D38;
  v2 = a1 + 248;
  *((_QWORD *)a1 + 31) = off_6B7D60;
  *((_QWORD *)a1 + 1) = off_6DB410;
  sub_55F390((__int64)(a1 + 8));
  sub_51F468((__int64)(a1 + 112));
  *((_QWORD *)a1 + 1) = off_6B7710;
  sub_53C0C8((unsigned int **)a1 + 8);
  *((_QWORD *)a1 + 31) = off_6B6B30;
  sub_5221DC(v2);
  operator delete(a1);
}

