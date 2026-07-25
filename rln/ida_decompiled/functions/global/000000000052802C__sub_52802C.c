/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052802C
 * Mangled: sub_52802C
 * Demangled: sub_52802C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000052802C string=0x0000000000528030 "B"
 *   insn=0x0000000000528034 string=0x0000000000528038 "C"
 *   insn=0x0000000000528038 string=0x000000000052803C "a"
 *   insn=0x000000000052803C string=0x0000000000528040 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_52802C(_QWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 24) &= ~a2;
  return result;
}

