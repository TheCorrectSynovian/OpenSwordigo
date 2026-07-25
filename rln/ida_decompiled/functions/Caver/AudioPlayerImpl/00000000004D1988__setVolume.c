/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1988
 * Mangled: _ZN5Caver15AudioPlayerImpl9setVolumeEf
 * Demangled: Caver::AudioPlayerImpl::setVolume(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD6D0  MusicPlayerJNI::SetVolume(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000004D1988 string=0x00000000004D198C "Q"
 *   insn=0x00000000004D198C string=0x00000000001FD6D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioPlayerImpl::setVolume(Caver::AudioPlayerImpl *this, float a2)
{
  *((float *)this + 4) = a2;
  return MusicPlayerJNI::SetVolume(this, a2);
}

