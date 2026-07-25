/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFC10
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS2_ERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,int>>,std::string const&)
 *
 * Callers: 1
 *   0x00000000002744D4  Caver::HeroEntityComponent::className(void)
 *
 * Callees: 1
 *   0x00000000002747F0  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,int>>,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFC18 string=0x00000000001FFC1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_hint_unique_pos()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS2_ERS1_();
}

