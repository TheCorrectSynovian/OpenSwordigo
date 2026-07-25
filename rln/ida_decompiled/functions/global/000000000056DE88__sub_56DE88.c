/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056DE88
 * Mangled: sub_56DE88
 * Demangled: sub_56DE88
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056DA58  sub_56DA58
 *
 * Referenced strings: 4
 *   insn=0x000000000056DE88 string=0x000000000056DE8C "B"
 *   insn=0x000000000056DE90 string=0x000000000056DE94 "B"
 *   insn=0x000000000056DE94 string=0x000000000056DE98 "!"
 *   insn=0x000000000056DE9C string=0x000000000056DEA0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56DE88(const wchar_t **a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  return sub_56DA58(a1, (a2 - (__int64)*a1) >> 2, (a3 - a2) >> 2, a4, (a5 - (__int64)a4) >> 2);
}

