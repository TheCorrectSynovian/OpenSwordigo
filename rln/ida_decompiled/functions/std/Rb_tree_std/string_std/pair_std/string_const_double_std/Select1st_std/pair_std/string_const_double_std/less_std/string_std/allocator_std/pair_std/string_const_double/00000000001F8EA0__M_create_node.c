/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8EA0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsdESt10_Select1stIS2_ESt4lessISsESaIS2_EE14_M_create_nodeERKS2_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_create_node(std::pair<std::string const,double> const&)
 *
 * Callers: 1
 *   0x000000000037E500  std::map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::operator[](std::string const&)
 *
 * Callees: 1
 *   0x00000000003809C4  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_create_node(std::pair<std::string const,double> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8EA8 string=0x00000000001F8EAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsdESt10_Select1stIS2_ESt4lessISsESaIS2_EE14_M_create_nodeERKS2_();
}

