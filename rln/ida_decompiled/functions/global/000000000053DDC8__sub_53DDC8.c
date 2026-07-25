/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DDC8
 * Mangled: sub_53DDC8
 * Demangled: sub_53DDC8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053C0C8  sub_53C0C8
 *
 * Referenced strings: 4
 *   insn=0x000000000053DDD0 string=0x000000000053DDD4 "!$E"
 *   insn=0x000000000053DDDC string=0x000000000053DDE0 "!@"
 *   insn=0x000000000053DDF4 string=0x000000000053DDF8 "."
 *   insn=0x000000000053DDF8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53DDC8(unsigned int **a1)
{
  *a1 = (unsigned int *)off_6B7710;
  sub_53C0C8(a1 + 7);
  operator delete(a1);
}

