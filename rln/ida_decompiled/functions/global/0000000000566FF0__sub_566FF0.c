/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566FF0
 * Mangled: sub_566FF0
 * Demangled: sub_566FF0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000566FF4 string=0x0000000000566FF8 "A"
 *   insn=0x0000000000566FF8 string=0x0000000000566FFC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_566FF0@<X0>(__int64 *a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 v2; // x2
  _QWORD *result; // x0

  v2 = *a1;
  result = a2;
  *a2 = v2 + *(_QWORD *)(v2 - 24);
  return result;
}

