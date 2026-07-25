/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BADC
 * Mangled: sub_56BADC
 * Demangled: sub_56BADC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000202DD0  .wcslen
 *   0x000000000056BA38  sub_56BA38
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56BADC(__int64 *a1, wchar_t *s, unsigned __int64 a3)
{
  size_t v4; // x0

  v4 = wcslen(s);
  return sub_56BA38(a1, s, a3, v4);
}

