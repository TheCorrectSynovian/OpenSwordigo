/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005280D8
 * Mangled: sub_5280D8
 * Demangled: sub_5280D8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000005280D8 string=0x00000000005280DC "!|@"
 *   insn=0x00000000005280DC string=0x00000000005280E0 "B"
 *   insn=0x00000000005280E4 string=0x00000000005280E8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5280D8(_QWORD *result, int a2)
{
  *(_QWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 16) = a2;
  return result;
}

