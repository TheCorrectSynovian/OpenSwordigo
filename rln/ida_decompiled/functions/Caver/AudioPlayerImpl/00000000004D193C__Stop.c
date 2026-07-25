/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D193C
 * Mangled: _ZN5Caver15AudioPlayerImpl4StopEv
 * Demangled: Caver::AudioPlayerImpl::Stop(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9970  MusicPlayerJNI::Stop(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000004D193C string=0x00000000004D1940 ""
 *   insn=0x00000000004D1940 string=0x00000000004D1944 ""
 *   insn=0x00000000004D1944 string=0x00000000001F9970 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioPlayerImpl::Stop(Caver::AudioPlayerImpl *this)
{
  *((_DWORD *)this + 2) = 3;
  return MusicPlayerJNI::Stop(this);
}

