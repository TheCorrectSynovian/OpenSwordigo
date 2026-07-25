/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047F5F0
 * Mangled: _ZN5Caver11AudioSystem14SetMusicVolumeEf
 * Demangled: Caver::AudioSystem::SetMusicVolume(float)
 *
 * Callers: 1
 *   0x00000000001F90E0  Caver::AudioSystem::SetMusicVolume(float)
 *
 * Callees: 1
 *   0x00000000001F56C0  Caver::MusicPlayer::SetVolume(float)
 *
 * Referenced strings: 3
 *   insn=0x000000000047F5F0 string=0x000000000047F5F4 "@"
 *   insn=0x000000000047F5F4 string=0x000000000047F5F8 "2"
 *   insn=0x000000000047F5F8 string=0x00000000001F56C0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MusicPlayer *__fastcall Caver::AudioSystem::SetMusicVolume(Caver::AudioSystem *this, float a2)
{
  Caver::MusicPlayer *result; // x0

  result = (Caver::MusicPlayer *)*((_QWORD *)this + 13);
  if ( result )
    return (Caver::MusicPlayer *)Caver::MusicPlayer::SetVolume(result, a2);
  return result;
}

