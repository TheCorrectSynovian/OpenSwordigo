/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B33C
 * Mangled: sub_56B33C
 * Demangled: sub_56B33C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203AC0  .wmemcpy
 *
 * Referenced strings: 4
 *   insn=0x000000000056B340 string=0x000000000056B344 "B"
 *   insn=0x000000000056B344 string=0x000000000056B348 "_"
 *   insn=0x000000000056B348 string=0x000000000056B34C "@"
 *   insn=0x000000000056B34C string=0x000000000056B354 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56B33C(wchar_t *a1, const wchar_t *a2, __int64 a3)
{
  size_t v4; // x2
  wchar_t *result; // x0

  v4 = (a3 - (__int64)a2) >> 2;
  if ( v4 != 1 )
    return wmemcpy(a1, a2, v4);
  result = (wchar_t *)*(unsigned int *)a2;
  *a1 = (int)result;
  return result;
}

