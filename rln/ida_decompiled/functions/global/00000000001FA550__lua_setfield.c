/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA550
 * Mangled: ._Z12lua_setfieldP9lua_StateiPKc
 * Demangled: lua_setfield(lua_State *,int,char const*)
 *
 * Callers: 4
 *   0x00000000004F8D78  luaL_newmetatable(lua_State *,char const*)
 *   0x00000000004F9308  luaL_openlib(lua_State *,char const*,luaL_Reg const*,int)
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *   0x00000000004FB8D8  luaopen_string(lua_State *)
 *
 * Callees: 1
 *   0x00000000004E9194  lua_setfield(lua_State *,int,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA558 string=0x00000000001FA55C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall lua_setfield(int a1, int a2, char *a3)
{
  return _Z12lua_setfieldP9lua_StateiPKc(a1, a2, a3);
}

