/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203D20
 * Mangled: ._Z14lua_touserdataP9lua_Statei
 * Demangled: lua_touserdata(lua_State *,int)
 *
 * Callers: 4
 *   0x00000000004C191C  Caver::ProgramState::StringAtStackIndex(int)
 *   0x00000000004C1FF0  Caver::ProgramTable::PointerForPointerKey(void *)
 *   0x00000000004C2080  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x00000000004F8DF8  luaL_checkudata(lua_State *,int,char const*)
 *
 * Callees: 1
 *   0x00000000004E815C  lua_touserdata(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203D24 string=0x00000000004E815C "?"
 *   insn=0x0000000000203D28 string=0x0000000000203D2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_touserdata()
{
  return _Z14lua_touserdataP9lua_Statei();
}

