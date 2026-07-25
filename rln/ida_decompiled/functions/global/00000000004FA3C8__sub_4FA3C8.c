/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA3C8
 * Mangled: sub_4FA3C8
 * Demangled: sub_4FA3C8
 *
 * Callers: 1
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *
 * Callees: 4
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *   0x0000000000203830  lua_next(lua_State *,int)
 *
 * Referenced strings: 3
 *   insn=0x00000000004FA3E0 string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FA3EC string=0x00000000004FA3F0 "H"
 *   insn=0x00000000004FA3F8 string=0x00000000004FA3FC "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA3C8()
{
  unsigned int v0; // w20

  luaL_checktype();
  v0 = 2;
  lua_settop();
  if ( !(unsigned int)lua_next() )
  {
    lua_pushnil();
    return 1;
  }
  return v0;
}

