/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1960
 * Mangled: _ZN5Caver15AudioPlayerImpl10setLoopingEb
 * Demangled: Caver::AudioPlayerImpl::setLooping(bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200530  MusicPlayerJNI::SetLooping(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000004D1960 string=0x00000000004D1964 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioPlayerImpl::setLooping(Caver::AudioPlayerImpl *this, bool a2)
{
  *((_BYTE *)this + 12) = a2;
  return MusicPlayerJNI::SetLooping((MusicPlayerJNI *)a2, a2);
}

