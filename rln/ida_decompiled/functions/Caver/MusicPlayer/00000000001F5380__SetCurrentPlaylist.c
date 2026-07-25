/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5380
 * Mangled: ._ZN5Caver11MusicPlayer18SetCurrentPlaylistERKN5boost10shared_ptrINS_13MusicPlaylistEEE
 * Demangled: Caver::MusicPlayer::SetCurrentPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callers: 2
 *   0x0000000000480F14  Caver::MusicPlayer::PlaylistForName(std::string const&)
 *   0x0000000000482090  Caver::MusicPlayer::Update(float)
 *
 * Callees: 1
 *   0x00000000004814C0  Caver::MusicPlayer::SetCurrentPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5388 string=0x00000000001F538C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MusicPlayer::SetCurrentPlaylist()
{
  return _ZN5Caver11MusicPlayer18SetCurrentPlaylistERKN5boost10shared_ptrINS_13MusicPlaylistEEE();
}

