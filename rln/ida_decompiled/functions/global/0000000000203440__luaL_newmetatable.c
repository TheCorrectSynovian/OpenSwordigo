/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203440
 * Mangled: ._Z17luaL_newmetatableP9lua_StatePKc
 * Demangled: luaL_newmetatable(lua_State *,char const*)
 *
 * Callers: 2
 *   0x00000000004C1AC0  Caver::ProgramState::NewMetatable(std::string const&)
 *   0x00000000004C1B88  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *
 * Callees: 1
 *   0x00000000004F8D78  luaL_newmetatable(lua_State *,char const*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203448 string=0x000000000020344C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall luaL_newmetatable(int a1, char *a2)
{
  return _Z17luaL_newmetatableP9lua_StatePKc(a1, a2);
}

