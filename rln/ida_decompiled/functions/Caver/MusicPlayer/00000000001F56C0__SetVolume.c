/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F56C0
 * Mangled: ._ZN5Caver11MusicPlayer9SetVolumeEf
 * Demangled: Caver::MusicPlayer::SetVolume(float)
 *
 * Callers: 1
 *   0x000000000047F5F0  Caver::AudioSystem::SetMusicVolume(float)
 *
 * Callees: 1
 *   0x0000000000482064  Caver::MusicPlayer::SetVolume(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F56C8 string=0x00000000001F56CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlayer::SetVolume(Caver::MusicPlayer *this, float a2)
{
  return _ZN5Caver11MusicPlayer9SetVolumeEf(this, a2);
}

