/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF7A0
 * Mangled: ._ZNSt8_Rb_treeIllSt9_IdentityIlESt4lessIlESaIlEE8_M_eraseEPSt13_Rb_tree_nodeIlE
 * Demangled: std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase(std::_Rb_tree_node<long> *)
 *
 * Callers: 3
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *   0x000000000046A0F4  std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase(std::_Rb_tree_node<long> *)
 *
 * Callees: 1
 *   0x000000000046A0F4  std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase(std::_Rb_tree_node<long> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF7A8 string=0x00000000001FF7AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<long,long,std::_Identity<long>,std::less<long>,std::allocator<long>>::_M_erase()
{
  return _ZNSt8_Rb_treeIllSt9_IdentityIlESt4lessIlESaIlEE8_M_eraseEPSt13_Rb_tree_nodeIlE();
}

