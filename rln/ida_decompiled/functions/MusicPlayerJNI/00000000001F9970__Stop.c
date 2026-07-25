/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9970
 * Mangled: ._ZN14MusicPlayerJNI4StopEv
 * Demangled: MusicPlayerJNI::Stop(void)
 *
 * Callers: 1
 *   0x00000000004D193C  Caver::AudioPlayerImpl::Stop(void)
 *
 * Callees: 1
 *   0x000000000047D1D0  MusicPlayerJNI::Stop(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9974 string=0x000000000047D1D0 "h"
 *   insn=0x00000000001F9978 string=0x00000000001F997C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall MusicPlayerJNI::Stop(MusicPlayerJNI *this)
{
  return _ZN14MusicPlayerJNI4StopEv(this);
}

