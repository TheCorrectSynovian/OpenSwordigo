/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB360
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::string const&)
 *
 * Callers: 1
 *   0x00000000003D3D94  std::map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::operator[](std::string const&)
 *
 * Callees: 1
 *   0x00000000003D9B68  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(boost::shared_ptr<Caver::ItemOverlay> const*,Caver::ItemOverlay *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB368 string=0x00000000001FB36C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_hint_unique_pos()
{
  JUMPOUT(0x3D9C88);
}

