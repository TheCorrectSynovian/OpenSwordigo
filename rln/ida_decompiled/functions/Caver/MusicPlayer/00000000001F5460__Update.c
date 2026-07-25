/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5460
 * Mangled: ._ZN5Caver11MusicPlayer6UpdateEf
 * Demangled: Caver::MusicPlayer::Update(float)
 *
 * Callers: 1
 *   0x000000000047FB9C  Caver::AudioSystem::Update(float)
 *
 * Callees: 1
 *   0x0000000000482090  Caver::MusicPlayer::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5468 string=0x00000000001F546C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlayer::Update(Caver::MusicPlayer *this, float a2)
{
  return _ZN5Caver11MusicPlayer6UpdateEf(this, a2);
}

