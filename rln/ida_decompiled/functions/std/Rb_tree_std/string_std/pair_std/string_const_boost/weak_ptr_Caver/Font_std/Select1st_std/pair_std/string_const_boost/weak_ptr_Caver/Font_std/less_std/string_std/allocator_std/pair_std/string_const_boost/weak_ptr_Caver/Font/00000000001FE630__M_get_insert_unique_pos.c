/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE630
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver4FontEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callers: 1
 *   0x00000000004C4D30  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::string const&)
 *
 * Callees: 1
 *   0x00000000004C4F68  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE638 string=0x00000000001FE63C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_get_insert_unique_pos()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver4FontEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_();
}

