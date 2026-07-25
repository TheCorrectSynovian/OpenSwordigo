/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B300
 * Mangled: sub_56B300
 * Demangled: sub_56B300
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F68E0  .wmemmove
 *
 * Referenced strings: 5
 *   insn=0x000000000056B304 string=0x000000000056B308 "@"
 *   insn=0x000000000056B308 string=0x000000000056B30C "u-"
 *   insn=0x000000000056B308 string=0x000000000056B310 " "
 *   insn=0x000000000056B30C string=0x00000000001F68E0 "0'"
 *   insn=0x000000000056B310 string=0x000000000056B314 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56B300(wchar_t *a1, const wchar_t *a2, size_t a3)
{
  wchar_t *result; // x0

  if ( a3 != 1 )
    return wmemmove(a1, a2, a3);
  result = (wchar_t *)*(unsigned int *)a2;
  *a1 = (int)result;
  return result;
}

