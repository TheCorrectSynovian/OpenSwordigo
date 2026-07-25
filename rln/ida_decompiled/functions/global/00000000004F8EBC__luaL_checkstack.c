/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8EBC
 * Mangled: _Z15luaL_checkstackP9lua_StateiPKc
 * Demangled: luaL_checkstack(lua_State *,int,char const*)
 *
 * Callers: 1
 *   0x00000000002004E0  luaL_checkstack(lua_State *,int,char const*)
 *
 * Callees: 2
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x0000000000202C30  lua_checkstack(lua_State *,int)
 *
 * Referenced strings: 3
 *   insn=0x00000000004F8ECC string=0x00000000004F8ED0 "X'"
 *   insn=0x00000000004F8EE8 string=0x000000000059A5E4 "stack overflow (%s)"
 *   insn=0x00000000004F8EFC string=0x00000000001FADF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 luaL_checkstack()
{
  __int64 result; // x0

  result = lua_checkstack();
  if ( !(_DWORD)result )
    luaL_error();
  return result;
}

