/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E96C
 * Mangled: sub_56E96C
 * Demangled: sub_56E96C
 *
 * Callers: 2
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *
 * Callees: 1
 *   0x000000000056E86C  sub_56E86C
 *
 * Referenced strings: 1
 *   insn=0x000000000056E978 string=0x000000000056E97C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56E96C(const wchar_t **a1, size_t a2, wchar_t a3)
{
  if ( a2 )
    sub_56E86C(a1, a2, a3);
  return a1;
}

