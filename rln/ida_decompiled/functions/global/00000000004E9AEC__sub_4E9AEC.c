/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9AEC
 * Mangled: sub_4E9AEC
 * Demangled: sub_4E9AEC
 *
 * Callers: 1
 *   0x00000000004E9A88  lua_cpcall(lua_State *,int (*)(lua_State *),void *)
 *
 * Callees: 2
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004ED3B8  sub_4ED3B8
 *
 * Referenced strings: 18
 *   insn=0x00000000004E9AF8 string=0x00000000004E9AFC "h"
 *   insn=0x00000000004E9AFC string=0x00000000004E9B00 "i*@"
 *   insn=0x00000000004E9B0C string=0x00000000004E9B10 ""
 *   insn=0x00000000004E9B0C string=0x00000000004E9B20 "h"
 *   insn=0x00000000004E9B10 string=0x00000000004E9B14 ""
 *   insn=0x00000000004E9B14 string=0x00000000004E9B18 "a"
 *   insn=0x00000000004E9B2C string=0x00000000004E9B30 """
 *   insn=0x00000000004E9B40 string=0x00000000004E9B44 ""
 *   insn=0x00000000004E9B44 string=0x00000000004E9B48 "h\n@"
 *   insn=0x00000000004E9B4C string=0x00000000004E9B50 "\t\t"
 *   insn=0x00000000004E9B50 string=0x00000000004E9B54 "h\n@"
 *   insn=0x00000000004E9B58 string=0x00000000004E9B5C "\tA"
 *   insn=0x00000000004E9B5C string=0x00000000004E9B60 "i\n"
 *   insn=0x00000000004E9B64 string=0x00000000004E9B68 "\n"
 *   insn=0x00000000004E9B68 string=0x00000000004E9B6C "\t\t"
 *   insn=0x00000000004E9B6C string=0x00000000004E9B70 "h\n@"
 *   insn=0x00000000004E9B70 string=0x00000000004E9B74 "\tA"
 *   insn=0x00000000004E9B74 string=0x00000000004E9B78 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4E9AEC(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // x8
  _QWORD *v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8

  v3 = a1[5];
  if ( v3 == a1[10] )
    v5 = a1 + 15;
  else
    v5 = (_QWORD *)(**(_QWORD **)(v3 + 8) + 24LL);
  v6 = sub_4ED3B8(a1, 0, *v5);
  *(_QWORD *)(v6 + 32) = *a2;
  v7 = a1[2];
  *(_QWORD *)v7 = v6;
  *(_DWORD *)(v7 + 8) = 6;
  v8 = a1[2];
  a1[2] = v8 + 16;
  v9 = a2[1];
  *(_DWORD *)(v8 + 24) = 2;
  *(_QWORD *)(v8 + 16) = v9;
  v10 = a1[2];
  a1[2] = v10 + 16;
  return sub_4EC63C(a1, v10 - 16, 0);
}

