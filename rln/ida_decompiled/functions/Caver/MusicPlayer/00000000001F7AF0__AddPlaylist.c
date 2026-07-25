/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7AF0
 * Mangled: ._ZN5Caver11MusicPlayer11AddPlaylistERKN5boost10shared_ptrINS_13MusicPlaylistEEE
 * Demangled: Caver::MusicPlayer::AddPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x000000000048093C  Caver::MusicPlayer::AddPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7AF8 string=0x00000000001F7AFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MusicPlayer::AddPlaylist()
{
  return _ZN5Caver11MusicPlayer11AddPlaylistERKN5boost10shared_ptrINS_13MusicPlaylistEEE();
}

