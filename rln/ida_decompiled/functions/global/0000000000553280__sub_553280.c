/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000553280
 * Mangled: sub_553280
 * Demangled: sub_553280
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005530A4  sub_5530A4
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_553280(int a1, wchar_t a2, __int64 a3, __int64 a4, wchar_t *s1, wchar_t *s2, int *a7)
{
  int v7; // w19
  wchar_t *result; // x0

  v7 = a3;
  result = sub_5530A4(a4, a2, s1, s2, a3, *a7);
  *a7 = v7;
  return result;
}

