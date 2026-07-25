/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7250
 * Mangled: ._ZNSt8_Rb_treeIiSt4pairIKiN5Caver9Component13OutletBindingEESt10_Select1stIS5_ESt4lessIiESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::Component::OutletBinding>> *)
 *
 * Callers: 2
 *   0x0000000000215684  Caver::Component::~Component()
 *   0x00000000002157C4  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::Component::OutletBinding>> *)
 *
 * Callees: 1
 *   0x00000000002157C4  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::Component::OutletBinding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7258 string=0x00000000001F725C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_erase()
{
  return _ZNSt8_Rb_treeIiSt4pairIKiN5Caver9Component13OutletBindingEESt10_Select1stIS5_ESt4lessIiESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E();
}

