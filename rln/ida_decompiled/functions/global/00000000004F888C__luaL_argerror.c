/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F888C
 * Mangled: _Z13luaL_argerrorP9lua_StateiPKc
 * Demangled: luaL_argerror(lua_State *,int,char const*)
 *
 * Callers: 1
 *   0x00000000001FC190  luaL_argerror(lua_State *,int,char const*)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FA2F0  lua_getstack(lua_State *,int,lua_Debug *)
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000001FEAF0  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *
 * Referenced strings: 16
 *   insn=0x00000000004F889C string=0x00000000004F88A0 "V"
 *   insn=0x00000000004F88C0 string=0x00000000004F88C4 " "
 *   insn=0x00000000004F88C0 string=0x00000000001FA2F0 "0'"
 *   insn=0x00000000004F88C8 string=0x000000000058F115 "n"
 *   insn=0x00000000004F88E0 string=0x0000000000599A2B "method"
 *   insn=0x00000000004F88E8 string=0x00000000004F88EC "`"
 *   insn=0x00000000004F88E8 string=0x00000000001FA120 "0'"
 *   insn=0x00000000004F8900 string=0x000000000059A393 "?"
 *   insn=0x00000000004F890C string=0x000000000059A593 "bad argument #%d to '%s' (%s)"
 *   insn=0x00000000004F891C string=0x00000000004F8920 "4\t"
 *   insn=0x00000000004F8920 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004F8928 string=0x000000000059A55F "bad argument #%d (%s)"
 *   insn=0x00000000004F8938 string=0x00000000004F893C "-\t"
 *   insn=0x00000000004F894C string=0x00000000004F8980 "T"
 *   insn=0x00000000004F8968 string=0x000000000059A575 "calling '%s' on bad self (%s)"
 *   insn=0x00000000004F8980 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn luaL_argerror(__int64 a1, int a2)
{
  char *v3; // [xsp+10h] [xbp-90h]

  _ReadStatusReg(TPIDR_EL0);
  if ( (unsigned int)lua_getstack() )
  {
    lua_getinfo();
    if ( !strcmp(v3, "method") && a2 == 1 )
      luaL_error();
    luaL_error();
  }
  luaL_error();
}

