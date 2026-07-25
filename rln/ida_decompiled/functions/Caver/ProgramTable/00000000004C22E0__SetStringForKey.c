/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C22E0
 * Mangled: _ZN5Caver12ProgramTable15SetStringForKeyERKSsS2_
 * Demangled: Caver::ProgramTable::SetStringForKey(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000004C21CC  Caver::ProgramTable::StringForKey(std::string const&)
 *
 * Callees: 3
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *   0x0000000000202750  lua_pushstring(lua_State *,char const*)
 *
 * Referenced strings: 7
 *   insn=0x00000000004C22E8 string=0x00000000004C22EC "!"
 *   insn=0x00000000004C22F0 string=0x00000000004C22F4 "`"
 *   insn=0x00000000004C22F8 string=0x00000000004C22FC "("
 *   insn=0x00000000004C2304 string=0x00000000004C2308 "`"
 *   insn=0x00000000004C2304 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C2310 string=0x00000000004C2314 "`"
 *   insn=0x00000000004C2314 string=0x00000000004C2318 "a\n@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramTable::SetStringForKey(_QWORD *a1, __int64 a2, char **a3)
{
  lua_pushlstring();
  lua_pushstring(*a1, *a3);
  return lua_settable();
}

