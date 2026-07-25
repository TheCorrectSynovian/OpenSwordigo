/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FABDC
 * Mangled: sub_4FABDC
 * Demangled: sub_4FABDC
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5120  luaL_checkany(lua_State *,int)
 *   0x00000000001F59E0  luaL_checktype(lua_State *,int,int)
 *   0x00000000001F8F00  lua_rawset(lua_State *,int)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *
 * Referenced strings: 7
 *   insn=0x00000000004FABF0 string=0x00000000004FABF4 "{"
 *   insn=0x00000000004FABF4 string=0x00000000001F59E0 "P'"
 *   insn=0x00000000004FABFC string=0x00000000004FAC00 "H"
 *   insn=0x00000000004FAC00 string=0x00000000001F5120 "P'"
 *   insn=0x00000000004FAC08 string=0x00000000004FAC0C "E"
 *   insn=0x00000000004FAC14 string=0x00000000004FAC18 ">"
 *   insn=0x00000000004FAC24 string=0x00000000001F8F00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FABDC()
{
  luaL_checktype();
  luaL_checkany();
  luaL_checkany();
  lua_settop();
  lua_rawset();
  return 1;
}

