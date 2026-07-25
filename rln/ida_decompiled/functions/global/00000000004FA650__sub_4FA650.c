/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA650
 * Mangled: sub_4FA650
 * Demangled: sub_4FA650
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F3BE0  lua_error(lua_State *)
 *   0x00000000001F5B50  luaL_loadfile(lua_State *,char const*)
 *   0x00000000001F7970  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x0000000000202E50  lua_call(lua_State *,int,int)
 *
 * Referenced strings: 7
 *   insn=0x00000000004FA670 string=0x00000000001F7970 "0'"
 *   insn=0x00000000004FA67C string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FA688 string=0x00000000004FA68C "1"
 *   insn=0x00000000004FA68C string=0x00000000004FA690 "`"
 *   insn=0x00000000004FA68C string=0x00000000001F5B50 "P'"
 *   insn=0x00000000004FA694 string=0x00000000004FA698 "R"
 *   insn=0x00000000004FA698 string=0x00000000001F3BE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA650()
{
  int v0; // w20

  luaL_optlstring();
  v0 = lua_gettop();
  if ( (unsigned int)luaL_loadfile() )
    lua_error();
  lua_call();
  return (unsigned int)lua_gettop() - v0;
}

