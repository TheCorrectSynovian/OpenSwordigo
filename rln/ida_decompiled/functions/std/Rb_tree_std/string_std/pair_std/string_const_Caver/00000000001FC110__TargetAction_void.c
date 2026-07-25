/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC110
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5Caver12TargetActionIFvRS1_bS4_EEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>> *)
 *
 * Callers: 2
 *   0x00000000004BD270  Caver::StoreController_Android::~StoreController_Android()
 *   0x00000000004BEAC8  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>> *)
 *
 * Callees: 1
 *   0x00000000004BEAC8  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC118 string=0x00000000001FC11C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_erase()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver12TargetActionIFvRS1_bS4_EEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E();
}

