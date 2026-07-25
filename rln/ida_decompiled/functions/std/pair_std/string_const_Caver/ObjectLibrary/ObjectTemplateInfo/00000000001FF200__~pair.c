/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF200
 * Mangled: ._ZNSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEED2Ev
 * Demangled: std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair()
 *
 * Callers: 3
 *   0x000000000045CDB0  std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *   0x000000000045E14C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>> *)
 *   0x000000000045F88C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>)
 *
 * Callees: 1
 *   0x000000000045E1A0  std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF208 string=0x00000000001FF20C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair()
{
  return _ZNSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEED2Ev();
}

