/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567030
 * Mangled: sub_567030
 * Demangled: sub_567030
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000567034 string=0x0000000000567038 "A"
 *   insn=0x0000000000567038 string=0x000000000056703C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_567030@<X0>(__int64 *a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x2
  _QWORD *result; // x0

  v2 = *a1;
  result = a2;
  *a2 = v2 + *(_QWORD *)(v2 - 24);
  return result;
}

