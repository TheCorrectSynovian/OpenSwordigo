/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D7F4
 * Mangled: sub_56D7F4
 * Demangled: sub_56D7F4
 *
 * Callers: 1
 *   0x000000000056D918  sub_56D918
 *
 * Callees: 4
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000565330  sub_565330
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 14
 *   insn=0x000000000056D7FC string=0x000000000056D800 "5"
 *   insn=0x000000000056D814 string=0x000000000056D818 "_"
 *   insn=0x000000000056D81C string=0x000000000056D820 ""
 *   insn=0x000000000056D83C string=0x000000000056D840 "@"
 *   insn=0x000000000056D84C string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000056D85C string=0x000000000056D860 "y"
 *   insn=0x000000000056D868 string=0x000000000056D86C "S"
 *   insn=0x000000000056D870 string=0x000000000056D874 "?"
 *   insn=0x000000000056D89C string=0x000000000056D8A0 "W"
 *   insn=0x000000000056D8C8 string=0x000000000056D8D0 "W"
 *   insn=0x000000000056D900 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056D904 string=0x000000000059F960 "basic_string::basic_string"
 *   insn=0x000000000056D908 string=0x000000000056D90C "!"
 *   insn=0x000000000056D910 string=0x000000000056D914 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56D7F4(wchar_t *result, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x21
  unsigned __int64 v5; // x4
  __int64 *v7; // x26
  unsigned __int64 v8; // x4
  const wchar_t *v9; // x22
  const wchar_t *v10; // x4
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

