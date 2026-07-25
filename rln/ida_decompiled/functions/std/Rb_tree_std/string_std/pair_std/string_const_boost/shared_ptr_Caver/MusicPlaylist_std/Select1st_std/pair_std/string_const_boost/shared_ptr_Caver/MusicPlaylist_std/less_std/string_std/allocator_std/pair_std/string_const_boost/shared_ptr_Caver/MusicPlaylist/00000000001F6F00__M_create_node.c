/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6F00
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13MusicPlaylistEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>> const&)
 *
 * Callers: 1
 *   0x0000000000480AD0  std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::operator[](std::string const&)
 *
 * Callees: 1
 *   0x00000000004831CC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6F08 string=0x00000000001F6F0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13MusicPlaylistEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_();
}

