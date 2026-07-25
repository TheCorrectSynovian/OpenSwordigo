/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9AC0
 * Mangled: ._ZNSt8_Rb_treeIiSt4pairIKiN5Caver9Component13OutletBindingEESt10_Select1stIS5_ESt4lessIiESaIS5_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS5_ERS1_
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,Caver::Component::OutletBinding>>,int const&)
 *
 * Callers: 1
 *   0x0000000000243510  std::map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::operator[](int const&)
 *
 * Callees: 1
 *   0x00000000002438C0  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,Caver::Component::OutletBinding>>,int const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9AC8 string=0x00000000001F9ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos()
{
  return _ZNSt8_Rb_treeIiSt4pairIKiN5Caver9Component13OutletBindingEESt10_Select1stIS5_ESt4lessIiESaIS5_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS5_ERS1_();
}

