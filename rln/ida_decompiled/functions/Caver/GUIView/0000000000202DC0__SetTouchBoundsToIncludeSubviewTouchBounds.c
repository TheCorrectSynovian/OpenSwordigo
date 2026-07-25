/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202DC0
 * Mangled: ._ZN5Caver7GUIView41SetTouchBoundsToIncludeSubviewTouchBoundsEv
 * Demangled: Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(void)
 *
 * Callers: 6
 *   0x000000000039CB54  Caver::PlayerProfile::equippedArmorName(void)
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *   0x00000000004070E4  Caver::GuideToggleView::LayoutSubviews(void)
 *   0x0000000000441904  Caver::TabbedMenuView::UpdateContentLayout(void)
 *   0x000000000049008C  Caver::GUIAlertView::UpdateLayout(void)
 *
 * Callees: 1
 *   0x00000000004A129C  Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202DC8 string=0x0000000000202DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(Caver::GUIView *this)
{
  return _ZN5Caver7GUIView41SetTouchBoundsToIncludeSubviewTouchBoundsEv(this);
}

