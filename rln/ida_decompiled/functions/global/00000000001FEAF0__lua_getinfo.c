/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEAF0
 * Mangled: ._Z11lua_getinfoP9lua_StatePKcP9lua_Debug
 * Demangled: lua_getinfo(lua_State *,char const*,lua_Debug *)
 *
 * Callers: 4
 *   0x00000000004F888C  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000004F8984  luaL_error(lua_State *,char const*,...)
 *   0x00000000004F8B0C  luaL_where(lua_State *,int)
 *   0x00000000004FB244  sub_4FB244
 *
 * Callees: 1
 *   0x00000000004EA630  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEAF8 string=0x00000000001FEAFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_getinfo()
{
  return _Z11lua_getinfoP9lua_StatePKcP9lua_Debug();
}

