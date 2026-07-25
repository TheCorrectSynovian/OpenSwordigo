/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE5A0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13MusicPlaylistEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::string const&)
 *
 * Callers: 1
 *   0x0000000000480AD0  std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::operator[](std::string const&)
 *
 * Callees: 1
 *   0x0000000000482D24  std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>(Caver::MusicTrack *,Caver::MusicTrack *,Caver::MusicTrack *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE5A8 string=0x00000000001FE5AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_get_insert_hint_unique_pos()
{
  JUMPOUT(0x482E54);
}

