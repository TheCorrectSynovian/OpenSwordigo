/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9360
 * Mangled: ._ZNSt8_Rb_treeIlSt4pairIKlN5boost10shared_ptrIN5Caver19ComponentCollectionEEEESt10_Select1stIS7_ESt4lessIlESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_erase(std::_Rb_tree_node<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>> *)
 *
 * Callers: 3
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *   0x0000000000469290  sub_469290
 *
 * Callees: 1
 *   0x0000000000469290  sub_469290
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9368 string=0x00000000001F936C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_erase()
{
  JUMPOUT(0x46A060);
}

