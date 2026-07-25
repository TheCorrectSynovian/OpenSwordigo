/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E7C4
 * Mangled: sub_56E7C4
 * Demangled: sub_56E7C4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000202DD0  .wcslen
 *   0x000000000056E634  sub_56E634
 *
 * Referenced strings: 2
 *   insn=0x000000000056E7D8 string=0x000000000056E7DC "}Q"
 *   insn=0x000000000056E7E4 string=0x000000000056E7E8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56E7C4(const wchar_t **a1, wchar_t *s)
{
  size_t v3; // x2

  v3 = wcslen(s);
  if ( v3 )
    sub_56E634(a1, s, v3);
  return a1;
}

