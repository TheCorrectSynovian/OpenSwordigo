/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CCC4
 * Mangled: sub_56CCC4
 * Demangled: sub_56CCC4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000202DD0  .wcslen
 *   0x000000000056CB34  sub_56CB34
 *
 * Referenced strings: 1
 *   insn=0x000000000056CCD8 string=0x000000000056CCDC "=X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CCC4(const wchar_t **a1, wchar_t *s)
{
  size_t v3; // x0

  v3 = wcslen(s);
  return sub_56CB34(a1, s, v3);
}

