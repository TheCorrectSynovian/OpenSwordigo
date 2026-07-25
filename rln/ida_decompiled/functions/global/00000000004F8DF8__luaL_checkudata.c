/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8DF8
 * Mangled: _Z15luaL_checkudataP9lua_StateiPKc
 * Demangled: luaL_checkudata(lua_State *,int,char const*)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F8410  lua_rawequal(lua_State *,int,int)
 *   0x00000000001F92F0  lua_getmetatable(lua_State *,int)
 *   0x00000000001F9EE0  lua_getfield(lua_State *,int,char const*)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *   0x0000000000203D20  lua_touserdata(lua_State *,int)
 *
 * Referenced strings: 12
 *   insn=0x00000000004F8E18 string=0x00000000004F8E1C "V"
 *   insn=0x00000000004F8E24 string=0x00000000004F8E28 "2"
 *   insn=0x00000000004F8E28 string=0x00000000001F92F0 "0'"
 *   insn=0x00000000004F8E38 string=0x00000000004F8E3C ")"
 *   insn=0x00000000004F8E3C string=0x00000000001F9EE0 "0'"
 *   insn=0x00000000004F8E48 string=0x00000000004F8E4C "q"
 *   insn=0x00000000004F8E4C string=0x00000000001F8410 "0'"
 *   insn=0x00000000004F8E6C string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F8E74 string=0x00000000004F8E78 "V"
 *   insn=0x00000000004F8E7C string=0x000000000059A5B1 "%s expected, got %s"
 *   insn=0x00000000004F8E80 string=0x00000000004F8E84 "!"
 *   insn=0x00000000004F8EA0 string=0x00000000001FC190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_checkudata(int a1, __int64 a2, char *a3)
{
  __int64 v5; // x22

  v5 = lua_touserdata();
  if ( !v5 || !(unsigned int)lua_getmetatable() || (lua_getfield(a1, -10000, a3), !(unsigned int)lua_rawequal()) )
  {
    lua_type();
    lua_typename();
    lua_pushfstring();
    luaL_argerror();
  }
  lua_settop();
  return v5;
}

