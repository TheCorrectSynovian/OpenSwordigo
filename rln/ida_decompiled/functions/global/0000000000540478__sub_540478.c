/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540478
 * Mangled: sub_540478
 * Demangled: sub_540478
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000540478 string=0x000000000054047C "!|@"
 *   insn=0x000000000054047C string=0x0000000000540480 "B"
 *   insn=0x0000000000540484 string=0x0000000000540488 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_540478(_QWORD *result, int a2)
{
  *(_QWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 16) = a2;
  return result;
}

