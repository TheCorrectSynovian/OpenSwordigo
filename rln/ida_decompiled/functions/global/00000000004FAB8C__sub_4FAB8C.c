/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FAB8C
 * Mangled: sub_4FAB8C
 * Demangled: sub_4FAB8C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001F5E90  lua_rawget(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *
 * Referenced strings: 5
 *   insn=0x00000000004FABA4 string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FABAC string=0x00000000004FABB0 "\"
 *   insn=0x00000000004FABB0 string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FABB8 string=0x00000000004FABBC "U"
 *   insn=0x00000000004FABC8 string=0x00000000001F5E90 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FAB8C()
{
  luaL_checktype();
  luaL_checkany();
  lua_settop();
  lua_rawget();
  return 1;
}

