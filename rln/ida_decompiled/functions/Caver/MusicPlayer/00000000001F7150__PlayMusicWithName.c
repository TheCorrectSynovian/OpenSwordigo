/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7150
 * Mangled: ._ZN5Caver11MusicPlayer17PlayMusicWithNameERKSsb
 * Demangled: Caver::MusicPlayer::PlayMusicWithName(std::string const&,bool)
 *
 * Callers: 3
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x0000000000480F14  Caver::MusicPlayer::PlaylistForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7158 string=0x00000000001F715C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::MusicPlayer::PlayMusicWithName()
{
  JUMPOUT(0x4811A0);
}

