/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056F2A0
 * Mangled: sub_56F2A0
 * Demangled: sub_56F2A0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000203AC0  .wmemcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 9
 *   insn=0x000000000056F2A0 string=0x000000000056F2A4 "?"
 *   insn=0x000000000056F2BC string=0x000000000056F2C0 " "
 *   insn=0x000000000056F2C0 string=0x000000000056F344 "u"
 *   insn=0x000000000056F2C4 string=0x000000000056F2D8 "S"
 *   insn=0x000000000056F2C8 string=0x000000000056F2CC "`"
 *   insn=0x000000000056F2CC string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000056F2DC string=0x000000000056F2E0 "w"
 *   insn=0x000000000056F30C string=0x000000000056F310 "t"
 *   insn=0x000000000056F318 string=0x000000000056F31C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_56F2A0(wchar_t *result, const wchar_t *a2, const wchar_t *a3)
{
  __int64 *v4; // x24
  signed __int64 v5; // x19
  unsigned __int64 v6; // x23
  __int64 v7; // x0
  __int64 v8; // x22
  __int64 v9; // x21

  v4 = (__int64 *)result;
  if ( a2 == a3 )
  {
    *(_QWORD *)result = &unk_6FD318;
  }
  else
  {
    if ( !a2 && a3 )
      sub_565330("basic_string::_S_construct null not valid");
    v5 = (char *)a3 - (char *)a2;
    v6 = a3 - a2;
    v7 = sub_56C5B8(v6, 0);
    v8 = v7;
    v9 = v7 + 24;
    if ( v6 == 1 )
    {
      result = (wchar_t *)*(unsigned int *)a2;
      *(_DWORD *)(v8 + 24) = (_DWORD)result;
    }
    else
    {
      result = wmemcpy((wchar_t *)(v7 + 24), a2, v6);
    }
    if ( (__int64 *)v8 != &qword_6FD300 )
    {
      *(_DWORD *)(v8 + 16) = 0;
      *(_QWORD *)v8 = v6;
      *(_DWORD *)(v8 + v5 + 24) = 0;
    }
    *v4 = v9;
  }
  return result;
}

