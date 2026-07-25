/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002031F0
 * Mangled: ._ZN5Caver12ProgramTable16SetPointerForKeyERKSsPv
 * Demangled: Caver::ProgramTable::SetPointerForKey(std::string const&,void *)
 *
 * Callers: 5
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x00000000004866A8  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000004C20DC  Caver::ProgramTable::SetPointerForKey(std::string const&,void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002031F8 string=0x00000000002031FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProgramTable::SetPointerForKey()
{
  return _ZN5Caver12ProgramTable16SetPointerForKeyERKSsPv();
}

