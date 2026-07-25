/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FC928
 * Mangled: sub_4FC928
 * Demangled: sub_4FC928
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F54B0  luaL_checkinteger(lua_State *,int)
 *   0x00000000001F62C0  luaL_checklstring(lua_State *,int,ulong *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F99A0  luaL_optinteger(lua_State *,int,long)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *
 * Referenced strings: 21
 *   insn=0x00000000004FC938 string=0x00000000004FC93C "U"
 *   insn=0x00000000004FC950 string=0x00000000004FC954 "["
 *   insn=0x00000000004FC954 string=0x00000000001F62C0 "0'"
 *   insn=0x00000000004FC964 string=0x00000000001F54B0 "P'"
 *   insn=0x00000000004FC970 string=0x00000000004FC974 ""
 *   insn=0x00000000004FC974 string=0x00000000004FC978 ""
 *   insn=0x00000000004FC980 string=0x00000000004FC984 ""
 *   insn=0x00000000004FC984 string=0x00000000001F99A0 "0'"
 *   insn=0x00000000004FC98C string=0x00000000004FC990 "("
 *   insn=0x00000000004FC990 string=0x00000000004FC994 ""
 *   insn=0x00000000004FC994 string=0x00000000004FC998 ""
 *   insn=0x00000000004FC998 string=0x00000000004FC99C "\n"
 *   insn=0x00000000004FC9A0 string=0x00000000004FC9A4 "_"
 *   insn=0x00000000004FC9A4 string=0x00000000004FC9A8 ")"
 *   insn=0x00000000004FC9A8 string=0x00000000004FC9AC "?"
 *   insn=0x00000000004FC9C0 string=0x00000000004FC9C4 ""
 *   insn=0x00000000004FC9CC string=0x00000000004FC9D0 "h"
 *   insn=0x00000000004FC9D0 string=0x00000000004FC9D4 "A"
 *   insn=0x00000000004FC9E0 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004FC9F0 string=0x00000000004FCA0C "1"
 *   insn=0x00000000004FCA0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4FC928()
{
  _ReadStatusReg(TPIDR_EL0);
  luaL_checklstring();
  luaL_checkinteger();
  luaL_optinteger();
  lua_pushlstring();
  return 1;
}

