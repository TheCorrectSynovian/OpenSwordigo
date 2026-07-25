/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFF60
 * Mangled: ._ZN5Caver12ProgramStateC2EPS0_
 * Demangled: Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Callers: 1
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 1
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFF68 string=0x00000000001FFF6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::ProgramState(Caver::ProgramState *this, Caver::ProgramState *a2)
{
  return _ZN5Caver12ProgramStateC2EPS0_(this, a2);
}

