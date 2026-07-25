/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA6C8
 * Mangled: sub_4FA6C8
 * Demangled: sub_4FA6C8
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F3BE0  lua_error(lua_State *)
 *   0x00000000001F7AA0  lua_isstring(lua_State *,int)
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FF580  luaL_where(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002029F0  lua_concat(lua_State *,int)
 *
 * Referenced strings: 7
 *   insn=0x00000000004FA6E0 string=0x00000000001F99A0 "0'"
 *   insn=0x00000000004FA6FC string=0x00000000001F7AA0 "0'"
 *   insn=0x00000000004FA700 string=0x00000000004FA704 "k"
 *   insn=0x00000000004FA704 string=0x00000000004FA708 "@"
 *   insn=0x00000000004FA720 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FA738 string=0x00000000004FA73C ")"
 *   insn=0x00000000004FA73C string=0x00000000001F3BE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn sub_4FA6C8()
{
  int v0; // w20
  int v1; // w0

  v0 = luaL_optinteger();
  lua_settop();
  v1 = lua_isstring();
  if ( v0 >= 1 )
  {
    if ( v1 )
    {
      luaL_where();
      lua_pushvalue();
      lua_concat();
    }
  }
  lua_error();
}

