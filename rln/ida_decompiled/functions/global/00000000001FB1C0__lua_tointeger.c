/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB1C0
 * Mangled: ._Z13lua_tointegerP9lua_Statei
 * Demangled: lua_tointeger(lua_State *,int)
 *
 * Callers: 5
 *   0x00000000004C19AC  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000004C2328  Caver::ProgramTable::IntForKey(std::string const&)
 *   0x00000000004F90D4  luaL_checkinteger(lua_State *,int)
 *   0x00000000004F9B1C  luaL_ref(lua_State *,int)
 *   0x00000000004FD99C  sub_4FD99C
 *
 * Callees: 1
 *   0x00000000004E7A8C  lua_tointeger(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB1C8 string=0x00000000001FB1CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_tointeger()
{
  return _Z13lua_tointegerP9lua_Statei();
}

