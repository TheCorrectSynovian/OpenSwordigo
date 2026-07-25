/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566E14
 * Mangled: sub_566E14
 * Demangled: sub_566E14
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000201760  .memcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 21
 *   insn=0x0000000000566E20 string=0x0000000000566E24 """
 *   insn=0x0000000000566E28 string=0x0000000000566E2C "?"
 *   insn=0x0000000000566E30 string=0x0000000000566E34 " "
 *   insn=0x0000000000566E40 string=0x0000000000566E48 ":"
 *   insn=0x0000000000566E40 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000566E54 string=0x0000000000566E58 "h"
 *   insn=0x0000000000566E58 string=0x0000000000566E5C "b"?"
 *   insn=0x0000000000566E5C string=0x0000000000566E60 " "
 *   insn=0x0000000000566E64 string=0x0000000000566E68 "_"
 *   insn=0x0000000000566E6C string=0x0000000000566E70 "b"
 *   insn=0x0000000000566E6C string=0x0000000000566EE8 "`f"
 *   insn=0x0000000000566E70 string=0x0000000000566E74 "`"
 *   insn=0x0000000000566E74 string=0x0000000000566E78 "B,@"
 *   insn=0x0000000000566E80 string=0x0000000000566E84 "#"
 *   insn=0x0000000000566E8C string=0x0000000000566E90 "4"
 *   insn=0x0000000000566E9C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000566EB8 string=0x0000000000566EBC ")j"
 *   insn=0x0000000000566ECC string=0x0000000000566ED0 "!"
 *   insn=0x0000000000566F04 string=0x0000000000566F08 "a"
 *   insn=0x0000000000566F08 string=0x0000000000566F0C " "
 *   insn=0x0000000000566F44 string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_566E14(_QWORD *result, unsigned __int8 *a2, size_t a3)
{
  unsigned __int8 *v4; // x2
  _QWORD *v5; // x22
  __int64 v6; // x2
  __int64 v7; // x20
  __int64 v8; // x21
  unsigned __int8 *v9; // x1
  void *v10; // x3
  __int64 v11; // x0

  v4 = &a2[a3];
  v5 = result;
  if ( a2 == v4 )
  {
    *result = &byte_6FD2F8;
    return result;
  }
  if ( v4 && !a2 )
    sub_565330("basic_string::_S_construct null not valid");
  if ( a3 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( a3 - 4040 > 0xFFFFFFFFFFFFEFFELL )
  {
    v11 = operator new(a3 + 25);
    *(_QWORD *)(v11 + 8) = a3;
    *(_DWORD *)(v11 + 16) = 0;
    v8 = v11;
    v10 = (void *)(v11 + 24);
    v9 = a2;
    if ( a3 == 1 )
    {
      result = (_QWORD *)*a2;
      *(_BYTE *)(v8 + 24) = (_BYTE)result;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = ((_WORD)a3 + 57) & 0xFFF;
    v7 = 0x3FFFFFFFFFFFFFF9LL;
    if ( a3 + 4096 - v6 <= 0x3FFFFFFFFFFFFFF9LL )
      v7 = a3 + 4096 - v6;
    v8 = operator new(v7 + 25);
    v9 = a2;
    v10 = (void *)(v8 + 24);
    *(_QWORD *)(v8 + 8) = v7;
    *(_DWORD *)(v8 + 16) = 0;
  }
  result = memcpy(v10, v9, a3);
  v10 = result;
LABEL_11:
  if ( (__int64 *)v8 != &qword_6FD2E0 )
  {
    result = (_QWORD *)(v8 + a3);
    *(_QWORD *)v8 = a3;
    *(_BYTE *)(v8 + a3 + 24) = 0;
  }
  *v5 = v10;
  return result;
}

