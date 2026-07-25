/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201870
 * Mangled: ._ZN5Caver12ProgramState16CreateChildStateEv
 * Demangled: Caver::ProgramState::CreateChildState(void)
 *
 * Callers: 1
 *   0x0000000000243808  Caver::Scene::NewProgramStateForProgram(Caver::Program const&)
 *
 * Callees: 1
 *   0x00000000004C133C  Caver::ProgramState::CreateChildState(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201878 string=0x000000000020187C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::CreateChildState(Caver::ProgramState *this)
{
  return _ZN5Caver12ProgramState16CreateChildStateEv(this);
}

