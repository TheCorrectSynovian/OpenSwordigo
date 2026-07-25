/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA304
 * Mangled: sub_4FA304
 * Demangled: sub_4FA304
 *
 * Callers: 1
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *
 * Callees: 5
 *   0x00000000001F54B0  luaL_checkinteger(lua_State *,int)
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001F6640  lua_rawgeti(lua_State *,int,int)
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *
 * Referenced strings: 7
 *   insn=0x00000000004FA31C string=0x00000000004FA320 "d"
 *   insn=0x00000000004FA320 string=0x00000000001F54B0 "P'"
 *   insn=0x00000000004FA334 string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FA340 string=0x00000000004FA344 "K"
 *   insn=0x00000000004FA344 string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004FA354 string=0x00000000001F6640 "0'"
 *   insn=0x00000000004FA360 string=0x00000000001FB5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA304()
{
  luaL_checkinteger();
  luaL_checktype();
  lua_pushinteger();
  lua_rawgeti();
  if ( (unsigned int)lua_type() )
    return 2;
  else
    return 0;
}

