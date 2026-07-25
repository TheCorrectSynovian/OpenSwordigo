/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4010
 * Mangled: ._Z13lua_tobooleanP9lua_Statei
 * Demangled: lua_toboolean(lua_State *,int)
 *
 * Callers: 8
 *   0x00000000004C1A20  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000004C1E70  sub_4C1E70
 *   0x00000000004C2124  Caver::ProgramTable::BoolForKey(std::string const&)
 *   0x00000000004FA420  sub_4FA420
 *   0x00000000004FA518  sub_4FA518
 *   0x00000000004FAF74  sub_4FAF74
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FCAF8  sub_4FCAF8
 *
 * Callees: 1
 *   0x00000000004E7BC0  lua_toboolean(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4014 string=0x00000000004E7BC0 "?"
 *   insn=0x00000000001F4018 string=0x00000000001F401C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_toboolean()
{
  return _Z13lua_tobooleanP9lua_Statei();
}

