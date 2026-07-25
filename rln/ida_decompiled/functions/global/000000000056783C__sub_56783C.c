/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056783C
 * Mangled: sub_56783C
 * Demangled: sub_56783C
 *
 * Callers: 2
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *
 * Callees: 1
 *   0x000000000056739C  sub_56739C
 *
 * Referenced strings: 2
 *   insn=0x000000000056783C string=0x0000000000567840 "B"
 *   insn=0x000000000056784C string=0x0000000000567850 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_56783C(int **a1, size_t a2, unsigned __int8 a3)
{
  if ( a2 )
    sub_56739C(a1, a2, a3);
  return a1;
}

