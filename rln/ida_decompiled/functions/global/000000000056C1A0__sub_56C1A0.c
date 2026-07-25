/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C1A0
 * Mangled: sub_56C1A0
 * Demangled: sub_56C1A0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F45F0  .wmemcmp
 *
 * Referenced strings: 6
 *   insn=0x000000000056C1A4 string=0x000000000056C1A8 """
 *   insn=0x000000000056C1B0 string=0x000000000056C1B4 "T"
 *   insn=0x000000000056C1B8 string=0x000000000056C1BC "s"
 *   insn=0x000000000056C1C8 string=0x000000000056C1CC "\t!"
 *   insn=0x000000000056C1CC string=0x00000000001F45F0 "P'"
 *   insn=0x000000000056C1D4 string=0x000000000056C1D8 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56C1A0(const wchar_t **a1, const wchar_t **a2)
{
  size_t v2; // x20
  const wchar_t *v3; // x1
  size_t v4; // x19
  const wchar_t *v5; // x0
  size_t v6; // x2
  __int64 result; // x0
  __int64 v8; // x19

  v2 = *((_QWORD *)*a2 - 3);
  v3 = *a2;
  v4 = *((_QWORD *)*a1 - 3);
  v5 = *a1;
  if ( v2 > v4 )
    v6 = v4;
  else
    v6 = v2;
  result = wmemcmp(v5, v3, v6);
  if ( !(_DWORD)result )
  {
    result = 0x7FFFFFFF;
    v8 = v4 - v2;
    if ( v8 <= 0x7FFFFFFF )
    {
      if ( v8 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v8;
      else
        return 0x80000000LL;
    }
  }
  return result;
}

