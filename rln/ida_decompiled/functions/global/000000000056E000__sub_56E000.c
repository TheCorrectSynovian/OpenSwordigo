/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E000
 * Mangled: sub_56E000
 * Demangled: sub_56E000
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 8
 *   insn=0x000000000056E008 string=0x000000000056E00C "T"
 *   insn=0x000000000056E010 string=0x000000000056E014 "!"
 *   insn=0x000000000056E028 string=0x000000000056E0A8 "u"
 *   insn=0x000000000056E034 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000056E04C string=0x000000000056E050 "Z"
 *   insn=0x000000000056E060 string=0x000000000056E09C "`"
 *   insn=0x000000000056E070 string=0x000000000056E074 "s"
 *   insn=0x000000000056E07C string=0x000000000056E080 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56E000(wchar_t *result, const wchar_t *a2, __int64 a3)
{
  __int64 v3; // x20
  const wchar_t *v5; // x1
  __int64 *v6; // x24
  __int64 v7; // x0
  __int64 v8; // x22
  __int64 v9; // x21

  v3 = 4 * a3;
  v5 = &a2[a3];
  v6 = (__int64 *)result;
  if ( a2 == v5 )
  {
    *(_QWORD *)result = &unk_6FD318;
  }
  else
  {
    if ( v5 && !a2 )
      sub_565330("basic_string::_S_construct null not valid");
    v7 = sub_56C5B8(v3 >> 2, 0);
    v8 = v7;
    v9 = v7 + 24;
    if ( v3 >> 2 == 1 )
    {
      result = (wchar_t *)*(unsigned int *)a2;
      *(_DWORD *)(v8 + 24) = (_DWORD)result;
    }
    else
    {
      result = wmemcpy((wchar_t *)(v7 + 24), a2, v3 >> 2);
    }
    if ( (__int64 *)v8 != &qword_6FD300 )
    {
      *(_DWORD *)(v8 + 16) = 0;
      *(_QWORD *)v8 = v3 >> 2;
      *(_DWORD *)(v8 + v3 + 24) = 0;
    }
    *v6 = v9;
  }
  return result;
}

