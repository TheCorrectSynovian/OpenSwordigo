/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E40
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEESt10_Select1stIS5_ESt4lessISsESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_create_node(std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo> const&)
 *
 * Callers: 1
 *   0x000000000045CDB0  std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *
 * Callees: 1
 *   0x000000000045F63C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_create_node(std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6E48 string=0x00000000001F6E4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEESt10_Select1stIS5_ESt4lessISsESaIS5_EE14_M_create_nodeERKS5_();
}

