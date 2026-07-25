/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB244
 * Mangled: sub_4FB244
 * Demangled: sub_4FB244
 *
 * Callers: 2
 *   0x00000000004FA778  sub_4FA778
 *   0x00000000004FACEC  sub_4FACEC
 *
 * Callees: 9
 *   0x00000000001F54B0  luaL_checkinteger(lua_State *,int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *   0x00000000001FA2F0  lua_getstack(lua_State *,int,lua_Debug *)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000001FEAF0  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *
 * Referenced strings: 18
 *   insn=0x00000000004FB254 string=0x00000000004FB258 "U"
 *   insn=0x00000000004FB270 string=0x00000000001FB5A0 "0'"
 *   insn=0x00000000004FB280 string=0x00000000004FB284 "7"
 *   insn=0x00000000004FB284 string=0x00000000004FB288 "%"
 *   insn=0x00000000004FB284 string=0x00000000001FCF60 "0'"
 *   insn=0x00000000004FB29C string=0x00000000001F99A0 "0'"
 *   insn=0x00000000004FB2A8 string=0x000000000059A7A7 "level must be non-negative"
 *   insn=0x00000000004FB2B8 string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FB2C4 string=0x00000000004FB2C8 "\n"
 *   insn=0x00000000004FB2C8 string=0x00000000001FA2F0 "0'"
 *   insn=0x00000000004FB2D0 string=0x000000000059A7C2 "invalid level"
 *   insn=0x00000000004FB2E4 string=0x000000000059685B "f"
 *   insn=0x00000000004FB308 string=0x000000000059A7D0 "no function environment for tail call at level %d"
 *   insn=0x00000000004FB318 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FB344 string=0x00000000004FB348 "Z"
 *   insn=0x00000000004FB348 string=0x00000000001F54B0 "P'"
 *   insn=0x00000000004FB34C string=0x00000000004FB350 "t"
 *   insn=0x00000000004FB358 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FB244(__int64 a1, int a2)
{
  __int64 result; // x0

  _ReadStatusReg(TPIDR_EL0);
  if ( (unsigned int)lua_type() == 6 )
    return lua_pushvalue();
  if ( a2 )
  {
    if ( (luaL_optinteger() & 0x80000000) != 0 )
      goto LABEL_5;
  }
  else if ( (luaL_checkinteger() & 0x80000000) != 0 )
  {
LABEL_5:
    luaL_argerror();
  }
  if ( !(unsigned int)lua_getstack() )
    luaL_argerror();
  lua_getinfo();
  result = lua_type();
  if ( !(_DWORD)result )
    luaL_error();
  return result;
}

