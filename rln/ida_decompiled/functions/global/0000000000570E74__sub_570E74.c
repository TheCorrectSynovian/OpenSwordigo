/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570E74
 * Mangled: sub_570E74
 * Demangled: sub_570E74
 *
 * Callers: 1
 *   0x000000000054DC04  sub_54DC04
 *
 * Callees: 1
 *   0x00000000001FBC00  .wcsxfrm
 *
 * Referenced strings: 2
 *   insn=0x0000000000570E7C string=0x0000000000570E80 "`+"
 *   insn=0x0000000000570E80 string=0x00000000001FBC00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_570E74(int a1, wchar_t *s1, wchar_t *s2, size_t n)
{
  return wcsxfrm(s1, s2, n);
}

