/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200530
 * Mangled: ._ZN14MusicPlayerJNI10SetLoopingEb
 * Demangled: MusicPlayerJNI::SetLooping(bool)
 *
 * Callers: 1
 *   0x00000000004D1960  Caver::AudioPlayerImpl::setLooping(bool)
 *
 * Callees: 1
 *   0x000000000047D1F4  MusicPlayerJNI::SetLooping(bool)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200534 string=0x000000000047D1F4 "h"
 *   insn=0x0000000000200538 string=0x000000000020053C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall MusicPlayerJNI::SetLooping(MusicPlayerJNI *this, bool a2)
{
  return _ZN14MusicPlayerJNI10SetLoopingEb(this, a2);
}

