/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2124
 * Mangled: _ZN5Caver12ProgramTable10BoolForKeyERKSs
 * Demangled: Caver::ProgramTable::BoolForKey(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F78A0  Caver::ProgramTable::BoolForKey(std::string const&)
 *
 * Callees: 4
 *   0x00000000001F4010  lua_toboolean(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002028C0  lua_gettable(lua_State *,int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004C212C string=0x00000000004C2130 "!"
 *   insn=0x00000000004C2134 string=0x00000000004C2138 "`"
 *   insn=0x00000000004C2138 string=0x00000000004C213C """
 *   insn=0x00000000004C2140 string=0x00000000004C2144 "`"
 *   insn=0x00000000004C2140 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C2144 string=0x00000000004C2148 "a\n@"
 *   insn=0x00000000004C214C string=0x00000000004C2150 "`"
 *   insn=0x00000000004C2158 string=0x00000000004C215C "h"
 *   insn=0x00000000004C2158 string=0x00000000001F4010 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool Caver::ProgramTable::BoolForKey()
{
  _BOOL4 v0; // w19

  lua_pushlstring();
  lua_gettable();
  v0 = lua_toboolean() != 0;
  lua_settop();
  return v0;
}

