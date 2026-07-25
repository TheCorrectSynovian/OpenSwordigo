/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C242C
 * Mangled: _ZN5Caver12ProgramTable14SetFloatForKeyERKSsf
 * Demangled: Caver::ProgramTable::SetFloatForKey(std::string const&,float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *   0x00000000001FFCB0  lua_pushnumber(lua_State *,double)
 *
 * Referenced strings: 9
 *   insn=0x00000000004C2438 string=0x00000000004C243C "!"
 *   insn=0x00000000004C2440 string=0x00000000004C2444 "`"
 *   insn=0x00000000004C2444 string=0x00000000004C2448 ""
 *   insn=0x00000000004C2448 string=0x00000000004C244C """
 *   insn=0x00000000004C244C string=0x00000000004C2450 "X"
 *   insn=0x00000000004C2450 string=0x00000000004C2454 "`"
 *   insn=0x00000000004C2450 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C245C string=0x00000000004C2460 "`"
 *   insn=0x00000000004C2460 string=0x00000000004C2464 "a\n@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProgramTable::SetFloatForKey()
{
  lua_pushlstring();
  lua_pushnumber();
  return lua_settable();
}

