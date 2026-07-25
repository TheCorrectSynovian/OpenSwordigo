/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B50
 * Mangled: ._Z13luaL_loadfileP9lua_StatePKc
 * Demangled: luaL_loadfile(lua_State *,char const*)
 *
 * Callers: 2
 *   0x00000000004FA650  sub_4FA650
 *   0x00000000004FA824  sub_4FA824
 *
 * Callees: 1
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5B58 string=0x00000000001F5B5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 luaL_loadfile()
{
  return _Z13luaL_loadfileP9lua_StatePKc();
}

