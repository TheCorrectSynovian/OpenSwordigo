/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FAB3C
 * Mangled: sub_4FAB3C
 * Demangled: sub_4FAB3C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001F8410  lua_rawequal(lua_State *,int,int)
 *   0x00000000001FF700  lua_pushboolean(lua_State *,int)
 *
 * Referenced strings: 5
 *   insn=0x00000000004FAB4C string=0x00000000004FAB50 "t"
 *   insn=0x00000000004FAB50 string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FAB58 string=0x00000000004FAB5C "q"
 *   insn=0x00000000004FAB68 string=0x00000000004FAB6C ")"
 *   insn=0x00000000004FAB6C string=0x00000000001F8410 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FAB3C()
{
  luaL_checkany();
  luaL_checkany();
  lua_rawequal();
  lua_pushboolean();
  return 1;
}

