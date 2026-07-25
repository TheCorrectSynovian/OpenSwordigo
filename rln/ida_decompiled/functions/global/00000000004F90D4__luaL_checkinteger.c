/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F90D4
 * Mangled: _Z17luaL_checkintegerP9lua_Statei
 * Demangled: luaL_checkinteger(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F54B0  luaL_checkinteger(lua_State *,int)
 *
 * Callees: 6
 *   0x00000000001FAE70  lua_isnumber(lua_State *,int)
 *   0x00000000001FB1C0  lua_tointeger(lua_State *,int)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x0000000000200BD0  lua_typename(lua_State *,int)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 11
 *   insn=0x00000000004F90E8 string=0x00000000004F90EC "5"
 *   insn=0x00000000004F90EC string=0x00000000001FB1C0 "0'"
 *   insn=0x00000000004F90F0 string=0x00000000004F90F4 "4"
 *   insn=0x00000000004F90FC string=0x00000000004F9100 "\"
 *   insn=0x00000000004F9100 string=0x00000000001FAE70 "0'"
 *   insn=0x00000000004F911C string=0x00000000004F9120 " \t"
 *   insn=0x00000000004F9120 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004F9130 string=0x000000000059A5B1 "%s expected, got %s"
 *   insn=0x00000000004F9134 string=0x00000000004F9138 "!"
 *   insn=0x00000000004F9140 string=0x00000000004F9144 ")"
 *   insn=0x00000000004F9154 string=0x00000000001FC190 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 luaL_checkinteger()
{
  __int64 v0; // x20

  v0 = lua_tointeger();
  if ( !v0 && !(unsigned int)lua_isnumber() )
  {
    lua_typename();
    lua_type();
    lua_typename();
    lua_pushfstring();
    luaL_argerror();
  }
  return v0;
}

