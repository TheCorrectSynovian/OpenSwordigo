/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB408
 * Mangled: sub_4FB408
 * Demangled: sub_4FB408
 *
 * Callers: 1
 *   0x00000000004FB654  sub_4FB654
 *
 * Callees: 6
 *   0x00000000001F3A40  lua_iscfunction(lua_State *,int)
 *   0x00000000001FA330  lua_xmove(lua_State *,lua_State *,int)
 *   0x00000000001FB2A0  lua_newthread(lua_State *)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004FB418 string=0x00000000001FB2A0 "0'"
 *   insn=0x00000000004FB424 string=0x00000000004FB428 "^"
 *   insn=0x00000000004FB428 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004FB43C string=0x00000000001F3A40 "P'"
 *   insn=0x00000000004FB444 string=0x000000000059A97E "Lua function expected"
 *   insn=0x00000000004FB450 string=0x00000000004FB454 "O"
 *   insn=0x00000000004FB454 string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FB460 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FB470 string=0x00000000001FA330 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FB408()
{
  lua_newthread();
  if ( (unsigned int)lua_type() != 6 || (unsigned int)lua_iscfunction() )
    luaL_argerror();
  lua_pushvalue();
  lua_xmove();
  return 1;
}

