/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B80
 * Mangled: ._ZN5Caver12ProgramState22RegisterProgramLibraryEv
 * Demangled: Caver::ProgramState::RegisterProgramLibrary(void)
 *
 * Callers: 1
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Callees: 1
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5B88 string=0x00000000001F5B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProgramState::RegisterProgramLibrary(Caver::ProgramState *this)
{
  JUMPOUT(0x4C0F18);
}

