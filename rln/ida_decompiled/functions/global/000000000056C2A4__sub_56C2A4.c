/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C2A4
 * Mangled: sub_56C2A4
 * Demangled: sub_56C2A4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F45F0  .wmemcmp
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 16
 *   insn=0x000000000056C2B8 string=0x000000000056C2BC "?"
 *   insn=0x000000000056C2C0 string=0x000000000056C2C4 "a"
 *   insn=0x000000000056C2C4 string=0x000000000056C2C8 "#"
 *   insn=0x000000000056C2CC string=0x000000000056C2D0 "H"
 *   insn=0x000000000056C2D0 string=0x000000000056C2D4 "s"
 *   insn=0x000000000056C2D4 string=0x000000000056C2D8 "c"
 *   insn=0x000000000056C2E0 string=0x000000000056C2E4 "s"
 *   insn=0x000000000056C2E8 string=0x000000000056C2EC "t"
 *   insn=0x000000000056C2EC string=0x000000000056C2F0 "!"
 *   insn=0x000000000056C2F4 string=0x000000000056C2F8 "b"
 *   insn=0x000000000056C2FC string=0x00000000001F45F0 "P'"
 *   insn=0x000000000056C304 string=0x000000000056C308 "s"
 *   insn=0x000000000056C338 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056C33C string=0x000000000059FA28 "basic_string::compare"
 *   insn=0x000000000056C340 string=0x000000000056C344 "!"
 *   insn=0x000000000056C358 string=0x000000000056C35C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56C2A4(__int64 *a1, unsigned __int64 a2, size_t a3, __int64 *a4, unsigned __int64 a5, size_t a6)
{
  __int64 v7; // x0
  unsigned __int64 v8; // x19
  __int64 v9; // x1
  unsigned __int64 v10; // x3
  size_t v11; // x19
  size_t v12; // x3
  const wchar_t *v13; // x0
  size_t v14; // x20
  const wchar_t *v15; // x1
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
  v13 = (const wchar_t *)(v7 + 4 * a2);
  if ( v11 > a3 )
    v11 = a3;
  if ( v12 > a6 )
    v14 = a6;
  else
    v14 = v12;
  v15 = (const wchar_t *)(v9 + 4 * a5);
  if ( v11 > v14 )
    v16 = v14;
  else
    v16 = v11;
  result = wmemcmp(v13, v15, v16);
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

