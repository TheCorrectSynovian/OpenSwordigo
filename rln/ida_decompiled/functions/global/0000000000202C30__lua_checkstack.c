/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202C30
 * Mangled: ._Z14lua_checkstackP9lua_Statei
 * Demangled: lua_checkstack(lua_State *,int)
 *
 * Callers: 3
 *   0x00000000004F8EBC  luaL_checkstack(lua_State *,int,char const*)
 *   0x00000000004FB0E0  sub_4FB0E0
 *   0x00000000004FB6B4  sub_4FB6B4
 *
 * Callees: 1
 *   0x00000000004E6764  lua_checkstack(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202C38 string=0x0000000000202C3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_checkstack()
{
  return _Z14lua_checkstackP9lua_Statei();
}

