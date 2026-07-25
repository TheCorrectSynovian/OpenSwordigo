/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201A80
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callers: 1
 *   0x00000000003D9B68  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(boost::shared_ptr<Caver::ItemOverlay> const*,Caver::ItemOverlay *)
 *
 * Callees: 1
 *   0x00000000003D9EC0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201A88 string=0x0000000000201A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_unique_pos()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_();
}

