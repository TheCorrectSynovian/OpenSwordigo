/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203060
 * Mangled: ._ZN5Caver11MusicPlayer22RegisterProgramLibraryEPNS_12ProgramStateE
 * Demangled: Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 1
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203068 string=0x000000000020306C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlayer::RegisterProgramLibrary(Caver::MusicPlayer *this, Caver::ProgramState *a2)
{
  return _ZN5Caver11MusicPlayer22RegisterProgramLibraryEPNS_12ProgramStateE(this, a2);
}

