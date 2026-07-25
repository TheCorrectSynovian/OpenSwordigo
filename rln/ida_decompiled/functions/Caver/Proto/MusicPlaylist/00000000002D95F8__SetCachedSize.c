/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D95F8
 * Mangled: _ZNK5Caver5Proto13MusicPlaylist13SetCachedSizeEi
 * Demangled: Caver::Proto::MusicPlaylist::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D95C0  Caver::Proto::MusicPlaylist::~MusicPlaylist()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MusicPlaylist::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

