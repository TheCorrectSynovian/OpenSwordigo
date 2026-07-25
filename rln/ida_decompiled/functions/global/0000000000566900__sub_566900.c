/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566900
 * Mangled: sub_566900
 * Demangled: sub_566900
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000201760  .memcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *
 * Referenced strings: 23
 *   insn=0x0000000000566908 string=0x000000000056690C "5"
 *   insn=0x0000000000566920 string=0x0000000000566924 "_"
 *   insn=0x0000000000566938 string=0x000000000056693C "s"
 *   insn=0x0000000000566954 string=0x000000000056695C "u"
 *   insn=0x0000000000566954 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000566960 string=0x0000000000566964 "s"
 *   insn=0x0000000000566964 string=0x0000000000566968 " "
 *   insn=0x000000000056696C string=0x0000000000566970 ""
 *   insn=0x0000000000566970 string=0x0000000000566974 "`"
 *   insn=0x0000000000566978 string=0x000000000056697C "\t"
 *   insn=0x000000000056697C string=0x00000000005669FC "`f"
 *   insn=0x0000000000566980 string=0x0000000000566984 "t"
 *   insn=0x0000000000566990 string=0x0000000000566994 "!"
 *   insn=0x000000000056699C string=0x00000000005669A0 "4"
 *   insn=0x00000000005669A8 string=0x00000000005669AC ";"
 *   insn=0x00000000005669AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000005669C8 string=0x00000000005669CC "ek"
 *   insn=0x00000000005669DC string=0x00000000005669E0 "A"
 *   insn=0x0000000000566A14 string=0x0000000000566A18 "A"
 *   insn=0x0000000000566A58 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000566A5C string=0x000000000059F960 "basic_string::basic_string"
 *   insn=0x0000000000566A60 string=0x0000000000566A64 "!"
 *   insn=0x0000000000566A70 string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_566900(_QWORD *result, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x21
  unsigned __int64 v5; // x4
  _QWORD *v7; // x24
  unsigned __int64 v8; // x4
  _BYTE *v9; // x23
  unsigned __int64 v10; // x19
  _BYTE *v11; // x19
  size_t v12; // x19
  __int64 v13; // x20
  __int64 v14; // x22
  void *v15; // x3
  __int64 v16; // x0

  v4 = *a2;
  v5 = *(_QWORD *)(*a2 - 24);
  v7 = result;
  if ( a3 > v5 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, v5);
  v8 = v5 - a3;
  v9 = (_BYTE *)(v4 + a3);
  if ( v8 > a4 )
    v10 = a4;
  else
    v10 = v8;
  v11 = (_BYTE *)(v4 + v10 + a3);
  if ( v9 == v11 )
  {
    *result = &byte_6FD2F8;
    return result;
  }
  if ( v11 && !v9 )
    sub_565330("basic_string::_S_construct null not valid");
  v12 = v11 - v9;
  if ( v12 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( v12 + 57 > 0x1000 && v12 )
  {
    v13 = 0x3FFFFFFFFFFFFFF9LL;
    if ( v12 + 4096 - (((_WORD)v12 + 57) & 0xFFF) <= 0x3FFFFFFFFFFFFFF9LL )
      v13 = v12 + 4096 - (((_WORD)v12 + 57) & 0xFFF);
    v14 = operator new(v13 + 25);
    v15 = (void *)(v14 + 24);
    *(_QWORD *)(v14 + 8) = v13;
    *(_DWORD *)(v14 + 16) = 0;
  }
  else
  {
    v16 = operator new(v12 + 25);
    *(_QWORD *)(v16 + 8) = v12;
    *(_DWORD *)(v16 + 16) = 0;
    v14 = v16;
    v15 = (void *)(v16 + 24);
    if ( v12 == 1 )
    {
      result = (_QWORD *)*(unsigned __int8 *)(v4 + a3);
      *(_BYTE *)(v14 + 24) = (_BYTE)result;
      goto LABEL_16;
    }
  }
  result = memcpy(v15, v9, v12);
  v15 = result;
LABEL_16:
  if ( (__int64 *)v14 != &qword_6FD2E0 )
  {
    result = (_QWORD *)(v14 + v12);
    *(_QWORD *)v14 = v12;
    *(_BYTE *)(v14 + v12 + 24) = 0;
  }
  *v7 = v15;
  return result;
}

