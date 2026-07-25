/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005628F0
 * Mangled: sub_5628F0
 * Demangled: sub_5628F0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000051F654  sub_51F654
 *   0x000000000051F8B4  sub_51F8B4
 *   0x00000000005623D0  sub_5623D0
 *   0x00000000005625D4  sub_5625D4
 *
 * Referenced strings: 40
 *   insn=0x0000000000562914 string=0x0000000000562918 " "
 *   insn=0x0000000000562918 string=0x000000000056293C "6"
 *   insn=0x000000000056291C string=0x0000000000562920 "!"
 *   insn=0x0000000000562920 string=0x0000000000562924 " "
 *   insn=0x000000000056292C string=0x0000000000562930 "k"
 *   insn=0x0000000000562944 string=0x0000000000562948 "x"
 *   insn=0x0000000000562958 string=0x000000000056295C ">"
 *   insn=0x0000000000562964 string=0x0000000000562968 "B"
 *   insn=0x0000000000562968 string=0x000000000056296C "?"
 *   insn=0x0000000000562974 string=0x0000000000562A0C "`"
 *   insn=0x0000000000562978 string=0x000000000056297C "`"
 *   insn=0x0000000000562980 string=0x0000000000562984 "a"
 *   insn=0x0000000000562980 string=0x00000000005629F0 "af@"
 *   insn=0x0000000000562984 string=0x0000000000562988 "`"
 *   insn=0x0000000000562990 string=0x0000000000562AC4 "5"
 *   insn=0x0000000000562994 string=0x0000000000562998 "`"
 *   insn=0x000000000056299C string=0x00000000005629A0 "`"
 *   insn=0x00000000005629A0 string=0x00000000005629A4 "t"
 *   insn=0x00000000005629B4 string=0x00000000005629B8 """
 *   insn=0x00000000005629C0 string=0x00000000005629C4 "`"
 *   insn=0x00000000005629F4 string=0x00000000005629F8 "!"
 *   insn=0x00000000005629F8 string=0x00000000005629FC "!"
 *   insn=0x00000000005629FC string=0x0000000000562A00 " "
 *   insn=0x0000000000562A10 string=0x0000000000562A14 "`"
 *   insn=0x0000000000562A10 string=0x0000000000562A68 "a\n@"
 *   insn=0x0000000000562A1C string=0x0000000000562A20 "v"
 *   insn=0x0000000000562A20 string=0x0000000000562A24 "`"
 *   insn=0x0000000000562A68 string=0x0000000000562A6C "`"
 *   insn=0x0000000000562A6C string=0x0000000000562A70 "bZ@"
 *   insn=0x0000000000562A70 string=0x0000000000562A74 "?"
 *   insn=0x0000000000562A74 string=0x0000000000562A78 "cN@"
 *   insn=0x0000000000562A7C string=0x0000000000562A80 "a^@"
 *   insn=0x0000000000562A80 string=0x0000000000562A84 "c"
 *   insn=0x0000000000562A84 string=0x0000000000562A88 "@"
 *   insn=0x0000000000562A88 string=0x0000000000562A8C "a"
 *   insn=0x0000000000562A8C string=0x0000000000562A90 "`Z"
 *   insn=0x0000000000562A90 string=0x0000000000562A94 "`\n"
 *   insn=0x0000000000562AA4 string=0x0000000000562AA8 "b"
 *   insn=0x0000000000562AAC string=0x0000000000562AB0 """
 *   insn=0x0000000000562AB0 string=0x0000000000562AB4 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__off_t __fastcall sub_5628F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x0
  int v7; // w0
  __int64 v8; // x21
  bool v9; // w22
  __int64 v10; // x23
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  int v15; // w0
  __int64 v16; // x20
  __off_t v17; // x0
  __int64 v19; // x2
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x0
  int v23; // w21
  __int64 v24; // [xsp+58h] [xbp+58h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  if ( v4 && (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4), v8 = v7, v7 >= 0) )
  {
    v9 = v7 <= 0;
  }
  else
  {
    v9 = 1;
    v8 = 0;
  }
  v10 = -1;
  if ( (v9 & (unsigned __int8)(a2 != 0)) >= (unsigned int)sub_51F654((_QWORD *)(a1 + 104)) )
    return v10;
  if ( !a2
    && a3 == 1
    && (!*(_BYTE *)(a1 + 170)
     || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 48LL))(*(_QWORD *)(a1 + 200))) )
  {
    v15 = *(unsigned __int8 *)(a1 + 169);
    v24 = *(_QWORD *)(a1 + 124);
    if ( !v15 )
    {
      v16 = 0;
LABEL_11:
      if ( *(_BYTE *)(a1 + 170) )
        v16 = (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 2;
      v17 = sub_51F8B4((FILE **)(a1 + 104), 0, 1);
      if ( v17 != -1 )
        return v17 + v16;
      return v10;
    }
    v23 = 1;
    v16 = 0;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 192) )
    {
      v19 = *(_QWORD *)(a1 + 176);
      v20 = *(_QWORD *)(a1 + 16) != *(_QWORD *)(a1 + 8);
      v21 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 152);
      v22 = v19 + 4 * v20;
      *(_QWORD *)(a1 + 24) = v21;
      *(_QWORD *)(a1 + 176) = v22;
      *(_QWORD *)(a1 + 16) = v22;
      *(_BYTE *)(a1 + 192) = 0;
    }
    v24 = *(_QWORD *)(a1 + 124);
    v16 = v8 * a2;
    if ( a3 != 1 || !*(_BYTE *)(a1 + 169) )
      return sub_5625D4(a1, v16, a3, v24, v11, v12, v13, v14);
    v23 = 0;
  }
  v24 = *(_QWORD *)(a1 + 140);
  v16 += (int)sub_5623D0(a1, (__int64)&v24);
  if ( v23 )
    goto LABEL_11;
  return sub_5625D4(a1, v16, a3, v24, v11, v12, v13, v14);
}

