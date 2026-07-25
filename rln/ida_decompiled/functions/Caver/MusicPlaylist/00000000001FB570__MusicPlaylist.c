/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB570
 * Mangled: ._ZN5Caver13MusicPlaylistC2Ev
 * Demangled: Caver::MusicPlaylist::MusicPlaylist(void)
 *
 * Callers: 2
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *   0x0000000000480F14  Caver::MusicPlayer::PlaylistForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000004832F8  Caver::MusicPlaylist::MusicPlaylist(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB574 string=0x00000000004832F8 ""
 *   insn=0x00000000001FB578 string=0x00000000001FB57C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MusicPlaylist::MusicPlaylist(Caver::MusicPlaylist *this)
{
  return _ZN5Caver13MusicPlaylistC2Ev(this);
}

