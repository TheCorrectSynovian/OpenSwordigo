/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC3B0
 * Mangled: ._ZN14MusicPlayerJNI5PauseEv
 * Demangled: MusicPlayerJNI::Pause(void)
 *
 * Callers: 1
 *   0x00000000004D1930  Caver::AudioPlayerImpl::Pause(void)
 *
 * Callees: 1
 *   0x000000000047D1AC  MusicPlayerJNI::Pause(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC3B4 string=0x000000000047D1AC "h"
 *   insn=0x00000000001FC3B8 string=0x00000000001FC3BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall MusicPlayerJNI::Pause(MusicPlayerJNI *this)
{
  return _ZN14MusicPlayerJNI5PauseEv(this);
}

