/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520BB4
 * Mangled: sub_520BB4
 * Demangled: sub_520BB4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 2
 *   insn=0x0000000000520BC0 string=0x0000000000520BC4 "!@-"
 *   insn=0x0000000000520BE0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_520BB4(_QWORD *a1)
{
  *a1 = off_6B6B50;
  sub_5221DC(a1);
  operator delete(a1);
}

