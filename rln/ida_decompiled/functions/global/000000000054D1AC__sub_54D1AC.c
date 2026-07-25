/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D1AC
 * Mangled: sub_54D1AC
 * Demangled: sub_54D1AC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056D97C  sub_56D97C
 *
 * Referenced strings: 1
 *   insn=0x000000000054D1C0 string=0x000000000054D1C4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall sub_54D1AC@<X0>(__int64 a1@<X0>, __int64 a2@<X8>)
{
  sub_56D97C(a2, *(wchar_t **)(*(_QWORD *)(a1 + 16) + 56LL));
  return a2;
}

