/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5950
 * Mangled: ._ZN5boost10shared_ptrIN5Caver11AudioPlayerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::AudioPlayer>::shared_ptr<Caver::AudioPlayer>(Caver::AudioPlayer *)
 *
 * Callers: 1
 *   0x00000000004815F0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callees: 1
 *   0x00000000004831CC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5958 string=0x00000000001F595C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::AudioPlayer>::shared_ptr<Caver::AudioPlayer>()
{
  JUMPOUT(0x483248);
}

