/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C19C4
 * Mangled: _ZN5Caver12ProgramState19IsFloatAtStackIndexEi
 * Demangled: Caver::ProgramState::IsFloatAtStackIndex(int)
 *
 * Callers: 1
 *   0x0000000000200690  Caver::ProgramState::IsFloatAtStackIndex(int)
 *
 * Callees: 1
 *   0x00000000001FAE70  lua_isnumber(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000004C19CC string=0x00000000004C19D0 "("
 *   insn=0x00000000004C19D0 string=0x00000000001FAE70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ProgramState::IsFloatAtStackIndex(Caver::ProgramState *this)
{
  return (unsigned int)lua_isnumber() != 0;
}

