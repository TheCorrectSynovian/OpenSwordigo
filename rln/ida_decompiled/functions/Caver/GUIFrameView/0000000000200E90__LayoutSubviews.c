/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200E90
 * Mangled: ._ZN5Caver12GUIFrameView14LayoutSubviewsEv
 * Demangled: Caver::GUIFrameView::LayoutSubviews(void)
 *
 * Callers: 5
 *   0x00000000003748B0  Caver::AchievementNotificationView::LayoutSubviews(void)
 *   0x000000000039CB54  Caver::PlayerProfile::equippedArmorName(void)
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x000000000043E760  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *   0x0000000000490088  Caver::GUIAlertView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x000000000049722C  Caver::GUIFrameView::LayoutSubviews(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200E98 string=0x0000000000200E9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIFrameView::LayoutSubviews(Caver::GUIFrameView *this)
{
  return _ZN5Caver12GUIFrameView14LayoutSubviewsEv(this);
}

