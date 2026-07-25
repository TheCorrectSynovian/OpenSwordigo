/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004815D8
 * Mangled: _ZN5Caver11MusicPlayer7FadeOutEf
 * Demangled: Caver::MusicPlayer::FadeOut(float)
 *
 * Callers: 1
 *   0x00000000001F4CC0  Caver::MusicPlayer::FadeOut(float)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004815D8 string=0x00000000004815DC ""
 *   insn=0x00000000004815DC string=0x00000000004815E0 " "
 *   insn=0x00000000004815E0 string=0x00000000004815E4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::MusicPlayer::FadeOut(Caver::MusicPlayer *this, float a2)
{
  float result; // s0

  result = 1.0 / a2;
  *((_DWORD *)this + 8) = -1;
  *((float *)this + 9) = result;
  return result;
}

