/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000524FD0
 * Mangled: sub_524FD0
 * Demangled: sub_524FD0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000524FD0 string=0x0000000000524FD4 "!|@"
 *   insn=0x0000000000524FD4 string=0x0000000000524FD8 "B"
 *   insn=0x0000000000524FDC string=0x0000000000524FE0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_524FD0(_QWORD *result, int a2)
{
  *(_QWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 8) = a2;
  return result;
}

