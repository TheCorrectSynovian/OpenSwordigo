/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C19AC
 * Mangled: _ZN5Caver12ProgramState15IntAtStackIndexEi
 * Demangled: Caver::ProgramState::IntAtStackIndex(int)
 *
 * Callers: 1
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *
 * Callees: 1
 *   0x00000000001FB1C0  lua_tointeger(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C19B8 string=0x00000000001FB1C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::IntAtStackIndex(Caver::ProgramState *this)
{
  return lua_tointeger();
}

