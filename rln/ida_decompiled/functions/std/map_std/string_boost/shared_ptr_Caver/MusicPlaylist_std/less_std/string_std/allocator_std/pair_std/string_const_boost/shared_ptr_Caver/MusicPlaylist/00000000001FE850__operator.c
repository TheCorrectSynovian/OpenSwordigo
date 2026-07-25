/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE850
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver13MusicPlaylistEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x000000000048093C  Caver::MusicPlayer::AddPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *   0x0000000000480F14  Caver::MusicPlayer::PlaylistForName(std::string const&)
 *
 * Callees: 1
 *   0x0000000000480AD0  std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE858 string=0x00000000001FE85C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver13MusicPlaylistEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

