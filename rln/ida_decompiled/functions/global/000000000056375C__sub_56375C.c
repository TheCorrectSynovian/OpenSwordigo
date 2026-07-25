/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056375C
 * Mangled: sub_56375C
 * Demangled: sub_56375C
 *
 * Callers: 1
 *   0x00000000005637E4  sub_5637E4
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 16
 *   insn=0x0000000000563774 string=0x0000000000563778 "!@<"
 *   insn=0x0000000000563780 string=0x0000000000563784 "`""
 *   insn=0x0000000000563784 string=0x0000000000563788 "a~"
 *   insn=0x000000000056378C string=0x0000000000563794 "a"
 *   insn=0x0000000000563798 string=0x000000000056379C "`"
 *   insn=0x000000000056379C string=0x00000000005637A0 "2"
 *   insn=0x00000000005637A4 string=0x00000000005637A8 "`"
 *   insn=0x00000000005637A8 string=0x00000000005637AC "!"
 *   insn=0x00000000005637AC string=0x00000000005637B0 "!@"
 *   insn=0x00000000005637B0 string=0x00000000005637B4 "a"
 *   insn=0x00000000005637B4 string=0x00000000005637B8 "Db"
 *   insn=0x00000000005637B8 string=0x00000000005637BC "!"
 *   insn=0x00000000005637C0 string=0x00000000005637C4 "!$E"
 *   insn=0x00000000005637C4 string=0x00000000005637C8 "!@"
 *   insn=0x00000000005637C8 string=0x00000000005637CC "a~"
 *   insn=0x00000000005637E0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56375C(char *a1)
{
  _QWORD *v2; // x20

  *(_QWORD *)a1 = off_6B7EE8;
  v2 = a1 + 248;
  *((_QWORD *)a1 + 31) = off_6B7F10;
  *((_QWORD *)a1 + 1) = off_6DB650;
  sub_562F10((__int64)(a1 + 8));
  sub_51F468((__int64)(a1 + 112));
  *((_QWORD *)a1 + 1) = off_6B7790;
  sub_53C0C8((unsigned int **)a1 + 8);
  *((_QWORD *)a1 + 31) = off_6B6B50;
  sub_5221DC(v2);
  operator delete(a1);
}

