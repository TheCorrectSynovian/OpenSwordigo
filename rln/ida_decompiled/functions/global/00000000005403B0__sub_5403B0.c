/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005403B0
 * Mangled: sub_5403B0
 * Demangled: sub_5403B0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000005403B0 string=0x00000000005403B4 "B"
 *   insn=0x00000000005403B8 string=0x00000000005403BC "C"
 *   insn=0x00000000005403BC string=0x00000000005403C0 "a"
 *   insn=0x00000000005403C0 string=0x00000000005403C4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5403B0(_QWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 24) |= a2;
  return result;
}

