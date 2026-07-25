/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570E4C
 * Mangled: sub_570E4C
 * Demangled: sub_570E4C
 *
 * Callers: 1
 *   0x000000000054D924  sub_54D924
 *
 * Callees: 1
 *   0x00000000001FA6A0  .wcscoll
 *
 * Referenced strings: 2
 *   insn=0x0000000000570E5C string=0x00000000001FA6A0 "0'"
 *   insn=0x0000000000570E64 string=0x0000000000570E68 " x"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_570E4C(int a1, wchar_t *s1, wchar_t *s2)
{
  int v3; // w0

  v3 = wcscoll(s1, s2);
  return (v3 != 0) | (unsigned int)(v3 >> 30);
}

