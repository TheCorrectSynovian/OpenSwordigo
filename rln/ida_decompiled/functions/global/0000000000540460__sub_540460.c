/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540460
 * Mangled: sub_540460
 * Demangled: sub_540460
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000540460 string=0x0000000000540464 "!|@"
 *   insn=0x0000000000540464 string=0x0000000000540468 "B"
 *   insn=0x000000000054046C string=0x0000000000540470 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_540460(_QWORD *result, int a2)
{
  *(_QWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 8) = a2;
  return result;
}

