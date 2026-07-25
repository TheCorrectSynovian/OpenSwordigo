/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565174
 * Mangled: sub_565174
 * Demangled: sub_565174
 *
 * Callers: 2
 *   0x0000000000565208  sub_565208
 *   0x0000000000565210  sub_565210
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 19
 *   insn=0x0000000000565188 string=0x0000000000565190 "!"
 *   insn=0x0000000000565190 string=0x0000000000565194 "t""
 *   insn=0x0000000000565194 string=0x0000000000565198 "`"
 *   insn=0x000000000056519C string=0x00000000005651A0 "a\n"
 *   insn=0x00000000005651A8 string=0x00000000005651AC "`"
 *   insn=0x00000000005651AC string=0x00000000005651B0 "!@"
 *   insn=0x00000000005651B0 string=0x00000000005651B4 "`b"
 *   insn=0x00000000005651B4 string=0x00000000005651B8 "a"
 *   insn=0x00000000005651B8 string=0x00000000005651BC "U"
 *   insn=0x00000000005651BC string=0x00000000005651C0 "`"
 *   insn=0x00000000005651C8 string=0x00000000005651CC "`B"
 *   insn=0x00000000005651CC string=0x00000000005651D0 "!"
 *   insn=0x00000000005651D0 string=0x00000000005651D4 "!@"
 *   insn=0x00000000005651D4 string=0x00000000005651D8 "a"
 *   insn=0x00000000005651E4 string=0x00000000005651E8 "!$E"
 *   insn=0x00000000005651E8 string=0x00000000005651EC "!@"
 *   insn=0x00000000005651EC string=0x00000000005651F0 "a"
 *   insn=0x0000000000565200 string=0x0000000000565204 "+H"
 *   insn=0x0000000000565204 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_565174(char *a1)
{
  _QWORD *v2; // x20

  v2 = a1 + 264;
  *(_QWORD *)a1 = off_6B7F88;
  *((_QWORD *)a1 + 2) = off_6B7FB0;
  *((_QWORD *)a1 + 33) = off_6B7FD8;
  *((_QWORD *)a1 + 3) = off_6DB650;
  sub_562F10((__int64)(a1 + 24));
  sub_51F468((__int64)(a1 + 128));
  *((_QWORD *)a1 + 3) = off_6B7790;
  sub_53C0C8((unsigned int **)a1 + 10);
  *((_QWORD *)a1 + 33) = off_6B6B50;
  sub_5221DC(v2);
  operator delete(a1);
}

