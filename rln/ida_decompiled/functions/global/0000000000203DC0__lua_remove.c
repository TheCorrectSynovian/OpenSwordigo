/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203DC0
 * Mangled: ._Z10lua_removeP9lua_Statei
 * Demangled: lua_remove(lua_State *,int)
 *
 * Callers: 5
 *   0x00000000004F91C0  luaL_getmetafield(lua_State *,int,char const*)
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *
 * Callees: 1
 *   0x00000000004E69B4  lua_remove(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203DC4 string=0x00000000004E69B4 "?"
 *   insn=0x0000000000203DC8 string=0x0000000000203DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_remove()
{
  return _Z10lua_removeP9lua_Statei();
}

