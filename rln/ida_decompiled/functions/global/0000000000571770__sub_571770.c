/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571770
 * Mangled: sub_571770
 * Demangled: sub_571770
 *
 * Callers: 2
 *   0x00000000005717A8  sub_5717A8
 *   0x00000000005717B0  sub_5717B0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 4
 *   insn=0x0000000000571780 string=0x0000000000571784 "!$E"
 *   insn=0x0000000000571788 string=0x000000000057178C "!@"
 *   insn=0x000000000057178C string=0x0000000000571790 "a"
 *   insn=0x00000000005717A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_571770(_QWORD *a1)
{
  a1[3] = off_6B6B50;
  sub_5221DC(a1 + 3);
  operator delete(a1);
}

