/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202BF0
 * Mangled: ._ZN5Caver12ProgramStateC2EPS0__0
 * Demangled: Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Callers: 1
 *   0x00000000004C133C  Caver::ProgramState::CreateChildState(void)
 *
 * Callees: 1
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202BF8 string=0x0000000000202BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::ProgramState(Caver::ProgramState *this, Caver::ProgramState *a2)
{
  return _ZN5Caver12ProgramStateC2EPS0_(this, a2);
}

