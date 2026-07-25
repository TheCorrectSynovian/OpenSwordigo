/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7690
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13GUIScrollViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(Caver::GUIScrollView *)
 *
 * Callers: 6
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Callees: 1
 *   0x0000000000384E5C  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(Caver::GUIScrollView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7698 string=0x00000000001F769C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>()
{
  return _ZN5boost10shared_ptrIN5Caver13GUIScrollViewEEC2IS2_EEPT_();
}

