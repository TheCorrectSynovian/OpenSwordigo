/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005675EC
 * Mangled: sub_5675EC
 * Demangled: sub_5675EC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000567254  sub_567254
 *
 * Referenced strings: 1
 *   insn=0x00000000005675F8 string=0x00000000005675FC "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_5675EC(int **a1, int *a2, size_t a3)
{
  if ( a3 )
    sub_567254(a1, a2, a3);
  return a1;
}

