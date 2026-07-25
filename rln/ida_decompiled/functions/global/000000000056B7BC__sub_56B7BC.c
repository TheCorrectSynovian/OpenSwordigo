/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B7BC
 * Mangled: sub_56B7BC
 * Demangled: sub_56B7BC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000202DD0  .wcslen
 *   0x000000000056B6DC  sub_56B6DC
 *
 * Referenced strings: 1
 *   insn=0x000000000056B7D4 string=0x000000000056B7D8 "~]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56B7BC(_QWORD *a1, wchar_t *s, unsigned __int64 a3)
{
  size_t v4; // x0

  v4 = wcslen(s);
  return sub_56B6DC(a1, s, a3, v4);
}

