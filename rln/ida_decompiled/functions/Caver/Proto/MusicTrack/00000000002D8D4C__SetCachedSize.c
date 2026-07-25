/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8D4C
 * Mangled: _ZNK5Caver5Proto10MusicTrack13SetCachedSizeEi
 * Demangled: Caver::Proto::MusicTrack::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D8C50  Caver::Proto::MusicTrack::~MusicTrack()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicTrack::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

