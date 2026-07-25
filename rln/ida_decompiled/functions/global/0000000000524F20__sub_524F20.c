/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000524F20
 * Mangled: sub_524F20
 * Demangled: sub_524F20
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000524F20 string=0x0000000000524F24 "B"
 *   insn=0x0000000000524F28 string=0x0000000000524F2C "C"
 *   insn=0x0000000000524F2C string=0x0000000000524F30 "a"
 *   insn=0x0000000000524F30 string=0x0000000000524F34 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_524F20(_QWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 24) |= a2;
  return result;
}

