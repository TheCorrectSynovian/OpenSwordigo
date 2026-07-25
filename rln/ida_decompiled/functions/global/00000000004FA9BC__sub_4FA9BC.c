/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA9BC
 * Mangled: sub_4FA9BC
 * Demangled: sub_4FA9BC
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001F6090  lua_pcall(lua_State *,int,int,int)
 *   0x00000000001F7AC0  lua_gettop(lua_State *)
 *   0x00000000001FF700  lua_pushboolean(lua_State *,int)
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *
 * Referenced strings: 6
 *   insn=0x00000000004FA9D0 string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FA9D4 string=0x00000000004FA9D8 ":"
 *   insn=0x00000000004FA9D8 string=0x00000000001F7AC0 "0'"
 *   insn=0x00000000004FA9EC string=0x00000000001F6090 "0'"
 *   insn=0x00000000004FA9F8 string=0x00000000004FA9FC "A"
 *   insn=0x00000000004FAA14 string=0x00000000004FAA18 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FA9BC()
{
  luaL_checkany();
  lua_gettop();
  lua_pcall();
  lua_pushboolean();
  lua_insert();
  return lua_gettop();
}

