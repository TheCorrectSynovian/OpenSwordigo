/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002028A0
 * Mangled: ._ZN5Caver11AchievementC2ERKSsS2_S2_iS2_i
 * Demangled: Caver::Achievement::Achievement(std::string const&,std::string const&,std::string const&,int,std::string const&,int)
 *
 * Callers: 1
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *
 * Callees: 1
 *   0x000000000037CE74  Caver::Achievement::Achievement(std::string const&,std::string const&,std::string const&,int,std::string const&,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002028A8 string=0x00000000002028AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Achievement::Achievement()
{
  return _ZN5Caver11AchievementC2ERKSsS2_S2_iS2_i();
}

