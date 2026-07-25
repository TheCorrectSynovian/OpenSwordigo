/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C36C
 * Mangled: sub_56C36C
 * Demangled: sub_56C36C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F45F0  .wmemcmp
 *   0x0000000000202DD0  .wcslen
 *
 * Referenced strings: 3
 *   insn=0x000000000056C388 string=0x000000000056C38C "S"
 *   insn=0x000000000056C3A8 string=0x00000000001F45F0 "P'"
 *   insn=0x000000000056C3B0 string=0x000000000056C3B4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56C36C(const wchar_t **a1, wchar_t *s)
{
  size_t v3; // x19
  size_t v4; // x20
  size_t v5; // x2
  __int64 result; // x0
  __int64 v7; // x19

  v3 = *((_QWORD *)*a1 - 3);
  v4 = wcslen(s);
  if ( v4 > v3 )
    v5 = v3;
  else
    v5 = v4;
  result = wmemcmp(*a1, s, v5);
  if ( !(_DWORD)result )
  {
    result = 0x7FFFFFFF;
    v7 = v3 - v4;
    if ( v7 <= 0x7FFFFFFF )
    {
      if ( v7 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v7;
      else
        return 0x80000000LL;
    }
  }
  return result;
}

