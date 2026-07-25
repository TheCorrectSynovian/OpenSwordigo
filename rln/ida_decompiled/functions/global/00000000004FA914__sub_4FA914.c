/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA914
 * Mangled: sub_4FA914
 * Demangled: sub_4FA914
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7970  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *   0x00000000001FF6F0  luaL_loadbuffer(lua_State *,char const*,ulong,char const*)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *
 * Referenced strings: 7
 *   insn=0x00000000004FA924 string=0x00000000004FA928 "V"
 *   insn=0x00000000004FA940 string=0x00000000004FA944 "_"
 *   insn=0x00000000004FA944 string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FA95C string=0x00000000001F7970 "0'"
 *   insn=0x00000000004FA96C string=0x00000000004FA970 "`"
 *   insn=0x00000000004FA99C string=0x00000000004FA9B8 "F"
 *   insn=0x00000000004FA9B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA914()
{
  unsigned int v0; // w20

  _ReadStatusReg(TPIDR_EL0);
  v0 = 1;
  luaL_checklstring();
  luaL_optlstring();
  if ( (unsigned int)luaL_loadbuffer() )
  {
    lua_pushnil();
    lua_insert();
    return 2;
  }
  return v0;
}

