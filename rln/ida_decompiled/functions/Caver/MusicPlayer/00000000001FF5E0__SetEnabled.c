/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF5E0
 * Mangled: ._ZN5Caver11MusicPlayer10SetEnabledEb
 * Demangled: Caver::MusicPlayer::SetEnabled(bool)
 *
 * Callers: 1
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Callees: 1
 *   0x0000000000481E88  Caver::MusicPlayer::SetEnabled(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF5E8 string=0x00000000001FF5EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlayer::SetEnabled(Caver::MusicPlayer *this, bool a2)
{
  return _ZN5Caver11MusicPlayer10SetEnabledEb(this, a2);
}

