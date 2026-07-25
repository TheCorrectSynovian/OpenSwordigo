/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EC9BC
 * Mangled: sub_4EC9BC
 * Demangled: sub_4EC9BC
 *
 * Callers: 3
 *   0x00000000004E98F8  lua_pcall(lua_State *,int,int,int)
 *   0x00000000004E9A88  lua_cpcall(lua_State *,int (*)(lua_State *),void *)
 *   0x00000000004ECB9C  sub_4ECB9C
 *
 * Callees: 6
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000004ED5F4  sub_4ED5F4
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004F356C  sub_4F356C
 *
 * Referenced strings: 54
 *   insn=0x00000000004EC9D8 string=0x00000000004EC9DC "W"
 *   insn=0x00000000004EC9F0 string=0x00000000004EC9F4 "i"
 *   insn=0x00000000004EC9F4 string=0x00000000004EC9F8 "z"
 *   insn=0x00000000004EC9F8 string=0x00000000004EC9FC "v"
 *   insn=0x00000000004EC9FC string=0x00000000004ECA00 "{*@"
 *   insn=0x00000000004ECA00 string=0x00000000004ECA04 "y"
 *   insn=0x00000000004ECA10 string=0x00000000004ECA14 "i"
 *   insn=0x00000000004ECA20 string=0x00000000004ECA24 "hV"
 *   insn=0x00000000004ECA2C string=0x00000000004ECA30 "h"@"
 *   insn=0x00000000004ECA2C string=0x00000000004ECB44 "xZ"
 *   insn=0x00000000004ECA4C string=0x00000000004ECA50 "#"
 *   insn=0x00000000004ECA50 string=0x00000000004ECA74 "h\n@"
 *   insn=0x00000000004ECA58 string=0x00000000004ECA88 "a"
 *   insn=0x00000000004ECA5C string=0x00000000004ECA60 "A"
 *   insn=0x00000000004ECA60 string=0x00000000004ECA64 "a"
 *   insn=0x00000000004ECA60 string=0x00000000004ECAA8 "v*@"
 *   insn=0x00000000004ECA64 string=0x00000000004ECA6C """
 *   insn=0x00000000004ECA64 string=0x0000000000599A3C "not enough memory"
 *   insn=0x00000000004ECA6C string=0x00000000004ECA70 "\t"
 *   insn=0x00000000004ECA74 string=0x00000000004ECA78 "\t"
 *   insn=0x00000000004ECA7C string=0x00000000004ECA80 ""
 *   insn=0x00000000004ECA80 string=0x00000000004ECA84 ""
 *   insn=0x00000000004ECA88 string=0x0000000000599A4E "error in error handling"
 *   insn=0x00000000004ECAAC string=0x00000000004ECAB0 "z"
 *   insn=0x00000000004ECAB0 string=0x00000000004ECAB4 "h\n"
 *   insn=0x00000000004ECAB8 string=0x00000000004ECABC "i"
 *   insn=0x00000000004ECABC string=0x00000000004ECAC0 "*"
 *   insn=0x00000000004ECAC0 string=0x00000000004ECAC4 "h^"
 *   insn=0x00000000004ECAC4 string=0x00000000004ECAC8 "j"
 *   insn=0x00000000004ECAC8 string=0x00000000004ECACC ")@"
 *   insn=0x00000000004ECACC string=0x00000000004ECAD0 "*"
 *   insn=0x00000000004ECAD4 string=0x00000000004ECAD8 "y"
 *   insn=0x00000000004ECAD8 string=0x00000000004ECADC "i"
 *   insn=0x00000000004ECADC string=0x00000000004ECAE0 "+"
 *   insn=0x00000000004ECAE4 string=0x00000000004ECAE8 "i"
 *   insn=0x00000000004ECAEC string=0x00000000004ECAF0 ")}\n"
 *   insn=0x00000000004ECAF4 string=0x00000000004ECAF8 "?"
 *   insn=0x00000000004ECAF8 string=0x00000000004ECAFC "L"
 *   insn=0x00000000004ECAFC string=0x00000000004ECB00 "\t"
 *   insn=0x00000000004ECB18 string=0x00000000004ECB1C "h"
 *   insn=0x00000000004ECB1C string=0x00000000004ECB20 "\t"
 *   insn=0x00000000004ECB20 string=0x00000000004ECB28 "\t"
 *   insn=0x00000000004ECB28 string=0x00000000004ECB2C ""
 *   insn=0x00000000004ECB2C string=0x00000000004ECB30 "i"
 *   insn=0x00000000004ECB30 string=0x00000000004ECB34 "\t"
 *   insn=0x00000000004ECB34 string=0x00000000004ECB38 ""
 *   insn=0x00000000004ECB38 string=0x00000000004ECB3C "i^"
 *   insn=0x00000000004ECB3C string=0x00000000004ECB40 "h"
 *   insn=0x00000000004ECB50 string=0x00000000004ECB54 "A"
 *   insn=0x00000000004ECB7C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004ECB80 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004ECB84 string=0x00000000004ECB88 "h"
 *   insn=0x00000000004ECB88 string=0x00000000004ECB8C ""
 *   insn=0x00000000004ECB94 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EC9BC(__int64 a1, void (*a2)(void), __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // x9
  __int64 v8; // x24
  __int16 v9; // w26
  __int64 v10; // x22
  __int64 v11; // x27
  char v12; // w25
  unsigned int v13; // w20
  unsigned __int64 v14; // x27
  __int64 v15; // x21
  char *v16; // x1
  size_t v17; // x2
  __int64 v18; // x8
  int v19; // w8
  __int64 v20; // x22
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v26; // [xsp+8h] [xbp-68h] BYREF
  unsigned int v27; // [xsp+14h] [xbp-5Ch]
  __int64 v28; // [xsp+18h] [xbp-58h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_QWORD *)(a1 + 168);
  v8 = *(_QWORD *)(a1 + 176);
  v9 = *(_WORD *)(a1 + 96);
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(_BYTE *)(a1 + 101);
  v27 = 0;
  v26 = v7;
  *(_QWORD *)(a1 + 168) = &v26;
  *(_QWORD *)(a1 + 176) = a5;
  a2();
  *(_QWORD *)(a1 + 168) = v26;
  v13 = v27;
  if ( !v27 )
    goto LABEL_13;
  v14 = v10 - v11;
  v15 = *(_QWORD *)(a1 + 64) + a4;
  sub_4ED5F4(a1);
  if ( v13 - 2 < 2 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v15 = *(_QWORD *)(v18 - 16);
    v19 = *(_DWORD *)(v18 - 8);
LABEL_9:
    *(_DWORD *)(v15 + 8) = v19;
    goto LABEL_10;
  }
  if ( v13 == 5 )
  {
    v16 = "error in error handling";
    v17 = 23;
    goto LABEL_8;
  }
  if ( v13 == 4 )
  {
    v16 = "not enough memory";
    v17 = 17;
LABEL_8:
    *(_QWORD *)v15 = sub_4F356C(a1, v16, v17);
    v19 = 4;
    goto LABEL_9;
  }
LABEL_10:
  v20 = *(_QWORD *)(a1 + 80);
  *(_WORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 16) = v15 + 16;
  *(_QWORD *)(a1 + 40) = v20 + v14;
  v21 = *(int *)(a1 + 92);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v20 + v14);
  v22 = *(_QWORD *)(v20 + v14 + 24);
  *(_BYTE *)(a1 + 101) = v12;
  *(_QWORD *)(a1 + 48) = v22;
  if ( (int)v21 >= 20001 && (int)(-858993459 * (v14 >> 3)) <= 19998 )
  {
    v23 = sub_4EED74(a1, v20, 40 * v21, 800000);
    v24 = *(_QWORD *)(a1 + 40) - v20;
    *(_QWORD *)(a1 + 72) = v23 + 799960;
    *(_QWORD *)(a1 + 80) = v23;
    *(_DWORD *)(a1 + 92) = 20000;
    *(_QWORD *)(a1 + 40) = v23 + v24;
  }
LABEL_13:
  *(_QWORD *)(a1 + 176) = v8;
  return v13;
}

