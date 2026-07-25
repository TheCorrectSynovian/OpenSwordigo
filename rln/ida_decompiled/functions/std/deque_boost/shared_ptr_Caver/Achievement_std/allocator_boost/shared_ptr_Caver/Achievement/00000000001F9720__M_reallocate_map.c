/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9720
 * Mangled: ._ZNSt5dequeIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EE17_M_reallocate_mapEmb
 * Demangled: std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_reallocate_map(ulong,bool)
 *
 * Callers: 1
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Callees: 1
 *   0x0000000000380BE4  std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_reallocate_map(ulong,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9728 string=0x00000000001F972C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::deque<boost::shared_ptr<Caver::Achievement>>::_M_reallocate_map()
{
  return _ZNSt5dequeIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EE17_M_reallocate_mapEmb();
}

