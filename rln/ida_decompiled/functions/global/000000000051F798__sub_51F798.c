/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F798
 * Mangled: sub_51F798
 * Demangled: sub_51F798
 *
 * Callers: 4
 *   0x000000000055F010  sub_55F010
 *   0x000000000055F224  sub_55F224
 *   0x000000000056224C  sub_56224C
 *   0x0000000000562468  sub_562468
 *
 * Callees: 2
 *   0x0000000000202CF0  .fileno
 *   0x000000000051F3E0  sub_51F3E0
 *
 * Referenced strings: 2
 *   insn=0x000000000051F7AC string=0x000000000051F7B0 "P"
 *   insn=0x000000000051F7C0 string=0x000000000051F7C4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_51F798(FILE **a1, char *a2, size_t a3)
{
  int v5; // w0

  v5 = fileno(*a1);
  return sub_51F3E0(v5, a2, a3);
}

