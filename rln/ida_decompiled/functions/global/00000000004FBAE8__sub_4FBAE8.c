/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FBAE8
 * Mangled: sub_4FBAE8
 * Demangled: sub_4FBAE8
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F54B0  luaL_checkinteger(lua_State *,int)
 *   0x00000000001F5B60  luaL_buffinit(lua_State *,luaL_Buffer *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000001FF030  luaL_pushresult(luaL_Buffer *)
 *   0x0000000000201A10  luaL_prepbuffer(luaL_Buffer *)
 *
 * Referenced strings: 17
 *   insn=0x00000000004FBB04 string=0x00000000004FBB08 "X"
 *   insn=0x00000000004FBB08 string=0x00000000004FBB0C ""
 *   insn=0x00000000004FBB18 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FBB28 string=0x00000000004FBB2C ""
 *   insn=0x00000000004FBB2C string=0x00000000001F5B60 "P'"
 *   insn=0x00000000004FBB3C string=0x000000000059AD3D "invalid value"
 *   insn=0x00000000004FBB44 string=0x00000000004FBB48 "7"
 *   insn=0x00000000004FBB50 string=0x00000000004FBB54 "W"
 *   insn=0x00000000004FBB54 string=0x00000000001F54B0 "P'"
 *   insn=0x00000000004FBB70 string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FBB7C string=0x00000000004FBB8C "9"
 *   insn=0x00000000004FBB8C string=0x00000000004FBB90 "\t"
 *   insn=0x00000000004FBB9C string=0x00000000004FBBA0 "A"
 *   insn=0x00000000004FBBA4 string=0x00000000004FBBA8 """
 *   insn=0x00000000004FBBA8 string=0x00000000004FBBAC ""
 *   insn=0x00000000004FBBB4 string=0x00000000004FBBB8 "A"
 *   insn=0x00000000004FBBE0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FBAE8()
{
  int v0; // w20
  int i; // w25
  int v2; // w0
  char v3; // w22
  __int64 *v4; // x8
  __int64 *v6; // [xsp+0h] [xbp-470h]
  __int64 v7; // [xsp+418h] [xbp-58h] BYREF

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v0 = lua_gettop();
  luaL_buffinit();
  if ( v0 >= 1 )
  {
    for ( i = 0; i != v0; ++i )
    {
      v2 = luaL_checkinteger();
      v3 = v2;
      if ( (v2 & 0xFFFFFF00) != 0 )
        luaL_argerror();
      v4 = v6;
      if ( v6 >= &v7 )
      {
        luaL_prepbuffer();
        v4 = v6;
      }
      v6 = (__int64 *)((char *)v4 + 1);
      *(_BYTE *)v4 = v3;
    }
  }
  luaL_pushresult();
  return 1;
}

