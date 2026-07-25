/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AD68
 * Mangled: sub_54AD68
 * Demangled: sub_54AD68
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053C0C8  sub_53C0C8
 *
 * Referenced strings: 4
 *   insn=0x000000000054AD68 string=0x000000000054AD6C "a"
 *   insn=0x000000000054AD74 string=0x000000000054AD78 "!@"
 *   insn=0x000000000054AD90 string=0x000000000054AD94 "G"
 *   insn=0x000000000054AD94 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54AD68(unsigned int **a1)
{
  *a1 = (unsigned int *)off_6B7790;
  sub_53C0C8(a1 + 7);
  operator delete(a1);
}

