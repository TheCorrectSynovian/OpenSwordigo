/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD860
 * Mangled: ._ZN5Caver11MusicPlayer10SetLoopingEb
 * Demangled: Caver::MusicPlayer::SetLooping(bool)
 *
 * Callers: 2
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x000000000048206C  Caver::MusicPlayer::SetLooping(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD868 string=0x00000000001FD86C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlayer::SetLooping(Caver::MusicPlayer *this, bool a2)
{
  return _ZN5Caver11MusicPlayer10SetLoopingEb(this, a2);
}

