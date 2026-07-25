/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E79C
 * Mangled: sub_56E79C
 * Demangled: sub_56E79C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056E634  sub_56E634
 *
 * Referenced strings: 1
 *   insn=0x000000000056E7A8 string=0x000000000056E7AC "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56E79C(const wchar_t **a1, const wchar_t *a2, size_t a3)
{
  if ( a3 )
    sub_56E634(a1, a2, a3);
  return a1;
}

