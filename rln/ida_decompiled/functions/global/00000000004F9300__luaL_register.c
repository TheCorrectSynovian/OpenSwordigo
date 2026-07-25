/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9300
 * Mangled: _Z13luaL_registerP9lua_StatePKcPK8luaL_Reg
 * Demangled: luaL_register(lua_State *,char const*,luaL_Reg const*)
 *
 * Callers: 1
 *   0x00000000001FF570  luaL_register(lua_State *,char const*,luaL_Reg const*)
 *
 * Callees: 1
 *   0x00000000001FED80  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 luaL_register()
{
  return luaL_openlib();
}

