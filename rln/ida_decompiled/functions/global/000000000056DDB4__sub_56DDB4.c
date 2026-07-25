/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056DDB4
 * Mangled: sub_56DDB4
 * Demangled: sub_56DDB4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000202DD0  .wcslen
 *   0x000000000056DA58  sub_56DA58
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56DDB4(const wchar_t **a1, size_t a2, unsigned __int64 a3, wchar_t *s)
{
  size_t v5; // x0

  v5 = wcslen(s);
  return sub_56DA58(a1, a2, a3, s, v5);
}

