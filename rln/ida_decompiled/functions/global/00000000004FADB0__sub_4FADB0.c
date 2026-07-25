/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FADB0
 * Mangled: sub_4FADB0
 * Demangled: sub_4FADB0
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000001FD620  lua_setmetatable(lua_State *,int)
 *   0x00000000001FEFB0  luaL_getmetafield(lua_State *,int,char const*)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *
 * Referenced strings: 10
 *   insn=0x00000000004FADC4 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004FADD8 string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FADE8 string=0x000000000059A8C7 "nil or table expected"
 *   insn=0x00000000004FADF8 string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FADFC string=0x000000000059A802 "__metatable"
 *   insn=0x00000000004FAE08 string=0x00000000004FAE0C "i"
 *   insn=0x00000000004FAE0C string=0x00000000001FEFB0 "0'"
 *   insn=0x00000000004FAE14 string=0x000000000059A8DD "cannot change a protected metatable"
 *   insn=0x00000000004FAE20 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FAE38 string=0x00000000001FD620 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FADB0()
{
  int v0; // w20

  v0 = lua_type();
  luaL_checktype();
  if ( v0 && v0 != 5 )
    luaL_argerror();
  if ( (unsigned int)luaL_getmetafield() )
    luaL_error();
  lua_settop();
  lua_setmetatable();
  return 1;
}

