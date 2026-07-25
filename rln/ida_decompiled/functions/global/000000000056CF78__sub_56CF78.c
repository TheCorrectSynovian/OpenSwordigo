/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CF78
 * Mangled: sub_56CF78
 * Demangled: sub_56CF78
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000202DD0  .wcslen
 *   0x000000000056CD30  sub_56CD30
 *
 * Referenced strings: 1
 *   insn=0x000000000056CFAC string=0x000000000056CFB0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CF78(const wchar_t **a1, size_t a2, wchar_t *s)
{
  size_t v4; // x0

  v4 = wcslen(s);
  return sub_56CD30(a1, a2, s, v4);
}

