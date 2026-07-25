/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB55C
 * Mangled: sub_4FB55C
 * Demangled: sub_4FB55C
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F3BD0  lua_status(lua_State *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001F9110  lua_tothread(lua_State *,int)
 *   0x00000000001FA2F0  lua_getstack(lua_State *,int,lua_Debug *)
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *   0x0000000000202750  lua_pushstring(lua_State *,char const*)
 *
 * Referenced strings: 18
 *   insn=0x00000000004FB56C string=0x00000000004FB570 "U"
 *   insn=0x00000000004FB584 string=0x00000000001F9110 "0'"
 *   insn=0x00000000004FB59C string=0x00000000001F3BD0 "P'"
 *   insn=0x00000000004FB5A0 string=0x00000000004FB5A4 "`"
 *   insn=0x00000000004FB5B4 string=0x00000000004FB5B8 "N"
 *   insn=0x00000000004FB5B8 string=0x00000000001FA2F0 "0'"
 *   insn=0x00000000004FB5BC string=0x00000000004FB5C0 ""
 *   insn=0x00000000004FB5CC string=0x000000000059A994 "coroutine expected"
 *   insn=0x00000000004FB5DC string=0x00000000001FC190 "0'"
 *   insn=0x00000000004FB5E8 string=0x00000000004FB5EC "\n"
 *   insn=0x00000000004FB5F0 string=0x00000000004FB5F4 ""
 *   insn=0x00000000004FB600 string=0x00000000004FB604 "/"
 *   insn=0x00000000004FB604 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FB60C string=0x00000000004FB610 ""
 *   insn=0x00000000004FB614 string=0x00000000004FB61C "!yh"
 *   insn=0x00000000004FB620 string=0x00000000004FB624 "K"
 *   insn=0x00000000004FB634 string=0x00000000004FB650 " "
 *   insn=0x00000000004FB650 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FB55C(__int64 a1)
{
  __int64 v2; // x0
  int v3; // w0
  __int64 v4; // x8
  int v5; // w0

  _ReadStatusReg(TPIDR_EL0);
  v2 = lua_tothread();
  if ( !v2 )
    luaL_argerror();
  if ( v2 == a1 )
  {
    v4 = 0;
  }
  else
  {
    v3 = lua_status();
    if ( v3 == 1 )
    {
      v4 = 1;
    }
    else if ( v3 )
    {
      v4 = 3;
    }
    else if ( (int)lua_getstack() <= 0 )
    {
      v5 = lua_gettop();
      v4 = 3;
      if ( v5 )
        v4 = 1;
    }
    else
    {
      v4 = 2;
    }
  }
  lua_pushstring(a1, off_6D8B78[v4]);
  return 1;
}

