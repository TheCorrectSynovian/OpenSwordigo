/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9F9C
 * Mangled: _Z15luaL_loadbufferP9lua_StatePKcmS2_
 * Demangled: luaL_loadbuffer(lua_State *,char const*,ulong,char const*)
 *
 * Callers: 1
 *   0x00000000001FF6F0  luaL_loadbuffer(lua_State *,char const*,ulong,char const*)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8110  lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *   0x00000000004F9FF0  sub_4F9FF0
 *
 * Referenced strings: 7
 *   insn=0x00000000004F9FA8 string=0x00000000004F9FAC "S"
 *   insn=0x00000000004F9FAC string=0x00000000004F9FB0 "h"
 *   insn=0x00000000004F9FBC string=0x00000000004F9FF0 "("
 *   insn=0x00000000004F9FC4 string=0x00000000004F9FC8 "R"
 *   insn=0x00000000004F9FC8 string=0x00000000004F9FCC "h"
 *   insn=0x00000000004F9FC8 string=0x00000000001F8110 "0'"
 *   insn=0x00000000004F9FEC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 luaL_loadbuffer()
{
  _ReadStatusReg(TPIDR_EL0);
  return lua_load();
}

