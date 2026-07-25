/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1930
 * Mangled: _ZN5Caver15AudioPlayerImpl5PauseEv
 * Demangled: Caver::AudioPlayerImpl::Pause(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC3B0  MusicPlayerJNI::Pause(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004D1930 string=0x00000000004D1934 ""
 *   insn=0x00000000004D1938 string=0x00000000001FC3B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioPlayerImpl::Pause(Caver::AudioPlayerImpl *this)
{
  *((_DWORD *)this + 2) = 2;
  return MusicPlayerJNI::Pause(this);
}

