/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056DEC8
 * Mangled: sub_56DEC8
 * Demangled: sub_56DEC8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056DA58  sub_56DA58
 *
 * Referenced strings: 4
 *   insn=0x000000000056DEC8 string=0x000000000056DECC "B"
 *   insn=0x000000000056DED0 string=0x000000000056DED4 "B"
 *   insn=0x000000000056DED4 string=0x000000000056DED8 "!"
 *   insn=0x000000000056DED8 string=0x000000000056DEDC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56DEC8(const wchar_t **a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  return sub_56DA58(a1, (a2 - (__int64)*a1) >> 2, (a3 - a2) >> 2, a4, (4 * a5) >> 2);
}

