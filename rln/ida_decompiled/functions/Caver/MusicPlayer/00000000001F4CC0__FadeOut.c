/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4CC0
 * Mangled: ._ZN5Caver11MusicPlayer7FadeOutEf
 * Demangled: Caver::MusicPlayer::FadeOut(float)
 *
 * Callers: 3
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x00000000004815D8  Caver::MusicPlayer::FadeOut(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4CC8 string=0x00000000001F4CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlayer::FadeOut(Caver::MusicPlayer *this, float a2)
{
  return _ZN5Caver11MusicPlayer7FadeOutEf(this, a2);
}

