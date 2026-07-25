/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E774
 * Mangled: sub_56E774
 * Demangled: sub_56E774
 *
 * Callers: 5
 *   0x0000000000528E58  sub_528E58
 *   0x000000000053E27C  sub_53E27C
 *   0x000000000054DC04  sub_54DC04
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *
 * Callees: 1
 *   0x000000000056E634  sub_56E634
 *
 * Referenced strings: 1
 *   insn=0x000000000056E780 string=0x000000000056E784 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56E774(const wchar_t **a1, const wchar_t *a2, size_t a3)
{
  if ( a3 )
    sub_56E634(a1, a2, a3);
  return a1;
}

