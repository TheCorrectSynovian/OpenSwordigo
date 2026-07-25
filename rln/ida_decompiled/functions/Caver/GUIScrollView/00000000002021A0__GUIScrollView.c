/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002021A0
 * Mangled: ._ZN5Caver13GUIScrollViewC2Ev
 * Demangled: Caver::GUIScrollView::GUIScrollView(void)
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
 *   0x000000000049B5CC  Caver::GUIScrollView::GUIScrollView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002021A8 string=0x00000000002021AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIScrollView::GUIScrollView(Caver::GUIScrollView *this)
{
  return _ZN5Caver13GUIScrollViewC2Ev(this);
}

