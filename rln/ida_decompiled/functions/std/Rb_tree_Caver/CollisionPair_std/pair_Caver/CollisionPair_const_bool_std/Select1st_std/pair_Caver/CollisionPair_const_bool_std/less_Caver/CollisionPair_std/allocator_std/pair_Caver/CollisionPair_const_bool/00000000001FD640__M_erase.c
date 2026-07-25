/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD640
 * Mangled: ._ZNSt8_Rb_treeIN5Caver13CollisionPairESt4pairIKS1_bESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE8_M_eraseEPSt13_Rb_tree_nodeIS4_E
 * Demangled: std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::CollisionPair const,bool>> *)
 *
 * Callers: 3
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *   0x000000000046A140  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::CollisionPair const,bool>> *)
 *
 * Callees: 1
 *   0x000000000046A140  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::CollisionPair const,bool>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD648 string=0x00000000001FD64C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase()
{
  return _ZNSt8_Rb_treeIN5Caver13CollisionPairESt4pairIKS1_bESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE8_M_eraseEPSt13_Rb_tree_nodeIS4_E();
}

