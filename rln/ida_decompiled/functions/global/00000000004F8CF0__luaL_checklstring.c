/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8CF0
 * Mangled: _Z17luaL_checklstringP9lua_StateiPm
 * Demangled: luaL_checklstring(lua_State *,int,ulong *)
 *
 * Callers: 1
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *
 * Callees: 5
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 5
 *   insn=0x00000000004F8D08 string=0x00000000001F57A0 "P'"
 *   insn=0x00000000004F8D2C string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F8D3C string=0x000000000059A5B1 "%s expected, got %s"
 *   insn=0x00000000004F8D40 string=0x00000000004F8D44 "!"
 *   insn=0x00000000004F8D60 string=0x00000000001FC190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 luaL_checklstring()
{
  __int64 result; // x0

  result = lua_tolstring();
  if ( !result )
  {
    lua_typename();
    lua_type();
    lua_typename();
    lua_pushfstring();
    luaL_argerror();
  }
  return result;
}

