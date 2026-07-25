/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3FC0
 * Mangled: ._ZN5Caver12ProgramState11LoadProgramERKNS_7ProgramE
 * Demangled: Caver::ProgramState::LoadProgram(Caver::Program const&)
 *
 * Callers: 1
 *   0x0000000000243808  Caver::Scene::NewProgramStateForProgram(Caver::Program const&)
 *
 * Callees: 1
 *   0x00000000004C181C  Caver::ProgramState::LoadProgram(Caver::Program const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3FC4 string=0x00000000004C181C ""
 *   insn=0x00000000001F3FC8 string=0x00000000001F3FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::LoadProgram(Caver::ProgramState *this, const Caver::Program *a2)
{
  return _ZN5Caver12ProgramState11LoadProgramERKNS_7ProgramE(this, a2);
}

