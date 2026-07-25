/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056750C
 * Mangled: sub_56750C
 * Demangled: sub_56750C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x0000000000567254  sub_567254
 *
 * Referenced strings: 3
 *   insn=0x0000000000567520 string=0x0000000000567524 "Co"
 *   insn=0x000000000056752C string=0x0000000000567530 "`"
 *   insn=0x0000000000567534 string=0x0000000000567538 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_56750C(int **a1, char *a2)
{
  size_t v3; // x2

  v3 = strlen(a2);
  if ( v3 )
    sub_567254(a1, (int *)a2, v3);
  return a1;
}

