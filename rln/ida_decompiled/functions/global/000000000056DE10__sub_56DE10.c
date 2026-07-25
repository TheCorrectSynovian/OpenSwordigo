/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056DE10
 * Mangled: sub_56DE10
 * Demangled: sub_56DE10
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056DA58  sub_56DA58
 *
 * Referenced strings: 6
 *   insn=0x000000000056DE10 string=0x000000000056DE14 "B"
 *   insn=0x000000000056DE18 string=0x000000000056DE1C "B"
 *   insn=0x000000000056DE1C string=0x000000000056DE20 "!"
 *   insn=0x000000000056DE20 string=0x000000000056DE24 "d"
 *   insn=0x000000000056DE24 string=0x000000000056DE28 "!"
 *   insn=0x000000000056DE28 string=0x000000000056DE2C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56DE10(const wchar_t **a1, __int64 a2, __int64 a3, const wchar_t **a4)
{
  return sub_56DA58(a1, (a2 - (__int64)*a1) >> 2, (a3 - a2) >> 2, *a4, *((_QWORD *)*a4 - 3));
}

