/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542B44
 * Mangled: sub_542B44
 * Demangled: sub_542B44
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000542B44 string=0x0000000000542B48 "!|@"
 *   insn=0x0000000000542B48 string=0x0000000000542B4C "B"
 *   insn=0x0000000000542B50 string=0x0000000000542B54 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_542B44(_QWORD *result, int a2)
{
  *(_QWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 8) = a2;
  return result;
}

