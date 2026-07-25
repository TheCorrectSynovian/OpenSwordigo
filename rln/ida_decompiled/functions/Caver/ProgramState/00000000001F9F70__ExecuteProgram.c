/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9F70
 * Mangled: ._ZN5Caver12ProgramState14ExecuteProgramERKNS_7ProgramE
 * Demangled: Caver::ProgramState::ExecuteProgram(Caver::Program const&)
 *
 * Callers: 1
 *   0x000000000045DF70  Caver::ObjectLibrary::LoadAllPrograms(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000004C18B4  Caver::ProgramState::ExecuteProgram(Caver::Program const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9F78 string=0x00000000001F9F7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::ExecuteProgram(Caver::ProgramState *this, const Caver::Program *a2)
{
  return _ZN5Caver12ProgramState14ExecuteProgramERKNS_7ProgramE(this, a2);
}

