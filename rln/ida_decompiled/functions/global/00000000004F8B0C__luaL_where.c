/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8B0C
 * Mangled: _Z10luaL_whereP9lua_Statei
 * Demangled: luaL_where(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FF580  luaL_where(lua_State *,int)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA2F0  lua_getstack(lua_State *,int,lua_Debug *)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FEAF0  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Referenced strings: 7
 *   insn=0x00000000004F8B1C string=0x00000000004F8B20 "T"
 *   insn=0x00000000004F8B34 string=0x00000000001FA2F0 "0'"
 *   insn=0x00000000004F8B3C string=0x000000000059A5C5 "Sl"
 *   insn=0x00000000004F8B60 string=0x000000000059A5C8 "%s:%d: "
 *   insn=0x00000000004F8B64 string=0x00000000004F8B68 "! "
 *   insn=0x00000000004F8B88 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004F8BB0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 luaL_where()
{
  int v1; // [xsp+28h] [xbp-78h]

  _ReadStatusReg(TPIDR_EL0);
  if ( (unsigned int)lua_getstack() && (lua_getinfo(), v1 >= 1) )
    return lua_pushfstring();
  else
    return lua_pushlstring();
}

