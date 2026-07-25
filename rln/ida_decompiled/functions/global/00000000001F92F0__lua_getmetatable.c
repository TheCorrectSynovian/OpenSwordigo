/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F92F0
 * Mangled: ._Z16lua_getmetatableP9lua_Statei
 * Demangled: lua_getmetatable(lua_State *,int)
 *
 * Callers: 6
 *   0x0000000000476BE8  sub_476BE8
 *   0x00000000004F8DF8  luaL_checkudata(lua_State *,int,char const*)
 *   0x00000000004F91C0  luaL_getmetafield(lua_State *,int,char const*)
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FA7CC  sub_4FA7CC
 *
 * Callees: 1
 *   0x00000000004E8E24  lua_getmetatable(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F92F4 string=0x00000000004E8E24 "?"
 *   insn=0x00000000001F92F8 string=0x00000000001F92FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_getmetatable()
{
  return _Z16lua_getmetatableP9lua_Statei();
}

