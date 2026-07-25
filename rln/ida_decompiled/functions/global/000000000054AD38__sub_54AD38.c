/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AD38
 * Mangled: sub_54AD38
 * Demangled: sub_54AD38
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053C0C8  sub_53C0C8
 *
 * Referenced strings: 4
 *   insn=0x000000000054AD38 string=0x000000000054AD3C "a"
 *   insn=0x000000000054AD44 string=0x000000000054AD48 "!@"
 *   insn=0x000000000054AD60 string=0x000000000054AD64 "S"
 *   insn=0x000000000054AD64 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54AD38(unsigned int **a1)
{
  *a1 = (unsigned int *)off_6B7710;
  sub_53C0C8(a1 + 7);
  operator delete(a1);
}

