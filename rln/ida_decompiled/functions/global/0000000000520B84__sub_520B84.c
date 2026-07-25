/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520B84
 * Mangled: sub_520B84
 * Demangled: sub_520B84
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *
 * Referenced strings: 2
 *   insn=0x0000000000520B90 string=0x0000000000520B94 "!"
 *   insn=0x0000000000520BB0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_520B84(_QWORD *a1)
{
  *a1 = off_6B6B30;
  sub_5221DC(a1);
  operator delete(a1);
}

