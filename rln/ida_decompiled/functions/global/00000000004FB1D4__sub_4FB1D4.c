/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FB1D4
 * Mangled: sub_4FB1D4
 * Demangled: sub_4FB1D4
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001F6090  lua_pcall(lua_State *,int,int,int)
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001FD3A0  lua_replace(lua_State *,int)
 *   0x00000000001FF700  lua_pushboolean(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *
 * Referenced strings: 7
 *   insn=0x00000000004FB1E8 string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FB214 string=0x00000000001F6090 "0'"
 *   insn=0x00000000004FB220 string=0x00000000004FB224 "7"
 *   insn=0x00000000004FB22C string=0x00000000004FB230 "\"
 *   insn=0x00000000004FB230 string=0x00000000001FD3A0 "0'"
 *   insn=0x00000000004FB23C string=0x00000000004FB240 " "
 *   insn=0x00000000004FB240 string=0x00000000001F7AC0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FB1D4()
{
  luaL_checkany();
  lua_settop();
  lua_insert();
  lua_pcall();
  lua_pushboolean();
  lua_replace();
  return lua_gettop();
}

