/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F83B0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIKN5Caver17KeyframeAnimationEEEESt10_Select1stIS8_ESt4lessISsESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>> *)
 *
 * Callers: 2
 *   0x000000000044B4C0  Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary*)
 *   0x000000000044CDC4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>> *)
 *
 * Callees: 1
 *   0x000000000044CDC4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F83B8 string=0x00000000001F83BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_erase()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIKN5Caver17KeyframeAnimationEEEESt10_Select1stIS8_ESt4lessISsESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E();
}

