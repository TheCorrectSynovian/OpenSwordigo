/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522CAC
 * Mangled: sub_522CAC
 * Demangled: sub_522CAC
 *
 * Callers: 2
 *   0x0000000000521268  sub_521268
 *   0x0000000000521B48  sub_521B48
 *
 * Callees: 3
 *   0x00000000005220F0  sub_5220F0
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053C028  sub_53C028
 *
 * Referenced strings: 2
 *   insn=0x0000000000522CD4 string=0x000000000053B7DC "!"
 *   insn=0x0000000000522CE4 string=0x0000000000522CE8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall sub_522CAC@<X0>(__int64 a1@<X0>, __int64 a2@<X1>, __int64 a3@<X8>)
{
  __int64 v3; // x20

  v3 = a1 + 208;
  sub_53B7DC(a3, a1 + 208);
  sub_53C028(v3, a2);
  sub_5220F0(a1, 1u);
  return a3;
}

