/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6CC0
 * Mangled: ._ZN5Caver5Proto13MusicPlaylistD2Ev
 * Demangled: Caver::Proto::MusicPlaylist::~MusicPlaylist()
 *
 * Callers: 1
 *   0x00000000002D95C0  Caver::Proto::MusicPlaylist::~MusicPlaylist()
 *
 * Callees: 1
 *   0x00000000002D91D8  Caver::Proto::MusicPlaylist::MusicPlaylist(Caver::Proto::MusicPlaylist const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6CC8 string=0x00000000001F6CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MusicPlaylist::~MusicPlaylist(Caver::Proto::MusicPlaylist *this)
{
  JUMPOUT(0x2D93A8);
}

