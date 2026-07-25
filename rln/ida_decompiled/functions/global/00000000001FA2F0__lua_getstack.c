/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA2F0
 * Mangled: ._Z12lua_getstackP9lua_StateiP9lua_Debug
 * Demangled: lua_getstack(lua_State *,int,lua_Debug *)
 *
 * Callers: 6
 *   0x00000000004F888C  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000004F8984  luaL_error(lua_State *,char const*,...)
 *   0x00000000004F8B0C  luaL_where(lua_State *,int)
 *   0x00000000004FB244  sub_4FB244
 *   0x00000000004FB55C  sub_4FB55C
 *   0x00000000004FB6B4  sub_4FB6B4
 *
 * Callees: 1
 *   0x00000000004EA384  lua_getstack(lua_State *,int,lua_Debug *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA2F4 string=0x00000000004EA384 ""
 *   insn=0x00000000001FA2F8 string=0x00000000001FA2FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_getstack()
{
  return _Z12lua_getstackP9lua_StateiP9lua_Debug();
}

