/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5CA0
 * Mangled: ._Z15lua_newuserdataP9lua_Statem
 * Demangled: lua_newuserdata(lua_State *,ulong)
 *
 * Callers: 2
 *   0x00000000004C1ACC  Caver::ProgramState::NewUserData(ulong,std::string const&)
 *   0x00000000004FA420  sub_4FA420
 *
 * Callees: 1
 *   0x00000000004E9F4C  lua_newuserdata(lua_State *,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5CA8 string=0x00000000001F5CAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_newuserdata()
{
  return _Z15lua_newuserdataP9lua_Statem();
}

