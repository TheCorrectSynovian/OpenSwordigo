/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C181C
 * Mangled: _ZN5Caver12ProgramState11LoadProgramERKNS_7ProgramE
 * Demangled: Caver::ProgramState::LoadProgram(Caver::Program const&)
 *
 * Callers: 1
 *   0x00000000001F3FC0  Caver::ProgramState::LoadProgram(Caver::Program const&)
 *
 * Callees: 1
 *   0x00000000001FC860  Caver::Program::LoadIntoState(lua_State *)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C1828 string=0x00000000001FC860 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::LoadProgram(Caver::ProgramState *this, const Caver::Program *a2)
{
  return Caver::Program::LoadIntoState();
}

