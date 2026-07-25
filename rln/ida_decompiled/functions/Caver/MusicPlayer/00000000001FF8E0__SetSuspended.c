/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF8E0
 * Mangled: ._ZN5Caver11MusicPlayer12SetSuspendedEb
 * Demangled: Caver::MusicPlayer::SetSuspended(bool)
 *
 * Callers: 2
 *   0x000000000047EB04  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *   0x000000000047ED50  Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *
 * Callees: 1
 *   0x0000000000481FC0  Caver::MusicPlayer::SetSuspended(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF8E8 string=0x00000000001FF8EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlayer::SetSuspended(Caver::MusicPlayer *this, bool a2)
{
  return _ZN5Caver11MusicPlayer12SetSuspendedEb(this, a2);
}

