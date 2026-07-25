/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522D9C
 * Mangled: sub_522D9C
 * Demangled: sub_522D9C
 *
 * Callers: 1
 *   0x0000000000522DC8  sub_522DC8
 *
 * Callees: 1
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 6
 *   insn=0x0000000000522DA8 string=0x0000000000522DAC "A"
 *   insn=0x0000000000522DAC string=0x0000000000522DB0 "!"
 *   insn=0x0000000000522DB0 string=0x0000000000522DB4 "_"
 *   insn=0x0000000000522DB4 string=0x0000000000522DB8 "!$E"
 *   insn=0x0000000000522DB8 string=0x0000000000522DBC "!@"
 *   insn=0x0000000000522DBC string=0x0000000000522DC0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_522D9C(_QWORD *a1)
{
  *a1 = off_6B6C08;
  a1[1] = 0;
  a1[2] = off_6B6B50;
  return sub_5221DC(a1 + 2);
}

