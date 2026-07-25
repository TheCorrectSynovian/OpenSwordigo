/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521F50
 * Mangled: sub_521F50
 * Demangled: sub_521F50
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000005220F0  sub_5220F0
 *   0x0000000000565AD8  sub_565AD8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x0000000000521F50 string=0x0000000000521F54 "?"
 *   insn=0x0000000000521F6C string=0x0000000000521F70 "X"
 *   insn=0x0000000000521F74 string=0x0000000000521F78 "m"
 *   insn=0x0000000000521F7C string=0x0000000000521F80 "?"
 *   insn=0x0000000000521F80 string=0x0000000000521F84 " "
 *   insn=0x0000000000521F84 string=0x0000000000521F88 "7"
 *   insn=0x0000000000521F8C string=0x0000000000521F90 "`"
 *   insn=0x0000000000521F90 string=0x0000000000521F94 "wY"
 *   insn=0x0000000000521F94 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000521FA4 string=0x0000000000521FA8 "?"
 *   insn=0x0000000000521FA8 string=0x0000000000521FAC "B"
 *   insn=0x0000000000521FAC string=0x0000000000521FB0 "?"
 *   insn=0x0000000000521FB0 string=0x0000000000521FB4 "!@"
 *   insn=0x0000000000521FBC string=0x0000000000521FC0 "_"
 *   insn=0x0000000000521FC4 string=0x0000000000521FC8 "B"
 *   insn=0x0000000000521FCC string=0x0000000000521FD0 "B"
 *   insn=0x0000000000521FD8 string=0x0000000000521FDC "$"
 *   insn=0x0000000000521FDC string=0x0000000000521FE0 "d"
 *   insn=0x0000000000521FE0 string=0x0000000000521FE4 "?"
 *   insn=0x0000000000521FFC string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052207C string=0x000000000059DCC8 "ios_base::_M_grow_words is not valid"
 *   insn=0x0000000000522088 string=0x000000000052208C "@"
 *   insn=0x000000000052208C string=0x0000000000522090 "~"
 *   insn=0x000000000052208C string=0x0000000000522094 "SI"
 *   insn=0x0000000000522094 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005220AC string=0x00000000005220B0 "X"
 *   insn=0x00000000005220BC string=0x00000000005220C0 "4m"
 *   insn=0x00000000005220C0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005220CC string=0x000000000059DCF0 "ios_base::_M_grow_words allocation failed"
 *   insn=0x00000000005220E0 string=0x00000000005220E4 "+m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_521F50(__int64 a1, int a2, char a3)
{
  char *v5; // x22
  int v6; // w23
  __int64 v7; // x6
  _QWORD *v8; // x3
  __int64 v9; // x2
  _QWORD *v10; // x1
  int v11; // w2
  char *v12; // x0
  __int64 *v13; // x1
  __int64 *v14; // x2
  __int64 v15; // x4
  __int64 v16; // x5
  char *result; // x0
  int v18; // w1
  int v19; // w0

  v5 = (char *)(a1 + 64);
  if ( a2 <= 7 )
  {
    v6 = 8;
LABEL_12:
    *(_QWORD *)(a1 + 200) = v5;
    result = &v5[16 * a2];
    *(_DWORD *)(a1 + 192) = v6;
    return result;
  }
  if ( a2 != 0x7FFFFFFF )
  {
    v6 = a2 + 1;
    v7 = operator new[](16LL * (a2 + 1));
    v8 = (_QWORD *)v7;
    v9 = v6;
    v10 = (_QWORD *)v7;
    do
    {
      *v10 = 0;
      --v9;
      v10[1] = 0;
      v10 += 2;
    }
    while ( v9 );
    v11 = *(_DWORD *)(a1 + 192);
    if ( v11 <= 0 )
    {
      v12 = *(char **)(a1 + 200);
    }
    else
    {
      v12 = *(char **)(a1 + 200);
      v13 = (__int64 *)v12;
      v14 = (__int64 *)&v12[16 * (v11 - 1) + 16];
      do
      {
        v15 = *v13;
        v16 = v13[1];
        v13 += 2;
        *v8 = v15;
        v8[1] = v16;
        v8 += 2;
      }
      while ( v13 != v14 );
    }
    if ( !v12 || v5 == v12 )
    {
      v5 = (char *)v7;
    }
    else
    {
      v5 = (char *)v7;
      operator delete[](v12);
    }
    goto LABEL_12;
  }
  v18 = *(_DWORD *)(a1 + 28);
  v19 = *(_DWORD *)(a1 + 32) | 1;
  *(_DWORD *)(a1 + 32) = v19;
  if ( (v19 & v18) != 0 )
    sub_565AD8("ios_base::_M_grow_words is not valid");
  if ( a3 )
    *(_QWORD *)(a1 + 56) = 0;
  else
    *(_QWORD *)(a1 + 48) = 0;
  return (char *)(a1 + 48);
}

