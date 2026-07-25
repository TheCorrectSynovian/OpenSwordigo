/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA390
 * Mangled: ._Z14luaL_findtableP9lua_StateiPKci
 * Demangled: luaL_findtable(lua_State *,int,char const*,int)
 *
 * Callers: 1
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *
 * Callees: 1
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA398 string=0x00000000001FA39C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_findtable()
{
  return _Z14luaL_findtableP9lua_StateiPKci();
}

