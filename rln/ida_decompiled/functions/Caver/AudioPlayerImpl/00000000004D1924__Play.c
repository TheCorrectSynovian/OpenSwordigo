/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1924
 * Mangled: _ZN5Caver15AudioPlayerImpl4PlayEv
 * Demangled: Caver::AudioPlayerImpl::Play(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FDB90  MusicPlayerJNI::Play(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004D1924 string=0x00000000004D1928 ""
 *   insn=0x00000000004D192C string=0x00000000001FDB90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioPlayerImpl::Play(Caver::AudioPlayerImpl *this)
{
  *((_DWORD *)this + 2) = 1;
  return MusicPlayerJNI::Play(this);
}

