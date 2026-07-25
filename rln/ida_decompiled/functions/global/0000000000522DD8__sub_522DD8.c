/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522DD8
 * Mangled: sub_522DD8
 * Demangled: sub_522DD8
 *
 * Callers: 1
 *   0x0000000000522E20  sub_522E20
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 8
 *   insn=0x0000000000522DE8 string=0x0000000000522DEC "! 0"
 *   insn=0x0000000000522DF0 string=0x0000000000522DF4 "a"
 *   insn=0x0000000000522DF4 string=0x0000000000522DF8 "!"
 *   insn=0x0000000000522DFC string=0x0000000000522E00 "!$E"
 *   insn=0x0000000000522E00 string=0x0000000000522E04 "!@"
 *   insn=0x0000000000522E04 string=0x0000000000522E08 "a\n"
 *   insn=0x0000000000522E18 string=0x0000000000522E1C "%Q"
 *   insn=0x0000000000522E1C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_522DD8(_QWORD *a1)
{
  *a1 = off_6B6C08;
  a1[1] = 0;
  a1[2] = off_6B6B50;
  sub_5221DC(a1 + 2);
  operator delete(a1);
}

