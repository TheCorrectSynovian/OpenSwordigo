/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B518
 * Mangled: sub_56B518
 * Demangled: sub_56B518
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000056B51C string=0x000000000056B520 "A"
 *   insn=0x000000000056B520 string=0x000000000056B524 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_56B518@<X0>(__int64 *a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x2
  _QWORD *result; // x0

  v2 = *a1;
  result = a2;
  *a2 = v2 + 4LL * *(_QWORD *)(v2 - 24);
  return result;
}

