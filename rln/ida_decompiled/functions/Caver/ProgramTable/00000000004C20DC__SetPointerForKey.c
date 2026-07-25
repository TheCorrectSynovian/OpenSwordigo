/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C20DC
 * Mangled: _ZN5Caver12ProgramTable16SetPointerForKeyERKSsPv
 * Demangled: Caver::ProgramTable::SetPointerForKey(std::string const&,void *)
 *
 * Callers: 1
 *   0x00000000002031F0  Caver::ProgramTable::SetPointerForKey(std::string const&,void *)
 *
 * Callees: 3
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000001FE3E0  lua_pushlightuserdata(lua_State *,void *)
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *
 * Referenced strings: 8
 *   insn=0x00000000004C20E4 string=0x00000000004C20E8 "!"
 *   insn=0x00000000004C20EC string=0x00000000004C20F0 "`"
 *   insn=0x00000000004C20F4 string=0x00000000004C20F8 "("
 *   insn=0x00000000004C20FC string=0x00000000004C2100 ","
 *   insn=0x00000000004C2100 string=0x00000000004C2104 "`"
 *   insn=0x00000000004C2100 string=0x00000000001FD1B0 "0'"
 *   insn=0x00000000004C210C string=0x00000000004C2110 "`"
 *   insn=0x00000000004C2110 string=0x00000000004C2114 "a\n@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::ProgramTable::SetPointerForKey()
{
  lua_pushlstring();
  lua_pushlightuserdata();
  return lua_settable();
}

