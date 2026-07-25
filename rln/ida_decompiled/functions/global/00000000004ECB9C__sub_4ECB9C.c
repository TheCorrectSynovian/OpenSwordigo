/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ECB9C
 * Mangled: sub_4ECB9C
 * Demangled: sub_4ECB9C
 *
 * Callers: 1
 *   0x00000000004E9B8C  lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EC9BC  sub_4EC9BC
 *   0x00000000004ECC2C  sub_4ECC2C
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 4
 *   insn=0x00000000004ECBAC string=0x00000000004ECBB0 "U"
 *   insn=0x00000000004ECBE0 string=0x00000000004ECBE4 "v"
 *   insn=0x00000000004ECBF8 string=0x00000000004ECBFC "^"
 *   insn=0x00000000004ECC28 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ECB9C(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // w19
  __int64 v6; // [xsp+0h] [xbp-50h] BYREF
  __int64 v7; // [xsp+8h] [xbp-48h]
  __int64 v8; // [xsp+18h] [xbp-38h]
  __int64 v9; // [xsp+20h] [xbp-30h]
  __int64 v10; // [xsp+28h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = a2;
  v7 = 0;
  v8 = 0;
  v9 = a3;
  v4 = sub_4EC9BC((__int64)a1, (void (*)(void))sub_4ECC2C, (__int64)&v6, a1[2] - a1[8], a1[22]);
  sub_4EED74(a1, v7, v8, 0);
  return v4;
}

