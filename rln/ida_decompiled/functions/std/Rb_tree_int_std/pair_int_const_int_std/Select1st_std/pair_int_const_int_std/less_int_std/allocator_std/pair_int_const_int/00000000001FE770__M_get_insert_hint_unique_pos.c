/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE770
 * Mangled: ._ZNSt8_Rb_treeIiSt4pairIKiiESt10_Select1stIS2_ESt4lessIiESaIS2_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS2_ERS1_
 * Demangled: std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,int>>,int const&)
 *
 * Callers: 1
 *   0x000000000044F994  std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::operator[](int const&)
 *
 * Callees: 1
 *   0x00000000004505D0  std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,int>>,int const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE778 string=0x00000000001FE77C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos()
{
  return _ZNSt8_Rb_treeIiSt4pairIKiiESt10_Select1stIS2_ESt4lessIiESaIS2_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS2_ERS1_();
}

