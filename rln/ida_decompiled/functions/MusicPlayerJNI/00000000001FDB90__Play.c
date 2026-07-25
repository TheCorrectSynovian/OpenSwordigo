/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDB90
 * Mangled: ._ZN14MusicPlayerJNI4PlayEv
 * Demangled: MusicPlayerJNI::Play(void)
 *
 * Callers: 1
 *   0x00000000004D1924  Caver::AudioPlayerImpl::Play(void)
 *
 * Callees: 1
 *   0x000000000047D0E8  MusicPlayerJNI::Play(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDB94 string=0x000000000047D0E8 "h"
 *   insn=0x00000000001FDB98 string=0x00000000001FDB9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall MusicPlayerJNI::Play(MusicPlayerJNI *this)
{
  return _ZN14MusicPlayerJNI4PlayEv(this);
}

