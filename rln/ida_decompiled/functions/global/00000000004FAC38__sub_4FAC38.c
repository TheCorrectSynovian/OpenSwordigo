/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FAC38
 * Mangled: sub_4FAC38
 * Demangled: sub_4FAC38
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F54B0  luaL_checkinteger(lua_State *,int)
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *
 * Referenced strings: 10
 *   insn=0x00000000004FAC4C string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FAC58 string=0x00000000004FAC5C "Q"
 *   insn=0x00000000004FAC5C string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004FAC74 string=0x00000000004FAC78 ""
 *   insn=0x00000000004FAC74 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004FAC90 string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004FACA4 string=0x00000000001F54B0 "P'"
 *   insn=0x00000000004FACC4 string=0x000000000059A880 "index out of range"
 *   insn=0x00000000004FACD0 string=0x00000000004FACD4 "/"
 *   insn=0x00000000004FACD4 string=0x00000000001FC190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FAC38()
{
  int v0; // w20
  int v2; // w0
  int v3; // w9
  int v4; // w21

  v0 = lua_gettop();
  if ( (unsigned int)lua_type() == 4 && *(_BYTE *)lua_tolstring() == 35 )
  {
    lua_pushinteger();
    return 1;
  }
  else
  {
    v2 = luaL_checkinteger();
    if ( v0 >= v2 )
      v3 = v2;
    else
      v3 = v0;
    if ( v2 >= 0 )
      v4 = v3;
    else
      v4 = v0 + v2;
    if ( v4 <= 0 )
      luaL_argerror();
    return (unsigned int)(v0 - v4);
  }
}

