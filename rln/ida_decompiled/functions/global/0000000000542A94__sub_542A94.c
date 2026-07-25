/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542A94
 * Mangled: sub_542A94
 * Demangled: sub_542A94
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000542A94 string=0x0000000000542A98 "B"
 *   insn=0x0000000000542A9C string=0x0000000000542AA0 "C"
 *   insn=0x0000000000542AA0 string=0x0000000000542AA4 "a"
 *   insn=0x0000000000542AA4 string=0x0000000000542AA8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_542A94(_QWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 24) |= a2;
  return result;
}

