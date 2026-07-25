/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005677FC
 * Mangled: sub_5677FC
 * Demangled: sub_5677FC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x0000000000567254  sub_567254
 *
 * Referenced strings: 1
 *   insn=0x000000000056781C string=0x0000000000567820 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_5677FC(int **a1, char *a2)
{
  size_t v3; // x2

  v3 = strlen(a2);
  if ( v3 )
    sub_567254(a1, (int *)a2, v3);
  return a1;
}

