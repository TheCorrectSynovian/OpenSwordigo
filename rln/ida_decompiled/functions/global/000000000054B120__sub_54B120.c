/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B120
 * Mangled: sub_54B120
 * Demangled: sub_54B120
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053C028  sub_53C028
 *   0x000000000053C0C8  sub_53C0C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000054B148 string=0x000000000054B14C "b"
 *   insn=0x000000000054B148 string=0x000000000053B7DC "!"
 *   insn=0x000000000054B154 string=0x000000000054B158 "B@"
 *   insn=0x000000000054B158 string=0x000000000054B15C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int **__usercall sub_54B120@<X0>(unsigned int **a1@<X0>, unsigned int **a2@<X1>, unsigned int **a3@<X8>)
{
  unsigned int **v3; // x22

  v3 = a1 + 7;
  sub_53B7DC(a3, a1 + 7);
  (*((void (__fastcall **)(unsigned int **, unsigned int **))*a1 + 2))(a1, a2);
  sub_53C028(v3, a2);
  return a3;
}

