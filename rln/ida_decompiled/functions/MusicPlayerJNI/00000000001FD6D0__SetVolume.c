/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD6D0
 * Mangled: ._ZN14MusicPlayerJNI9SetVolumeEf
 * Demangled: MusicPlayerJNI::SetVolume(float)
 *
 * Callers: 1
 *   0x00000000004D1988  Caver::AudioPlayerImpl::setVolume(float)
 *
 * Callees: 1
 *   0x000000000047D220  MusicPlayerJNI::SetVolume(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD6D4 string=0x000000000047D220 "h"
 *   insn=0x00000000001FD6D8 string=0x00000000001FD6DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall MusicPlayerJNI::SetVolume(MusicPlayerJNI *this, float a2)
{
  return _ZN14MusicPlayerJNI9SetVolumeEf(this, a2);
}

