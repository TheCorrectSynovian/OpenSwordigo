/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000524F3C
 * Mangled: sub_524F3C
 * Demangled: sub_524F3C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000524F3C string=0x0000000000524F40 "B"
 *   insn=0x0000000000524F44 string=0x0000000000524F48 "C"
 *   insn=0x0000000000524F48 string=0x0000000000524F4C "a"
 *   insn=0x0000000000524F4C string=0x0000000000524F50 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_524F3C(_QWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 24) &= ~a2;
  return result;
}

