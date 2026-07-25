/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002028C0
 * Mangled: ._Z12lua_gettableP9lua_Statei
 * Demangled: lua_gettable(lua_State *,int)
 *
 * Callers: 8
 *   0x00000000004C1FF0  Caver::ProgramTable::PointerForPointerKey(void *)
 *   0x00000000004C2080  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x00000000004C2124  Caver::ProgramTable::BoolForKey(std::string const&)
 *   0x00000000004C21CC  Caver::ProgramTable::StringForKey(std::string const&)
 *   0x00000000004C2328  Caver::ProgramTable::IntForKey(std::string const&)
 *   0x00000000004C23CC  Caver::ProgramTable::FloatForKey(std::string const&)
 *   0x00000000004C2478  Caver::ProgramTable::StringAtIndex(int)
 *   0x00000000004FC250  sub_4FC250
 *
 * Callees: 1
 *   0x00000000004E8958  lua_gettable(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002028C4 string=0x00000000004E8958 "?"
 *   insn=0x00000000002028C8 string=0x00000000002028CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_gettable()
{
  return _Z12lua_gettableP9lua_Statei();
}

