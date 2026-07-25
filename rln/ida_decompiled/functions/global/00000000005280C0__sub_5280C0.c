/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005280C0
 * Mangled: sub_5280C0
 * Demangled: sub_5280C0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000005280C0 string=0x00000000005280C4 "!|@"
 *   insn=0x00000000005280C4 string=0x00000000005280C8 "B"
 *   insn=0x00000000005280CC string=0x00000000005280D0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5280C0(_QWORD *result, int a2)
{
  *(_QWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 8) = a2;
  return result;
}

