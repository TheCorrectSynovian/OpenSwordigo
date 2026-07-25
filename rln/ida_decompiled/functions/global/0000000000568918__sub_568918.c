/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568918
 * Mangled: sub_568918
 * Demangled: sub_568918
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 19
 *   insn=0x000000000056892C string=0x0000000000568930 "?"
 *   insn=0x0000000000568934 string=0x0000000000568938 "a"
 *   insn=0x0000000000568938 string=0x000000000056893C "#"
 *   insn=0x0000000000568940 string=0x0000000000568944 "H"
 *   insn=0x0000000000568944 string=0x0000000000568948 "s"
 *   insn=0x0000000000568948 string=0x000000000056894C "c"
 *   insn=0x0000000000568954 string=0x0000000000568958 "s"
 *   insn=0x000000000056895C string=0x0000000000568960 "t"
 *   insn=0x0000000000568960 string=0x0000000000568964 "!"
 *   insn=0x0000000000568968 string=0x000000000056896C "b"
 *   insn=0x000000000056896C string=0x0000000000568970 "2"
 *   insn=0x0000000000568970 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000568978 string=0x000000000056897C "s"
 *   insn=0x00000000005689AC string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000005689B0 string=0x000000000059FA28 "basic_string::compare"
 *   insn=0x00000000005689B4 string=0x00000000005689B8 "!"
 *   insn=0x00000000005689BC string=0x00000000005689C0 "="
 *   insn=0x00000000005689CC string=0x00000000005689D0 "!"
 *   insn=0x00000000005689D8 string=0x00000000005689DC "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_568918(__int64 *a1, unsigned __int64 a2, size_t a3, __int64 *a4, unsigned __int64 a5, size_t a6)
{
  __int64 v7; // x0
  unsigned __int64 v8; // x19
  __int64 v9; // x1
  unsigned __int64 v10; // x3
  size_t v11; // x19
  size_t v12; // x3
  const void *v13; // x0
  size_t v14; // x20
  const void *v15; // x1
  size_t v16; // x2
  __int64 result; // x0
  __int64 v18; // x19

  v7 = *a1;
  v8 = *(_QWORD *)(v7 - 24);
  if ( a2 > v8 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, v8);
  v9 = *a4;
  v10 = *(_QWORD *)(*a4 - 24);
  if ( a5 > v10 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a5, v10);
  v11 = v8 - a2;
  v12 = v10 - a5;
  v13 = (const void *)(v7 + a2);
  if ( v11 > a3 )
    v11 = a3;
  if ( v12 > a6 )
    v14 = a6;
  else
    v14 = v12;
  v15 = (const void *)(v9 + a5);
  if ( v11 > v14 )
    v16 = v14;
  else
    v16 = v11;
  result = memcmp(v13, v15, v16);
  if ( !(_DWORD)result )
  {
    result = 0x7FFFFFFF;
    v18 = v11 - v14;
    if ( v18 <= 0x7FFFFFFF )
    {
      if ( v18 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v18;
      else
        return 0x80000000LL;
    }
  }
  return result;
}

