/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522D44
 * Mangled: sub_522D44
 * Demangled: sub_522D44
 *
 * Callers: 1
 *   0x0000000000522D8C  sub_522D8C
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 7
 *   insn=0x0000000000522D54 string=0x0000000000522D58 "!"
 *   insn=0x0000000000522D5C string=0x0000000000522D60 "a"
 *   insn=0x0000000000522D68 string=0x0000000000522D6C "!<E"
 *   insn=0x0000000000522D6C string=0x0000000000522D70 "!@"
 *   insn=0x0000000000522D70 string=0x0000000000522D74 "a\n"
 *   insn=0x0000000000522D84 string=0x0000000000522D88 "JQ"
 *   insn=0x0000000000522D88 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_522D44(_QWORD *a1)
{
  *a1 = off_6B6BA8;
  a1[1] = 0;
  a1[2] = off_6B6B30;
  sub_5221DC(a1 + 2);
  operator delete(a1);
}

