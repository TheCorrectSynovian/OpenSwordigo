/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568B10
 * Mangled: sub_568B10
 * Demangled: sub_568B10
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 8
 *   insn=0x0000000000568B24 string=0x0000000000568B28 "?"
 *   insn=0x0000000000568B28 string=0x0000000000568B2C "("
 *   insn=0x0000000000568B48 string=0x0000000000568B4C "b"
 *   insn=0x0000000000568B50 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000568B5C string=0x0000000000568B60 "s"
 *   insn=0x0000000000568B90 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000568B94 string=0x000000000059FA28 "basic_string::compare"
 *   insn=0x0000000000568B98 string=0x0000000000568B9C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_568B10(__int64 *a1, unsigned __int64 a2, size_t a3, void *a4, size_t a5)
{
  __int64 v5; // x0
  unsigned __int64 v6; // x5
  size_t v7; // x5
  const void *v8; // x0
  size_t v9; // x19
  size_t v10; // x2
  __int64 result; // x0
  __int64 v12; // x19

  v5 = *a1;
  v6 = *(_QWORD *)(v5 - 24);
  if ( a2 > v6 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, v6);
  v7 = v6 - a2;
  v8 = (const void *)(v5 + a2);
  if ( v7 > a3 )
    v9 = a3;
  else
    v9 = v7;
  if ( v9 > a5 )
    v10 = a5;
  else
    v10 = v9;
  result = memcmp(v8, a4, v10);
  if ( !(_DWORD)result )
  {
    result = 0x7FFFFFFF;
    v12 = v9 - a5;
    if ( v12 <= 0x7FFFFFFF )
    {
      if ( v12 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v12;
      else
        return 0x80000000LL;
    }
  }
  return result;
}

