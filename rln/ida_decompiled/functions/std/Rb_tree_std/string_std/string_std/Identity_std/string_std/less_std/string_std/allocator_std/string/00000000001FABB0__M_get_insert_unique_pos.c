/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FABB0
 * Mangled: ._ZNSt8_Rb_treeISsSsSt9_IdentityISsESt4lessISsESaISsEE24_M_get_insert_unique_posERKSs
 * Demangled: std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callers: 1
 *   0x000000000037E0F0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *
 * Callees: 1
 *   0x00000000003804B0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FABB8 string=0x00000000001FABBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_unique_pos()
{
  return _ZNSt8_Rb_treeISsSsSt9_IdentityISsESt4lessISsESaISsEE24_M_get_insert_unique_posERKSs();
}

