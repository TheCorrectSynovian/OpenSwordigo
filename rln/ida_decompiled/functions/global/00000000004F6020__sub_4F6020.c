/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F6020
 * Mangled: sub_4F6020
 * Demangled: sub_4F6020
 *
 * Callers: 3
 *   0x00000000004E8958  lua_gettable(lua_State *,int)
 *   0x00000000004E8A34  lua_getfield(lua_State *,int,char const*)
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 7
 *   0x00000000004EB03C  sub_4EB03C
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004F4118  sub_4F4118
 *   0x00000000004F4E8C  sub_4F4E8C
 *   0x00000000004F4ED4  sub_4F4ED4
 *
 * Referenced strings: 50
 *   insn=0x00000000004F603C string=0x00000000004F6040 "7"
 *   insn=0x00000000004F6040 string=0x000000000059AE27 "index"
 *   insn=0x00000000004F6068 string=0x00000000004F606C "+"
 *   insn=0x00000000004F6070 string=0x00000000004F6074 "(@"
 *   insn=0x00000000004F6074 string=0x00000000004F6078 "("
 *   insn=0x00000000004F6078 string=0x00000000004F611C "("
 *   insn=0x00000000004F6080 string=0x00000000004F6084 "(@9"
 *   insn=0x00000000004F6088 string=0x00000000004F608C "h"
 *   insn=0x00000000004F6094 string=0x00000000004F6098 "}"
 *   insn=0x00000000004F60A4 string=0x00000000004F60A8 ""
 *   insn=0x00000000004F60A8 string=0x00000000004F60DC "("
 *   insn=0x00000000004F60B8 string=0x00000000004F4ED4 "(@"
 *   insn=0x00000000004F60C0 string=0x00000000004F60C4 "("
 *   insn=0x00000000004F60E0 string=0x00000000004F60E4 "`"
 *   insn=0x00000000004F60E4 string=0x00000000004F60E8 "Z"
 *   insn=0x00000000004F60E4 string=0x00000000004F6130 "h\n@"
 *   insn=0x00000000004F60E8 string=0x00000000004F60EC "_"
 *   insn=0x00000000004F60F0 string=0x00000000004F60F4 ")"
 *   insn=0x00000000004F6108 string=0x00000000004F610C "!"
 *   insn=0x00000000004F610C string=0x000000000059A4BA "loop in gettable"
 *   insn=0x00000000004F6120 string=0x00000000004F6124 "(@"
 *   insn=0x00000000004F6128 string=0x00000000004F612C ")"
 *   insn=0x00000000004F6130 string=0x00000000004F6134 "\t"
 *   insn=0x00000000004F6134 string=0x00000000004F6138 "j"@"
 *   insn=0x00000000004F6138 string=0x00000000004F613C "\t"
 *   insn=0x00000000004F613C string=0x00000000004F6140 ")"
 *   insn=0x00000000004F6144 string=0x00000000004F6148 "\t\t"
 *   insn=0x00000000004F6148 string=0x00000000004F614C "h\n@"
 *   insn=0x00000000004F6150 string=0x00000000004F6154 "\t\t"
 *   insn=0x00000000004F6158 string=0x00000000004F615C "\t"
 *   insn=0x00000000004F615C string=0x00000000004F6160 "h\n@"
 *   insn=0x00000000004F6164 string=0x00000000004F6168 "\t"
 *   insn=0x00000000004F616C string=0x00000000004F6170 "\t)"
 *   insn=0x00000000004F6170 string=0x00000000004F6174 "h"
 *   insn=0x00000000004F6174 string=0x00000000004F6178 "a\n@"
 *   insn=0x00000000004F6178 string=0x00000000004F617C ""
 *   insn=0x00000000004F6184 string=0x00000000004F6198 "("
 *   insn=0x00000000004F6190 string=0x00000000004F6194 "a\n@"
 *   insn=0x00000000004F6190 string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004F61A0 string=0x00000000004F61A4 "h\n"
 *   insn=0x00000000004F61A4 string=0x00000000004F61A8 "%"
 *   insn=0x00000000004F61A8 string=0x00000000004F61AC "h\n@"
 *   insn=0x00000000004F61AC string=0x00000000004F61B0 "i"@"
 *   insn=0x00000000004F61B0 string=0x00000000004F61B4 "\nA"
 *   insn=0x00000000004F61B4 string=0x00000000004F61B8 "j\n"
 *   insn=0x00000000004F61B8 string=0x00000000004F61BC "\n"
 *   insn=0x00000000004F61BC string=0x00000000004F61C0 ")"
 *   insn=0x00000000004F61C0 string=0x00000000004F61C4 "*"
 *   insn=0x00000000004F61C4 string=0x00000000004F61C8 ""
 *   insn=0x00000000004F61C8 string=0x00000000004F61CC "(\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F6020(_QWORD *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // x22
  int v5; // w8
  unsigned int v9; // w26
  __int64 v10; // x24
  __int64 result; // x0
  __int64 v12; // x25
  __int64 *v13; // x24
  _DWORD *v14; // x25
  __int64 v15; // x8
  __int64 v16; // x10
  __int64 v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  unsigned __int64 v20; // x1
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x9

  v4 = a2;
  v5 = *(_DWORD *)(a2 + 8);
  v9 = -1;
  while ( 1 )
  {
    if ( v5 == 5 )
    {
      v10 = *(_QWORD *)v4;
      result = (__int64)sub_4F4118(*(_QWORD *)v4, a3);
      v12 = result;
      if ( *(_DWORD *)(result + 8)
        || (result = *(_QWORD *)(v10 + 16)) == 0
        || (*(_BYTE *)(result + 10) & 1) != 0
        || (result = (__int64)sub_4F4E8C(result, 0, *(_QWORD *)(a1[4] + 296LL)), (v13 = (__int64 *)result) == 0) )
      {
        *(_QWORD *)a4 = *(_QWORD *)v12;
        *(_DWORD *)(a4 + 8) = *(_DWORD *)(v12 + 8);
        return result;
      }
      v14 = (_DWORD *)(result + 8);
      v5 = *(_DWORD *)(result + 8);
    }
    else
    {
      v13 = sub_4F4ED4((__int64)a1, (_DWORD *)v4, 0);
      v14 = v13 + 1;
      v5 = *((_DWORD *)v13 + 2);
      if ( !v5 )
        sub_4EB03C((__int64)a1, v4, "index");
    }
    if ( v5 == 6 )
      break;
    ++v9;
    v4 = (__int64)v13;
    if ( v9 > 0x62 )
      sub_4EB320((__int64)a1, "loop in gettable");
  }
  v15 = a1[2];
  v16 = a1[8];
  *(_QWORD *)v15 = *v13;
  v17 = a4 - v16;
  *(_DWORD *)(v15 + 8) = *v14;
  v18 = a1[2];
  *(_QWORD *)(v18 + 16) = *(_QWORD *)v4;
  *(_DWORD *)(v18 + 24) = *(_DWORD *)(v4 + 8);
  v19 = a1[2];
  *(_QWORD *)(v19 + 32) = *(_QWORD *)a3;
  *(_DWORD *)(v19 + 40) = a3[2];
  v20 = a1[2];
  if ( (__int64)(a1[7] - v20) <= 48 )
  {
    sub_4EBBB8((__int64)a1, 3);
    v20 = a1[2];
  }
  a1[2] = v20 + 48;
  result = sub_4EC63C((__int64)a1, v20, 1);
  v21 = a1[2];
  v22 = a1[8];
  a1[2] = v21 - 16;
  v23 = v22 + v17;
  *(_QWORD *)v23 = *(_QWORD *)(v21 - 16);
  *(_DWORD *)(v23 + 8) = *(_DWORD *)(v21 - 8);
  return result;
}

