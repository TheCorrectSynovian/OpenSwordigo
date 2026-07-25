/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FED80
 * Mangled: ._Z12luaL_openlibP9lua_StatePKcPK8luaL_Regi
 * Demangled: luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *
 * Callers: 1
 *   0x00000000004F9300  luaL_register(lua_State *,char const*,luaL_Reg const*)
 *
 * Callees: 1
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FED88 string=0x00000000001FED8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_openlib()
{
  return _Z12luaL_openlibP9lua_StatePKcPK8luaL_Regi();
}

