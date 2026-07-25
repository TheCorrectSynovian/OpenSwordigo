/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAD80
 * Mangled: ._ZN5Caver23OfflineAchievementsViewC2ERKN5boost10shared_ptrINS_13PlayerProfileEEE
 * Demangled: Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callers: 1
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAD88 string=0x00000000001FAD8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::OfflineAchievementsView::OfflineAchievementsView()
{
  return _ZN5Caver23OfflineAchievementsViewC2ERKN5boost10shared_ptrINS_13PlayerProfileEEE();
}

