/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056AA20
 * Mangled: sub_56AA20
 * Demangled: sub_56AA20
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000201760  .memcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 20
 *   insn=0x000000000056AA20 string=0x000000000056AA24 "?"
 *   insn=0x000000000056AA34 string=0x000000000056AA38 " "
 *   insn=0x000000000056AA44 string=0x000000000056AA4C "9"
 *   insn=0x000000000056AA44 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000056AA50 string=0x000000000056AA54 "S"
 *   insn=0x000000000056AA54 string=0x000000000056AA58 " "
 *   insn=0x000000000056AA5C string=0x000000000056AA60 "H"
 *   insn=0x000000000056AA60 string=0x000000000056AA64 "b"
 *   insn=0x000000000056AA68 string=0x000000000056AA6C "_"
 *   insn=0x000000000056AA70 string=0x000000000056AAEC "`f"
 *   insn=0x000000000056AA74 string=0x000000000056AA78 "B,@"
 *   insn=0x000000000056AA78 string=0x000000000056AA7C "`"
 *   insn=0x000000000056AA84 string=0x000000000056AA88 "#"
 *   insn=0x000000000056AA90 string=0x000000000056AA94 "4"
 *   insn=0x000000000056AAA0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000056AABC string=0x000000000056AAC0 "(["
 *   insn=0x000000000056AAD0 string=0x000000000056AAD4 "!"
 *   insn=0x000000000056AB08 string=0x000000000056AB0C "a"
 *   insn=0x000000000056AB0C string=0x000000000056AB10 " "
 *   insn=0x000000000056AB48 string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_56AA20(_QWORD *result, unsigned __int8 *a2, unsigned __int8 *a3)
{
  _QWORD *v3; // x22
  size_t v4; // x19
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  unsigned __int8 *v8; // x1
  void *v9; // x3
  __int64 v10; // x0

  v3 = result;
  if ( a2 == a3 )
  {
    *result = &byte_6FD2F8;
    return result;
  }
  if ( !a2 && a3 )
    sub_565330("basic_string::_S_construct null not valid");
  v4 = a3 - a2;
  if ( (unsigned __int64)(a3 - a2) > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( v4 + 57 > 0x1000 && v4 )
  {
    v5 = ((_WORD)v4 + 57) & 0xFFF;
    v6 = 0x3FFFFFFFFFFFFFF9LL;
    if ( v4 + 4096 - v5 <= 0x3FFFFFFFFFFFFFF9LL )
      v6 = v4 + 4096 - v5;
    v7 = operator new(v6 + 25);
    v8 = a2;
    v9 = (void *)(v7 + 24);
    *(_QWORD *)(v7 + 8) = v6;
    *(_DWORD *)(v7 + 16) = 0;
  }
  else
  {
    v10 = operator new(v4 + 25);
    *(_QWORD *)(v10 + 8) = v4;
    *(_DWORD *)(v10 + 16) = 0;
    v7 = v10;
    v9 = (void *)(v10 + 24);
    v8 = a2;
    if ( v4 == 1 )
    {
      result = (_QWORD *)*a2;
      *(_BYTE *)(v7 + 24) = (_BYTE)result;
      goto LABEL_12;
    }
  }
  result = memcpy(v9, v8, v4);
  v9 = result;
LABEL_12:
  if ( (__int64 *)v7 != &qword_6FD2E0 )
  {
    result = (_QWORD *)(v7 + v4);
    *(_QWORD *)v7 = v4;
    *(_BYTE *)(v7 + v4 + 24) = 0;
  }
  *v3 = v9;
  return result;
}

