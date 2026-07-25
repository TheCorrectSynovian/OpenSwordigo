/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522D08
 * Mangled: sub_522D08
 * Demangled: sub_522D08
 *
 * Callers: 1
 *   0x0000000000522D34  sub_522D34
 *
 * Callees: 1
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 6
 *   insn=0x0000000000522D14 string=0x0000000000522D18 "A"
 *   insn=0x0000000000522D1C string=0x0000000000522D20 "_"
 *   insn=0x0000000000522D20 string=0x0000000000522D24 "!<E"
 *   insn=0x0000000000522D24 string=0x0000000000522D28 "!@"
 *   insn=0x0000000000522D28 string=0x0000000000522D2C "A"
 *   insn=0x0000000000522D2C string=0x0000000000522D30 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_522D08(_QWORD *a1)
{
  *a1 = off_6B6BA8;
  a1[1] = 0;
  a1[2] = off_6B6B30;
  return sub_5221DC(a1 + 2);
}

