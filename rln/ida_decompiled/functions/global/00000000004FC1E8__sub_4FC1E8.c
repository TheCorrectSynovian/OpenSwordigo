/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FC1E8
 * Mangled: sub_4FC1E8
 * Demangled: sub_4FC1E8
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002034A0  lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *   0x00000000004FD99C  sub_4FD99C
 *
 * Referenced strings: 4
 *   insn=0x00000000004FC1FC string=0x00000000004FC200 "0"
 *   insn=0x00000000004FC200 string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FC20C string=0x00000000004FC210 ","
 *   insn=0x00000000004FC228 string=0x00000000001F7C70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FC1E8()
{
  luaL_checklstring();
  luaL_checklstring();
  lua_settop();
  lua_pushinteger();
  lua_pushcclosure();
  return 1;
}

