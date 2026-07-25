/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002027C0
 * Mangled: ._ZN5Caver11MusicPlayer23CreatePlayerForPlaylistERKN5boost10shared_ptrINS_13MusicPlaylistEEE
 * Demangled: Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callers: 4
 *   0x00000000004814C0  Caver::MusicPlayer::SetCurrentPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *   0x0000000000481E88  Caver::MusicPlayer::SetEnabled(bool)
 *   0x0000000000481F30  Caver::MusicPlayer::UpdateShouldPlayState(void)
 *   0x0000000000481FC0  Caver::MusicPlayer::SetSuspended(bool)
 *
 * Callees: 1
 *   0x00000000004815F0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002027C8 string=0x00000000002027CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MusicPlayer::CreatePlayerForPlaylist()
{
  return _ZN5Caver11MusicPlayer23CreatePlayerForPlaylistERKN5boost10shared_ptrINS_13MusicPlaylistEEE();
}

