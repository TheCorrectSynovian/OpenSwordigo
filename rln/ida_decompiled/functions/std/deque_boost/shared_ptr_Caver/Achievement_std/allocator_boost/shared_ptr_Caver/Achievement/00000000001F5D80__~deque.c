/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5D80
 * Mangled: ._ZNSt5dequeIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EED2Ev
 * Demangled: std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::~deque()
 *
 * Callers: 1
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *
 * Callees: 1
 *   0x000000000037D7FC  std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::~deque()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5D88 string=0x00000000001F5D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::deque<boost::shared_ptr<Caver::Achievement>>::~deque()
{
  return _ZNSt5dequeIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EED2Ev();
}

