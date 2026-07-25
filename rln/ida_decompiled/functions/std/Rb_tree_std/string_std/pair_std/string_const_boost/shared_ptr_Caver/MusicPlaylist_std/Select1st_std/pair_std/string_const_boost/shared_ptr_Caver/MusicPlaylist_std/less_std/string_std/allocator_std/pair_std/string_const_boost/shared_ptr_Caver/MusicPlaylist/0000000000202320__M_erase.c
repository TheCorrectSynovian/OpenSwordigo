/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202320
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13MusicPlaylistEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>> *)
 *
 * Callers: 1
 *   0x0000000000480200  Caver::MusicPlayer::~MusicPlayer()
 *
 * Callees: 1
 *   0x0000000000480200  Caver::MusicPlayer::~MusicPlayer()
 *
 * Referenced strings: 1
 *   insn=0x0000000000202328 string=0x000000000020232C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_erase()
{
  JUMPOUT(0x48041C);
}

