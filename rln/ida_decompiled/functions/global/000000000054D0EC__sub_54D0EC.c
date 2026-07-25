/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054D0EC
 * Mangled: sub_54D0EC
 * Demangled: sub_54D0EC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056D97C  sub_56D97C
 *
 * Referenced strings: 1
 *   insn=0x000000000054D100 string=0x000000000054D104 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall sub_54D0EC@<X0>(__int64 a1@<X0>, __int64 a2@<X8>)
{
  sub_56D97C(a2, *(wchar_t **)(*(_QWORD *)(a1 + 16) + 48LL));
  return a2;
}

