/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F61B0
 * Mangled: ._ZNSt11_Deque_baseIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EE17_M_initialize_mapEm
 * Demangled: std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_initialize_map(ulong)
 *
 * Callers: 1
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *
 * Callees: 1
 *   0x000000000037F314  std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_initialize_map(ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F61B8 string=0x00000000001F61BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Deque_base<boost::shared_ptr<Caver::Achievement>>::_M_initialize_map()
{
  return _ZNSt11_Deque_baseIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EE17_M_initialize_mapEm();
}

