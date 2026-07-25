/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8A80
 * Mangled: ._ZNSt11_Deque_baseIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EE15_M_create_nodesEPPS4_S8_
 * Demangled: std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_create_nodes(boost::shared_ptr<Caver::Achievement>**,boost::shared_ptr<Caver::Achievement>**)
 *
 * Callers: 1
 *   0x000000000037F314  std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_initialize_map(ulong)
 *
 * Callees: 1
 *   0x000000000037F314  std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_initialize_map(ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8A88 string=0x00000000001F8A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Deque_base<boost::shared_ptr<Caver::Achievement>>::_M_create_nodes()
{
  JUMPOUT(0x37F3EC);
}

