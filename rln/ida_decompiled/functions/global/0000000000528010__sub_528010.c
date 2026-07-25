/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000528010
 * Mangled: sub_528010
 * Demangled: sub_528010
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000528010 string=0x0000000000528014 "B"
 *   insn=0x0000000000528018 string=0x000000000052801C "C"
 *   insn=0x000000000052801C string=0x0000000000528020 "a"
 *   insn=0x0000000000528020 string=0x0000000000528024 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_528010(_QWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 24) |= a2;
  return result;
}

