/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203A00
 * Mangled: ._Z15lua_createtableP9lua_Stateii
 * Demangled: lua_createtable(lua_State *,int,int)
 *
 * Callers: 6
 *   0x0000000000476CC4  sub_476CC4
 *   0x00000000004F8D78  luaL_newmetatable(lua_State *,char const*)
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FB8D8  luaopen_string(lua_State *)
 *
 * Callees: 1
 *   0x00000000004E8DB4  lua_createtable(lua_State *,int,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203A08 string=0x0000000000203A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_createtable()
{
  return _Z15lua_createtableP9lua_Stateii();
}

