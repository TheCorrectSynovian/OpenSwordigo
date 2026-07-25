/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D02C
 * Mangled: sub_54D02C
 * Demangled: sub_54D02C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000566BB8  sub_566BB8
 *
 * Referenced strings: 1
 *   insn=0x000000000054D040 string=0x000000000054D044 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall sub_54D02C@<X0>(__int64 a1@<X0>, __int64 a2@<X8>)
{
  sub_566BB8(a2, *(char **)(*(_QWORD *)(a1 + 16) + 16LL));
  return a2;
}

