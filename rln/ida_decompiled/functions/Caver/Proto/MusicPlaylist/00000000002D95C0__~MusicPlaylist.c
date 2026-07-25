/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D95C0
 * Mangled: _ZN5Caver5Proto13MusicPlaylistD0Ev
 * Demangled: Caver::Proto::MusicPlaylist::~MusicPlaylist()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F6CC0  Caver::Proto::MusicPlaylist::~MusicPlaylist()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002D95F8  Caver::Proto::MusicPlaylist::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002D95D0 string=0x00000000001F6CC0 "0'"
 *   insn=0x00000000002D95DC string=0x00000000002D95E0 "4w"
 *   insn=0x00000000002D95E0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D95E8 string=0x00000000002D95EC "1w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MusicPlaylist::~MusicPlaylist(Caver::Proto::MusicPlaylist *this)
{
  Caver::Proto::MusicPlaylist::~MusicPlaylist(this);
  operator delete(this);
}

