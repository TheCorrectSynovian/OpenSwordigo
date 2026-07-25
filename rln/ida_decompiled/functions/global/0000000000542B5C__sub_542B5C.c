/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542B5C
 * Mangled: sub_542B5C
 * Demangled: sub_542B5C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000542B5C string=0x0000000000542B60 "!|@"
 *   insn=0x0000000000542B60 string=0x0000000000542B64 "B"
 *   insn=0x0000000000542B68 string=0x0000000000542B6C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_542B5C(_QWORD *result, int a2)
{
  *(_QWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 16) = a2;
  return result;
}

