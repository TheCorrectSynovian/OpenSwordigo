/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DD94
 * Mangled: sub_53DD94
 * Demangled: sub_53DD94
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053C0C8  sub_53C0C8
 *
 * Referenced strings: 4
 *   insn=0x000000000053DD9C string=0x000000000053DDA0 "!"
 *   insn=0x000000000053DDA8 string=0x000000000053DDAC "!@"
 *   insn=0x000000000053DDC0 string=0x000000000053DDC4 ";"
 *   insn=0x000000000053DDC4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53DD94(unsigned int **a1)
{
  *a1 = (unsigned int *)off_6B7790;
  sub_53C0C8(a1 + 7);
  operator delete(a1);
}

