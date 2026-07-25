/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B4D8
 * Mangled: sub_56B4D8
 * Demangled: sub_56B4D8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000056B4DC string=0x000000000056B4E0 "A"
 *   insn=0x000000000056B4E0 string=0x000000000056B4E4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_56B4D8@<X0>(__int64 *a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x2
  _QWORD *result; // x0

  v2 = *a1;
  result = a2;
  *a2 = v2 + 4LL * *(_QWORD *)(v2 - 24);
  return result;
}

