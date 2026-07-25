/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005403CC
 * Mangled: sub_5403CC
 * Demangled: sub_5403CC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000005403CC string=0x00000000005403D0 "B"
 *   insn=0x00000000005403D4 string=0x00000000005403D8 "C"
 *   insn=0x00000000005403D8 string=0x00000000005403DC "a"
 *   insn=0x00000000005403DC string=0x00000000005403E0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5403CC(_QWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 24) &= ~a2;
  return result;
}

