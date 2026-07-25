/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8CB0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEESt10_Select1stIS5_ESt4lessISsESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>> *)
 *
 * Callers: 3
 *   0x000000000045C260  Caver::ObjectLibrary::~ObjectLibrary()
 *   0x000000000045E14C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>> *)
 *   0x000000000045F88C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>)
 *
 * Callees: 1
 *   0x000000000045E14C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8CB8 string=0x00000000001F8CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEESt10_Select1stIS5_ESt4lessISsESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E();
}

