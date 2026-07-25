/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7300
 * Mangled: ._ZNSt8_Rb_treeISsSsSt9_IdentityISsESt4lessISsESaISsEE14_M_create_nodeERKSs
 * Demangled: std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node(std::string const&)
 *
 * Callers: 1
 *   0x000000000037E0F0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *
 * Callees: 1
 *   0x00000000003805F0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7308 string=0x00000000001F730C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node()
{
  return _ZNSt8_Rb_treeISsSsSt9_IdentityISsESt4lessISsESaISsEE14_M_create_nodeERKSs();
}

