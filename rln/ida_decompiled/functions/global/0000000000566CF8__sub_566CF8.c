/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566CF8
 * Mangled: sub_566CF8
 * Demangled: sub_566CF8
 *
 * Callers: 1
 *   0x0000000000530504  sub_530504
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FBC40  .memset
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 12
 *   insn=0x0000000000566D10 string=0x0000000000566D14 "W"
 *   insn=0x0000000000566D14 string=0x0000000000566D18 "!"
 *   insn=0x0000000000566D3C string=0x0000000000566D44 "?"
 *   insn=0x0000000000566D44 string=0x0000000000566D48 "H"
 *   insn=0x0000000000566D48 string=0x0000000000566D4C "d"
 *   insn=0x0000000000566D54 string=0x0000000000566DC8 "`f"
 *   insn=0x0000000000566D58 string=0x0000000000566D5C "`"
 *   insn=0x0000000000566D64 string=0x0000000000566D68 "!"
 *   insn=0x0000000000566D70 string=0x0000000000566D74 "4"
 *   insn=0x0000000000566D80 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000566DA0 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000566DF0 string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_566CF8(__int64 *result, size_t a2, unsigned __int8 a3)
{
  _QWORD *v4; // x22
  int v5; // w23
  char *v6; // x3
  __int64 v7; // x4
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x0

  v4 = result;
  v5 = a3;
  if ( !a2 )
  {
    v6 = &byte_6FD2F8;
    goto LABEL_3;
  }
  if ( a2 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::_S_create");
  if ( a2 + 57 > 0x1000 )
  {
    v7 = ((_WORD)a2 + 57) & 0xFFF;
    v8 = 0x3FFFFFFFFFFFFFF9LL;
    if ( a2 + 4096 - v7 <= 0x3FFFFFFFFFFFFFF9LL )
      v8 = a2 + 4096 - v7;
    v9 = operator new(v8 + 25);
    v6 = (char *)(v9 + 24);
    *(_QWORD *)(v9 + 8) = v8;
    *(_DWORD *)(v9 + 16) = 0;
    goto LABEL_9;
  }
  v10 = operator new(a2 + 25);
  *(_QWORD *)(v10 + 8) = a2;
  *(_DWORD *)(v10 + 16) = 0;
  v9 = v10;
  v6 = (char *)(v10 + 24);
  if ( a2 != 1 )
  {
LABEL_9:
    v6 = (char *)memset(v6, v5, a2);
    goto LABEL_10;
  }
  *(_BYTE *)(v10 + 24) = v5;
LABEL_10:
  result = &qword_6FD2E0;
  if ( (__int64 *)v9 != &qword_6FD2E0 )
  {
    result = (__int64 *)(v9 + a2);
    *(_QWORD *)v9 = a2;
    *(_BYTE *)(v9 + a2 + 24) = 0;
  }
LABEL_3:
  *v4 = v6;
  return result;
}

