/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CF1C
 * Mangled: sub_56CF1C
 * Demangled: sub_56CF1C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056CD30  sub_56CD30
 *
 * Referenced strings: 2
 *   insn=0x000000000056CF1C string=0x000000000056CF20 "!"
 *   insn=0x000000000056CF20 string=0x000000000056CF24 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CF1C(const wchar_t **a1, __int64 a2, const wchar_t *a3, unsigned __int64 a4)
{
  return sub_56CD30(a1, (a2 - (__int64)*a1) >> 2, a3, a4);
}

