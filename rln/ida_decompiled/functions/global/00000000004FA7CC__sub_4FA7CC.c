/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA7CC
 * Mangled: sub_4FA7CC
 * Demangled: sub_4FA7CC
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001F92F0  lua_getmetatable(lua_State *,int)
 *   0x00000000001FEFB0  luaL_getmetafield(lua_State *,int,char const*)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *
 * Referenced strings: 5
 *   insn=0x00000000004FA7DC string=0x00000000004FA7E0 "P"
 *   insn=0x00000000004FA7E0 string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FA7EC string=0x00000000001F92F0 "0'"
 *   insn=0x00000000004FA7F4 string=0x000000000059A802 "__metatable"
 *   insn=0x00000000004FA804 string=0x00000000001FEFB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA7CC()
{
  luaL_checkany();
  if ( (unsigned int)lua_getmetatable() )
    luaL_getmetafield();
  else
    lua_pushnil();
  return 1;
}

