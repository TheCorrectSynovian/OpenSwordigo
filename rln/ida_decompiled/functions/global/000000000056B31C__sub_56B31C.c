/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B31C
 * Mangled: sub_56B31C
 * Demangled: sub_56B31C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6A30  .wmemset
 *
 * Referenced strings: 1
 *   insn=0x000000000056B330 string=0x00000000001F6A30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56B31C(wchar_t *result, size_t a2, wchar_t a3)
{
  if ( a2 != 1 )
    return wmemset(result, a3, a2);
  *result = a3;
  return result;
}

