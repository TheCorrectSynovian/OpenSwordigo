/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9B40
 * Mangled: ._ZN5Caver13ObjectLibrary15LoadAllProgramsEPNS_12ProgramStateE
 * Demangled: Caver::ObjectLibrary::LoadAllPrograms(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x00000000004642A8  Caver::Scene::FinishLoad(void)
 *
 * Callees: 1
 *   0x000000000045DF70  Caver::ObjectLibrary::LoadAllPrograms(Caver::ProgramState *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9B48 string=0x00000000001F9B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectLibrary::LoadAllPrograms(Caver::ObjectLibrary *this, Caver::ProgramState *a2)
{
  return _ZN5Caver13ObjectLibrary15LoadAllProgramsEPNS_12ProgramStateE(this, a2);
}

