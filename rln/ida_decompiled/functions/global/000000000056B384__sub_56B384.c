/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B384
 * Mangled: sub_56B384
 * Demangled: sub_56B384
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203AC0  .wmemcpy
 *
 * Referenced strings: 4
 *   insn=0x000000000056B388 string=0x000000000056B38C "B"
 *   insn=0x000000000056B38C string=0x000000000056B390 "_"
 *   insn=0x000000000056B390 string=0x000000000056B394 "@"
 *   insn=0x000000000056B394 string=0x000000000056B39C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56B384(wchar_t *a1, const wchar_t *a2, __int64 a3)
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

