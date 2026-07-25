/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAC30
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost8functionIFPN5Caver9ComponentEvEEEESt10_Select1stIS9_ESt4lessISsESaIS9_EE8_M_eraseEPSt13_Rb_tree_nodeIS9_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>> *)
 *
 * Callers: 2
 *   0x00000000002441C0  Caver::ComponentFactory::~ComponentFactory()
 *   0x00000000002449E4  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>> *)
 *
 * Callees: 1
 *   0x00000000002449E4  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAC38 string=0x00000000001FAC3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8functionIFPN5Caver9ComponentEvEEEESt10_Select1stIS9_ESt4lessISsESaIS9_EE8_M_eraseEPSt13_Rb_tree_nodeIS9_E();
}

