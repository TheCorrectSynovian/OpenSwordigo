/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB6B4
 * Mangled: sub_4FB6B4
 * Demangled: sub_4FB6B4
 *
 * Callers: 2
 *   0x00000000004FB484  sub_4FB484
 *   0x00000000004FB850  sub_4FB850
 *
 * Callees: 10
 *   0x00000000001F3BD0  lua_status(lua_State *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001FA2F0  lua_getstack(lua_State *,int,lua_Debug *)
 *   0x00000000001FA330  lua_xmove(lua_State *,lua_State *,int)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FB600  lua_resume(lua_State *,int)
 *   0x0000000000201DB0  lua_setlevel(lua_State *,lua_State *)
 *   0x0000000000202C30  lua_checkstack(lua_State *,int)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 19
 *   insn=0x00000000004FB6C8 string=0x00000000004FB6CC "V"
 *   insn=0x00000000004FB6EC string=0x00000000004FB6F0 "8"
 *   insn=0x00000000004FB6F0 string=0x00000000001F3BD0 "P'"
 *   insn=0x00000000004FB70C string=0x00000000001FA2F0 "0'"
 *   insn=0x00000000004FB710 string=0x00000000004FB714 "-"
 *   insn=0x00000000004FB720 string=0x00000000004FB724 "\n"
 *   insn=0x00000000004FB728 string=0x00000000004FB72C ""
 *   insn=0x00000000004FB73C string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FB750 string=0x00000000004FB754 "7"
 *   insn=0x00000000004FB75C string=0x00000000004FB760 "a"
 *   insn=0x00000000004FB770 string=0x00000000001FA330 "0'"
 *   insn=0x00000000004FB788 string=0x00000000001FB600 "0'"
 *   insn=0x00000000004FB7A4 string=0x00000000004FB7A8 """
 *   insn=0x00000000004FB7B0 string=0x000000000059A9DF "too many results to resume"
 *   insn=0x00000000004FB7BC string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FB7D4 string=0x000000000059A9A7 "too many arguments to resume"
 *   insn=0x00000000004FB7F8 string=0x000000000059A9C4 "cannot resume %s coroutine"
 *   insn=0x00000000004FB800 string=0x00000000004FB804 "k"
 *   insn=0x00000000004FB84C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FB6B4(__int64 a1, __int64 a2)
{
  int v2; // w0
  int v3; // w23
  unsigned int v4; // w21

  _ReadStatusReg(TPIDR_EL0);
  if ( a1 == a2 )
  {
    v3 = 0;
  }
  else
  {
    v2 = lua_status();
    if ( v2 == 1 )
    {
      v3 = 1;
    }
    else if ( v2 )
    {
      v3 = 3;
    }
    else if ( (int)lua_getstack() <= 0 )
    {
      if ( (unsigned int)lua_gettop() )
        v3 = 1;
      else
        v3 = 3;
    }
    else
    {
      v3 = 2;
    }
  }
  if ( !(unsigned int)lua_checkstack() )
    luaL_error();
  if ( v3 != 1 )
  {
    lua_pushfstring();
    return (unsigned int)-1;
  }
  lua_xmove();
  lua_setlevel();
  if ( (unsigned int)lua_resume() > 1 )
  {
    lua_xmove();
    return (unsigned int)-1;
  }
  v4 = lua_gettop();
  if ( !(unsigned int)lua_checkstack() )
    luaL_error();
  lua_xmove();
  return v4;
}

