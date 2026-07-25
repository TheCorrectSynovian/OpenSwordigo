/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005633E0
 * Mangled: sub_5633E0
 * Demangled: sub_5633E0
 *
 * Callers: 1
 *   0x0000000000563468  sub_563468
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 18
 *   insn=0x00000000005633F4 string=0x00000000005633FC "!@"
 *   insn=0x00000000005633FC string=0x0000000000563400 "t"
 *   insn=0x0000000000563400 string=0x0000000000563404 "`"
 *   insn=0x0000000000563408 string=0x0000000000563410 "a\n"
 *   insn=0x0000000000563410 string=0x0000000000563414 "`"
 *   insn=0x0000000000563414 string=0x0000000000563418 "`B"
 *   insn=0x000000000056341C string=0x0000000000563420 "`"
 *   insn=0x0000000000563428 string=0x000000000056342C "`""
 *   insn=0x000000000056342C string=0x0000000000563430 "!"
 *   insn=0x0000000000563430 string=0x0000000000563434 "!@"
 *   insn=0x0000000000563434 string=0x0000000000563438 "a\n"
 *   insn=0x0000000000563438 string=0x000000000056343C "#c"
 *   insn=0x000000000056343C string=0x0000000000563440 "!"
 *   insn=0x0000000000563444 string=0x0000000000563448 "!$E"
 *   insn=0x0000000000563448 string=0x000000000056344C "!@"
 *   insn=0x000000000056344C string=0x0000000000563450 "a"
 *   insn=0x0000000000563450 string=0x0000000000563454 "b"
 *   insn=0x0000000000563464 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5633E0(char *a1)
{
  _QWORD *v2; // x20

  v2 = a1 + 256;
  *(_QWORD *)a1 = off_6B7E78;
  *((_QWORD *)a1 + 2) = off_6DB650;
  *((_QWORD *)a1 + 32) = off_6B7EA0;
  sub_562F10((__int64)(a1 + 16));
  sub_51F468((__int64)(a1 + 120));
  *((_QWORD *)a1 + 2) = off_6B7790;
  sub_53C0C8((unsigned int **)a1 + 9);
  *((_QWORD *)a1 + 32) = off_6B6B50;
  sub_5221DC(v2);
  operator delete(a1);
}

