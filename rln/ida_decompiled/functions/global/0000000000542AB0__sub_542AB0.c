/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542AB0
 * Mangled: sub_542AB0
 * Demangled: sub_542AB0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000542AB0 string=0x0000000000542AB4 "B"
 *   insn=0x0000000000542AB8 string=0x0000000000542ABC "C"
 *   insn=0x0000000000542ABC string=0x0000000000542AC0 "a"
 *   insn=0x0000000000542AC0 string=0x0000000000542AC4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_542AB0(_QWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_QWORD *)(*result - 24LL) + 24) &= ~a2;
  return result;
}

