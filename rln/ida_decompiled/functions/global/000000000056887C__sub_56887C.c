/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056887C
 * Mangled: sub_56887C
 * Demangled: sub_56887C
 *
 * Callers: 2
 *   0x00000000004B4224  Caver::IsAndroidAssetsPath(std::string const&)
 *   0x00000000004B44B8  Caver::FileExistsAtPath(std::string const&)
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 12
 *   insn=0x0000000000568890 string=0x0000000000568894 "?"
 *   insn=0x0000000000568894 string=0x0000000000568898 "("
 *   insn=0x0000000000568898 string=0x000000000056889C "c"
 *   insn=0x00000000005688B0 string=0x00000000005688B4 "t"
 *   insn=0x00000000005688B8 string=0x00000000005688BC "b"
 *   insn=0x00000000005688BC string=0x00000000005688C0 "42"
 *   insn=0x00000000005688C0 string=0x00000000001F5190 "P'"
 *   insn=0x00000000005688C8 string=0x00000000005688CC "s"
 *   insn=0x00000000005688FC string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000568900 string=0x000000000059FA28 "basic_string::compare"
 *   insn=0x0000000000568904 string=0x0000000000568908 "!"
 *   insn=0x0000000000568910 string=0x0000000000568914 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56887C(__int64 *a1, unsigned __int64 a2, size_t a3, const void **a4)
{
  __int64 v4; // x0
  unsigned __int64 v5; // x4
  _QWORD *v6; // x3
  size_t v7; // x4
  const void *v8; // x0
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
  v8 = (const void *)(v4 + a2);
  if ( v7 > a3 )
    v9 = a3;
  else
    v9 = v7;
  v10 = *(v6 - 3);
  if ( v9 > v10 )
    v11 = *(v6 - 3);
  else
    v11 = v9;
  result = memcmp(v8, v6, v11);
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

