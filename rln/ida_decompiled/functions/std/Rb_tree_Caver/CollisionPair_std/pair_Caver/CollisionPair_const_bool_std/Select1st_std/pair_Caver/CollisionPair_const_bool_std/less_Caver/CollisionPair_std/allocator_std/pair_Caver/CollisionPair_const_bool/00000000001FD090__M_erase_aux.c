/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD090
 * Mangled: ._ZNSt8_Rb_treeIN5Caver13CollisionPairESt4pairIKS1_bESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS4_E
 * Demangled: std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *
 * Callers: 1
 *   0x0000000000216C88  Caver::CollisionPairSet::Purge(void)
 *
 * Callees: 1
 *   0x0000000000216ED0  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD098 string=0x00000000001FD09C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux()
{
  return _ZNSt8_Rb_treeIN5Caver13CollisionPairESt4pairIKS1_bESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS4_E();
}

