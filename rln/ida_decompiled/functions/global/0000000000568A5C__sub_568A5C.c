/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568A5C
 * Mangled: sub_568A5C
 * Demangled: sub_568A5C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5190  .memcmp
 *   0x0000000000203230  .strlen
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 6
 *   insn=0x0000000000568A74 string=0x0000000000568A78 "?"
 *   insn=0x0000000000568AB0 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000568AB8 string=0x0000000000568ABC "s"
 *   insn=0x0000000000568AF4 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000568AF8 string=0x000000000059FA28 "basic_string::compare"
 *   insn=0x0000000000568AFC string=0x0000000000568B00 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_568A5C(__int64 *a1, unsigned __int64 a2, size_t a3, char *a4)
{
  __int64 v4; // x22
  unsigned __int64 v6; // x4
  size_t v7; // x4
  size_t v8; // x19
  size_t v9; // x0
  size_t v10; // x21
  size_t v11; // x2
  __int64 result; // x0
  __int64 v13; // x19

  v4 = *a1;
  v6 = *(_QWORD *)(*a1 - 24);
  if ( a2 > v6 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, v6);
  v7 = v6 - a2;
  if ( v7 > a3 )
    v8 = a3;
  else
    v8 = v7;
  v9 = strlen(a4);
  v10 = v9;
  if ( v9 > v8 )
    v11 = v8;
  else
    v11 = v9;
  result = memcmp((const void *)(v4 + a2), a4, v11);
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

