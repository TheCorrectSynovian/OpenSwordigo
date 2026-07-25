/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C18A8
 * Mangled: _ZN5Caver12ProgramState3PopEi
 * Demangled: Caver::ProgramState::Pop(int)
 *
 * Callers: 1
 *   0x00000000001F5610  Caver::ProgramState::Pop(int)
 *
 * Callees: 1
 *   0x0000000000201110  lua_settop(lua_State *,int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::Pop(Caver::ProgramState *this)
{
  return lua_settop();
}

