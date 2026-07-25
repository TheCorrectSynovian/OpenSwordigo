/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056F378
 * Mangled: sub_56F378
 * Demangled: sub_56F378
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 6
 *   insn=0x000000000056F378 string=0x000000000056F37C "?"
 *   insn=0x000000000056F398 string=0x000000000056F39C "S"
 *   insn=0x000000000056F398 string=0x000000000056F408 "v"
 *   insn=0x000000000056F3A0 string=0x000000000056F3A4 "u"
 *   insn=0x000000000056F3D0 string=0x000000000056F3D4 "`"
 *   insn=0x000000000056F3DC string=0x000000000056F3E0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56F378(__int64 *result, const wchar_t *a2, const wchar_t *a3)
{
  __int64 *v4; // x24
  __int64 v5; // x19
  unsigned __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x23
  __int64 v9; // x22

  v4 = result;
  if ( a2 == a3 )
  {
    *result = (__int64)&unk_6FD318;
  }
  else
  {
    v5 = (char *)a3 - (char *)a2;
    v6 = a3 - a2;
    v7 = sub_56C5B8(v6, 0);
    v8 = v7;
    v9 = v7 + 24;
    if ( v6 == 1 )
      *(_DWORD *)(v7 + 24) = *a2;
    else
      wmemcpy((wchar_t *)(v7 + 24), a2, v5 >> 2);
    result = &qword_6FD300;
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

