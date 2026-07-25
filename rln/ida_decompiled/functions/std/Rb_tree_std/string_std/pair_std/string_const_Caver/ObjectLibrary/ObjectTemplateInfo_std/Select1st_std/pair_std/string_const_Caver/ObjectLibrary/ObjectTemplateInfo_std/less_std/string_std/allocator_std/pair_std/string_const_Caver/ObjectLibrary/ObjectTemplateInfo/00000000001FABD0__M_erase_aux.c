/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FABD0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEESt10_Select1stIS5_ESt4lessISsESaIS5_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS5_ESD_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>)
 *
 * Callers: 1
 *   0x000000000045D638  Caver::ObjectLibrary::RemoveTemplate(Caver::ObjectTemplate *)
 *
 * Callees: 1
 *   0x000000000045F88C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FABD8 string=0x00000000001FABDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEESt10_Select1stIS5_ESt4lessISsESaIS5_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS5_ESD_();
}

