/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FECF0
 * Mangled: ._ZNSt8_Rb_treeIlSt4pairIKlN5boost10shared_ptrIN5Caver19ComponentCollectionEEEESt10_Select1stIS7_ESt4lessIlESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_
 * Demangled: std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,long const&)
 *
 * Callers: 1
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Callees: 1
 *   0x0000000000247974  std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,long const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FECF8 string=0x00000000001FECFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos()
{
  return _ZNSt8_Rb_treeIlSt4pairIKlN5boost10shared_ptrIN5Caver19ComponentCollectionEEEESt10_Select1stIS7_ESt4lessIlESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_();
}

