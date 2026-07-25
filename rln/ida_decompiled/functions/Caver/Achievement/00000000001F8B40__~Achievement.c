/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B40
 * Mangled: ._ZN5Caver11AchievementD2Ev
 * Demangled: Caver::Achievement::~Achievement()
 *
 * Callers: 3
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *   0x000000000037F650  boost::detail::shared_count::shared_count<Caver::Achievement>(Caver::Achievement *)
 *   0x000000000037F6E4  boost::detail::sp_counted_impl_p<Caver::Achievement>::dispose(void)
 *
 * Callees: 1
 *   0x000000000037D04C  Caver::Achievement::~Achievement()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8B48 string=0x00000000001F8B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Achievement::~Achievement(Caver::Achievement *this)
{
  _ZN5Caver11AchievementD2Ev(this);
}

