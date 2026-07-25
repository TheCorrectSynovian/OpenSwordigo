/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1AC0
 * Mangled: _ZN5Caver12ProgramState12NewMetatableERKSs
 * Demangled: Caver::ProgramState::NewMetatable(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203440  luaL_newmetatable(lua_State *,char const*)
 *
 * Referenced strings: 2
 *   insn=0x00000000004C1AC0 string=0x00000000004C1AC4 "!"
 *   insn=0x00000000004C1AC4 string=0x00000000004C1AC8 "^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::NewMetatable(_QWORD *a1, char **a2)
{
  return luaL_newmetatable(*a1, *a2);
}

