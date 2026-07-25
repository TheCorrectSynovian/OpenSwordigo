/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEDC0
 * Mangled: ._ZN5Caver12SoundLibrary22RegisterProgramLibraryEPNS_12ProgramStateE
 * Demangled: Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 1
 *   0x00000000004866A8  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEDC8 string=0x00000000001FEDCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundLibrary::RegisterProgramLibrary(Caver::SoundLibrary *this, Caver::ProgramState *a2)
{
  return _ZN5Caver12SoundLibrary22RegisterProgramLibraryEPNS_12ProgramStateE(this, a2);
}

