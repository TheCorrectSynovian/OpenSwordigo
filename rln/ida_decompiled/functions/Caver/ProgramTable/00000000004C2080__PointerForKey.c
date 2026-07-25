/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2080
 * Mangled: _ZN5Caver12ProgramTable13PointerForKeyERKSs
 * Demangled: Caver::ProgramTable::PointerForKey(std::string const&)
 *
 * Callers: 1
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *
 * Callees: 4
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *   0x00000000002028C0  lua_gettable(lua_State *,int)
 *   0x0000000000203D20  lua_touserdata(lua_State *,int)
 *
 * Referenced strings: 10
 *   insn=0x00000000004C2088 string=0x00000000004C208C "!"
 *   insn=0x00000000004C2090 string=0x00000000004C2094 "`"
 *   insn=0x00000000004C2094 string=0x00000000004C2098 """
 *   insn=0x00000000004C2098 string=0x00000000004C209C "E"
 *   insn=0x00000000004C209C string=0x00000000004C20A0 "`"
 *   insn=0x00000000004C209C string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C20A0 string=0x00000000004C20A4 "a\n@"
 *   insn=0x00000000004C20A8 string=0x00000000004C20AC "`"
 *   insn=0x00000000004C20B0 string=0x00000000004C20B4 ""
 *   insn=0x00000000004C20B4 string=0x00000000004C20B8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProgramTable::PointerForKey()
{
  __int64 v0; // x19

  lua_pushlstring();
  lua_gettable();
  v0 = lua_touserdata();
  lua_settop();
  return v0;
}

