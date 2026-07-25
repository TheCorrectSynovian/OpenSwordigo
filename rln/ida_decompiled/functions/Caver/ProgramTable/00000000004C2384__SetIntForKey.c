/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2384
 * Mangled: _ZN5Caver12ProgramTable12SetIntForKeyERKSsi
 * Demangled: Caver::ProgramTable::SetIntForKey(std::string const&,int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7C70  lua_pushinteger(lua_State *,long)
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004C238C string=0x00000000004C2390 "!"
 *   insn=0x00000000004C2394 string=0x00000000004C2398 "`"
 *   insn=0x00000000004C239C string=0x00000000004C23A0 "("
 *   insn=0x00000000004C23A8 string=0x00000000004C23AC "`"
 *   insn=0x00000000004C23A8 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C23B0 string=0x00000000004C23B4 "/"
 *   insn=0x00000000004C23B4 string=0x00000000004C23B8 "`"
 *   insn=0x00000000004C23B4 string=0x00000000001F7C70 "0'"
 *   insn=0x00000000004C23B8 string=0x00000000004C23BC "a\n@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProgramTable::SetIntForKey()
{
  lua_pushlstring();
  lua_pushinteger();
  return lua_settable();
}

