/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2184
 * Mangled: _ZN5Caver12ProgramTable13SetBoolForKeyERKSsb
 * Demangled: Caver::ProgramTable::SetBoolForKey(std::string const&,bool)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *   0x00000000001FF700  lua_pushboolean(lua_State *,int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004C218C string=0x00000000004C2190 "!"
 *   insn=0x00000000004C2194 string=0x00000000004C2198 "`"
 *   insn=0x00000000004C219C string=0x00000000004C21A0 "("
 *   insn=0x00000000004C21A8 string=0x00000000004C21AC "`"
 *   insn=0x00000000004C21A8 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C21B0 string=0x00000000004C21B4 "S"
 *   insn=0x00000000004C21B4 string=0x00000000004C21B8 "`"
 *   insn=0x00000000004C21B8 string=0x00000000004C21BC "a\n@"
 *   insn=0x00000000004C21C4 string=0x00000000004C21C8 "f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProgramTable::SetBoolForKey()
{
  lua_pushlstring();
  lua_pushboolean();
  return lua_settable();
}

