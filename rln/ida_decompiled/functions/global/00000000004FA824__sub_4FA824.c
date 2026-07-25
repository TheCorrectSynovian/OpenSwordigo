/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA824
 * Mangled: sub_4FA824
 * Demangled: sub_4FA824
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5B50  luaL_loadfile(lua_State *,char const*)
 *   0x00000000001F7970  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *
 * Referenced strings: 4
 *   insn=0x00000000004FA840 string=0x00000000004FA844 "K"
 *   insn=0x00000000004FA844 string=0x00000000001F7970 "0'"
 *   insn=0x00000000004FA850 string=0x00000000001F5B50 "P'"
 *   insn=0x00000000004FA864 string=0x00000000004FA868 ":#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA824()
{
  unsigned int v0; // w20

  v0 = 1;
  luaL_optlstring();
  if ( (unsigned int)luaL_loadfile() )
  {
    lua_pushnil();
    lua_insert();
    return 2;
  }
  return v0;
}

