/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA2B4
 * Mangled: sub_4FA2B4
 * Demangled: sub_4FA2B4
 *
 * Callers: 1
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *
 * Callees: 3
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *
 * Referenced strings: 6
 *   insn=0x00000000004FA2CC string=0x00000000004FA2D0 "A"
 *   insn=0x00000000004FA2CC string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FA2D4 string=0x00000000004FA2D8 """
 *   insn=0x00000000004FA2D8 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FA2EC string=0x00000000004FA2F0 "`"
 *   insn=0x00000000004FA2F0 string=0x00000000001F7C70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA2B4()
{
  luaL_checktype();
  lua_pushvalue();
  lua_pushvalue();
  lua_pushinteger();
  return 3;
}

