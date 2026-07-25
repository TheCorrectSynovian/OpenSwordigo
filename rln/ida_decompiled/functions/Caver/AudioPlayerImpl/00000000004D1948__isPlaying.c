/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1948
 * Mangled: _ZNK5Caver15AudioPlayerImpl9isPlayingEv
 * Demangled: Caver::AudioPlayerImpl::isPlaying(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AudioPlayerImpl::isPlaying(Caver::AudioPlayerImpl *this)
{
  return *((_DWORD *)this + 2) == 1;
}

