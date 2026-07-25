/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E844
 * Mangled: sub_56E844
 * Demangled: sub_56E844
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056E634  sub_56E634
 *
 * Referenced strings: 2
 *   insn=0x000000000056E850 string=0x000000000056E854 "B"
 *   insn=0x000000000056E854 string=0x000000000056E858 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56E844(const wchar_t **a1, const wchar_t *a2, size_t a3)
{
  if ( a3 )
    sub_56E634(a1, a2, a3);
  return a1;
}

