/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D97C
 * Mangled: sub_56D97C
 * Demangled: sub_56D97C
 *
 * Callers: 8
 *   0x000000000054D05C  sub_54D05C
 *   0x000000000054D08C  sub_54D08C
 *   0x000000000054D0BC  sub_54D0BC
 *   0x000000000054D0EC  sub_54D0EC
 *   0x000000000054D11C  sub_54D11C
 *   0x000000000054D14C  sub_54D14C
 *   0x000000000054D17C  sub_54D17C
 *   0x000000000054D1AC  sub_54D1AC
 *
 * Callees: 4
 *   0x0000000000202DD0  .wcslen
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 5
 *   insn=0x000000000056D9A0 string=0x000000000056D9A4 "U"
 *   insn=0x000000000056D9D0 string=0x000000000056DA0C "`"
 *   insn=0x000000000056D9DC string=0x000000000056D9E0 "8X"
 *   insn=0x000000000056DA18 string=0x000000000056DA20 "D"
 *   insn=0x000000000056DA18 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56D97C(__int64 *a1, wchar_t *s)
{
  __int64 result; // x0
  __int64 v5; // x24
  __int64 v6; // x0
  __int64 v7; // x21
  __int64 v8; // x20

  if ( !s )
    sub_565330("basic_string::_S_construct null not valid");
  result = wcslen(s);
  v5 = 4 * result;
  if ( 4 * result )
  {
    v6 = sub_56C5B8(v5 >> 2, 0);
    v7 = v6;
    v8 = v6 + 24;
    if ( v5 >> 2 == 1 )
    {
      result = (unsigned int)*s;
      *(_DWORD *)(v7 + 24) = result;
    }
    else
    {
      result = (__int64)wmemcpy((wchar_t *)(v6 + 24), s, v5 >> 2);
    }
    if ( (__int64 *)v7 != &qword_6FD300 )
    {
      *(_DWORD *)(v7 + 16) = 0;
      *(_QWORD *)v7 = v5 >> 2;
      *(_DWORD *)(v7 + v5 + 24) = 0;
    }
    *a1 = v8;
  }
  else
  {
    *a1 = (__int64)&unk_6FD318;
  }
  return result;
}

