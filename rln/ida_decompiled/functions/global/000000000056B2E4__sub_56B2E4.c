/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B2E4
 * Mangled: sub_56B2E4
 * Demangled: sub_56B2E4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203AC0  .wmemcpy
 *
 * Referenced strings: 3
 *   insn=0x000000000056B2E8 string=0x000000000056B2EC "@"
 *   insn=0x000000000056B2EC string=0x000000000056B2F4 " "
 *   insn=0x000000000056B2F4 string=0x000000000056B2F8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56B2E4(wchar_t *a1, const wchar_t *a2, size_t a3)
{
  wchar_t *result; // x0

  if ( a3 != 1 )
    return wmemcpy(a1, a2, a3);
  result = (wchar_t *)*(unsigned int *)a2;
  *a1 = (int)result;
  return result;
}

