/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE810
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13MusicPlaylistEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *
 * Callers: 2
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *   0x0000000000480F14  Caver::MusicPlayer::PlaylistForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000003B4B98  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE818 string=0x00000000001FE81C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>()
{
  return _ZN5boost10shared_ptrIN5Caver13MusicPlaylistEEC2IS2_EEPT_();
}

