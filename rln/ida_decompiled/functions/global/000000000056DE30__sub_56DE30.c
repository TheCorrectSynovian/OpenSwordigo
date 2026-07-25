/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056DE30
 * Mangled: sub_56DE30
 * Demangled: sub_56DE30
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000202DD0  .wcslen
 *   0x000000000056DA58  sub_56DA58
 *
 * Referenced strings: 5
 *   insn=0x000000000056DE58 string=0x000000000056DE5C "e"
 *   insn=0x000000000056DE6C string=0x000000000056DE70 "B"
 *   insn=0x000000000056DE70 string=0x000000000056DE74 "!"
 *   insn=0x000000000056DE78 string=0x000000000056DE7C "B"
 *   insn=0x000000000056DE7C string=0x000000000056DE80 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56DE30(const wchar_t **a1, __int64 a2, __int64 a3, wchar_t *s)
{
  size_t v5; // x0

  v5 = wcslen(s);
  return sub_56DA58(a1, (a2 - (__int64)*a1) >> 2, (a3 - a2) >> 2, s, v5);
}

