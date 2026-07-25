/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D08C
 * Mangled: sub_54D08C
 * Demangled: sub_54D08C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056D97C  sub_56D97C
 *
 * Referenced strings: 2
 *   insn=0x000000000054D0A0 string=0x000000000054D0A4 "! @"
 *   insn=0x000000000054D0A4 string=0x000000000054D0A8 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall sub_54D08C@<X0>(__int64 a1@<X0>, __int64 a2@<X8>)
{
  sub_56D97C(a2, *(wchar_t **)(*(_QWORD *)(a1 + 16) + 64LL));
  return a2;
}

