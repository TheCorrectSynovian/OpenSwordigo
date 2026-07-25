/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C3EC
 * Mangled: sub_56C3EC
 * Demangled: sub_56C3EC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F45F0  .wmemcmp
 *   0x0000000000202DD0  .wcslen
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 8
 *   insn=0x000000000056C408 string=0x000000000056C40C "?"
 *   insn=0x000000000056C424 string=0x000000000056C428 "jZ"
 *   insn=0x000000000056C444 string=0x000000000056C448 "j "
 *   insn=0x000000000056C448 string=0x00000000001F45F0 "P'"
 *   insn=0x000000000056C450 string=0x000000000056C454 "s"
 *   insn=0x000000000056C48C string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056C490 string=0x000000000059FA28 "basic_string::compare"
 *   insn=0x000000000056C494 string=0x000000000056C498 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56C3EC(_QWORD *a1, unsigned __int64 a2, size_t a3, wchar_t *s)
{
  unsigned __int64 v6; // x4
  size_t v7; // x4
  size_t v8; // x19
  size_t v9; // x0
  size_t v10; // x21
  size_t v11; // x2
  __int64 result; // x0
  __int64 v13; // x19

  v6 = *(_QWORD *)(*a1 - 24LL);
  if ( a2 > v6 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, v6);
  v7 = v6 - a2;
  if ( v7 > a3 )
    v8 = a3;
  else
    v8 = v7;
  v9 = wcslen(s);
  v10 = v9;
  if ( v9 > v8 )
    v11 = v8;
  else
    v11 = v9;
  result = wmemcmp((const wchar_t *)(*a1 + 4 * a2), s, v11);
  if ( !(_DWORD)result )
  {
    result = 0x7FFFFFFF;
    v13 = v8 - v10;
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

