/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1A00
 * Mangled: _ZN5Caver12ProgramState18IsBoolAtStackIndexEi
 * Demangled: Caver::ProgramState::IsBoolAtStackIndex(int)
 *
 * Callers: 1
 *   0x00000000001F7390  Caver::ProgramState::IsBoolAtStackIndex(int)
 *
 * Callees: 1
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C1A0C string=0x00000000001FB5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ProgramState::IsBoolAtStackIndex(Caver::ProgramState *this)
{
  return (unsigned int)lua_type() == 1;
}

