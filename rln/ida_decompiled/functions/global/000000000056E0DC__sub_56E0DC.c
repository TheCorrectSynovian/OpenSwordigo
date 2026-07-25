/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E0DC
 * Mangled: sub_56E0DC
 * Demangled: sub_56E0DC
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000565330  sub_565330
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 17
 *   insn=0x000000000056E0E4 string=0x000000000056E0E8 "5"
 *   insn=0x000000000056E0FC string=0x000000000056E100 "_"
 *   insn=0x000000000056E104 string=0x000000000056E108 ""
 *   insn=0x000000000056E124 string=0x000000000056E128 "@"
 *   insn=0x000000000056E128 string=0x000000000056E1B0 "w"
 *   insn=0x000000000056E134 string=0x000000000056E13C "}"
 *   insn=0x000000000056E134 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000056E144 string=0x000000000056E148 "y"
 *   insn=0x000000000056E158 string=0x000000000056E15C "?"
 *   insn=0x000000000056E170 string=0x000000000056E174 "SV"
 *   insn=0x000000000056E174 string=0x000000000056E178 "t"
 *   insn=0x000000000056E184 string=0x000000000056E188 "W"
 *   insn=0x000000000056E1B0 string=0x000000000056E1B8 "W"
 *   insn=0x000000000056E1E8 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056E1EC string=0x000000000059F960 "basic_string::basic_string"
 *   insn=0x000000000056E1F0 string=0x000000000056E1F4 "!"
 *   insn=0x000000000056E1F8 string=0x000000000056E1FC "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56E0DC(wchar_t *result, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x21
  unsigned __int64 v5; // x5
  __int64 *v7; // x26
  unsigned __int64 v8; // x5
  const wchar_t *v9; // x22
  const wchar_t *v10; // x5
  signed __int64 v11; // x19
  unsigned __int64 v12; // x25
  __int64 v13; // x0
  __int64 v14; // x24
  __int64 v15; // x23

  v4 = *a2;
  v5 = *(_QWORD *)(*a2 - 24);
  v7 = (__int64 *)result;
  if ( a3 > v5 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, v5);
  v8 = v5 - a3;
  v9 = (const wchar_t *)(v4 + 4 * a3);
  if ( v8 > a4 )
    v8 = a4;
  v10 = (const wchar_t *)(v4 + 4 * (v8 + a3));
  if ( v9 == v10 )
  {
    *(_QWORD *)result = &unk_6FD318;
  }
  else
  {
    if ( v10 && !v9 )
      sub_565330("basic_string::_S_construct null not valid");
    v11 = (char *)v10 - (char *)v9;
    v12 = v10 - v9;
    v13 = sub_56C5B8(v12, 0);
    v14 = v13;
    v15 = v13 + 24;
    if ( v12 == 1 )
    {
      result = (wchar_t *)*(unsigned int *)(v4 + 4 * a3);
      *(_DWORD *)(v14 + 24) = (_DWORD)result;
    }
    else
    {
      result = wmemcpy((wchar_t *)(v13 + 24), v9, v12);
    }
    if ( (__int64 *)v14 != &qword_6FD300 )
    {
      *(_DWORD *)(v14 + 16) = 0;
      *(_QWORD *)v14 = v12;
      *(_DWORD *)(v14 + v11 + 24) = 0;
    }
    *v7 = v15;
  }
  return result;
}

