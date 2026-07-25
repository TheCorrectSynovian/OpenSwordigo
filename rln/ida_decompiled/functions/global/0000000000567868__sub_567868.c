/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567868
 * Mangled: sub_567868
 * Demangled: sub_567868
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000567254  sub_567254
 *
 * Referenced strings: 2
 *   insn=0x0000000000567874 string=0x0000000000567878 "B"
 *   insn=0x0000000000567878 string=0x000000000056787C "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_567868(int **a1, int *a2, size_t a3)
{
  if ( a3 )
    sub_567254(a1, a2, a3);
  return a1;
}

