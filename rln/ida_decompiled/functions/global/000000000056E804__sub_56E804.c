/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E804
 * Mangled: sub_56E804
 * Demangled: sub_56E804
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000202DD0  .wcslen
 *   0x000000000056E634  sub_56E634
 *
 * Referenced strings: 2
 *   insn=0x000000000056E818 string=0x000000000056E81C "mQ"
 *   insn=0x000000000056E824 string=0x000000000056E828 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56E804(const wchar_t **a1, wchar_t *s)
{
  size_t v3; // x2

  v3 = wcslen(s);
  if ( v3 )
    sub_56E634(a1, s, v3);
  return a1;
}

