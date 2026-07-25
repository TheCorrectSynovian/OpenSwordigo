/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2328
 * Mangled: _ZN5Caver12ProgramTable9IntForKeyERKSs
 * Demangled: Caver::ProgramTable::IntForKey(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FB1C0  lua_tointeger(lua_State *,int)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002028C0  lua_gettable(lua_State *,int)
 *
 * Referenced strings: 11
 *   insn=0x00000000004C2330 string=0x00000000004C2334 "!"
 *   insn=0x00000000004C2338 string=0x00000000004C233C "`"
 *   insn=0x00000000004C233C string=0x00000000004C2340 """
 *   insn=0x00000000004C2344 string=0x00000000004C2348 "`"
 *   insn=0x00000000004C2344 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C2348 string=0x00000000004C234C "a\n@"
 *   insn=0x00000000004C234C string=0x00000000004C2350 "\"
 *   insn=0x00000000004C2350 string=0x00000000004C2354 "`"
 *   insn=0x00000000004C235C string=0x00000000004C2360 "h"
 *   insn=0x00000000004C235C string=0x00000000001FB1C0 "0'"
 *   insn=0x00000000004C236C string=0x00000000004C2370 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProgramTable::IntForKey()
{
  unsigned int v0; // w19

  lua_pushlstring();
  lua_gettable();
  v0 = lua_tointeger();
  lua_settop();
  return v0;
}

