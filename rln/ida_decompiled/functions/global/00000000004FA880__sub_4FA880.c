/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA880
 * Mangled: sub_4FA880
 * Demangled: sub_4FA880
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001F7970  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *   0x00000000001F8110  lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *   0x00000000004FB35C  sub_4FB35C
 *
 * Referenced strings: 6
 *   insn=0x00000000004FA890 string=0x000000000059A80E "=(load)"
 *   insn=0x00000000004FA8A0 string=0x00000000004FA8A4 "3"
 *   insn=0x00000000004FA8A4 string=0x00000000001F7970 "0'"
 *   insn=0x00000000004FA8B8 string=0x00000000004FA8BC "I"
 *   insn=0x00000000004FA8BC string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FA8E0 string=0x00000000001F8110 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA880()
{
  unsigned int v0; // w20

  luaL_optlstring();
  v0 = 1;
  luaL_checktype();
  lua_settop();
  if ( (unsigned int)lua_load() )
  {
    lua_pushnil();
    lua_insert();
    return 2;
  }
  return v0;
}

