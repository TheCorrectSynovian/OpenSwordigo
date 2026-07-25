/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEF60
 * Mangled: ._Z12lua_settableP9lua_Statei
 * Demangled: lua_settable(lua_State *,int)
 *
 * Callers: 10
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004C1AB8  Caver::ProgramState::SetTable(int)
 *   0x00000000004C1B88  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *   0x00000000004C2044  Caver::ProgramTable::SetPointerForPointerKey(void *,void *)
 *   0x00000000004C20DC  Caver::ProgramTable::SetPointerForKey(std::string const&,void *)
 *   0x00000000004C2184  Caver::ProgramTable::SetBoolForKey(std::string const&,bool)
 *   0x00000000004C22E0  Caver::ProgramTable::SetStringForKey(std::string const&,std::string const&)
 *   0x00000000004C2384  Caver::ProgramTable::SetIntForKey(std::string const&,int)
 *   0x00000000004C242C  Caver::ProgramTable::SetFloatForKey(std::string const&,float)
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *
 * Callees: 1
 *   0x00000000004E908C  lua_settable(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEF68 string=0x00000000001FEF6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_settable()
{
  return _Z12lua_settableP9lua_Statei();
}

