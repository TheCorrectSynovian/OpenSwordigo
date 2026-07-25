/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5E90
 * Mangled: ._Z10lua_rawgetP9lua_Statei
 * Demangled: lua_rawget(lua_State *,int)
 *
 * Callers: 7
 *   0x0000000000476BE8  sub_476BE8
 *   0x0000000000476CC4  sub_476CC4
 *   0x00000000004F91C0  luaL_getmetafield(lua_State *,int,char const*)
 *   0x00000000004F9234  luaL_callmeta(lua_State *,int,char const*)
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FAB8C  sub_4FAB8C
 *
 * Callees: 1
 *   0x00000000004E8B94  lua_rawget(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5E98 string=0x00000000001F5E9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_rawget()
{
  return _Z10lua_rawgetP9lua_Statei();
}

