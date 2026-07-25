/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA518
 * Mangled: sub_4FA518
 * Demangled: sub_4FA518
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4010  lua_toboolean(lua_State *,int)
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001F7970  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *
 * Referenced strings: 8
 *   insn=0x00000000004FA52C string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FA538 string=0x00000000001F4010 "P'"
 *   insn=0x00000000004FA548 string=0x00000000004FA54C "]"
 *   insn=0x00000000004FA54C string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FA550 string=0x000000000059A766 "assertion failed!"
 *   insn=0x00000000004FA564 string=0x00000000001F7970 "0'"
 *   insn=0x00000000004FA56C string=0x0000000000599A39 "%s"
 *   insn=0x00000000004FA580 string=0x00000000001FADF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA518()
{
  luaL_checkany();
  if ( !(unsigned int)lua_toboolean() )
  {
    luaL_optlstring();
    luaL_error();
  }
  return lua_gettop();
}

