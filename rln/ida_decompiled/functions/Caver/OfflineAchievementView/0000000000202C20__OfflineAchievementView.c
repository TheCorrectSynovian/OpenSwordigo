/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202C20
 * Mangled: ._ZN5Caver22OfflineAchievementViewC2Ev
 * Demangled: Caver::OfflineAchievementView::OfflineAchievementView(void)
 *
 * Callers: 1
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202C28 string=0x0000000000202C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OfflineAchievementView::OfflineAchievementView(Caver::OfflineAchievementView *this)
{
  return _ZN5Caver22OfflineAchievementViewC2Ev(this);
}

