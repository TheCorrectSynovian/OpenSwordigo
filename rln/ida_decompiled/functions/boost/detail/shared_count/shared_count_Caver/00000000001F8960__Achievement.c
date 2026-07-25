/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8960
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver11AchievementEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Achievement>(Caver::Achievement *)
 *
 * Callers: 1
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *
 * Callees: 1
 *   0x000000000037F650  boost::detail::shared_count::shared_count<Caver::Achievement>(Caver::Achievement *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8968 string=0x00000000001F896C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Achievement>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver11AchievementEEEPT_();
}

