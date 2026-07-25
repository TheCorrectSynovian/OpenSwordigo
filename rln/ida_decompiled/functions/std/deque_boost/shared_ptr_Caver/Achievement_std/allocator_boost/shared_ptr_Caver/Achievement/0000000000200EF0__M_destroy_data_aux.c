/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200EF0
 * Mangled: ._ZNSt5dequeIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EE19_M_destroy_data_auxESt15_Deque_iteratorIS4_RS4_PS4_ESA_
 * Demangled: std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_destroy_data_aux(std::_Deque_iterator<boost::shared_ptr<Caver::Achievement>,boost::shared_ptr<Caver::Achievement>&,boost::shared_ptr<Caver::Achievement>*>,std::_Deque_iterator<boost::shared_ptr<Caver::Achievement>,boost::shared_ptr<Caver::Achievement>&,boost::shared_ptr<Caver::Achievement>*>)
 *
 * Callers: 1
 *   0x000000000037D7FC  std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::~deque()
 *
 * Callees: 1
 *   0x000000000037F314  std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_initialize_map(ulong)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200EF8 string=0x0000000000200EFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::deque<boost::shared_ptr<Caver::Achievement>>::_M_destroy_data_aux()
{
  JUMPOUT(0x37F468);
}

