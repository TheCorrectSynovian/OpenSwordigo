/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA37C
 * Mangled: sub_4FA37C
 * Demangled: sub_4FA37C
 *
 * Callers: 1
 *   0x00000000004FA130  luaopen_base(lua_State *)
 *
 * Callees: 3
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *   0x00000000002027B0  lua_pushnil(lua_State *)
 *
 * Referenced strings: 3
 *   insn=0x00000000004FA394 string=0x00000000004FA398 "A"
 *   insn=0x00000000004FA394 string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FA3A0 string=0x00000000001FCF60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA37C()
{
  luaL_checktype();
  lua_pushvalue();
  lua_pushvalue();
  lua_pushnil();
  return 3;
}

