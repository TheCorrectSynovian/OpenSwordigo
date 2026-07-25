/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8110
 * Mangled: ._Z8lua_loadP9lua_StatePFPKcS0_PvPmES3_S2_
 * Demangled: lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *
 * Callers: 4
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x00000000004F9F9C  luaL_loadbuffer(lua_State *,char const*,ulong,char const*)
 *   0x00000000004FA010  luaL_loadstring(lua_State *,char const*)
 *   0x00000000004FA880  sub_4FA880
 *
 * Callees: 1
 *   0x00000000004E9B8C  lua_load(lua_State *,char const* (*)(lua_State *,void *,ulong *),void *,char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8118 string=0x00000000001F811C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_load()
{
  return _Z8lua_loadP9lua_StatePFPKcS0_PvPmES3_S2_();
}

