/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4F10
 * Mangled: ._ZNSt8_Rb_treeIiSt4pairIKiN5Caver9Component13OutletBindingEESt10_Select1stIS5_ESt4lessIiESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node(std::pair<int const,Caver::Component::OutletBinding> const&)
 *
 * Callers: 1
 *   0x0000000000243510  std::map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::operator[](int const&)
 *
 * Callees: 1
 *   0x0000000000243ADC  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node(std::pair<int const,Caver::Component::OutletBinding> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4F18 string=0x00000000001F4F1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeIiSt4pairIKiN5Caver9Component13OutletBindingEESt10_Select1stIS5_ESt4lessIiESaIS5_EE14_M_create_nodeERKS5_();
}

