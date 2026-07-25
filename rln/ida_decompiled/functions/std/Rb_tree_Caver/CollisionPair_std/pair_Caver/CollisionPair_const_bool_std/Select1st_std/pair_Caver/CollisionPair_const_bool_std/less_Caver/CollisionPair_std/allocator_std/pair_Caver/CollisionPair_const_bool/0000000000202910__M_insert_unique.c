/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202910
 * Mangled: ._ZNSt8_Rb_treeIN5Caver13CollisionPairESt4pairIKS1_bESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE16_M_insert_uniqueERKS4_
 * Demangled: std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_insert_unique(std::pair<Caver::CollisionPair const,bool> const&)
 *
 * Callers: 1
 *   0x0000000000215F14  std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>(Caver::Binding *,Caver::Binding *,Caver::Binding *)
 *
 * Callees: 1
 *   0x0000000000216D3C  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_insert_unique(std::pair<Caver::CollisionPair const,bool> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202918 string=0x000000000020291C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_insert_unique()
{
  return _ZNSt8_Rb_treeIN5Caver13CollisionPairESt4pairIKS1_bESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE16_M_insert_uniqueERKS4_();
}

