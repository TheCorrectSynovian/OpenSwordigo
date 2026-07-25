/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C208
 * Mangled: sub_56C208
 * Demangled: sub_56C208
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F45F0  .wmemcmp
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 10
 *   insn=0x000000000056C21C string=0x000000000056C220 "?"
 *   insn=0x000000000056C220 string=0x000000000056C224 "("
 *   insn=0x000000000056C224 string=0x000000000056C228 "c"
 *   insn=0x000000000056C23C string=0x000000000056C240 "t"
 *   insn=0x000000000056C244 string=0x000000000056C248 "b"
 *   insn=0x000000000056C24C string=0x00000000001F45F0 "P'"
 *   insn=0x000000000056C254 string=0x000000000056C258 "s"
 *   insn=0x000000000056C288 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056C28C string=0x000000000059FA28 "basic_string::compare"
 *   insn=0x000000000056C290 string=0x000000000056C294 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56C208(__int64 *a1, unsigned __int64 a2, size_t a3, const wchar_t **a4)
{
  __int64 v4; // x0
  unsigned __int64 v5; // x4
  const wchar_t *v6; // x3
  size_t v7; // x4
  const wchar_t *v8; // x0
  size_t v9; // x19
  size_t v10; // x20
  size_t v11; // x2
  __int64 result; // x0
  __int64 v13; // x19

  v4 = *a1;
  v5 = *(_QWORD *)(v4 - 24);
  if ( a2 > v5 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, v5);
  v6 = *a4;
  v7 = v5 - a2;
  v8 = (const wchar_t *)(v4 + 4 * a2);
  if ( v7 > a3 )
    v9 = a3;
  else
    v9 = v7;
  v10 = *((_QWORD *)v6 - 3);
  if ( v9 > v10 )
    v11 = *((_QWORD *)v6 - 3);
  else
    v11 = v9;
  result = wmemcmp(v8, v6, v11);
  if ( !(_DWORD)result )
  {
    result = 0x7FFFFFFF;
    v13 = v9 - v10;
    if ( v13 <= 0x7FFFFFFF )
    {
      if ( v13 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v13;
      else
        return 0x80000000LL;
    }
  }
  return result;
}

